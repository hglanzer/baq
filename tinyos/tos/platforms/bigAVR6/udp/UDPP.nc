#include "UDP.h"

module UDPP
{
	provides interface UDP;
	uses interface IP;
}

implementation
{
	udpStruct udpData; 

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

		udpData.srcPortH = (srcPort >> 8);
		udpData.srcPortL = (srcPort & 0xFF);
		udpData.dstPortH = (destPort >> 8);
		udpData.dstPortL = (destPort & 0xFF);
		udpData.chkSum = 0x0000;		// NO checksum used. you can do this on the application level...
		len = len + 0x08;			// upd-length-field = PAYLOAD + UDP-Header(8byte)
		udpData.lengthL = (len & 0xFF);
		udpData.lengthH = (len >> 8);
		udpData.payload = dataPtr;

/*

// ZUGRIFF auf die payload - pointerarithmetik:
// ACHTUNG, 16bit-adressen. damit IMMER ZUGRIFF AUF 2byte, MASKIERUNG / SHIFTEN notwendig

while(1)
{
DDRA = 0xFF;
PORTA = (*(udpData.payload+2))>>8;
};
*/
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

	event void IP.initDone()
	{
		signal UDP.initDone();
	}

	event void IP.sendDone()
	{
		signal UDP.sendDone();
	}

	event void IP.hwInterrupt(uint16_t *info)
	//event void IP.hwInterrupt(uint8_t src)
	{
		signal UDP.hwInterrupt(info);
		//signal UDP.hwInterrupt(src);
	}
}
