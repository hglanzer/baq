interface Ethernet
{
	/*
		initialize Ethernetboard
		params:
			48bit - MAC-address
	*/
	command uint8_t init(uint8_t *mac);

	event void initDone(void);
}
