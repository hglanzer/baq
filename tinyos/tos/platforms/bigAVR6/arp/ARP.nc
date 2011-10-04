/*
	Harald Glanzer, 0727156 TU Wien
*/
interface ARP
{
	command void resolveIP(uint8_t *ipPtr);

	command void initStack();
	
	command void processARP(uint8_t *IEEEFramePtr);

	event void ipResolved(uint8_t *macPtr);

	event void ipNotFound(uint16_t *dataPtr);
	
	event void gotReply(void);

	event void sendARPreply(uint16_t *replyPtr, uint8_t *dstMAC);
}

