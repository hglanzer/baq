// $Id: BlinkC.nc,v 1.6 2010-06-29 22:07:16 scipio Exp $

/*									tab:4
 *
 **/

//#include "Timer.h"

enum{
	right	= 	0,
	down	=	1,
	left	=	2,
	up	=	3,
};

module BlinkC @safe()
{
	uses interface Boot;
	uses interface GLCD;
	uses interface Timer<TMilli> as Timer0;
	uses interface MMC;
}
implementation
{
	static volatile uint8_t count = 0, count2 = 0, x_true=0, tmp = 0, init = FALSE, *ptr, state = 0;
	char buf[10]="0000000000", uartBuf[11]="\0\0\0\0\0\0\0\0\0\0\0";

	task void testTask()
	{
	}
	event void Timer0.fired()
	{
		call GLCD.getXY();
	}
/*	
*/
	event void Boot.booted()
	{
		call GLCD.initLCD(0x0);
	}

	event void MMC.initDone()
	{
		call GLCD.isPressed(TRUE);
	}

	event void MMC.blockReady(uint8_t *data)
	{
		ptr = data;
		ptr[16] = '\0';
		ptr[32] = '\0';
		state = 1;
		call GLCD.startWriteString(data, 0, count);
		if(count < 7)
			count++;
		else
			count = 0;
/*
*/
	}

	event void MMC.error(uint8_t *errStr)
	{
		call GLCD.startWriteString(errStr, 0, 2);
	}

////////////////////////////	GLCD	///////////////////////////

	event void GLCD.initDone()
	{
		call MMC.init();
//		call Timer0.startPeriodic(1000);
//		call GLCD.startClearScreen(count);
//		call GLCD.isPressed(TRUE);
	}

	event void GLCD.tsPressed()
	{
		if(count == 8)
		{
			count=0;
			call GLCD.startClearScreen(count);
		}
		call GLCD.getXY();
//		call GLCD.startClearScreen(count);
	}

	event void GLCD.calibrated()
	{
//		call GLCD.isPressed(TRUE);
	}

	event void GLCD.stringWritten()
	{
		call GLCD.isPressed(TRUE);
	}

	event void GLCD.screenCleared(void)
	{
		call GLCD.isPressed(TRUE);
	}

	event void GLCD.barWritten()
	{
	}
	event void GLCD.circleWritten()
	{

	}
	event void GLCD.rectangleWritten()
	{
		call GLCD.isPressed(TRUE);
	}

	event void GLCD.lineWritten()
	{

	}

	event void GLCD.xyReady(uint16_t x, uint16_t y)
	//event void GLCD.xyReady(uint8_t x, uint8_t y)
	{
/*
*/		
		call MMC.readBlock(count2);
		count2++;
		if(x>64)
			count2++;
		else
		{	
			if(count2 > 0)
				count2 = count2-1;
		}
/*
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
	//	call GLCD.startClearScreen(0x00);
		call GLCD.startWriteString(buf, 45, 0);

		if(x<128 && y < 64)
			if((x>110) && (y>50))
				call GLCD.startClearScreen(0x00);
			else
			{
				if((call GLCD.startWriteRectangle(x, 64-y, 1, 1)) == SUCCESS)
				{

				}
				else
				{
					call GLCD.isPressed(TRUE);
				}
			}
		else
			call GLCD.isPressed(TRUE);
*/
	}
}
