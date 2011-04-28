interface UDP
{
	command uint8_t sendData(uint16_t *dataPtr, uint8_t *destPtr, uint16_t srcPort, uint16_t destPort, uint16_t len);

	command uint8_t initStack();

	event void initDone();

	event void sendDone();

	async event void hwInterrupt(uint8_t src);
}
