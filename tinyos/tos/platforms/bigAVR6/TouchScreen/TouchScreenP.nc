/*
	harald glanzer, tu wien
	TouchScreen - Interfaceimplementierung
	
	touchscreen - funktionalität über aufgeklebte folie mit veränderlichen	widerständen
	x - wert über ADC / kanal 0	PORTF_0
	y - wert über ADC / kanal 1	PORTF_1

	verwendet LCD128x64 - interfaces zum schreiben von statusmeldungen 
	aufs GLCD beim kalibieren des touchscreens

	verwendet Read-interface welches mit AdcReadClient wired wurde
	--> damit zugriff ueber arbiter
*/

#include "TouchScreen.h"

module TouchScreenP
{
	uses interface Read<uint16_t>;
	uses interface LCD128x64;

	provides interface Atm128AdcConfig;
	provides interface TouchScreen;
}

implementation
{
	volatile uint8_t channel;
	static volatile uint8_t state, calibrate = FALSE, pressDetect = FALSE;
	static volatile uint16_t x, y, x_max=X_MAX, x_min=X_MIN, y_max=Y_MAX, y_min=Y_MIN, t1, t2;

	task void checkTS()
	{
		call TouchScreen.getXY();
	}

	void calcXY(uint16_t x_raw, uint16_t y_raw)
	{
		float x_tmp = 0, y_tmp = 0;

		if((x_raw < x_max) && (x_raw > x_min) && (y_raw < y_max) && (y_raw > y_min))
		{
			// offset entfernen
			x_raw = x_raw - X_MIN;
			y_raw = y_raw - Y_MIN;
	
			// skalieren
			x_tmp = ((float)x_raw / (float)X_DISTANCE);
			y_tmp = ((float)y_raw / (float)Y_DISTANCE);
			x_tmp = x_tmp * 128;
			y_tmp = y_tmp * 64;
			signal TouchScreen.xyReady(x_tmp, y_tmp);
		}
		else
			signal TouchScreen.xyReady(200,200);
	}

	command void TouchScreen.getXY()
	{
		state = DUMMY_FIRST_X;
		DDRG |= (1<<4);		// ansteuerung...
		DDRG |= (1<<3);

		DDRF &= ~(1<<1);	// ADC - kanäle 
		DDRF &= ~(1<<0);

		UNREAD_X;
		UNREAD_Y;

		DRIVE_A;
		UNDRIVE_B;
		
		atomic
		{
			channel =  ATM128_ADC_SNGL_ADC0;
		}
		call Read.read();
	}

	event void LCD128x64.lineWritten()
	{

	}
	event void LCD128x64.rectangleWritten()
	{

	}
	event void LCD128x64.stringWritten()
	{
/*
		if(state == DUMMY_FIRST_X)
		{
			call TouchScreen.getXY();
		}

		if(state == CALIBRATED)
		{
			signal TouchScreen.calibrated();
		}
*/
	}
	event void LCD128x64.screenCleared()
	{

	}
	event void LCD128x64.initDone()
	{

	}
	event void LCD128x64.circleWritten()
	{

	}
	event void LCD128x64.barWritten()
	{

	}

	event void Read.readDone(error_t err, uint16_t val)
	{	
		atomic
		{
			if(err == SUCCESS)
			{
				switch(state)
				{
					// dummy-value for first x-value
					case DUMMY_FIRST_X:
						x = val;
						state = FIRST_X;
						call Read.read();
					break;
					
					// got the actual x-value
					case FIRST_X:
						if(val > X_TRESHOLD)
						{
							if(pressDetect == TRUE)
							{
								pressDetect = FALSE;
								signal TouchScreen.tsPressed();
							}
							else
							{
								if(calibrate == TRUE)
								{
									x_min = val;
								}
								else
								{
									x = val;
								}

								UNDRIVE_A;
								DRIVE_B;
								channel = ATM128_ADC_SNGL_ADC1;
								state = DUMMY_FIRST_Y;
								call Read.read();
							}
						}
						else
						{
							if(calibrate == TRUE)
							{
								call Read.read();
							}
							else if(pressDetect == TRUE)
							{
								post checkTS();
							}
							else
							{
						//		signal TouchScreen.xyReady(0, 0);	// TS not pressed
							}
						}
					break;
	
					// dummy-value for the first y-value
					case DUMMY_FIRST_Y:
						y = val;
						state = FIRST_Y;
						call Read.read();
					break;

					case FIRST_Y:
						if(val > Y_TRESHOLD)
						{
							if(calibrate == TRUE)
							{
								state = DUMMY_SECOND_X;
								DRIVE_A;
								UNDRIVE_B;
								channel = ATM128_ADC_SNGL_ADC0;
								y_min = val;
								call LCD128x64.startClearScreen(0x00);
		                                        	call LCD128x64.startWriteString("Press Right/Top", 38, 0);
								call Read.read();
							}
							else
							{
								y = val;
								calcXY(x, y);
							}
						}
						else
						{
							call Read.read();
						}
					break;
			
					// got first x/y - pair

					// dummy-value for second x-value
					case DUMMY_SECOND_X:
						x_max = val;
						state = SECOND_X;
						call Read.read();
					break;

					case SECOND_X:
						x_max=val;
						DRIVE_B;
						UNDRIVE_A;
						channel = ATM128_ADC_SNGL_ADC1;
						state = DUMMY_SECOND_Y;
						call Read.read();
					break;

					case DUMMY_SECOND_Y:
						state = SECOND_Y;
						call Read.read();
					break;

					case SECOND_Y:
						y_max = val;
						if((y_max > (y_min+DISTANCE)) && (x_max > (x_min+DISTANCE)) )
						{
							state = CALIBRATED;
							calibrate = FALSE;
							call LCD128x64.startClearScreen(0x00);
	                                        	call LCD128x64.startWriteString("CALIBRATION DONE", 12, 16);
							signal TouchScreen.calibrated();
						}
						else	// invalid left/upper point - repeat
						{	
							state = DUMMY_SECOND_X;
							DRIVE_A;
							UNDRIVE_B;
							channel = ATM128_ADC_SNGL_ADC0;
							call Read.read();
						}
					break;
				}
									
			}
		}
	}


	/*
		interface wird verwendet um press-detection EIN / AUSzuschalten
		wenn EIN --> setze globales flag und poste entspr. task
	*/
	command void TouchScreen.isPressed(bool on)
	{
		pressDetect = on;
		if(on == TRUE)
		{
			post checkTS();
		}
	}

	command void TouchScreen.calibrateTouchScreen()
	{
		calibrate = TRUE;
		call LCD128x64.startClearScreen(0x00);
		call LCD128x64.startWriteString("Press Left/Bottom", 0, 50);
		state = DUMMY_FIRST_X;
		call TouchScreen.getXY();
	}

	async command uint8_t Atm128AdcConfig.getRefVoltage(void)
	{
		return 1;
	}
	
	async command uint8_t Atm128AdcConfig.getChannel()
	{
		atomic
		{
			return channel;
		}
	}
	
	async command uint8_t Atm128AdcConfig.getPrescaler()
	{
		return ATM128_ADC_PRESCALE_128;
	}

}
