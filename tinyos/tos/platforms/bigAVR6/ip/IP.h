/*
*/

#ifndef bigAVR6IP_H
	#define bigAVR6IP_H

#define ARPFRAME	0
#define IPFRAME		1

#define MY_IP0	192
#define MY_IP1	168
#define MY_IP2	1
#define MY_IP3	10

#define MY_NETMASK0	255
#define MY_NETMASK1	255
#define MY_NETMASK2	255
#define MY_NETMASK3	0

#define MY_GATEWAY0	192
#define MY_GATEWAY1	168
#define MY_GATEWAY2	1
#define MY_GATEWAY3	1

#define CACHESIZE	5

#define ARPFRAME	0
#define DATAFRAME	1

/*
	structure of ip-packet
	ATTENTION @ 16bit - fields, as length, chkSum.
	host byte order != network byte order. so instead of using htonl(), split
	this fields into 8bit - words and set this fields seperately. should be faster...

	ATTENTION: NO Fragmentation and NO ip-options supported. so the ip-header is alwas 20byte long
	and the idendtification and flags/frag-offset - fields are set to constants...
*/
typedef struct
{
	uint8_t version;		// combined version + IHL into one field
					// is constant 0x45 for fixed header length. ** NO ip-OPTIONS supported **
	uint8_t TOS;
	uint8_t lengthH;
	uint8_t lengthL;
	uint16_t identification;	// not used, so set constant value
	uint16_t flags_fragOffset;	// not used, so set constant value
	uint8_t ttl;
	uint8_t prot;
	uint8_t chkSumH;
	uint8_t chkSumL;
	uint8_t srcIP[4];
	uint8_t dstIP[4];
	uint16_t *data;			// pointer to udp-packet
}ipStruct;

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
