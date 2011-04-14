#include "LCD2x16.h"



module LCD2x16P
{
        provides interface LCD2x16;
}

implementation
{
	void sendLcdData(char *data, uint8_t words, uint8_t mode, uint8_t timeout)
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
			// WAIT
			for(tmp = 0; tmp < 255; tmp++)
			{
				for(tmp2 = 0; tmp2 < 5; tmp2++)
				{

				}	
			}
		}
	}

	void setLcdAdr(uint8_t adr)
	{
		char tmp;

		tmp = 0x80 | adr;
		sendLcdData(&tmp, 1, COMM, 66);
	}

	command void LCD2x16.clearDisplay(void)
	{
		char tmp;

		tmp = 0x01;
		sendLcdData(&tmp, 1, COMM, 66);
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
			sendLcdData(str, index, DATA, 66);
		}
	*/
		if(row > 16)
			row = 0;
	
		if(line == 1)
			row = row + 0x40;
		
			
		setLcdAdr(row);
		sendLcdData(str, len, DATA, 66);
	}

	command void LCD2x16.init(uint8_t mode)
	{
		char tmp = 0;
		LCDDAT &= ~((1<<PC7) | (1<<PC6) | (1<<PC5) | (1<<PC4) | (1<<PC3) | (1<<PC2));
		LCDDDR |= ((1<<DDC7) | (1<<DDC6) | (1<<DDC5) | (1<<DDC4) | (1<<DDC3) | (1<<DDC2));

		tmp = 0x28;				// do the 4bit - mode:
		sendLcdData(&tmp, 1, COMM, 66);

		tmp = 0x08 | 0x04;	// ON, CURSON ON, CURSOR BLINK

		if(mode == CURSOR_ON_BLINK_ON)
			tmp = tmp | 0x01 | 0x02; 

		if(mode == CURSOR_ON_BLINK_OFF)
			tmp = tmp | 0x02;
		sendLcdData(&tmp, 1, COMM, 66);

		signal LCD2x16.LcdInitDone();
	}
}
