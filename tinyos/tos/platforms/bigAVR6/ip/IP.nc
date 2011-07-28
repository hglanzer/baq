interface IP
{
	command uint8_t sendDatagram(uint16_t *updPtr, uint8_t *destIP, uint16_t len);

	command uint8_t initStack();

	event void initDone();
	
	event void sendDone();
	
	event void hwInterrupt(uint16_t *info);
	//event void hwInterrupt(uint8_t src);
}
