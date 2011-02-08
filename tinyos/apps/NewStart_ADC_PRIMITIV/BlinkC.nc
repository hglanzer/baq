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
	uses interface Resource;
	uses interface LCD128x64;
	uses interface Atm128AdcSingle;
	uses interface Read<uint16_t>;
	//uses interface TouchScreen;
	uses interface Timer<TMilli> as Timer0;
}
implementation
{
	volatile uint8_t count = 0, x_true=0;
	uint16_t xy_data;
	char buf[10]="2131231";

	task void calc_xy()
	{
		volatile uint8_t tmp = 0;
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
	}
	}

	task void update_display()
	{
		atomic
		{	
			if(x_true)
			{
				call LCD128x64.startWriteString(buf, 45, 20);
				x_true = 0;
			}
			else
			{
				call LCD128x64.startWriteString(buf, 45, 30);
				x_true = 1;
			}
		}
	}

	event void Timer0.fired()
	{
		atomic
		{	
			if(x_true)
			{
				PORTG |= (1<<4);
				PORTG &= ~(1<<3);

for(count = 0 ; count < 255; count++)
{
	;;
}
	
				call Atm128AdcSingle.getData(1, 1, 0, 5);
			}
			else
			{
				PORTG |= (1<<3);
				PORTG &= ~(1<<4);
for(count = 0 ; count < 255; count++)
{
	;;
}
				call Atm128AdcSingle.getData(0, 1, 0, 5);
			}
		}
	}
	event void Resource.granted()
	{

		call Read.release();
	}
	event void Read.readDone(error_t err, uint16_t val)
	{
	}
	event void Boot.booted()
	{
		DDRG |= ((1<<3) | (1<<4));
		PORTG = 0x00;
		call LCD128x64.initLCD(0x01);
	}
	async event void Atm128AdcSingle.dataReady(uint16_t data, bool precise)
	{
		atomic
		{
			xy_data = data;
			post calc_xy();
			post update_display();
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

