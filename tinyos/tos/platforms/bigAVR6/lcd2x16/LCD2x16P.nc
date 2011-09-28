/*
	Harald Glanzer, 0727156 TU Wien
*/

#include "LCD2x16.h"

module LCD2x16P
{
        provides interface LCD2x16;
}

implementation
{
	static volatile uint8_t dataLen;
	static volatile char *dataString;	

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

		if(mode == DATA)
			signal LCD2x16.stringWritten();
	}

	void setLcdAdr(uint8_t adr)
	{
		char tmp;

		tmp = 0x80 | adr;
		sendLcdData(&tmp, 1, COMM);
	}

	command void LCD2x16.clearDisplay(void)
	{
		sendLcdData((char *)0x01, 1, COMM);
	}

	task void sendData()
	{
		sendLcdData((char *)dataString, dataLen, DATA);
	}

	command void LCD2x16.sendString(char *str, uint8_t len, uint8_t line, uint8_t row)
	{
	/*
		uint8_t index = 0;
		while(str[index] != '\0')
		{
			index++;		// bestimme laenge des strings
			if(index == 255)	// ... nicht entspr. terminierter string - ERROR
				break;
		}
	
		if(index < 255)
		{
			sendLcdData(str, index, DATA);
		}
	*/
		if(row > 16)
			row = 0;
	
		if(line == 1)
			row = row + 0x40;
		
			
		setLcdAdr(row);

		dataString = str;
		dataLen = len;

		post sendData();
	}

	command void LCD2x16.init(uint8_t mode)
	{
		char tmp = 0;
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

		signal LCD2x16.LcdInitDone();
	}
}
