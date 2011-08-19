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
	
	event void hwInterrupt(uint16_t *info);
	//event void hwInterrupt(uint8_t src);

	event void gotDatagram(uint16_t len, uint8_t *IEEE8023frame);
	//event void gotDatagram(uint16_t len, uint16_t *IEEE8023frame);
}
