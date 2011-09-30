interface IP
{
	command uint8_t sendDatagram(uint16_t *updPtr, uint8_t *destIP, uint16_t len);
	
	command uint8_t initStack();

	event void initDone(bool linkStatus);
	
	event void sendDone();
	
	event void sendFailed();
	
	event void hwInterrupt(uint8_t hwCode);

	event void gotDatagram(uint16_t len, uint8_t *udpPtr);
	//event void gotDatagram(uint16_t len, uint16_t *udpPtr);
}
