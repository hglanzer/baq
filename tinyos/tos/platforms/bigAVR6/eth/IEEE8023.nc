interface IEEE8023
{
	/*
		initialize Ethernetboard
		params:
			48bit - MAC-address
	*/
	command uint8_t init();

	/*
		type	= TRUE	--> ARP
			= FALSE	--> standard-ip-packet
	*/
	command uint8_t sendFrame(uint16_t *dataPtr, uint16_t *dstMAC, uint16_t len, uint8_t type);

	event void initDone(void);
	
	event void sendDone(void);
}
