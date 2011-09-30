/*
	Harald Glanzer, 0727156 TU Wien

	Blocking version of LCD2x16C

        lcd 2x16 is operated in 4Bit-mode
        R/W is connected to GND --> no read possible!
	REGSEL = 0 --> command
	REGSEL = 1 --> data  
*/

#define LCDDAT PORTC
#define LCDDDR  DDRC

#define DATA    1
#define COMM    0

#define CURSOR_ON_BLINK_ON      0
#define CURSOR_ON_BLINK_OFF     1
#define CURSOR_OFF		2
