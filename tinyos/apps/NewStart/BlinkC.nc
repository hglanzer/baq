// $Id: BlinkC.nc,v 1.6 2010-06-29 22:07:16 scipio Exp $

/*									tab:4
 * Copyright (c) 2000-2005 The Regents of the University  of California.  
 *
 **/

//#include "Timer.h"
#include "LCD128x64.h"
#include "LCD2x16.h"

module BlinkC @safe()
{
	uses interface Boot;
	uses interface LCD128x64;
	uses interface Timer<TMilli> as Timer0;

	uses interface TouchScreen;
	

}
implementation
{
	volatile uint8_t count = 0, x_true=0;
	char buf[10]="0000000000";
	
	event void TouchScreen.xyReady(uint16_t x, uint16_t y)
	{
		volatile uint8_t tmp = 0;

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
		
		call LCD128x64.startWriteString(buf, 45, 20);
	}

	task void update_display()
	{
	}

	event void Timer0.fired()
	{
		call TouchScreen.getXY();
	}

	event void Boot.booted()
	{
		call LCD128x64.initLCD(0x00);
	}
	event void LCD128x64.initDone()
	{
		call TouchScreen.calibrateTouchScreen();
	}

	event void TouchScreen.calibrated()
	{
		call Timer0.startPeriodic(100);
		call LCD128x64.startClearScreen(0x01);

		call LCD128x64.startWriteCircle(30, 30, 10);
		call LCD128x64.startWriteLine(0, 0, 45, 50);
		call LCD128x64.startWriteRectangle(40, 55, 55, 62);
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

