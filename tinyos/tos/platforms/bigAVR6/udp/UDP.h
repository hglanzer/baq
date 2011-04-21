/*
*/

#ifndef bigAVR6UDP_H
	#define bigAVR6UDP_H


typedef struct{
	uint8_t srcPortH;
	uint8_t srcPortL;
	uint8_t dstPortH;
	uint8_t dstPortL;
	uint8_t lengthH;
	uint8_t lengthL;
	uint16_t chkSum;
	uint16_t *payload;
}udpStruct;

#endif
