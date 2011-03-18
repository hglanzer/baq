enum{
	INIT		=	0,
	DUMMY_FIRST_X	=	1,
	FIRST_X		=	2,
	DUMMY_FIRST_Y	=	3,
	FIRST_Y		=	4,
	DUMMY_SECOND_X	=	5,
	SECOND_X	=	6,
	DUMMY_SECOND_Y	=	7,
	SECOND_Y	=	8,
	GOT_OFFSETS	=	9,
	CALIBRATED	=	10,
};

#define DRIVE_A		PORTG |= (1<<3)
#define UNDRIVE_A	PORTG &= ~(1<<3)

#define DRIVE_B		PORTG |= (1<<4)
#define UNDRIVE_B	PORTG &= ~(1<<4)


#define READ_X		PORTF |= (1<<0)
#define UNREAD_X	PORTF &= ~(1<<0)

#define READ_Y		PORTF |= (1<<1)
#define UNREAD_Y	PORTF &= ~(1<<1)


#define MEDIAN		0x3F0

#define X_TRESHOLD	30
#define Y_TRESHOLD	60

#define X_MIN		50
#define X_MAX		855
#define X_DISTANCE	820

#define Y_MIN		128
#define Y_MAX		800
//#define Y_MAX		787
#define Y_DISTANCE	672
//#define Y_DISTANCE	659
#define DISTANCE	100	// differenz x_min/y_min - x_max/y_max resp.
