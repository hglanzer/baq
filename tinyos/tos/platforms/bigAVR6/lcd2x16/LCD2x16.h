/*
        lcd 2x16 wird im 4Bit-Modus betrieben
        R/W ist schaltungstechnisch auf LOW gezogen --> kein READ moeglich
	REGSEL = 0 --> Commando
	REGSEL = 1 --> Daten        
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

