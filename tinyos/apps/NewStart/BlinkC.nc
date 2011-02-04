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
	uses interface Atm128AdcSingle;
	uses interface TouchScreen;
	uses interface Timer<TMilli> as Timer0;
}
implementation
{
	volatile uint8_t count = 0, x_true=0;
	uint16_t xy_data;

	task void update_display()
	{
		volatile uint8_t tmp = 0;
		char buf[10]="2131231";
	atomic
	{	
		tmp = (xy_data % 10);
		buf[3] = tmp + 0x30;
		xy_data = (xy_data - tmp) / 10;

		tmp = (xy_data % 10);
		buf[2] = tmp + 0x30; 
		xy_data = (xy_data - tmp) / 10;

		tmp = (xy_data % 10);
		buf[1] = tmp + 0x30; 
		xy_data = (xy_data - tmp) / 10;

		tmp = (xy_data % 10);
		buf[0] = tmp + 0x30; 
		buf[4] = '\0';
		if(x_true)
		{
			PORTG |= (1<<4);
			PORTG &= ~(1<<3);
	
			call LCD128x64.startWriteString(buf, 45, 20);
			call Atm128AdcSingle.getData(1, 1, 0, 5);
			x_true = 0;
		}
		else
		{
			PORTG |= (1<<3);
			PORTG &= ~(1<<4);
			call LCD128x64.startWriteString(buf, 45, 30);
			call Atm128AdcSingle.getData(0, 1, 0, 5);
			x_true = 1;
		}
	}

	}

	event void Timer0.fired()
	{
		post update_display();
	}

	event void Boot.booted()
	{
		DDRG |= ((1<<3) | (1<<4));
		PORTG = 0x00;
		call LCD128x64.initLCD(0x00);
	}
	async event void Atm128AdcSingle.dataReady(uint16_t data, bool precise)
	{
	atomic
	{
		xy_data = data;
	}

	}
	event void LCD128x64.initDone()
	{
		call Timer0.startPeriodic(100);
	
		while((call LCD128x64.startWriteString("X:", 20, 20)) != SUCCESS)
			;
		while((call LCD128x64.startWriteString("Y:", 20, 30)) != SUCCESS)
			;
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

