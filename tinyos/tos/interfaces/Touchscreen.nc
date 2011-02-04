/*
 * Copyright (c) 2005 Arch Rock Corporation

	harald glanzer
	interface um touchscreen ueber ADC @ atm128 sauber einbinden zu koennen
 */

interface TouchScreen {
  
	command void getXY();

	event void returnXY(uint16_t x, uint16_t y);
}
