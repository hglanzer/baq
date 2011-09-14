/*
  harald glanzer, TU wien

  128x64 - GLCD interface implementation


  0/0			127/0	
  -------------------------
  |			|
  |			|
  | GLCD-PIXEL COORDINATES|
  |			|
  |			|
  -------------------------
  0/63			127/63

*/

#include "LCD128x64.h"
#include "LCD2x16.h"
#include "font5x7.h"

module LCD128x64P
{
  //uses interface GeneralIO as Measure0;
  //uses interface GeneralIO as Measure1;

  provides interface LCD128x64;
}

implementation
{
  uint8_t modPattern = 0x00;
  uint8_t pageAddr, xAddr = 0;
  uint8_t rad, aRect, bRect, xLineEnd, yLineEnd, aBar, bBar;
  uint8_t xPos[5], yPos[5];
  char *dataPtr;

  void writeGLCD(uint8_t mode, uint8_t data);
  uint8_t readByte(uint8_t mode);
	
  void busyWait4Controller(){
    //call Measure0.set(); /* DEBUG - REMOVE */
    CTRL_GLCD |= (1<<ENABLE_GLCD);
    DATA_DDR_GLCD = 0x00; // we want to read in from dataport, CTRL-PORT = outout
    CTRL_GLCD |= (1<<RW_GLCD); // set CTRL_RW high
    CTRL_GLCD &= ~(1<<REGSEL_GLCD); // set CTRL_REGSEL low

    CTRL_GLCD &= ~(1<<ENABLE_GLCD);
    asm volatile ("nop"); asm volatile ("nop");
    CTRL_GLCD |= (1<<ENABLE_GLCD);
    asm volatile ("nop"); asm volatile ("nop");
	  
    while(DATA_IN_GLCD & GLCD_STATUS_BUSY) // not ready yet - wait!
      {
	CTRL_GLCD &= ~(1<<ENABLE_GLCD);
	asm volatile ("nop"); asm volatile ("nop");
	CTRL_GLCD |= (1<<ENABLE_GLCD);
	asm volatile ("nop"); asm volatile ("nop");
      }
    DATA_DDR_GLCD = 0xFF; // reset old condition
    //call Measure0.clr(); /* DEBUG - REMOVE */
  }

  task void wait4Controller()
  {
    DATA_DDR_GLCD = 0x00; // we want to read in from dataport, CTRL-PORT = outout
    CTRL_GLCD |= (1<<RW_GLCD); // set CTRL_RW high
    CTRL_GLCD &= ~(1<<REGSEL_GLCD); // set CTRL_REGSEL low

    while(DATA_IN_GLCD & GLCD_STATUS_BUSY) // not ready yet - wait!
      {
	CTRL_GLCD |= (1<<ENABLE_GLCD);
	asm volatile ("nop"); asm volatile ("nop");
	CTRL_GLCD &= ~(1<<ENABLE_GLCD);
	asm volatile ("nop"); asm volatile ("nop");
      }
    CTRL_GLCD |= (1<<RW_GLCD);
    DATA_DDR_GLCD = 0xFF; // reset old condition
  }


  void writeGLCD(uint8_t mode, uint8_t data)
  {
    busyWait4Controller();
    //call Measure1.set(); /* DEBUG - REMOVE */
    if(mode == COMM)
      {
	// WRITE COMMANDS to GLCD - RAM
	CTRL_GLCD &= ~( (1<< RW_GLCD) | (1 << REGSEL_GLCD) );
      }
    else
      {
	// WRITE DATA TO GLCD - RAM
	CTRL_GLCD &= ~( 1<< RW_GLCD );
	CTRL_GLCD |=  (1 << REGSEL_GLCD);
      }
    asm volatile ("nop"); asm volatile ("nop"); asm volatile ("nop");
    CTRL_GLCD |= ( 1 << ENABLE_GLCD );
    DATA_OUT_GLCD = data;
    asm volatile ("nop"); asm volatile ("nop"); asm volatile ("nop"); asm volatile ("nop");
    asm volatile ("nop"); asm volatile ("nop");
    CTRL_GLCD &= ~( 1 << ENABLE_GLCD );
    CTRL_GLCD |= ( 1<< RW_GLCD );
    asm volatile ("nop");
    CTRL_GLCD |= ( 1 << ENABLE_GLCD );
    DATA_OUT_GLCD = 0x00;
    //call Measure1.clr(); /* DEBUG - REMOVE */
  }

  void setAddress(uint8_t xAdd, uint8_t yAdd)
  {	
    uint8_t tmp;
    CTRL_GLCD |= ( 1 << ENABLE_GLCD );
    CTRL_GLCD &= ~( 1 << ENABLE_GLCD );

    if(xAdd < 64)
      {
	CTRL_GLCD |= (1<<CS1_GLCD);
	CTRL_GLCD &= ~(1<<CS0_GLCD);
      }
    else
      {
	CTRL_GLCD |= (1<<CS0_GLCD);
	CTRL_GLCD &= ~(1<<CS1_GLCD);
      }
		
    tmp = xAdd & 0x3f;		// make x address valid
    writeGLCD(COMM, tmp | GLCD_SET_Y_ADDR);

    CTRL_GLCD &= ~( 1 << ENABLE_GLCD );

    tmp = yAdd & 0x3f;
    writeGLCD(COMM, tmp | GLCD_SET_X_ADDR);
  }

  uint8_t readByte(uint8_t mode)
  {
    uint8_t tmp = 0, c = 0;
    for(c = 0; c < 2; c++)	// dummy read needed!
      {
	busyWait4Controller();
	CTRL_GLCD |= (1 << ENABLE_GLCD);
	CTRL_GLCD |= (1 << RW_GLCD);
	if(mode == COMM)	// read COMMANDREGISTER
	  {
	    CTRL_GLCD &= ~(1 << REGSEL_GLCD);
	  }
	else			// read DATAREGISTER
	  {
	    DATA_DDR_GLCD = 0x00;
	    CTRL_GLCD |= (1 << REGSEL_GLCD);
	  }
	CTRL_GLCD &= ~( 1<<ENABLE_GLCD );

	/* wait min. 140ns */
	asm volatile ("nop"); asm volatile ("nop"); asm volatile ("nop"); //asm volatile ("nop");
	CTRL_GLCD |= (1 << ENABLE_GLCD);
	
	/* wait 200ns */
	asm volatile ("nop"); asm volatile ("nop");asm volatile ("nop"); asm volatile ("nop");
	asm volatile ("nop"); asm volatile ("nop"); asm volatile ("nop"); asm volatile ("nop");
		
	tmp = DATA_IN_GLCD;
	DATA_DDR_GLCD = 0xFF;
      }
    return tmp;
  }

  command void LCD128x64.copyByte( uint8_t x, uint8_t y ){
    unsigned char temp;
    setAddress(x, y/8);
    temp = readByte(DATA);
    setAddress(x+16, (y+16)/8);
    writeGLCD(DATA, temp | (1 << (y % 8)));
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

  // draw rectangle
  task void writeRectangle()
  {
    unsigned char j;
    for (j = 0; j < bRect; j++)
      {
	call LCD128x64.setPixel(xPos[RECTANGLE], yPos[RECTANGLE] + j);
	call LCD128x64.setPixel(xPos[RECTANGLE] + aRect - 1, yPos[RECTANGLE] + j);
      }
    for (j = 0; j < aRect; j++)
      {
	call LCD128x64.setPixel(xPos[RECTANGLE] + j, yPos[RECTANGLE]);
	call LCD128x64.setPixel(xPos[RECTANGLE] + j, yPos[RECTANGLE] + bRect - 1);
      }
    signal LCD128x64.rectangleWritten();
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
    signal LCD128x64.circleWritten();
  }

  task void writeString()
  {
    uint8_t index = 0, offset = 0;

    while (*dataPtr != '\0')
      {
	for(index=0; index<5; index++)
	  {
		
	    setAddress(xPos[STRING]+offset, yPos[STRING]);
	    writeGLCD(DATA, (uint8_t)pgm_read_byte(&Font5x7[((*dataPtr - 0x20) * 5) + index]));
	    offset++;
	  }
	setAddress(xPos[STRING]+offset, yPos[STRING]);
	writeGLCD(DATA, 0x00);
	offset++;
	dataPtr++;
      }
    signal LCD128x64.stringWritten();
  }

  command void LCD128x64.writeByte(uint8_t x, uint8_t y, uint8_t data)
  {
    setAddress(x, y);
    writeGLCD(DATA, data);
  }


  void task clearScreenNB()
  {
    // clear LCD - loop through all pages
    for(pageAddr=0; pageAddr<(GLCD_YPIXELS>>3); pageAddr++)	// 8 loops - writing 8bit in vertical direction at once
      {
	for(xAddr=0; xAddr<GLCD_XPIXELS; xAddr++)	// 128 loops
	  {
	    setAddress(xAddr, pageAddr);	// hglanzer, UART - DEBUG FIX ME
	    writeGLCD(DATA, modPattern);
	  }
      }
    signal LCD128x64.screenCleared();
  }

  /*
    this is the blocking clearScreen - only called by initLCD
    when calling the interface-function startClearScreen(uint8_t pattern), the non-blocking task clearScreenNB is used
  */
  void clearScreen()
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
    static volatile uint8_t count, orientation, dx, dy, steep = 0, steepCnt = 0;
    float tmp = 0;

    dx = xLineEnd - xPos[LINE];

    if(yLineEnd > yPos[LINE])	// descending line
      {
	tmp = ((yLineEnd - yPos[LINE]) / ((float)(xLineEnd - xPos[LINE])));
	orientation = DOWN;
	dy = yLineEnd - yPos[LINE];
      }
    if(yLineEnd < yPos[LINE])	// ascending line
      {
	tmp = (yPos[LINE] - yLineEnd) / ((float)xLineEnd - xPos[LINE]);
	orientation = UP;
	dy = yPos[LINE] - yLineEnd;
      }
	
    // steep line to draw - so it will not be enough to draw only on pixel in y-direction for every x-step
    // the steeper the line --> the more y-pixels for one x-step	

    // FIXME - check Radar - example
    if(dy > dx)
      steep = dy / dx;
    else
      steep = 0;
	
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
		for(steepCnt = 0; steepCnt <= steep; steepCnt++)
		  {
		    if((yPos[LINE]-(tmp*(float)count)+steepCnt) >= yLineEnd)
		      call LCD128x64.setPixel(xPos[LINE]+count, yPos[LINE]-(tmp*(float)count)+steepCnt);
		  }
	      }
	    else if(orientation == DOWN)
	      {
		for(steepCnt = 0; steepCnt <= steep; steepCnt++)
		  {
		    call LCD128x64.setPixel(xPos[LINE]+count, yPos[LINE]+(tmp*(float)count)+steepCnt);
		  }
	      }
	
	    else if(orientation == HORIZONTAL)
	      {
		call LCD128x64.setPixel(xPos[LINE]+count, yPos[LINE]);
	      }
	  }			
      }
    signal LCD128x64.lineWritten();
  }

  /*
    too be fast, writeBar() uses 3 different approches for drawing. faster drawing is
    possible by writing 8bit at one time with setAdress() and writeGLCD

    otherwise, pixel after pixel has to be set...
  */
  task void writeBar()
  {
    static volatile uint8_t x_count, y_count, y_mod = 0, byte;

    for(x_count = 0; x_count < aBar; x_count++)
      {
	/*
	  this is easy to do: bar starts at a 8bit-boundary in y-direction, and height of bar 
	  is a multiple of 8 --> so always write 8bit at one time!
	  FAST!
	*/
	if( (yPos[BAR] % 8 == 0) && (bBar % 8 == 0))
	  {
	    y_mod = bBar / 8;
	    for(y_count = 0; y_count < y_mod; y_count++)
	      {
		setAddress((xPos[BAR]+x_count), ((yPos[BAR]) / 8) + y_count);
		writeGLCD(DATA, 0xFF);
	      }
	  }
		
	/*
	  easy too: bar at 8bit-boundary, but height isnt a multiple of 8
	*/
	if((bBar < 8) && (yPos[BAR] % 8 == 0))
	  {
	    // do this just once
	    if(y_mod == 0)
	      {
		y_mod = bBar % 8;
		// use y_count for this loop / so save one uint8_t
		for( y_count = 0; y_count < y_mod; y_count++)
		  {
		    byte |= (1<<y_count);
		  }
	      }
	    setAddress((xPos[BAR]+x_count), (yPos[BAR]/8));
	    writeGLCD(DATA, byte);
	  }

	/*
	  bar doesnt start at 8bit-boundary in y-direction, or height isnt multiple of 8 - or both!
	  --> would be complex to calculate and draw(in y-direction):
	  * at first the 'upper' 8 bits
	  * then zero or more 0xff-bytes would follow
	  * afterwards perhaps another byte(bottom-lines)
		
	  so instead of complex calculation, write pixel after pixel...	
	*/
	else
	  {
	    for(y_count = 0; y_count < bBar; y_count++)
	      {
		call LCD128x64.setPixel(xPos[BAR] + x_count, yPos[BAR] + y_count);
	      }
	  }
      }
    signal LCD128x64.barWritten();
  }
	
  command void LCD128x64.initLCD(uint8_t pattern)
  {
    // set controlports and dataports to OUTPUT
    CTRL_DDR_GLCD |= (0xFC);	// set CTRL to output
    DATA_DDR_GLCD |= 0xFF;		// set DATA to output
    CTRL_GLCD &= ~(0xFC);		// set all controlbits LOW
    DATA_OUT_GLCD = 0x00;		// and reset the pins

    /* DEBUG - remove */
    /*    call Measure0.makeOutput();
    call Measure0.clr();
    call Measure1.makeOutput();
    call Measure1.clr();*/
    // deactivate glcd - reset
    CTRL_GLCD |= (1<<RESET_GLCD);

    // turn on glcd
    writeGLCD(COMM, (GLCD_ON_CTRL | GLCD_ON_DISPLAY));

    // clear screen
    modPattern = pattern;
    clearScreen();
    //call LCD128x64.startClearScreen(pattern);
    // set init-position						TODO

    signal LCD128x64.initDone();
  }

  command void LCD128x64.startWriteString(char *data, uint8_t x, uint8_t y)
  {
    xPos[STRING] = x;
    yPos[STRING] = y;
    dataPtr = data;
	
    post writeString();
  }

  /*
    x, y = coordinates left upper corner of rectangle
    a = length(x-direction)
    b = heigth(y-direction)

  */
  command void LCD128x64.startWriteRectangle(uint8_t x, uint8_t y, uint8_t a, uint8_t b)
  {
    xPos[RECTANGLE] = x;
    yPos[RECTANGLE] = y;
    aRect = a;
    bRect = b;
    post writeRectangle();
  }	

  command void LCD128x64.startWriteCircle(uint8_t x, uint8_t y, uint8_t radius)
  {
    xPos[CIRCLE] = x;
    yPos[CIRCLE] = y;
    rad = radius;
	
    post writeCircle();
  }

  /*
    fills screen with pattern, use 0x00 for clearing, 0xff to set all pixel
    8bit are drawn in y-direction, line for line
  */	
  command void LCD128x64.startClearScreen(uint8_t pattern)
  {
    modPattern = pattern;
    post clearScreenNB();
  }

  /*
    x, y = coordinates left upper corner of bar
    length = length in x-direction
    width = width in y-direction

  */
  command void LCD128x64.startWriteBar(uint8_t x, uint8_t y, uint8_t length, uint8_t width)
  {
    xPos[BAR] = x;
    yPos[BAR] = y;
    aBar = length;
    bBar = width;
    post writeBar();
  }

  command void LCD128x64.startWriteLine(uint8_t x, uint8_t y, uint8_t xEnd, uint8_t yEnd)
  {
    if(x < xEnd)
      {
	xPos[LINE] = x;
	yPos[LINE] = y;
	xLineEnd = xEnd;
	yLineEnd = yEnd;
      }
    else
      {
	xPos[LINE] = xEnd;
	yPos[LINE] = yEnd;
	xLineEnd = x;
	yLineEnd = y;
      }
    post writeLine();
  }
}
