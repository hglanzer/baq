#define PRESCALER 250

#ifndef STATE_GUARD
#define STATE_GUARD

enum
{
        INITIALIZE	=       1,
        READY		=       2,
        READ		=       3,
        EJECTED		=       4,
	UNINIT		=	5,
	BUSY		=	6,
	LCDFINISHED	=	7,
	CLEARING	=	8
};

#endif
