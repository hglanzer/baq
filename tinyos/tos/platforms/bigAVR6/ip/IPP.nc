#include "IP.h"
#include "IEEE8023.h"

module IPP
{
	provides interface IP;
	uses interface IEEE8023;
}

implementation
{
	static volatile uint8_t dstMAC[6];
	ipStruct ipData;
	arpStruct request;

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
		uint16_t tmp = 0, *ipHeaderPtr;

		ipHeaderPtr = (uint16_t *)&ipData;

		// must be done BEFORE checksum-calculation
		ipData.version = 0x45;	// l-nibble: version=ipv4 
					// h-nibble: IHL=ip header length as multiple of 4byte. 20byte when NO OPTIONS!
		ipData.TOS = 0x00;	// type of service, no priority
		len = len + 20;
		ipData.lengthH = (len >> 8);
		ipData.lengthL = (len & 0xFF);
		ipData.identification = 0x6666;	// FIXME. konstante ok wenn keine framgmente erlaubt?
		ipData.flags_fragOffset = 0x00;	// FIXME. siehe identification...
		ipData.ttl = 0xFF;		// time to live
		ipData.prot = 0x11;		// constant for UDP
		ipData.chkSumL = 0;
		ipData.chkSumH = 0;
		
		ipData.srcIP[0] = MY_IP0;
		ipData.srcIP[1] = MY_IP1;
		ipData.srcIP[2] = MY_IP2;
		ipData.srcIP[3] = MY_IP3;
		
		ipData.dstIP[0] = *(destIP+0);
		ipData.dstIP[1] = *(destIP+1);
		ipData.dstIP[2] = *(destIP+2);
		ipData.dstIP[3] = *(destIP+3);

		ipData.data = dataPtr;

		// header initially set - now we can calculate the checksum:
		tmp = ipChksum(len);
		ipData.chkSumH = (tmp & 0xFF);
		ipData.chkSumL = (tmp >> 8);

		/* next step: routing-decision. what subnet does the packet belong to?
		// 2 possibilties:	* packet belongs to my subnet		--> send to corresponding host-MAC
					* packet does not belong to my subnet	--> send to gateway-MAC	
		*/

		if(											\
			(((ipData.srcIP[0] & MY_NETMASK0) & (ipData.dstIP[0] & MY_NETMASK0 )) == 0) &&	\
			(((ipData.srcIP[1] & MY_NETMASK1) & (ipData.dstIP[1] & MY_NETMASK1 )) == 0) &&	\
			(((ipData.srcIP[2] & MY_NETMASK2) & (ipData.dstIP[2] & MY_NETMASK2 )) == 0) &&	\
			(((ipData.srcIP[3] & MY_NETMASK3) & (ipData.dstIP[3] & MY_NETMASK3 )) == 0))
		{
			// belongs to my subnet. send directly to host
			request.dstIP[0] = ipData.dstIP[0];
			request.dstIP[1] = ipData.dstIP[1];
			request.dstIP[2] = ipData.dstIP[2];
			request.dstIP[3] = ipData.dstIP[3];
		}
		else
		{
			// belongs to other subnet. send packet to GATEWAY
			request.dstIP[0] = MY_GATEWAY0;
			request.dstIP[1] = MY_GATEWAY1;
			request.dstIP[2] = MY_GATEWAY2;
			request.dstIP[3] = MY_GATEWAY3;
		}
		
		dstMAC[0] = 0xFF;
		dstMAC[1] = 0xFF;
		dstMAC[2] = 0xFF;
		dstMAC[3] = 0xFF;
		dstMAC[4] = 0xFF;
		dstMAC[5] = 0xFF;


		// FIXME: ARP-request + arp-Table 
		//call IEEE8023.sendFrame((uint16_t *)&request, (uint16_t *)&dstMAC, 28, 0);

		dstMAC[0] = 0x00;
		dstMAC[1] = 0x16;
		dstMAC[2] = 0xcb;
		dstMAC[3] = 0xca;
		dstMAC[4] = 0x5d;
		dstMAC[5] = 0x53;

		call IEEE8023.sendFrame((uint16_t *)&ipData, (uint16_t *)&dstMAC, len, 1);

		return SUCCESS;
	}

	command uint8_t IP.initStack()
	{
		// this only needs to be done ONCE
		request.hwTypeH = 0x00;
		request.hwTypeL = 0x01;
		request.protH = 0x08;
		request.protL = 0x00;
		request.hwSize = 0x06;
		request.protSize = 0x04;
		request.arpTypeH = 0x00;
		request.arpTypeL = 0x01;

		request.srcMAC[0] = MACADR0;
		request.srcMAC[1] = MACADR1;
		request.srcMAC[2] = MACADR2;
		request.srcMAC[3] = MACADR3;
		request.srcMAC[4] = MACADR4;
		request.srcMAC[5] = MACADR5;

		request.srcIP[0] = MY_IP0;
		request.srcIP[1] = MY_IP1;
		request.srcIP[2] = MY_IP2;
		request.srcIP[3] = MY_IP3;

		request.dstMAC[0] = 0x00;
		request.dstMAC[1] = 0x00;
		request.dstMAC[2] = 0x00;
		request.dstMAC[3] = 0x00;
		request.dstMAC[4] = 0x00;
		request.dstMAC[5] = 0x00;

		return call IEEE8023.init();
	}

	event void IEEE8023.initDone(void)
	{
		signal IP.initDone();
	}

	event void IEEE8023.sendDone(void)
	{
		signal IP.sendDone();
	}

	event void IEEE8023.hwInterrupt(uint16_t *info)
	//event void IEEE8023.hwInterrupt(uint8_t src)
	{
		signal IP.hwInterrupt(info);
		//signal IP.hwInterrupt(src);
	}
}
