enum{
	INIT		=	0,
	DUMMY_FIRST_X	=	1,
	FIRST_X		=	2,
	DUMMY_FIRST_Y	=	3,
	FIRST_Y		=	4,
	FINISHED	=	5,
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

