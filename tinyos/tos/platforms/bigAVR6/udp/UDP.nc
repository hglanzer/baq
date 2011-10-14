/*
	Harald Glanzer, 0727156 TU Wien

	interfaces for component UDPC
*/
interface UDP
{
	/*
		to receive packets, a listeningport must set first
	*/
	command uint8_t createSocket(uint16_t socket);

	command uint8_t sendData(uint16_t *dataPtr, uint8_t *destPtr, uint16_t srcPort, uint16_t destPort, uint16_t len);

	command uint8_t initStack();

	event void initDone(bool linkStatus);

	event void sendDone();

	event void sendFailed();

	event void hwInterrupt(uint8_t hwCode);

	event void gotDatagram(uint16_t len, uint8_t *dataPtr);

	event void gotARP(uint16_t len, uint8_t *data);
}
