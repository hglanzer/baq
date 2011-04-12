// $Id: BlinkC.nc,v 1.6 2010-06-29 22:07:16 scipio Exp $

/*									tab:4
 *
	rotating line - debugging writeLine()
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

module RadarC @safe()
{
	uses interface Boot;
	uses interface LCD128x64;
	uses interface Timer<TMilli> as Timer0;
}
implementation
{
	volatile uint8_t count = 0, x_true=0, xc = 0, yc = 0, movement = right;
	char buf[10]="0000000000";
	
	event void Timer0.fired()
	{

		switch(movement)
		{
			case right:
				if(xc < 127)
					xc++;
				else
					movement = down;
			break;
			
			case down:
				if(yc < 63)
					yc++;
				else
					movement = left;
			break;

			case left:
				if(xc >= 1)
					xc = xc-1;
				else
					movement = up;
		
			break;
			
			case up:
				if(yc >= 1)
					yc = yc - 1;
				else
				{
					movement = right;
					call LCD128x64.startClearScreen(0x00);
				}

			break;

			default:
			break;

		}
		call LCD128x64.startClearScreen(0x00);
	}

	event void Boot.booted()
	{
		call LCD128x64.initLCD(0x00);
	}
	event void LCD128x64.initDone()
	{
		call Timer0.startPeriodic(100);

		xc=0;
		yc=0;
		movement = right;
	}

	event void LCD128x64.screenCleared(void)
	{
		call LCD128x64.startWriteLine(64, 32, xc, yc);
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

