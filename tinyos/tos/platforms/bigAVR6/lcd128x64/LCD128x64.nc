interface LCD128x64
{

	command void initLCD(uint8_t pattern);


	/*
		write byte to adress x(0...127) / y(0...8 = **PAGE**)
	*/
	command void writeByte(uint8_t x, uint8_t y, uint8_t data);
	
	command void writePixel(uint8_t x, uint8_t y, uint8_t on);
	
	command void setPixel(uint8_t x, uint8_t y);

	command void writeBar(uint8_t x, uint8_t y, uint8_t width, uint8_t length);
	
	command error_t startWriteRectangle(uint8_t x, uint8_t y, uint8_t a, uint8_t b);

	command error_t startWriteCircle(uint8_t xcenter, uint8_t ycenter, uint8_t radius);

	command uint8_t startWriteString(char *data, uint8_t x, uint8_t y);
	
	command error_t startWriteLine(uint8_t x, uint8_t y, uint8_t xEnd, uint8_t yEnd);

	command error_t startClearScreen(uint8_t pattern);

	event void initDone(void);
	
	event void circleWritten(void);
	
	event void stringWritten(void);
	
	event void rectangleWritten(void);
	
	event void lineWritten(void);
}
