#include "GLCD.h"

module GLCDP
{
        provides interface GLCD;

	uses interface TouchScreen;
	uses interface LCD128x64;
}

implementation
{
	static volatile uint8_t stateTS = UNCALIBRATED, stateGLCD = 0;
	static volatile uint16_t x_max=X_MAX, y_max=Y_MAX, x_min=X_MIN, y_min=Y_MIN;


	/*	########################################################
			LOCAL - functions - START
		########################################################	*/


	/*
		convert values from adc(x/y-channel) to pixel-value
			 range: x-channel: 0 - 123
				y-channel: 0 - 63
	*/
	void calcXY(uint16_t x_raw, uint16_t y_raw)
	{
		float x_tmp = 0, y_tmp = 0;
		
//		if((x_raw < x_max) && (x_raw > x_min) && (y_raw < y_max) && (y_raw > y_min))
//		{
	        
			// offset entfernen
			x_raw = x_raw - X_MIN;
			y_raw = y_raw - Y_MIN;
		
			// skalieren
			x_tmp = ((float)x_raw / (float)X_DISTANCE);
			y_tmp = ((float)y_raw / (float)Y_DISTANCE);
			x_tmp = x_tmp * 128;
			y_tmp = y_tmp * 64;
			signal GLCD.xyReady(x_tmp, y_tmp);
//		}
//		else
//		{
  //                      signal GLCD.xyReady(200,200);
//		}
        }


	/*	########################################################
				TOUCHSCREEN - interfacefunctions
		########################################################	*/

	/*
		turn on / off press-detection
		logic is implemented in corresponding interface in TouchScreen
	*/
	command void GLCD.isPressed(bool on)
	{
		call TouchScreen.isPressed(on);
	}

	/*
		returns SUCCESS if calibration is possible now
		returns FAIL if calibration is in progress
	*/
	command error_t GLCD.calibrateTouchScreen()
	{
		if((stateTS == CALIBRATION_IN_PROGRESS_LEFT_BOTTOM) || (stateTS == CALIBRATION_IN_PROGRESS_RIGHT_TOP))
		{
			return FAIL;
		}
		else
		{
			stateTS = CALIBRATION_IN_PROGRESS_LEFT_BOTTOM;

			call LCD128x64.startClearScreen(0x00);
			call LCD128x64.startWriteString("Press Left/Bottom", 0, 60);
			call TouchScreen.getXY();
			return SUCCESS;
		}
	}

	command void GLCD.getXY()
	{
		call TouchScreen.getXY();
	}


	/*	#########################################################
				TOUCHSCREEN - events
		#########################################################	*/

	event void TouchScreen.xyReady(uint16_t x, uint16_t y)
	{
		/*
			calibration is in progress, and we just got the first xy-pair.
			save them and proceed to next step...
		*/
		if(stateTS == CALIBRATION_IN_PROGRESS_LEFT_BOTTOM)
		{
			x_min = x;
			y_min = y;
			stateTS = CALIBRATION_IN_PROGRESS_RIGHT_TOP;
			call LCD128x64.startClearScreen(0x00);
			call LCD128x64.startWriteString("Press Right/Top", 39, 0);
			call TouchScreen.getXY();
		}
	
		/*
			calibration is in progress, and we just got the second xy-pair.
			save them if valid and proceed, otherwise request new values
		*/
		else if(stateTS == CALIBRATION_IN_PROGRESS_RIGHT_TOP)
		{
			if((x > (x_min + X_CALIB_DISTANCE) ) && (y > (y_min + Y_CALIB_DISTANCE)))
			{
				x_max = x;
				y_max = y;
				stateTS = CALIBRATION_DONE;
				call LCD128x64.startClearScreen(0x00);
				call LCD128x64.startWriteString("Calibrated", 30, 32);
				signal GLCD.calibrated();
			}
			else
			{
				call TouchScreen.getXY();
			}
		}
		/*
			getXY was requested by user-application, so calculate the xy-pixel-values out of rawdata
			and signal xyReady afterwards. done in localfunction calcXY():
		*/
		else
		{
		calcXY(x, y);	
//	signal GLCD.xyReady(x, y);
		}
	}

	/*
		'connect' the lowlevel-signal tsPressed from TouchScreen to upper instance
	*/
	event void TouchScreen.tsPressed()
	{
		signal GLCD.tsPressed();
	}


	/*	#########################################################
				LCD128x64 - interfacefunctions
		#########################################################	*/

	command void GLCD.initLCD(uint8_t pattern)
	{
		call LCD128x64.initLCD(pattern);
	}

	command void GLCD.writeByte(uint8_t x, uint8_t y, uint8_t data)
	{
		call LCD128x64.writeByte(x, y, data);
	}

	command void GLCD.writePixel(uint8_t x, uint8_t y, uint8_t on)
	{
		call LCD128x64.writePixel(x, y, on);
	}

	command void GLCD.setPixel(uint8_t x, uint8_t y)
	{
		call LCD128x64.setPixel(x, y);
	}
	
	command error_t GLCD.startWriteBar(uint8_t x, uint8_t y, uint8_t length, uint8_t width)
	{
		if( (stateGLCD & BUSY_BAR) == 1)
		{
			return FAIL;
		}
		else if((width == 0) || (length==0) || ((x+length) > 128) || ((y+width) > 64))
		{
			return FAIL;
		}
		else
		{
			stateGLCD = stateGLCD | BUSY_BAR;
			call LCD128x64.startWriteBar(x, y, length, width);
			return SUCCESS;
		}
	}

	command error_t GLCD.startWriteRectangle(uint8_t x, uint8_t y, uint8_t a, uint8_t b)
	{
		if( (stateGLCD & BUSY_RECT) == 1)
		{
			return FAIL;
		}
		else if(((x+a) > 128) || ((y+b) > 64))
		{
			return FAIL;
		}
		else
		{
			stateGLCD = stateGLCD | BUSY_RECT;
			call LCD128x64.startWriteRectangle(x, y, a, b);
			return SUCCESS;
		}
	}

	command error_t GLCD.startWriteCircle(uint8_t xcenter, uint8_t ycenter, uint8_t radius)
	{
		if( (stateGLCD & BUSY_CIRCLE) == 1)
		{
			return FAIL;
		}
		else
		{
			stateGLCD = stateGLCD | BUSY_CIRCLE;
			call LCD128x64.startWriteCircle(xcenter, ycenter, radius);
			return SUCCESS;
		}

	}

	command error_t GLCD.startWriteString(char *data, uint8_t x, uint8_t y)
	{
		if( (stateGLCD & BUSY_STRING ) == 1)
		{
			return FAIL;
		}
		else
		{
			stateGLCD = stateGLCD | BUSY_STRING;
			call LCD128x64.startWriteString(data, x, y);
			return SUCCESS;
		}
	}

	command error_t GLCD.startWriteLine(uint8_t x, uint8_t y, uint8_t xEnd, uint8_t yEnd)
	{
		if( (stateGLCD & BUSY_LINE ) == 1)
		{
			return FAIL;
		}
		else if(( x>128 )||( y>64 )||( xEnd>128 )||( yEnd>64 ))
		{
			return FAIL;
		}
		else
		{
			stateGLCD = stateGLCD | BUSY_LINE;
			call LCD128x64.startWriteLine(x, y, xEnd, yEnd);
			return SUCCESS;
		}
	}

	command error_t GLCD.startClearScreen(uint8_t pattern)
	{
		if( (stateGLCD & BUSY_CLEAR ) == 1)
		{
			return FAIL;
		}
		else
		{
			stateGLCD = stateGLCD | BUSY_CLEAR;
			call LCD128x64.startClearScreen(pattern);
			return SUCCESS;
		}
	}
	
	/*	#########################################################
				LCD128x64 - events - START
		#########################################################	*/

	/*
		'connect' lowlevel-signals from LCD128x64 to upper instance GLCD
	*/
	event void LCD128x64.initDone(void)
	{
		signal GLCD.initDone();
	}

	event void LCD128x64.circleWritten(void)
	{
		stateGLCD = stateGLCD & ~(BUSY_CIRCLE);
		signal GLCD.circleWritten();
	}

	event void LCD128x64.rectangleWritten(void)
	{
		stateGLCD = stateGLCD & ~(BUSY_RECT);
		signal GLCD.rectangleWritten();
	}

	event void LCD128x64.lineWritten(void)
	{
		stateGLCD = stateGLCD & ~(BUSY_LINE);
		signal GLCD.lineWritten();
	}

	event void LCD128x64.barWritten(void)
	{
		stateGLCD = stateGLCD & ~(BUSY_BAR);
		signal GLCD.barWritten();
	}

	/*
		2 cases when this signal occurs:
			1. user requested LCD128x64.startWriteString() --> report to upper instance GLCD
			2. signal comes from calibration-statusstrings --> ignore this signal
	*/
	event void LCD128x64.stringWritten(void)
	{
		stateGLCD = stateGLCD & ~(BUSY_STRING);
		if((stateGLCD == CALIBRATION_IN_PROGRESS_LEFT_BOTTOM) || (stateGLCD == CALIBRATION_IN_PROGRESS_RIGHT_TOP))
		{
			// ignore this signal - doesnt belong to user-application!
		}
		else
		{
			signal GLCD.stringWritten();
		}
	}
	
	/*
		same as LCD128x64.stringWritten
	*/
	event void LCD128x64.screenCleared(void)
	{
		stateGLCD = stateGLCD & ~(BUSY_CLEAR);
		if((stateGLCD == CALIBRATION_IN_PROGRESS_LEFT_BOTTOM) || (stateGLCD == CALIBRATION_IN_PROGRESS_RIGHT_TOP))
		{
			// ignore this signal - doesnt belong to user-application!
		}
		else
		{
			stateGLCD = stateGLCD & ~(BUSY_CLEAR);
			signal GLCD.screenCleared();
		}
	}
}
