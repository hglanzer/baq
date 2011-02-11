interface TouchScreen
{

	command void calibrateTouchScreen(); 

	command void getXY();

	/*
		TODO:liefert die skalierten x/y - werte
		ADC liefert zwar prinzipiell 10 bit - werte, skalierung auf
		8 bit sollte jedoch reichen
	*/
	event void xyReady(uint16_t x, uint16_t y);

	event void calibrated();
}
