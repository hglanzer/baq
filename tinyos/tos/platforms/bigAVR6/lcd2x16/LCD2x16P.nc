/*
	Harald Glanzer, 0727156 TU Wien
*/

#include "LCD2x16.h"
#include "Platform.h"

module LCD2x16P
{
        provides interface LCD2x16;
}

implementation
{
	static volatile uint8_t dataLen, state = UNINIT;
	static volatile char *dataString;	

	/*
		write data OR commands to LCD
	*/
	void sendLcdData(char *data, uint8_t words, uint8_t mode)
	{
		volatile uint8_t wordcount, tmp, nibble, tmp2;

		for(wordcount = 0; wordcount < words; wordcount++)
		{
			LCDDAT &= 0x03;			// reset Datenports

			if(mode == DATA)
				storeDATA;
			else
				storeCOMMAND;

			// HIGH - NIBBLE
			EN_HIG;
			nibble = data[wordcount] & 0xF0;
			LCDDAT |= nibble;
			EN_LOW;
			LCDDAT &= 0x0F;
		
			// LOW - NIBBLE
			EN_HIG;
			nibble = data[wordcount] & 0x0F;
			nibble = nibble << 4;
			LCDDAT |= nibble;
			EN_LOW;

			LCDDAT &= 0x03;
			// WAIT - must be done with busywaiting
			// because RW - pin(data read) of LCD is connected to GND
			// --> write - only
			for(tmp = 0; tmp < 250; tmp++)
			{
				for(tmp2 = 0; tmp2 < 4; tmp2++)
				{

				}	
			}
		}

		state = READY;
		if(mode == DATA)
			signal LCD2x16.stringWritten();
	}

	void setLcdAdr(uint8_t adr)
	{
		char tmp;
		tmp = 0x80 | adr;
		sendLcdData(&tmp, 1, COMM);
	}

	command error_t LCD2x16.clearDisplay(void)
	{
		if(state != READY)
			return FAIL;

		state = BUSY;
		sendLcdData((char *)0x01, 1, COMM);
		return SUCCESS;
		
	}

	task void sendData()
	{
		sendLcdData((char *)dataString, dataLen, DATA);
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
	
		LCDDAT &= ~((1<<PC7) | (1<<PC6) | (1<<PC5) | (1<<PC4) | (1<<PC3) | (1<<PC2));
		LCDDDR |= ((1<<DDC7) | (1<<DDC6) | (1<<DDC5) | (1<<DDC4) | (1<<DDC3) | (1<<DDC2));

		tmp = 0x28;				// do the 4bit - mode:
		sendLcdData(&tmp, 1, COMM);

		tmp = 0x08 | 0x04;	// ON, CURSON ON, CURSOR BLINK

		if(mode == CURSOR_ON_BLINK_ON)
			tmp = tmp | 0x01 | 0x02; 

		if(mode == CURSOR_ON_BLINK_OFF)
			tmp = tmp | 0x02;
		sendLcdData(&tmp, 1, COMM);

		state = READY;
		return SUCCESS;
	}
}
