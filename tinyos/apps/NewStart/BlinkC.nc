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
	
//	uses interface Read<uint16_t>;
//	provides interface Atm128AdcConfig;

}
implementation
{
	volatile uint8_t count = 0, x_true=0;
	char buf[10]="2131231";
	
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
		buf[4] = '\0';
		
		call LCD128x64.startWriteString(buf, 45, 20);

/*
		buf[0] = '0';
		buf[1] = '0';
		buf[2] = '0';
		buf[3] = '0';

		tmp = (y % 10);
		buf[3] = tmp + 0x30;
		y = (y - tmp) / 10;

		tmp = (y % 10);
		buf[2] = tmp + 0x30;
		y = (y - tmp) / 10;

		tmp = (y % 10);
		buf[1] = tmp + 0x30;
		y = (y - tmp) / 10;

		tmp = (y % 10);
		buf[0] = tmp + 0x30;
		buf[4] = '\0';
		
		call LCD128x64.startWriteString(buf, 45, 30);
*/
	}

	task void update_display()
	{
		atomic
		{	
			if(x_true == 1)
			{
				count++;

				if(count == 2)
				{
					call LCD128x64.startWriteString(buf, 45, 20);
					x_true = 0;
					count = 0;
				}
			}
			else
			{
				count++;
				if(count == 2)
				{
					call LCD128x64.startWriteString(buf, 45, 30);
					x_true = 1;
					count = 0;
				}
			}
		}
	}

	event void Timer0.fired()
	{
		call TouchScreen.getXY();
	
/*
		if(x_true == 1)	
		{
			PORTG |= (1<<3);
			PORTG &= ~(1<<4);
		}
		else
		{
			PORTG |= (1<<4);
			PORTG &= ~(1<<3);
		}
		call Read.read();
*/
	}

/*	
	event void Read.readDone(error_t err, uint16_t val)
	{
		xy_data = val;
		post calc_xy();
		post update_display();
	}
*/

	event void Boot.booted()
	{
		call LCD128x64.initLCD(0x00);
	}
	event void LCD128x64.initDone()
	{
		call Timer0.startPeriodic(100);
	
		call LCD128x64.startWriteString("X/Y :", 20, 20);
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
}
