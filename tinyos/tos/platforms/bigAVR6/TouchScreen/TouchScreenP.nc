/*
	harald glanzer, tu wien
	TouchScreen - Interfaceimplementierung
	
	touchscreen - funktionalität über aufgeklebte folie mit veränderlichen	widerständen
	x - wert über ADC / kanal 0
	y - wert über ADC / kanal 1

	Mittelwertbildung über 
			#define MEDIAN
	mittels maskierung der vom adc gelieferten x/y - werte

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
	volatile uint8_t count = 0, channel;
	static volatile uint8_t state;
	volatile uint16_t x, y, x_max, x_min, y_max, y_min;

	command void TouchScreen.getXY()
	{
		DDRG |= ((1<<3) | (1<<4));
		DRIVE_A;
		
		atomic
		{
			x = 0;
			y = 0;
			count = 0;
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
		switch(state)
		{
		case INIT:
			call TouchScreen.getXY();
			break;
		default:
		}
		call TouchScreen.getXY();
	}
	event void LCD128x64.initDone()
	{

	}
	event void LCD128x64.circleWritten()
	{

	}
	
	event void Read.readDone(error_t err, uint16_t val)
	{	
		atomic
		{
			if(err == SUCCESS)
			{
			//	dummy-read x finished:
			if(count == 0)	
			{
				count++;
				call Read.read();
			}
			// this is the actual x - value
			else if(count == 1)
			{	
				x = val & MEDIAN;
				count++;
				DRIVE_B;
				channel = ATM128_ADC_SNGL_ADC1;
				call Read.read();
			}
			//	dummy-read y finished:
			else if(count == 1)
			{	
				count++;
				call Read.read();
			}
			else
			{
				y = val & MEDIAN;
				if(state == CALIBRATED)
				{
					signal TouchScreen.xyReady(x, y);		
				}
				else
				{
					if(state == INIT)
					{
						// 
						if((x>80) && (y>80))
						{
							state = GOT_FIRST_POINT;
							x_min = x;
							y_min = y;
							call LCD128x64.startClearScreen(0x00);
							call LCD128x64.startWriteString("Press Right/Top", 38, 0);
							call TouchScreen.getXY();
						}
						else
						{
							call TouchScreen.getXY();
						}
					}
					if(state == GOT_FIRST_POINT)
					{
						// 2. calibrierungspunkt RECHTS/OBEN
						if((x>80) && (y>80))
						{
							if(x > (x_min + 0x20) && y > (y_min+0x20))
							{
								state = GOT_OFFSETS;
								x_max = x;
								y_max = y;
							}
						}
						call TouchScreen.getXY();
					}
					if(state == GOT_OFFSETS)
					{
						call LCD128x64.startWriteString("Calibrated    ", 10, 30);
						state = CALIBRATED;
						signal TouchScreen.calibrated();					
					}
				}
			}
			}
		}
	}

	command void TouchScreen.calibrateTouchScreen()
	{
		call LCD128x64.startWriteString("Press Left/Bottom", 0, 60);
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
