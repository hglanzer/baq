/*
	Harald Glanzer, 0727156 TU Wien
*/

#include "IP.h"
#include "IEEE8023.h"

module IPP
{
	provides interface IP;
	uses interface IEEE8023;
}

implementation
{
	static volatile uint8_t dstMAC[6], arpCache[10][CACHESIZE], arpReadPtr = 0, arpWritePtr = 0, state = IPFRAME;
	static volatile ipStruct ipData;
	arpStruct request, reply;

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
	
	/*
		if MAC/IP - combination already in cache, set MAC-Adress in ipData - struct
		else: send ARP-REQUEST
	*/
	uint8_t getMACforIP()
	{
		uint8_t count;

		for(count = 0; count < CACHESIZE; count++)
		{
			if(     (arpCache[0][arpReadPtr] == ipData.dstIP[0]) && \
				(arpCache[1][arpReadPtr] == ipData.dstIP[1]) && \
				(arpCache[2][arpReadPtr] == ipData.dstIP[2]) && \
				(arpCache[3][arpReadPtr] == ipData.dstIP[3]))
			{
				// MAC for DESTIP found --> 
				dstMAC[0] = arpCache[4][arpReadPtr];
				dstMAC[1] = arpCache[5][arpReadPtr];
				dstMAC[2] = arpCache[6][arpReadPtr];
				dstMAC[3] = arpCache[7][arpReadPtr];
				dstMAC[4] = arpCache[8][arpReadPtr];
				dstMAC[5] = arpCache[9][arpReadPtr];

				return TRUE;
			}
			else	// POSTinc / assumption: most of the time, packets will go to same MAC, so readPtr points to right MAC/IP immedeatly
			{
				arpReadPtr++;
			}
			if(arpReadPtr == CACHESIZE)
				arpReadPtr = 0;
		}
		return FALSE;
	}

	command uint8_t IP.sendDatagram(uint16_t *dataPtr, uint8_t *destIP, uint16_t len)
	{
		uint16_t tmp = 0, *ipHeaderPtr;

		ipHeaderPtr = (uint16_t *)&ipData;

		// must be done BEFORE checksum-calculation
		// see also IP.initStack 
		len = len + 20;
		ipData.lengthH = (len >> 8);
		ipData.lengthL = (len & 0xFF);
		ipData.chkSumL = 0;
		ipData.chkSumH = 0;
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
	
		if(getMACforIP())
		{
			state = IPFRAME;
			call IEEE8023.sendFrame((uint16_t *)&ipData, (uint16_t *)&dstMAC, len, 1);
		}
		else
		{
			dstMAC[0] = 0xFF;
			dstMAC[1] = 0xFF;
			dstMAC[2] = 0xFF;
			dstMAC[3] = 0xFF;
			dstMAC[4] = 0xFF;
			dstMAC[5] = 0xFF;
		
			request.dstMAC[0] = 0x00;
			request.dstMAC[1] = 0x00;
			request.dstMAC[2] = 0x00;
			request.dstMAC[3] = 0x00;
			request.dstMAC[4] = 0x00;
			request.dstMAC[5] = 0x00;
		
			request.arpTypeL = 0x01;
			state = ARPFRAME;
			call IEEE8023.sendFrame((uint16_t *)&request, (uint16_t *)&dstMAC, 28, 0);
		}

		return SUCCESS;
	}

	command uint8_t IP.initStack()
	{
		// this only needs to be done ONCE
		// init as much data as possible to save time later

		// init ARP - requeststruct
		request.hwTypeH = 0x00;
		request.hwTypeL = 0x01;
		request.protH = 0x08;
		request.protL = 0x00;
		request.hwSize = 0x06;
		request.protSize = 0x04;
		request.arpTypeH = 0x00;

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

		// init ipData - struct
		ipData.srcIP[0] = MY_IP0;
		ipData.srcIP[1] = MY_IP1;
		ipData.srcIP[2] = MY_IP2;
		ipData.srcIP[3] = MY_IP3;
		
		ipData.version = 0x45;	// l-nibble: version=ipv4 
					// h-nibble: IHL=ip header length as multiple of 4byte. 20byte when NO OPTIONS!
		ipData.TOS = 0x00;	// type of service, no priority

		ipData.identification = 0x6666;	// FIXME. konstante ok wenn keine framgmente erlaubt?
		ipData.flags_fragOffset = 0x00;	// FIXME. siehe identification...
		ipData.ttl = 0xFF;		// time to live
		ipData.prot = 0x11;		// constant for UDP

		return call IEEE8023.init();
	}

	uint8_t searchCache()
	{
		return TRUE;
	}

	event void IEEE8023.gotDatagram(uint16_t frameLen, uint8_t *IEEE8023Frame)
	//event void IEEE8023.gotDatagram(uint16_t frameLen, uint16_t *IEEE8023Frame)
	{
		// BROADCAST
		if( (IEEE8023Frame[0] == 0xFF) && (IEEE8023Frame[1] == 0xFF) && (IEEE8023Frame[2] == 0xFF) && \
			(IEEE8023Frame[3] == 0xFF) && (IEEE8023Frame[4] == 0xFF) && (IEEE8023Frame[5] == 0xFF)) 
		{
			// this is ARP
			if( (IEEE8023Frame[12] == 0x08) && (IEEE8023Frame[13] == 0x06) )
			{
				// this is ETHERNET - ARP for ipV4
				if( (IEEE8023Frame[14] == 0x00) && (IEEE8023Frame[15] == 0x01) && (IEEE8023Frame[16] == 0x08) && (IEEE8023Frame[17] == 0x00) )
				{
					// belongs to MYIP
					if( (IEEE8023Frame[38] == MY_IP0) && (IEEE8023Frame[39] == MY_IP1) && \
						(IEEE8023Frame[40] == MY_IP2) && (IEEE8023Frame[41] == MY_IP3) )
					{
						// this is ARP - **REQUEST**
						if( (IEEE8023Frame[20] == 0x00) && (IEEE8023Frame[21] == 0x01) )
						{
/*
							signal IP.hwInterrupt((uint16_t *)&"GOT ARP REQUEST");
*/
							request.dstIP[0] = IEEE8023Frame[12];
							request.dstIP[1] = IEEE8023Frame[13];
							request.dstIP[2] = IEEE8023Frame[14];
							request.dstIP[3] = IEEE8023Frame[15];

							request.dstMAC[0] = MACADR5;
							request.dstMAC[1] = MACADR4;
							request.dstMAC[2] = MACADR3;
							request.dstMAC[3] = MACADR2;
							request.dstMAC[4] = MACADR1;
							request.dstMAC[5] = MACADR0;
		
							dstMAC[0] = IEEE8023Frame[6];
							dstMAC[1] = IEEE8023Frame[7];
							dstMAC[2] = IEEE8023Frame[8];
							dstMAC[3] = IEEE8023Frame[9];
							dstMAC[4] = IEEE8023Frame[10];
							dstMAC[5] = IEEE8023Frame[11];

							request.arpTypeL = 0x02;
							state = ARPFRAME;
							call IEEE8023.sendFrame((uint16_t *)&request, (uint16_t *)&dstMAC, 28, 0);
						}
					}
					else
					{
						signal IP.hwInterrupt((uint16_t *)&"NOT MY BUSINESS");
					}
				}
			}
		}
		// UNICAST
		else	
		{
			// this is a ARP
			if((IEEE8023Frame[12] == 0x08) && (IEEE8023Frame[13] == 0x06))
			{
				if((IEEE8023Frame[20] == 0x00) && (IEEE8023Frame[21] == 0x02))
				{
					// save IP ...	
					arpCache[0][arpWritePtr] = IEEE8023Frame[28];
					arpCache[1][arpWritePtr] = IEEE8023Frame[29];
					arpCache[2][arpWritePtr] = IEEE8023Frame[30];
					arpCache[3][arpWritePtr] = IEEE8023Frame[31];
					
					// ... and corresponding MAC in arp-cache
					arpCache[4][arpWritePtr] = IEEE8023Frame[22];
					arpCache[5][arpWritePtr] = IEEE8023Frame[23];
					arpCache[6][arpWritePtr] = IEEE8023Frame[24];
					arpCache[7][arpWritePtr] = IEEE8023Frame[25];
					arpCache[8][arpWritePtr] = IEEE8023Frame[26];
					arpCache[9][arpWritePtr] = IEEE8023Frame[27];

					arpWritePtr++;
					if(arpWritePtr == CACHESIZE)
						arpWritePtr = 0;
				}
			}
			else
			{
				signal IP.gotDatagram(17, IEEE8023Frame + 34);
				//signal IP.gotDatagram(17, IEEE8023Frame + 17);
				//signal IP.gotDatagram(len, (uint16_t *)&IEEE8023Frame[14 + (len*4)]);	// FIXME: LEN IMPORTANT??
			}
		}
	}

	event void IEEE8023.initDone(void)
	{
		signal IP.initDone();
	}

	event void IEEE8023.sendDone(void)
	{
		if(state != ARPFRAME)
			signal IP.sendDone();
	}

	event void IEEE8023.hwInterrupt(uint16_t *info)
	//event void IEEE8023.hwInterrupt(uint8_t src)
	{
		signal IP.hwInterrupt(info);
		//signal IP.hwInterrupt(src);
	}
}
