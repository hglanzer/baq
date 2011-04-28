interface IP
{
	command uint8_t sendDatagram(uint16_t *updPtr, uint8_t *destIP, uint16_t len);

	command uint8_t initStack();

	event void initDone();
	
	event void sendDone();
	
	async event void hwInterrupt(uint8_t src);
}
