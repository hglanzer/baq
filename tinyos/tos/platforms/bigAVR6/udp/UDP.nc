interface UDP
{
	command uint8_t sendData(uint16_t *dataPtr, uint8_t *destPtr, uint16_t srcPort, uint16_t destPort, uint8_t len);

	command uint8_t initStack();

	event void initDone();

	event void sendDone();
}
