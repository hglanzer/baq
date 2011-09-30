/*
	Harald Glanzer, 0727156 TU Wien

	NON - blocking version of LCD2x16C
*/

#include "LCD2x16.h"
#include "Platform.h"

module LCD2x16P
{
        provides interface LCD2x16;
	uses interface Timer<TMilli> as TimerLCD;

	// only register-select and enable - pins are controlled through interface GeneralIO
	// the 4bit datapins are set directly --> faster
	uses interface GeneralIO as REGSEL;
	uses interface GeneralIO as ENABLE;
}

implementation
{
	static volatile uint8_t dataLen, state = UNINIT, dataPtr = 0;
	static volatile char *dataString;	

	/*
		write data OR commands to LCD
		
		this is a NON-Blocking version, using a TimerMilliC instead
		of busywaiting
	*/
	void sendLcdData(char *data, uint8_t mode)
	{
		volatile uint8_t nibble;

		LCDDAT &= 0x03;			// reset Datenports

		if(mode == DATA)
		{
			call REGSEL.set();
		}
		else
		{
			call REGSEL.clr();
		}
		// HIGH - NIBBLE
		call ENABLE.set();
		nibble = data[dataPtr] & 0xF0;
		LCDDAT |= nibble;
		call ENABLE.clr();
		LCDDAT &= 0x0F;
		
		// LOW - NIBBLE
		call ENABLE.set();
		nibble = data[dataPtr] & 0x0F;
		nibble = nibble << 4;
		LCDDAT |= nibble;
		call ENABLE.clr();

		LCDDAT &= 0x03;
		dataPtr++;	
		call TimerLCD.startPeriodic(15);
	}

	void setLcdAdr(uint8_t adr)
	{
		char tmp;
		tmp = 0x80 | adr;
		dataPtr = 0;
		dataLen = 1;
		sendLcdData(&tmp, COMM);
	}

	command error_t LCD2x16.clearDisplay(void)
	{
		if(state != READY)
			return FAIL;

		state = CLEARING;
		dataPtr = 0;
		dataLen = 1;
		sendLcdData((char *)0x01, COMM);
		return SUCCESS;
		
	}

	task void sendData()
	{
		sendLcdData((char *)dataString, DATA);
	}

	command error_t LCD2x16.sendString(char *str, uint8_t len, uint8_t line, uint8_t column)
	{
		if(state != READY)
			return FAIL;

		state = BUSY;

		if(column > 16)
			column = 0;
	
		if(line == 1)
			column = column + 0x40;
		
			
		setLcdAdr(column);

		dataPtr = 0;
		dataString = str;
		dataLen = len;

		if((post sendData()) == SUCCESS)
			return SUCCESS;
		else 
			return FAIL;
	}

	command error_t LCD2x16.init(uint8_t mode)
	{
		char tmp = 0;
		if(state == BUSY)
			return FAIL;

		call ENABLE.makeOutput();
		call REGSEL.makeOutput();
	
		LCDDAT &= ~((1<<PC7) | (1<<PC6) | (1<<PC5) | (1<<PC4) );
		LCDDDR |= ((1<<DDC7) | (1<<DDC6) | (1<<DDC5) | (1<<DDC4) );

		tmp = 0x28;				// do the 4bit - mode:
		dataPtr = 0;
		dataLen = 1;
		sendLcdData(&tmp, COMM);

		tmp = 0x08 | 0x04;	// ON, CURSON ON, CURSOR BLINK

		if(mode == CURSOR_ON_BLINK_ON)
			tmp = tmp | 0x01 | 0x02; 

		if(mode == CURSOR_ON_BLINK_OFF)
			tmp = tmp | 0x02;
	
		for(dataPtr = 0; dataPtr < 250; dataPtr++)
		{
			for(dataLen = 0; dataLen < 5; dataLen++)
			{
			}
		}
		
		dataPtr = 0;
		dataLen = 1;
		sendLcdData(&tmp, COMM);

		state = READY;
		return SUCCESS;
	}

	event void TimerLCD.fired()
	{
		if(state == CLEARING)
		{
			state = READY;
			signal LCD2x16.displayCleared();
		}
		else
		{
			if(dataPtr >= dataLen)
			{
				call TimerLCD.stop();
				state = READY;
				signal LCD2x16.stringWritten();
			}
			else
			{
				post sendData();
			}
		}
	}
}
