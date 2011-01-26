#include "LCD128x64.h"
#include "font5x7.h"

module LCD128x64P
{
	provides interface LCD128x64;
}

implementation
{
	uint8_t state = IDLE, modPattern = 0x00;
	uint8_t pageAddr, xAddr = 0;
	uint8_t rad, aRect, bRect, xLineEnd, yLineEnd;
	uint8_t xPos[4], yPos[4];
	char *dataPtr;

	//void wait4Controller()
	task void wait4Controller()
	{
		DATA_DDR_GLCD = 0x00;		// we want to read in from dataport, CTRL-PORT = outout
		CTRL_GLCD |= (1<<RW_GLCD);	// set CTRL_RW high
		CTRL_GLCD &= ~(1<<REGSEL_GLCD); // set CTRL_REGSEL low
		CTRL_GLCD |= (1<<ENABLE_GLCD);	// set CTRL_RW high

		//if(DATA_IN_GLCD & GLCD_STATUS_BUSY)	// not ready yet - wait!
		while(DATA_IN_GLCD & GLCD_STATUS_BUSY)	// not ready yet - wait!
		{
			CTRL_GLCD &= ~(1<<ENABLE_GLCD);
			asm volatile ("nop"); asm volatile ("nop");
			CTRL_GLCD |= (1<<ENABLE_GLCD);
			asm volatile ("nop"); asm volatile ("nop");
			//post wait4Controller();
		}
		CTRL_GLCD &= ~(1<<ENABLE_GLCD);
		CTRL_GLCD |= (1<<RW_GLCD);	
		DATA_DDR_GLCD = 0xFF;		// reset old condition
	}

	void writeGLCD(uint8_t mode, uint8_t data)
	{
		post wait4Controller();
		//wait4Controller();

		if(mode == COMM)
		{
			// WRITE COMMANDS to GLCD - RAM
			CTRL_GLCD &= ~( (1<< RW_GLCD) | (1 << REGSEL_GLCD) );
			CTRL_GLCD |=  (1 << ENABLE_GLCD);
		
			DATA_DDR_GLCD = 0xFF;
			DATA_OUT_GLCD = data;

		}
		else
		{
			// WRITE DATA TO GLCD - RAM
			CTRL_GLCD &= ~( 1<< RW_GLCD );
			CTRL_GLCD |=  ((1 << ENABLE_GLCD) | (1 << REGSEL_GLCD));
			DATA_DDR_GLCD = 0xFF;
			DATA_OUT_GLCD = data;
		}

		asm volatile ("nop"); asm volatile ("nop");
		asm volatile ("nop"); asm volatile ("nop");
		asm volatile ("nop"); asm volatile ("nop");
		asm volatile ("nop"); asm volatile ("nop");
		CTRL_GLCD &= ~( 1 << ENABLE_GLCD );

	}

	void setAddress(uint8_t x, uint8_t y)
	{	
		uint8_t tmp;
	
		if(x < 64)
		{
			CTRL_GLCD |= (1<<CS1_GLCD);
			CTRL_GLCD &= ~(1<<CS0_GLCD);
		}
		else
		{
			CTRL_GLCD |= (1<<CS0_GLCD);
			CTRL_GLCD &= ~(1<<CS1_GLCD);
		}
		
		tmp = x & 0x3f;		// make x address valid
		writeGLCD(COMM, tmp | GLCD_SET_Y_ADDR);

		tmp = y & 0x3f;
		writeGLCD(COMM, tmp | GLCD_SET_X_ADDR);
	}

	uint8_t readByte(uint8_t mode)
	{
		uint8_t tmp = 0, c = 0;

		for(c = 0; c < 2; c++)	// dummy read needed!
		{
			post wait4Controller();
			//wait4Controller();

			CTRL_GLCD |= ((1<<ENABLE_GLCD)) | (1 << RW_GLCD);
			if(mode == COMM)	// read COMMANDREGISTER
			{
				CTRL_GLCD &= ~(1 << REGSEL_GLCD);
			}
			else			// read DATAREGISTER
			{
				CTRL_GLCD |= (1 << REGSEL_GLCD);
				DATA_DDR_GLCD = 0x00;
			}
			asm volatile ("nop"); asm volatile ("nop");
			asm volatile ("nop"); asm volatile ("nop");
			asm volatile ("nop"); asm volatile ("nop");
			asm volatile ("nop"); asm volatile ("nop");

			tmp = DATA_IN_GLCD;
	
			CTRL_GLCD &= ~( (1<<ENABLE_GLCD) | (1<<RW_GLCD));
			DATA_DDR_GLCD = 0xFF;
		}

		return tmp;
	}

	command void LCD128x64.setPixel(uint8_t x, uint8_t y)
	{
	        unsigned char temp;

	        setAddress(x, y/8);
	        temp = readByte(DATA);
	        setAddress(x, y/8);
	        writeGLCD(DATA, temp | (1 << (y % 8)));
	}

	command void LCD128x64.writePixel(uint8_t x, uint8_t y, uint8_t on)
	{
		uint8_t byte;
		setAddress(x, y/8);
		byte = readByte(DATA);

		setAddress(x, y/8);
		
		if(on == TRUE)
		{
			byte |= (1<<(y%8));
		}
		else
		{
			byte &= ~(1<<(y%8));
		}
		writeGLCD(DATA, byte);
	}

	command void LCD128x64.writeBar(uint8_t x, uint8_t y, uint8_t width, uint8_t length)
	{
		uint8_t w_count, tmp, byte=0, y_mod;
		
		if(length <8)
		{	
			y_mod = length % 8;
			for( tmp=0; tmp < 8; tmp++)
			{
				if(tmp < y_mod)
				{
					byte |= (1<<tmp);
				}
			}
			for(w_count = 0; w_count < width; w_count++)
			{
				setAddress((x+w_count), (y-9));
		                writeGLCD(DATA, byte);
			}
		}
		else
		{

		}
	}

	// draw rectangle
	task void writeRectangle()
//	command void LCD128x64.writeRectangle(uint8_t x, uint8_t y, uint8_t a, uint8_t b)
	{
		unsigned char j;
		for (j = 0; j < aRect; j++)
		{
			call LCD128x64.setPixel(xPos[RECTANGLE], yPos[RECTANGLE] + j);
			call LCD128x64.setPixel(xPos[RECTANGLE] + bRect - 1, yPos[RECTANGLE] + j);
		}
		for (j = 0; j < bRect; j++)
		{
			call LCD128x64.setPixel(xPos[RECTANGLE] + j, yPos[RECTANGLE]);
			call LCD128x64.setPixel(xPos[RECTANGLE] + j, yPos[RECTANGLE] + aRect - 1);
		}
	}
	
	task void writeCircle()
	{
		int tswitch, y, x = 0, yDraw = 0;
		unsigned char d;

		d = yPos[CIRCLE] - xPos[CIRCLE];
		y = rad;
		tswitch = 3 - 2 * rad;
		while (x <= y)
		{
			yDraw = y;
			//yDraw = y * 10 / 12;
			call LCD128x64.setPixel(xPos[CIRCLE] + x, yPos[CIRCLE] + yDraw);
			call LCD128x64.setPixel(xPos[CIRCLE] + x, yPos[CIRCLE] - yDraw);
			call LCD128x64.setPixel(xPos[CIRCLE] - x, yPos[CIRCLE] + yDraw);
			call LCD128x64.setPixel(xPos[CIRCLE] - x, yPos[CIRCLE] - yDraw);
			call LCD128x64.setPixel(yPos[CIRCLE] + yDraw - d, yPos[CIRCLE] + x);
			call LCD128x64.setPixel(yPos[CIRCLE] + yDraw - d, yPos[CIRCLE] - x);
			call LCD128x64.setPixel(yPos[CIRCLE] - yDraw - d, yPos[CIRCLE] + x);
			call LCD128x64.setPixel(yPos[CIRCLE] - yDraw - d, yPos[CIRCLE] - x);
	
			if (tswitch < 0) 
				tswitch += (4 * x + 6);
			else
			{
				tswitch += (4 * (x - yDraw) + 10);
				y--;
			}
			x++;
		}
	}

	task void writeString()
	{
		uint8_t index = 0, offset = 0;

		if(state != BUSY)
		{
			state = BUSY;	
			while (*dataPtr)
			{
				for(index=0; index<5; index++)
				{
			
					setAddress(xPos[STRING]+offset, yPos[STRING]/8);
				        writeGLCD(DATA, (uint8_t)pgm_read_byte(&Font5x7[((*dataPtr - 0x20) * 5) + index]));
					offset++;
				}
				setAddress(xPos[STRING]+offset, yPos[STRING]);
				writeGLCD(DATA, 0x00);
				offset++;
				dataPtr++;
			}
		}
		state = IDLE;
	}

	command void LCD128x64.writeByte(uint8_t x, uint8_t y, uint8_t data)
	{
		setAddress(x, y);
		writeGLCD(DATA, data);
	}


	void task clearScreen()
	{
		// clear LCD - loop through all pages
		for(pageAddr=0; pageAddr<(GLCD_YPIXELS>>3); pageAddr++)	// 8 loops
		{
			for(xAddr=0; xAddr<GLCD_XPIXELS; xAddr++)	// 128 loops
			{
				setAddress(xAddr, pageAddr);
				writeGLCD(DATA, modPattern);
			}
		}
	}

	void task writeLine()
	{
		uint8_t count, orientation;
		float tmp;

		if(yLineEnd > yPos[LINE])	// descending line
		{
			tmp = ((yLineEnd - yPos[LINE]) / ((float)(xLineEnd - xPos[LINE])));
			orientation = DOWN;
		}
		if(yLineEnd < yPos[LINE])	// ascending line
		{
			tmp = (yPos[LINE] - yLineEnd) / ((float)xLineEnd - xPos[LINE]);
			orientation = UP;
		}
			
		if(yLineEnd == yPos[LINE])
		{
			tmp = 0;
			orientation = HORIZONTAL;
		}

		if(xPos[LINE] == xLineEnd)		// special case - vertical line
		{
			for(count = 0; count < (yLineEnd - yPos[LINE]); count++)
			{
				call LCD128x64.setPixel(xPos[LINE], yPos[LINE]+count);
			}
		}
		else
		{

			for(count = 0; count <= (xLineEnd - xPos[LINE]); count++)
			{
				if(orientation == UP)
				{
					call LCD128x64.setPixel(xPos[LINE]+count, yPos[LINE]-(tmp*(float)count));
				}
				if(orientation == DOWN)
				{
					call LCD128x64.setPixel(xPos[LINE]+count, yPos[LINE]+(tmp*(float)count));
				}
	
				if(orientation == HORIZONTAL)
				{
					call LCD128x64.setPixel(xPos[LINE]+count, yPos[LINE]);
				}
			}			
		}
	}
	
	command void LCD128x64.initLCD(uint8_t pattern)
	{
		// set controlports and dataports to OUTPUT
		CTRL_DDR_GLCD |= (0xFC);	// set CTRL to output
		DATA_DDR_GLCD = 0xFF;		// set DATA to output
		CTRL_GLCD &= ~(0xFC);		// set all controlbits LOW
		DATA_OUT_GLCD = 0x00;		// and reset the pins

		// deactivate glcd - reset
		CTRL_GLCD |= (1<<RESET_GLCD);

		// turn on glcd
		writeGLCD(COMM, (GLCD_ON_CTRL | GLCD_ON_DISPLAY));

		// clear screen
		call LCD128x64.startClearScreen(pattern);
		// set init-position						TODO

		signal LCD128x64.initDone();
	}

	command void LCD128x64.startWriteString(char *data, uint8_t x, uint8_t y)
	{
		xPos[STRING] = x;
		yPos[STRING] = y;
		dataPtr = data;

		post writeString();
		signal LCD128x64.stringWritten();
	}

	command void LCD128x64.startWriteRectangle(uint8_t x, uint8_t y, uint8_t a, uint8_t b)
	{
		xPos[RECTANGLE] = x;
		yPos[RECTANGLE] = y;
		aRect = a;
		bRect = b;

		post writeRectangle();
		signal LCD128x64.rectangleWritten();
	}	

	command void LCD128x64.startWriteCircle(uint8_t x, uint8_t y, uint8_t radius)
	{
		xPos[CIRCLE] = x;
		yPos[CIRCLE] = y;
		rad = radius;
	
		post writeCircle();
		signal LCD128x64.circleWritten();
	}
	
	command void LCD128x64.startClearScreen(uint8_t pattern)
	{
		modPattern = pattern;
		post clearScreen();
	}

	command void LCD128x64.startWriteLine(uint8_t x, uint8_t y, uint8_t xEnd, uint8_t yEnd)
	{
		xPos[LINE] = x;
		yPos[LINE] = y;
		xLineEnd = xEnd;
		yLineEnd = yEnd;

		post writeLine();
	}
}
