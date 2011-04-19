#include "UDP.h"

module UDPP
{
	provides interface UDP;
	uses interface IP;
}

implementation
{
	udpStruct udpData; 

	command uint8_t UDP.sendData(uint16_t *dataPtr, uint8_t *destPtr, uint16_t srcPort, uint16_t destPort, uint8_t len)
	{
		// FIXME: busy - state?

		udpData.srcPort = srcPort;
		udpData.dstPort = destPort;
		udpData.chkSum = 6667;		// FIXME
		udpData.length = len + 0x08;	// FIXME: stimmt so? 
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
		
		call IP.sendDatagram((uint16_t *)&udpData, destPtr);
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
}
