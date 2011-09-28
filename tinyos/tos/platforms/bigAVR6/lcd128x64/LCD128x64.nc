/*
	harald glanzer, TU wien

	interfacedefinition for component LCD128x64C
*/
interface LCD128x64
{

	command void initLCD(uint8_t pattern);


	/*
		write byte to adress x(0...127) / y(0...8 = **PAGE**)
	*/
	command void writeByte(uint8_t x, uint8_t y, uint8_t data);
	
	/*
		no posted task!  
	*/	
	command void writePixel(uint8_t x, uint8_t y, uint8_t on);

	/*
		no posted task!  
	*/	
	command void setPixel(uint8_t x, uint8_t y);

	/*
		if possible: write bar at 8bit-boundaries(in y-direction: 0, 8, 16, ...)
		and use width < 8 or width = multiple of 8 --> FASTER
	*/
	command void startWriteBar(uint8_t x, uint8_t y, uint8_t length, uint8_t width);
	
	command void startWriteRectangle(uint8_t x, uint8_t y, uint8_t a, uint8_t b);

	command void startWriteCircle(uint8_t xcenter, uint8_t ycenter, uint8_t radius);

	command void startWriteString(char *data, uint8_t x, uint8_t y);
	
	command void startWriteLine(uint8_t x, uint8_t y, uint8_t xEnd, uint8_t yEnd);

	command void startClearScreen(uint8_t pattern);
	
	event void initDone(void);
	
	event void circleWritten(void);
	
	event void stringWritten(void);
	
	event void rectangleWritten(void);
	
	event void lineWritten(void);
	
	event void barWritten(void);

	event void screenCleared(void);
}
