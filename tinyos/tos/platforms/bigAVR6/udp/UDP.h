/*
*/

#ifndef bigAVR6UDP_H
	#define bigAVR6UDP_H


typedef struct{
	uint16_t srcPort;
	uint16_t dstPort;
	uint16_t length;
	uint16_t chkSum;
	uint16_t *payload;
}udpStruct;

#endif
