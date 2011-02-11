enum{
	INIT		=	0,
	GOT_FIRST_POINT	=	1,
	GOT_OFFSETS	=	2,
	CALIBRATED	=	3,
};

#define DRIVE_A	PORTG |= (1<<3); \
		PORTG &= ~(1<<4)

#define DRIVE_B	PORTG &= ~(1<<3); \
		PORTG |= (1<<4)

#define DRIVE_RESET PORTG &= ~(1<<3); \
		PORTG &= ~(1<<4)

#define MEDIAN	0x3F0
