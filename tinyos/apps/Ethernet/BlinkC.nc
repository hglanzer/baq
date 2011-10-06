// $Id: BlinkC.nc,v 1.6 2010-06-29 22:07:16 scipio Exp $

/*									tab:4
 *
 **/

#include "Platform.h"
#include "LCD2x16.h"

#define	STATUS	0
#define DATA	1

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

	uses interface UDP;
	uses interface LCD2x16;
	uses interface Timer<TMilli> as Timer0;
//	uses interface MMC;
}
implementation
{
	static volatile uint8_t count = 0, count2 = 2, *ptr, state = 0, pcount=0, mode, dir = 0;
	char buf[10]="0000000000", uartBuf[11]="\0\0\0\0\0\0\0\0\0\0\0";
	volatile uint32_t count3 = 0;
	static volatile bool link = TRUE;

	void printGLCD()
	{
	}
	
	event void Boot.booted()
	{
		count = 0;
		call GLCD.initLCD(0x00);
		call LCD2x16.init(CURSOR_OFF);
		call LCD2x16.clearDisplay();
		call UDP.initStack();
		call Timer0.startPeriodic(1000);
}

/*
////////////////////////////	MMC	///////////////////////////

	event void MMC.initDone()
	{
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
	}

	event void MMC.error(uint8_t *errStr)
	{
		call GLCD.startWriteString(errStr, 0, 2);
	}
*/

////////////////////////////	GLCD	///////////////////////////

	event void GLCD.initDone()
	{
//		call MMC.init();
//		call GLCD.startClearScreen(count);
	}

	event void GLCD.tsPressed()
	{
		call GLCD.getXY();
	}

	event void GLCD.calibrated()
	{
	}

	event void GLCD.stringWritten()
	{
		if(mode == STATUS)
		{
			switch(pcount)
			{
				case 0:
					call GLCD.startWriteString("Snd\0", 108, 1);
					pcount++;
				break;
				case 1:
					call GLCD.startWriteString("Clr\0", 108, 6);
					pcount++;
				break;
				case 2:
					if(link == TRUE)
						call GLCD.startWriteString((char *)"Link UP  \0", 0, 7);
					else
						call GLCD.startWriteString((char *)"Link DOWN\0", 0, 7);
					pcount++;
				break;
				case 3:
					call GLCD.startWriteRectangle(105, 0, 23, 23);
					pcount++;
				break;
			}
		}
	}

	event void GLCD.screenCleared(void)
	{
		pcount = 0;
		mode = STATUS;
		call GLCD.startWriteString("bigAVR6 Demo\0", 0, 0);
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
		switch(pcount)
		{
			case 4:
				call GLCD.startWriteRectangle(105, 41, 23, 23);
				pcount++;
			break;
		}
		call GLCD.isPressed(TRUE);
	}

	event void GLCD.lineWritten()
	{

	}
	
	event void GLCD.xyReady(uint16_t x, uint16_t y)
	{
		uint8_t dest[4];
		if((x<128) && (y < 64))
		{
			if((x>104) && (y>40))
			{
				dest[0] = 192;
				dest[1] = 168;
				dest[2] = 1;
				dest[3] = 100;
				call UDP.sendData((uint16_t *)"bigAVR6 UDP demonstration", &dest[0], 1300, 1024, sizeof("bigAVR6 UDP demonstration"));
			}
			else if((x>104) && ((y<40) && (y > 25)))
			{
				dest[0] = 192;
				dest[1] = 168;
				dest[2] = 1;
				dest[3] = 200;
				call UDP.sendData((uint16_t *)"another host", &dest[0], 1300, 1024, sizeof("another host"));
			}
			else if((x>104) && (y<25))
			{
				call GLCD.startClearScreen(0x00);
				count2 = 3;
			}
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
		}
		else
			call GLCD.isPressed(TRUE);
	}
////////////////////////////	UDP	///////////////////////////

	event void UDP.initDone(bool linkStatus)
	{
		mode = STATUS;
		link = linkStatus;
		call GLCD.startWriteString("bigAVR6 Demo\0", 0, 0);
		call GLCD.isPressed(TRUE);
	}
	
	event void UDP.sendFailed()
	{
		call GLCD.startWriteString((char *)"Failed  \0", 0, 6);
		call GLCD.isPressed(TRUE);
	}

	event void UDP.sendDone()
	{
		call GLCD.isPressed(TRUE);
	}

	event void UDP.hwInterrupt(uint8_t hwCode)
	{
		if(hwCode == TRUE)
		{
			link = TRUE;
			call GLCD.startWriteString((char *)"Link UP  \0", 0, 7);
		}
		if(hwCode == FALSE)
		{
			link = FALSE;
			call GLCD.startWriteString((char *)"Link DOWN\0", 0, 7);
		}
		
	}

	event void UDP.gotARP(uint16_t len, uint8_t *data)
	{
		if(data[7] == 0x02)
			call GLCD.startWriteString((char *)"ARP REPLY\0", 0, 4);
		else
			call GLCD.startWriteString((char *)"ARP\0", 0, 4);
	}

	event void UDP.gotDatagram(uint16_t len, uint8_t *dataPtr)
	{
		mode = DATA;
		dataPtr[len-1] = '\0';
		//dataPtr[5] = '\0';
		call GLCD.startWriteString((char *)dataPtr, 0, count2);
		count2++;
		if(count2 > 5)
			count2 = 2;
	}

////////////////////////////	LCD	///////////////////////////

	event void LCD2x16.stringWritten()
	{
	}
	event void LCD2x16.displayCleared()
	{
		call LCD2x16.sendString("TU WIEN", 7, 0, count);
		if(dir == 0)
			count++;
		else
			count = count - 1;

		if(count >= 9)
			dir = 1;
		if(count == 0)
			dir = 0;
	}

////////////////////////////	LCD	///////////////////////////
	event void Timer0.fired()
	{
		call LCD2x16.clearDisplay();
		//call GLCD.isPressed(TRUE);
	}
}
