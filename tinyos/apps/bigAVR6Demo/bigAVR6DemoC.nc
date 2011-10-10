/*
	Harald Glanzer, 0727156 TU Wien	

	demonstration of bigAVR6 capabilties

	write to LCD2x16
	draw to GLCD
	write to GLCD received uart string
	send uart string

*/

#include"LCD2x16.h"

module bigAVR6DemoC @safe()
{
	uses interface Boot;
	uses interface Timer<TMilli> as Timer0;
	uses interface LCD2x16;
	uses interface GLCD;
	uses interface bigAVR6UARTA;
	uses interface UDP;
}
implementation
{
	static volatile uint8_t count = 0, count2 = 6, what = 0, dir = 0, dir2 = 1, countGLCD;
	static volatile uint8_t uartBuf[11], *localPtr, countGLCDstr = 0, dstIP[4];

	/*
	when system has 'bootet' up, we will receive this event and
	can take over from here...
	*/
	event void Boot.booted()
	{
		uartBuf[10] = '\0';
		call LCD2x16.init(CURSOR_ON_BLINK_ON);
		call GLCD.initLCD(0x01);
		call UDP.initStack();
		dstIP[0] = 192;
		dstIP[1] = 168;
		dstIP[2] = 1;
		dstIP[3] = 100;
		call Timer0.startPeriodic(300);
		call bigAVR6UARTA.receive((uint8_t *)uartBuf, 10);
	}

	event void Timer0.fired()
	{
		call LCD2x16.clearDisplay();
		call GLCD.startWriteBar(countGLCD, 5, 10, 10);
		call bigAVR6UARTA.send((uint8_t *)"hello world\n", sizeof("hello world\n"));
		call UDP.sendData((uint16_t *)"hello world", (uint8_t *)dstIP, 80, 4443, sizeof("hello world"));

		countGLCD++;
		if(countGLCD == 40)
		{
			countGLCD = 0;
			call GLCD.startClearScreen(0x00);
		}


		if(dir2 == 0)
			count2++;
		else
			count2 = count2 - 1;


		if(count2 >= 5)
			dir2 = 1;

		if(count2 == 0)
			dir2 = 0;
	}

	event void LCD2x16.stringWritten()
	{
		if(count >= 6)
			dir = 1;

		if(count == 0)
			dir = 0;
		if(dir == 0)
			count++;
		else
			count = count - 1;
	}
	
	event void LCD2x16.displayCleared()
	{
		call LCD2x16.sendString("hello world!", 12, 0, count);
	}

	event void GLCD.initDone()
	{
	
	}
	event void GLCD.barWritten()
	{
	
	}
	event void GLCD.stringWritten()
	{
		call bigAVR6UARTA.receive((uint8_t *)uartBuf, 10);
		countGLCDstr++;
		if(countGLCDstr > 7)
			countGLCDstr = 0;
	}
	event void GLCD.circleWritten()
	{
	
	}
	event void GLCD.rectangleWritten()
	{
	
	}
	event void GLCD.lineWritten()
	{
	
	}
	event void GLCD.screenCleared()
	{
	}
	event void GLCD.tsPressed()
	{
	
	}
	event void GLCD.calibrated()
	{
	
	}
	event void GLCD.xyReady(uint16_t x, uint16_t y)
	{
	
	}

	task void processAsyncUART()
	{
		atomic
		{
			call GLCD.startWriteString(localPtr, 10, countGLCDstr);
		}
	}

	/*
		UART - EVENTS
	*/

	async event void bigAVR6UARTA.receiveDone(uint8_t* buf, uint16_t len, error_t error)
	{
		atomic
		{
			localPtr = buf;
		}
		post processAsyncUART();
	}

	async event void bigAVR6UARTA.sendDone(uint8_t* buf, uint16_t len, error_t error)
	{
	}
	
	/*
		IEEE802.3 - EVENTS
	*/
	event void UDP.initDone()
	{
		call GLCD.startWriteString("UDP READY...\0", 10, 2);
	}

	event void UDP.gotDatagram(uint16_t len, uint8_t *dataPtr)
	{

	}

	event void UDP.hwInterrupt(uint16_t *info)
	{

	}

	event void UDP.sendDone()
	{

	}

	event void UDP.sendFailed()
	{

	}
}

