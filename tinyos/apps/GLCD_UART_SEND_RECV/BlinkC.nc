// $Id: BlinkC.nc,v 1.6 2010-06-29 22:07:16 scipio Exp $

/*									tab:4
 *
 **/

//#include "Timer.h"
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
	uses interface GLCD;
	uses interface Timer<TMilli> as Timer0;
	uses interface bigAVR6UART0;
}
implementation
{
	static volatile uint8_t count = 0, count2 = 8, x_true=0, tmp = 0, x_lokal;
	char buf[10]="0000000000", uartBuf[11]="\0\0\0\0\0\0\0\0\0\0\0";

	task void testTask()
	{
//		post testTask();
	}
	
/*
*/
	//event void GLCD.xyReady(uint16_t x, uint16_t y)
	event void GLCD.xyReady(uint8_t x, uint8_t y)
	{
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
	
		call GLCD.startWriteString(buf, 45, 40);
		x_lokal = x;
		call GLCD.startClearScreen(0x00);;
	}

	event void Timer0.fired()
	{
//		call GLCD.startClearScreen(0x00);
//		call GLCD.getXY();

		if(count % 2 == 0)
		{
			call bigAVR6UART0.send((uint8_t *)"rulez\r\n", 7);
		}
		else
		{
			call bigAVR6UART0.send((uint8_t *)"powpow.at\r\n", 11);
		}
		count++;
//		call UART1.uartSend("powpow\r\n", strlen("powpow\r\n"));

	}

	event void Boot.booted()
	{
		call GLCD.initLCD(0x0);
		call bigAVR6UART0.receive((uint8_t *)uartBuf, 5);
	}

	event void GLCD.initDone()
	{
//		call GLCD.calibrateTouchScreen();
//		call Timer0.startPeriodic(100);
		call GLCD.startWriteRectangle(0, 0, 128, 4);
//		call GLCD.startWriteBar(0, 8, 100, 40);
//		call GLCD.isPressed(TRUE);
		call Timer0.startPeriodic(50);
	}

	event void GLCD.tsPressed()
	{
//		call GLCD.getXY();
	}

	event void GLCD.calibrated()
	{
//		call GLCD.isPressed(TRUE);
//		call GLCD.startClearScreen(0x00);

//		call GLCD.startWriteCircle(30, 30, 10);
//		call GLCD.startWriteLine(0, 0, 45, 50);
//		call GLCD.startWriteRectangle(40, 55, 55, 62);
	}

	event void GLCD.screenCleared(void)
	{
		call GLCD.startWriteRectangle(0, 0, 128, 4);
	}

	event void GLCD.barWritten()
	{
//		call GLCD.isPressed(TRUE);
	}
	event void GLCD.circleWritten()
	{

	}
	event void GLCD.rectangleWritten()
	{

	}
	event void GLCD.stringWritten()
	{
		call bigAVR6UART0.receive((uint8_t *)uartBuf, 5);
	}
	event void GLCD.lineWritten()
	{

	}

	event void bigAVR6UART0.sendDone(uint8_t* stream, uint16_t len, error_t error)
	{
		call GLCD.startWriteBar(0, 1, count, 2);
		if(count == 128)
		{
			call GLCD.startClearScreen(0x00);
			count = 0;
		}
	}

	event void bigAVR6UART0.receivedByte(uint8_t byte)
	{
	}

	event void bigAVR6UART0.receiveDone(uint8_t* stream, uint16_t len, error_t error)
	{
		call GLCD.startWriteString(uartBuf, 0, count2);
		count2 = count2 + 8;
		if(count2 == 64)
		{
			count2 = 8;
		}
	}
}
