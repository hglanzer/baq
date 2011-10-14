#ifndef bigAVR6ARP_H
#define bigAVR6ARP_H

#define ARPOP_REQUEST	0x01
#define ARPOP_REPLY	0x02

#define CACHESIZE	3

/*
        structure of arp - REQUEST
*/

typedef struct
{
	uint8_t hwTypeH;
	uint8_t hwTypeL;
	uint8_t protH;
	uint8_t protL;
	uint8_t hwSize;
	uint8_t protSize;
	uint8_t arpTypeH;
	uint8_t arpTypeL;
	uint8_t srcMAC[6];
	uint8_t srcIP[4];
	uint8_t dstMAC[6];
	uint8_t dstIP[4];
}arpStruct;

#endif
