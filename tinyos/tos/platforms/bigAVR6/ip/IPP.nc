/*
	Harald Glanzer, 0727156 TU Wien
*/

#include "IP.h"
#include "IEEE8023.h"

module IPP
{
	provides interface IP;
	provides interface IPcontrol;

	uses interface IEEE8023;
	uses interface ARP;
	uses interface Timer<TMilli> as ARPtimeout;
}

implementation
{
	static volatile uint8_t state = IPFRAME, timeout = 0, tmpdestIP[4], gateway[4], netmask[4];
	static volatile uint16_t ipLen, *localPtr, rxLen = 0;
	static volatile ipStruct ipData;

	command void IPcontrol.setIP(uint8_t *newIP, uint8_t *newgw, uint8_t *newnm)
	{
		// set ipData - struct
		ipData.srcIP[0] = newIP[0];
		ipData.srcIP[1] = newIP[1];
		ipData.srcIP[2] = newIP[2];
		ipData.srcIP[3] = newIP[3];
	
		gateway[0] = newgw[0];
		gateway[1] = newgw[1];
		gateway[2] = newgw[2];
		gateway[3] = newgw[3];

		netmask[0] = newnm[0];
		netmask[1] = newnm[1];
		netmask[2] = newnm[2];
		netmask[3] = newnm[3];

		call ARP.updateIPconfig(newIP);
	}

	uint16_t ipChksum(uint16_t len_ip_header)
	{
		uint32_t sum = 0;
		uint16_t word16 = 0, i = 0, *tmpPtr;

		tmpPtr =(uint16_t *)&ipData;

		// make 16 bit words out of every two adjacent 8 bit words in the packet
		// and add them up. we use 16bit - pointers, so we can iterate over the
		// 20byte - ip-header in just 10 loops.
		for (i=0;i<10;i++)
		{
			word16 =(( (*(tmpPtr+i)) & (0xFF00)) +( (*(tmpPtr+i)) & 0xFF));
			sum = sum + (uint32_t) word16;	
		}
	
		// take only 16 bits out of the 32 bit sum and add up the carries
		while (sum>>16)
		{
		  sum = (sum & 0xFFFF)+(sum >> 16);
		}

		// one's complement the result
		sum = ~sum;
		return (uint16_t)sum;
	}
	
	command uint8_t IP.sendDatagram(uint16_t *dataPtr, uint8_t *destIP, uint16_t len)
	{
		uint16_t tmp = 0;
		
		// must be done BEFORE checksum-calculation
		// see also IP.initStack 
		ipLen = len + 20;
		ipData.lengthH = (ipLen >> 8);
		ipData.lengthL = (ipLen & 0xFF);
		ipData.chkSumL = 0;
		ipData.chkSumH = 0;
		ipData.dstIP[0] = *(destIP+0);
		ipData.dstIP[1] = *(destIP+1);
		ipData.dstIP[2] = *(destIP+2);
		ipData.dstIP[3] = *(destIP+3);

		ipData.data = dataPtr;

		// header initially set - now we can calculate the checksum:
		tmp = ipChksum(ipLen);
		ipData.chkSumH = (tmp & 0xFF);
		ipData.chkSumL = (tmp >> 8);
		/* next step: routing-decision. what subnet does the packet belong to?
		// 2 possibilties:	* packet belongs to my subnet		--> send to corresponding host-MAC
					* packet does not belong to my subnet	--> send to gateway-MAC	
		*/

		if(											\
			((ipData.srcIP[0] & netmask[0]) == (ipData.dstIP[0] & netmask[0] )) &&	\
			((ipData.srcIP[1] & netmask[1]) == (ipData.dstIP[1] & netmask[1] )) &&	\
			((ipData.srcIP[2] & netmask[2]) == (ipData.dstIP[2] & netmask[2] )) &&	\
			((ipData.srcIP[3] & netmask[3]) == (ipData.dstIP[3] & netmask[3] )))
		{
			// belongs to my subnet. send directly to host
			tmpdestIP[0] = ipData.dstIP[0];
			tmpdestIP[1] = ipData.dstIP[1];
			tmpdestIP[2] = ipData.dstIP[2];
			tmpdestIP[3] = ipData.dstIP[3];
		}
		else
		{
			// belongs to other subnet. send packet to GATEWAY
			tmpdestIP[0] = gateway[0];
			tmpdestIP[1] = gateway[1];
			tmpdestIP[2] = gateway[2];
			tmpdestIP[3] = gateway[3];
		}
		call ARP.resolveIP((uint8_t *)tmpdestIP);
		return TRUE;
	}

	event void ARP.sendARPreply(uint16_t *replyPtr, uint8_t *dstMAC)
	{
		call IEEE8023.sendFrame(replyPtr, dstMAC, 28, 0);
	}

	/*
		last packet received was an ARP frame
		perhaps this was the reply to a recently sent request, so
		if a dataframe is to be sent, try to send it now
	*/
	event void ARP.gotReply()
	{
		if(state == ARPREQUEST)
		{
			call ARPtimeout.stop();
			call ARP.resolveIP((uint8_t *)tmpdestIP);
		}
	}

	/*
		gets signaled when IP <--> MAC isn't known yet
	*/
	event void ARP.ipNotFound(uint16_t *dataPtr)
	{
		state = ARPREQUEST;
		localPtr = dataPtr;
		call ARPtimeout.startOneShot(100);
		call IEEE8023.sendFrame(dataPtr, NULL, 28, 0);
	}

	/*
		arp - lookup was positive - send frame now
	*/
	event void ARP.ipResolved(uint8_t *dstMAC)
	{
		call ARPtimeout.stop();
		timeout = 0;
		state = IPFRAME;
		call IEEE8023.sendFrame((uint16_t *)&ipData, dstMAC, ipLen, 1);
	}

	/*
		setup static data
	*/
	command uint8_t IP.initStack()
	{
		timeout = 0;
		// this only needs to be done ONCE
		// init as much data as possible to save time later

		ipData.version = 0x45;	// l-nibble: version=ipv4 
					// h-nibble: IHL=ip header length as multiple of 4byte. 20byte when NO OPTIONS!
		ipData.TOS = 0x00;	// type of service, no priority

		ipData.identification = 0x6666;	// FIXME. konstante ok wenn keine framgmente erlaubt?
		ipData.flags_fragOffset = 0x00;	// FIXME. siehe identification...
		ipData.ttl = 0xFF;		// time to live
		ipData.prot = 0x11;		// constant for UDP

		call ARP.initStack();

		return call IEEE8023.init();
	}

	event void IEEE8023.gotDatagram(uint16_t frameLen, uint8_t *IEEE8023Frame)
	{
		/*
			BROADCAST
		if( (IEEE8023Frame[0] == 0xFF) && (IEEE8023Frame[1] == 0xFF) && (IEEE8023Frame[2] == 0xFF) && \
			(IEEE8023Frame[3] == 0xFF) && (IEEE8023Frame[4] == 0xFF) && (IEEE8023Frame[5] == 0xFF)) 
		{
			// this is ARP
			if( (IEEE8023Frame[12] == 0x08) && (IEEE8023Frame[13] == 0x06) )
			{
				call ARP.processARPbroadcast((uint8_t *)IEEE8023Frame);
			}
		}
		*/

		// this is ARP
		if((IEEE8023Frame[12] == 0x08) && (IEEE8023Frame[13] == 0x06))
		{
			call ARP.processARP((uint8_t *)IEEE8023Frame);
		}
		// this is IP
		else if((IEEE8023Frame[12] == 0x08) && (IEEE8023Frame[13] == 0x00))
		{
			/*
				belongs to MYIP
			*/
			if( (IEEE8023Frame[30] == ipData.srcIP[0]) && (IEEE8023Frame[31] == ipData.srcIP[1]) && 
				(IEEE8023Frame[32] == ipData.srcIP[2]) && (IEEE8023Frame[33] == ipData.srcIP[3]) )
			{
				// UDP
				if(IEEE8023Frame[23] == 0x011)
				{
					// FIXME: only constant IP header size(20byte) supported!!
					rxLen = IEEE8023Frame[17];
					rxLen |= (IEEE8023Frame[16]) << 8;

					// size of ip-header
					rxLen = rxLen - 20;
					signal IP.gotDatagram(rxLen, IEEE8023Frame + 34);
				}
				// ICMP
				else if(IEEE8023Frame[23] == 0x01)
				{

				}
				else
				{
					// unsupported protokoll
				}
			}
			// NOT MY BUSINESS
			else	
			{
			}
		}
		// WOL or other unsupported protocol
		else
		{

		}
	}

	event void IEEE8023.initDone(bool linkStatus)
	{
		signal IP.initDone(linkStatus);
	}

	event void IEEE8023.sendDone(void)
	{
		if(state == IPFRAME)
			signal IP.sendDone();
	}

	/*
		connect lower-level signal to udp-layer
	*/
	event void IEEE8023.hwInterrupt(uint8_t hwCode)
	{
		signal IP.hwInterrupt(hwCode);
	}

////////////////////////////    TimerARP    ///////////////////////////

	event void ARPtimeout.fired()
	{
		timeout++;
		if(timeout < ARP_TIMEOUTS)
		{
		//	call IEEE8023.sendFrame((uint16_t *)localPtr, NULL, 28, 0);
			call ARP.resolveIP((uint8_t *)tmpdestIP);
		}
		else
		{
			call ARPtimeout.stop();
			timeout = 0;
			signal IP.sendFailed();	
		}
	}
}
