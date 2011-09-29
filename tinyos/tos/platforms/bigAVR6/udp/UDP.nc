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

	event void initDone();

	event void sendDone();

	event void hwInterrupt(uint16_t *info);

	event void gotDatagram(uint16_t len, uint8_t *dataPtr);
}
