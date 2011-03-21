interface TouchScreen
{

	command void getXY();

	command void isPressed(bool on);

	/*
		parameter: unscaled / raw adc-values
	*/
	event void xyReady(uint16_t x, uint16_t y);

	event void tsPressed();
}
