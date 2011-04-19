interface IEEE8023
{
	/*
		initialize Ethernetboard
		params:
			48bit - MAC-address
	*/
	command uint8_t init();

	command uint8_t sendFrame(uint16_t *dataPtr, uint16_t *dstMAC);

	event void initDone(void);
	
	event void sendDone(void);
}
