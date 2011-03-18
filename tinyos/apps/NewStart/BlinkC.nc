// $Id: BlinkC.nc,v 1.6 2010-06-29 22:07:16 scipio Exp $

/*									tab:4
 *
 **/

//#include "Timer.h"
#include "LCD128x64.h"
#include "LCD2x16.h"

enum{
	right	= 	0,
	down	=	1,
	left	=	2,
	up	=	3,
};

module BlinkC @safe()
{
	uses interface Boot;
	uses interface LCD128x64;
	uses interface Timer<TMilli> as Timer0;

	uses interface TouchScreen;
	

}
implementation
{
	volatile uint8_t count = 0, x_true=0, tmp = 0;
	char buf[10]="0000000000";
	
	event void TouchScreen.xyReady(uint8_t x, uint8_t y)
	{
/*
*/
		tmp = (x % 10);
		buf[3] = tmp + 0x30;
		x = (x - tmp) / 10;

		tmp = (x % 10);
		buf[2] = tmp + 0x30;
		x = (x - tmp) / 10;

		tmp = (x % 10);
		buf[1] = tmp + 0x30;
		x = (x - tmp) / 10;

		tmp = (x % 10);
		buf[0] = tmp + 0x30;
		buf[4] = '/';
		
		tmp = (y % 10);
		buf[8] = tmp + 0x30;
		y = (y - tmp) / 10;

		tmp = (y % 10);
		buf[7] = tmp + 0x30;
		y = (y - tmp) / 10;

		tmp = (y % 10);
		buf[6] = tmp + 0x30;
		y = (y - tmp) / 10;

		tmp = (y % 10);
		buf[5] = tmp + 0x30;
		buf[9] = '\0';
	
		call LCD128x64.startWriteString(buf, 45, 40);
//		call LCD128x64.startClearScreen(0x00);
//		call LCD128x64.startWriteBar(10, 10, 15, x-10);
//		call LCD128x64.startWriteRectangle(10, 10, 10, x-10);

/*
		if((x>110)&&(y>55) )
		{
			call LCD128x64.startClearScreen(0x00);
			call LCD128x64.startWriteRectangle(120, 0, 7, 7);
		}
		else
			call LCD128x64.startWriteRectangle(x, 63-y,1, 1);
*/		

		call TouchScreen.isPressed(TRUE);
	}

	event void Timer0.fired()
	{
		call LCD128x64.startClearScreen(0x00);
	}

	event void Boot.booted()
	{
		call LCD128x64.initLCD(0x01);
	}
	event void LCD128x64.initDone()
	{
//		call TouchScreen.calibrateTouchScreen();
//		call Timer0.startPeriodic(25);
//		call LCD128x64.startWriteRectangle(0, 0, 28, 4);
//		call LCD128x64.startWriteBar(0, 8, 100, 40);
		call TouchScreen.isPressed(TRUE);
	}

	event void TouchScreen.tsPressed()
	{
		call TouchScreen.getXY();
	}

	event void TouchScreen.calibrated()
	{
//		call LCD128x64.startClearScreen(0x00);

//		call Timer0.startPeriodic(50);
//		call LCD128x64.startWriteCircle(30, 30, 10);
//		call LCD128x64.startWriteLine(0, 0, 45, 50);
//		call LCD128x64.startWriteRectangle(40, 55, 55, 62);
	}

	event void LCD128x64.screenCleared(void)
	{
	}

	event void LCD128x64.barWritten()
	{

	}
	event void LCD128x64.circleWritten()
	{

	}
	event void LCD128x64.rectangleWritten()
	{

	}
	event void LCD128x64.stringWritten()
	{

	}
	event void LCD128x64.lineWritten()
	{

	}
}

