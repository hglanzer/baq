/*
	Harald Glanzer, 0727156 TU Wien

        lcd 2x16 is operated in 4Bit-mode
        R/W is connected to GND --> no read possible, busywait!
	REGSEL = 0 --> command
	REGSEL = 1 --> data  
*/



#define REGSEL  PC2
#define ENABLE  PC3

#define LCDDAT PORTC
#define LCDDDR  DDRC

#define DATA    1
#define COMM    0

#define EN_LOW  LCDDAT &= ~(1<<ENABLE)
#define EN_HIG  LCDDAT |= (1<<ENABLE)
#define EN_TRG  LCDDAT &= ~(1<<ENABLE); \
                LCDDAT |= (1<<ENABLE)

#define storeDATA       LCDDAT |= (1<<REGSEL)
#define storeCOMMAND    LCDDAT &= ~(1<<REGSEL)

#define CURSOR_ON_BLINK_ON      0
#define CURSOR_ON_BLINK_OFF     1
#define CURSOR_OFF		2
