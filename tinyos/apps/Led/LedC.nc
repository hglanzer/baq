// $Id: BlinkC.nc,v 1.6 2010-06-29 22:07:16 scipio Exp $

/*                                                                      tab:4
*/

/**
 **/

#include "LCD2x16.h"
#include "LCD128x64.h"
#include "Timer.h"

module LedC @safe()
{
	uses interface Leds;
	uses interface Boot;
//	uses interface UART1;
	uses interface LCD128x64;
	uses interface Timer<TMilli> as Timer0;
	uses interface Timer<TMilli> as Timer1;
/*
	uses interface LCD2x16;
	uses interface Timer<TMilli> as Timer2;
	uses interface Timer<TMilli> as Timer3;
*/
}
implementation
{

        volatile uint8_t count = 0, count2 = 0, t1_flag = 0, up = 1;
        volatile uint8_t delay1=0, delay0=0;

	char rcvBuf[10];
        
	task void runTasks()
        {
		call LCD128x64.startClearScreen(0x00);
	//	call LCD128x64.startWriteString("hello...\0", 25+count2, 20);
	//	call LCD128x64.startWriteCircle(30, 30, count);
	//	call LCD128x64.startWriteRectangle(40-count, 40, 15, 25);
		//call LCD128x64.startWriteLine(0, 0, count, 30);
		call LCD128x64.startWriteLine(0, 31, 127, count);

		if(count2 == 127)
			count2 = 0;

		if(up)
		{	
			count++;
		}
		else
		{
			count = count - 1;
		}
		if(count == 63)
		{
			up = FALSE;
		}
		if(count == 0)
		{
			up = TRUE;
		}
        }
       
	void test(void)
        {
        }

	event void Boot.booted()
	{
	//	call UART1.uartInit();
	//	call LCD2x16.init(CURSOR_ON_BLINK_OFF);
		call LCD128x64.initLCD(0x00);
	        call Timer0.startPeriodic(100);
	        call Timer1.startPeriodic(100);
/*
	        call Timer2.startPeriodic(1000);
	        call Timer3.startPeriodic(4000);
*/

	}
/*
        event void Timer3.fired()
        {
//		call Leds.setPort(count3, 3);
                count3++;
        }
        event void Timer2.fired()
        {
//		call Leds.setPort(count2, 2);
                count2++;
        }
*/
        event void Timer1.fired()
        {
		//post testTask1();
		//call LCD128x64.writeString("hello...\0", 30, 20);
		count2++;
		post runTasks();
        }

        event void Timer0.fired()
        {
		//post testTask();
		DDRB = 0xFF;
		PORTB = count2;
		//call UART1.uartSend("hari\n\r", 6);
		//call LCD2x16.clearDisplay();
		//call LCD2x16.sendString("12345", 5, 1, count);

//		call LCD128x64.clearScreen(0x00);
        }

/*
	event void UART1.uartSendDone(char *msg, uint8_t len)
	{
	}
      
	event void UART1.uartStartDone()
	{
		call UART1.uartRecv(10);
	}

	event void UART1.uartDeliver(char *Buf)
	{
		call UART1.uartSend(Buf, 10);
	}

	event void LCD2x16.LcdInitDone()
	{
		call LCD2x16.sendString("                 ", 16, 0, 0);
		call LCD2x16.sendString("                 ", 16, 1, 0);
        	call Timer0.startPeriodic(1000);
	}

*/
	event void LCD128x64.circleWritten()
	{

	}
	
	event void LCD128x64.rectangleWritten()
	{

	}

	event void LCD128x64.stringWritten()
	{

	}

	event void LCD128x64.initDone()
	{
		call LCD128x64.setPixel(0, 0);
		call LCD128x64.setPixel(0, 2);
		call LCD128x64.setPixel(0, 4);
		call LCD128x64.setPixel(0, 6);
		call LCD128x64.setPixel(0, 8);
		call LCD128x64.setPixel(0, 9);
		call LCD128x64.setPixel(0, 12);
		call LCD128x64.setPixel(0, 14);
		call LCD128x64.setPixel(0, 31);

		call LCD128x64.writePixel(0, 0, FALSE);
		call LCD128x64.writePixel(3, 10, FALSE);

//		call LCD128x64.startWriteLine(1, 1, 126, 30);
//		call LCD128x64.writeBar(5, 9, 6, 3);
//		call LCD128x64.writeRectangle(10, 10, 30, 5);
//		call LCD128x64.writeString("** HELLO WORLD **\0", 2, 40);
	}

}
