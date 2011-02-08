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
	
	uses interface Read<uint16_t>;

	provides interface Atm128AdcConfig;
//	provides interface Atm128AdcConfig[uint8_t client];

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

	async command uint8_t Atm128AdcConfig.getRefVoltage(void)
	{
		return 1;
	}
	async command uint8_t Atm128AdcConfig.getChannel()
	{
		if(x_true == 1)
			return ATM128_ADC_SNGL_ADC0;
		else
			return ATM128_ADC_SNGL_ADC1;
	}
	async command uint8_t Atm128AdcConfig.getPrescaler()
	{
		return ATM128_ADC_PRESCALE_128;
	}
	
	event void Timer0.fired()
	{
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
	}

	
	event void Read.readDone(error_t err, uint16_t val)
	{
		xy_data = val;
		post calc_xy();
		post update_display();
	}

	event void Boot.booted()
	{
		DDRG |= ((1<<3) | (1<<4));
		PORTG = 0x00;
		call LCD128x64.initLCD(0x01);
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

