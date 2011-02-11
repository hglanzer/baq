/*
	PORTA	<->	DATA_LCD(8bit)
	PE2	-->	CS1
	PE3	-->	CS2
	PE4	-->	REGSEL
					0	-->	Command @ DB0-7
					1	-->	Data @ DB0-7
	PE5	-->	RW	
					0	-->	WRITE
					1	-->	READ
	PE6	-->	ENABLE
					WRITE:	uebernahme bei fallender flanke
					READ :	gueltige daten wenn HIGH
	PE7	-->	RESET

	BUSY	<--	DATA_LCD7

*/


#define DATA_OUT_GLCD   PORTA
#define DATA_IN_GLCD	PINA
#define DATA_DDR_GLCD	DDRA
#define CTRL_GLCD	PORTE
#define CTRL_DDR_GLCD	DDRE
#define CS0_GLCD        PE2
#define CS1_GLCD        PE3
#define REGSEL_GLCD     PE4
#define RW_GLCD         PE5
#define ENABLE_GLCD     PE6
#define RESET_GLCD      PE7


#define GLCD_ON_CTRL            0x3E    // 0011111X: lcd on/off control
#define GLCD_ON_DISPLAY         0x01    //              DB0: turn display on

#define GLCD_START_LINE         0xC0    // 11XXXXXX: set lcd start line

#define GLCD_SET_X_ADDR		0xB8    // 10111XXX: set lcd page (X) address
#define GLCD_SET_Y_ADDR		0x40    // 01YYYYYY: set lcd Y address

#define GLCD_STATUS_BUSY        0x80    // (1)->LCD IS BUSY
#define GLCD_STATUS_ONOFF       0x20    // (0)->LCD IS ON
#define GLCD_STATUS_RESET       0x10    // (1)->LCD IS RESET

#define GLCD_XPIXELS		128	// pixel width of entire display
#define GLCD_YPIXELS		64	// pixel height of entire display

#define	BUSY			0
#define IDLE			1

#define	RECTANGLE		0
#define CIRCLE			1
#define STRING			2
#define LINE			3

#define HORIZONTAL		0
#define UP			1
#define DOWN			2

#ifndef	_LCD128x64
#define	_LCD128x64
enum
{
	BUSY_STRING	=	1,
	BUSY_CIRCLE	=	2,
	BUSY_RECT	=	4,
	BUSY_LINE	=	8,
	BUSY_CLEAR	=	16,
};

#endif
