/*
	Harald Glanzer, 0727156 TU Wien

	implementation of component UDPC
	provides UDP stack
	
	NO checksum at UDP - level

	UDP - Header:

	-------------------------	Byte 0
	|			|
	|	SRC - PORT	|
	|			|
	-------------------------	Byte 2
	|			|
	|	DST - PORT	|
	|			|
	-------------------------	Byte 4
	|			|
	|	Length		|
	|			|
	-------------------------	Byte 6
	|			|
	|	Checksum	|
	|			|
	-------------------------	Byte 8
	|			|
	|			|
	~			~
	~	PAYLOAD		~
	~			~
	|			|
	|			|
	-------------------------	Byte X
*/
#include "UDP.h"

module UDPP
{
	provides interface UDP;
	uses interface IP;
}

implementation
{
	udpStruct udpData; 
	static volatile uint16_t listeningPort = 0;

	/*
		we don't calculate a checksum. if you need one - DIY
	*/
	uint16_t udpChksum(uint16_t *dataPtr, uint16_t len)
	{
		return 0;
	}

	/*
		setup the data-structure for the UDP-header and the pointer to the application-payload
	*/
	command uint8_t UDP.sendData(uint16_t *dataPtr, uint8_t *destPtr, uint16_t srcPort, uint16_t destPort, uint16_t len)
	{
		// FIXME: busy - state?

		// 16 - bit pointer arithmetics - shifting / masking necessary
		udpData.srcPortH = (srcPort >> 8);
		udpData.srcPortL = (srcPort & 0xFF);
		udpData.dstPortH = (destPort >> 8);
		udpData.dstPortL = (destPort & 0xFF);
		udpData.chkSum = udpChksum(dataPtr, len);	// NO checksum used. you can do this on the application level...
		//udpData.chkSum = 0x0000;			// NO checksum used. you can do this on the application level...
		len = len + 0x08;				// upd-length-field = PAYLOAD + UDP-Header(8byte)
		udpData.lengthL = (len & 0xFF);
		udpData.lengthH = (len >> 8);
		udpData.payload = dataPtr;

		/*
			Layer2 will take care of the packet:
		*/
		call IP.sendDatagram((uint16_t *)&udpData, destPtr, len);
		return SUCCESS;
	}

	command uint8_t UDP.initStack()
	{
		return call IP.initStack();
	}

	command uint8_t UDP.createSocket(uint16_t socket)
	{
		if(socket > 0)
		{
			listeningPort = socket;
			return SUCCESS;
		}
		else
			return FAIL;
	}

	/*
		got packet from layer 2
		strip off udp-header and hand over payload to application
	*/
	event void IP.gotDatagram(uint16_t len, uint8_t *udpPtr)
	{
		if(listeningPort == (uint16_t)*(udpPtr+2))
			signal UDP.gotDatagram(len, udpPtr + 8);
	}

	event void IP.initDone(uint8_t hwCode)
	{
		signal UDP.initDone(hwCode);
	}

	event void IP.sendFailed()
	{
		signal UDP.sendFailed();
	}

	event void IP.sendDone()
	{
		signal UDP.sendDone();
	}

	event void IP.hwInterrupt(uint8_t hwCode)
	{
		signal UDP.hwInterrupt(hwCode);
		//signal UDP.hwInterrupt(src);
	}
}
