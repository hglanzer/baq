/*
	Harald Glanzer, 0727156 TU Wien
*/

#include "ARP.h"

module ARPP
{
	provides interface ARP;
}

implementation
{
	static volatile arpStruct request;
	static volatile uint8_t arpCache[CACHESIZE][10], arpReadPtr = 0, arpWritePtr = 0, dstMAC[6];
	
	/*
		if MAC/IP - combination already in cache, hand over MAC-Adress
		else: signal to send ARP-REQUEST
	*/
	uint8_t getMACforIP(uint8_t *dstIP)
	{
		uint8_t count;

		for(count = 0; count < CACHESIZE; count++)
		{
			if(     (arpCache[arpReadPtr][0] == dstIP[0]) && \
				(arpCache[arpReadPtr][1] == dstIP[1]) && \
				(arpCache[arpReadPtr][2] == dstIP[2]) && \
				(arpCache[arpReadPtr][3] == dstIP[3]))
			{
				// MAC for DESTIP found --> 
				dstMAC[0] = arpCache[arpReadPtr][4];
				dstMAC[1] = arpCache[arpReadPtr][5];
				dstMAC[2] = arpCache[arpReadPtr][6];
				dstMAC[3] = arpCache[arpReadPtr][7];
				dstMAC[4] = arpCache[arpReadPtr][8];
				dstMAC[5] = arpCache[arpReadPtr][9];

				return TRUE;
			}
			/*
				POSTinc / assumption: most of the time, packets will go to same MAC,
				so readPtr points to right MAC/IP immedeatly
			*/
			else
			{
			        arpReadPtr++;
			}
			if(arpReadPtr == CACHESIZE)
			        arpReadPtr = 0;
		}
		return FALSE;
        }

	/*

	*/
	command void ARP.processARP(uint8_t *IEEE8023FramePtr)
	{
		// this is ETHERNET - ARP for ipV4
		if( (IEEE8023FramePtr[14] == 0x00) && (IEEE8023FramePtr[15] == 0x01) && (IEEE8023FramePtr[16] == 0x08) && (IEEE8023FramePtr[17] == 0x00) )
		{
			// this is ARP - **REQUEST**
			if( (IEEE8023FramePtr[20] == 0x00) && (IEEE8023FramePtr[21] == 0x01) )
			{
				/*
					someone wants to know MY mac adress, so send it
				*/
				if( (IEEE8023FramePtr[38] == MY_IP0) && (IEEE8023FramePtr[39] == MY_IP1) && \
					(IEEE8023FramePtr[40] == MY_IP2) && (IEEE8023FramePtr[41] == MY_IP3) )
				{
					request.dstIP[0] = IEEE8023FramePtr[28];
					request.dstIP[1] = IEEE8023FramePtr[29];
					request.dstIP[2] = IEEE8023FramePtr[30];
					request.dstIP[3] = IEEE8023FramePtr[31];

					request.dstMAC[0] = MACADR0;
					request.dstMAC[1] = MACADR1;
					request.dstMAC[2] = MACADR2;
					request.dstMAC[3] = MACADR3;
					request.dstMAC[4] = MACADR4;
					request.dstMAC[5] = MACADR5;
		
					dstMAC[0] = IEEE8023FramePtr[6];
					dstMAC[1] = IEEE8023FramePtr[7];
					dstMAC[2] = IEEE8023FramePtr[8];
					dstMAC[3] = IEEE8023FramePtr[9];
					dstMAC[4] = IEEE8023FramePtr[10];
					dstMAC[5] = IEEE8023FramePtr[11];

					request.arpTypeL = 0x02;

					//signal ARP.sendARPreply((arpStruct *)&request, (uint8_t *)dstMAC);
					signal ARP.sendARPreply((uint16_t *)&request, (uint8_t *)dstMAC);
				}
			}
			// this is an ARP REPLY - save the MAC/IP - pair
			else if((IEEE8023FramePtr[20] == 0x00) && (IEEE8023FramePtr[21] == 0x02))
			{
				// save IP ...	
				arpCache[arpWritePtr][0]= IEEE8023FramePtr[28];
				arpCache[arpWritePtr][1]= IEEE8023FramePtr[29];
				arpCache[arpWritePtr][2]= IEEE8023FramePtr[30];
				arpCache[arpWritePtr][3]= IEEE8023FramePtr[31];
				
				// ... and corresponding MAC in arp-cache
				arpCache[arpWritePtr][4] = IEEE8023FramePtr[22];
				arpCache[arpWritePtr][5] = IEEE8023FramePtr[23];
				arpCache[arpWritePtr][6] = IEEE8023FramePtr[24];
				arpCache[arpWritePtr][7] = IEEE8023FramePtr[25];
				arpCache[arpWritePtr][8] = IEEE8023FramePtr[26];
				arpCache[arpWritePtr][9] = IEEE8023FramePtr[27];
	
				arpWritePtr++;
				if(arpWritePtr == CACHESIZE)
					arpWritePtr = 0;
	
				signal ARP.gotReply();
			}
			else
			{
				// Unknown ARP OPCODE
			}
		}
	}

	command void ARP.resolveIP(uint8_t *dstIP)
	{
		if(getMACforIP(dstIP) == TRUE)
		{
			signal ARP.ipResolved((uint8_t *)dstMAC);
		}
		else
		{
			/*
				ip not in local arp cache. ARP Request must 
				be sent by component IPC
			*/
			request.dstIP[0] = dstIP[0];
			request.dstIP[1] = dstIP[1];
			request.dstIP[2] = dstIP[2];
			request.dstIP[3] = dstIP[3];
			request.arpTypeL = ARPOP_REQUEST;
			//signal ARP.ipNotFound((arpStruct *)&request);
			signal ARP.ipNotFound((uint16_t *)&request);
		}
	}

	command void ARP.initStack()
	{
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

		request.dstMAC[0] = 0x00;
		request.dstMAC[1] = 0x00;
		request.dstMAC[2] = 0x00;
		request.dstMAC[3] = 0x00;
		request.dstMAC[4] = 0x00;
		request.dstMAC[5] = 0x00;

		request.srcIP[0] = MY_IP0;
		request.srcIP[1] = MY_IP1;
		request.srcIP[2] = MY_IP2;
		request.srcIP[3] = MY_IP3;

		arpWritePtr = 0;
		arpReadPtr = 0;
	}

}
