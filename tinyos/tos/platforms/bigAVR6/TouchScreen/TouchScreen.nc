interface TouchScreen
{

	command void calibrateTouchScreen(); 

	command void getXY();

	command void isPressed(bool on);

	/*
		TODO:liefert die skalierten x/y - werte
		ADC liefert zwar prinzipiell 10 bit - werte, skalierung auf
		8 bit sollte jedoch reichen
	*/
	event void xyReady(uint8_t x, uint8_t y);

	event void calibrated();

	event void tsPressed();
}
