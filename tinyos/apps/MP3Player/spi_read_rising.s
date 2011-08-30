.equ PORT, 0x15 ; PORTC
.equ PIN, 0x13 ; PINC
.equ MISO, 1 ; PC1
.equ SCK, 0 ; PC0

.global spiReadByteRising
.func spiReadByteRising
spiReadByteRising:

	;init return with 0x00
	cbi PORT, SCK ; SCK to LOW ***
	ldi r24,0x00
	nop;
	
	;---------------
	;read byte
	;---------------
	
	;***************************************
	sbi PORT, SCK ; SCK to HIGH ***
	sbic 0x13, MISO
		sbr r24, 0b10000000
	cbi PORT, SCK ; SCK to LOW ***
	nop
	nop
	;***************************************
	;***************************************
	sbi PORT, SCK ; SCK to HIGH ***
	sbic 0x13, MISO
		sbr r24, 0b01000000
	cbi PORT, SCK ; SCK to LOW ***
	nop
	nop
	;***************************************
	;***************************************
	sbi PORT, SCK ; SCK to HIGH ***
	sbic 0x13, MISO
		sbr r24, 0b00100000
	cbi PORT, SCK ; SCK to LOW ***
	nop
	nop
	;***************************************
	;***************************************
	sbi PORT, SCK ; SCK to HIGH ***
	sbic 0x13, MISO
		sbr r24, 0b00010000
	cbi PORT, SCK ; SCK to LOW ***
	nop
	nop
	;***************************************
	;***************************************
	sbi PORT, SCK ; SCK to HIGH ***
	sbic 0x13, MISO
		sbr r24, 0b00001000
	cbi PORT, SCK ; SCK to LOW ***
	nop
	nop
	;***************************************
	;***************************************
	sbi PORT, SCK ; SCK to HIGH ***
	sbic 0x13, MISO
		sbr r24, 0b00000100
	cbi PORT, SCK ; SCK to LOW ***
	nop
	nop
	;***************************************
	;***************************************
	sbi PORT, SCK ; SCK to HIGH ***
	sbic 0x13, MISO
		sbr r24, 0b00000010
	cbi PORT, SCK ; SCK to LOW ***
	nop
	nop
	;***************************************
	;***************************************
	sbi PORT, SCK ; SCK to HIGH ***
	sbic 0x13, MISO
		sbr r24, 0b00000001
	cbi PORT, SCK ; SCK to LOW ***
	nop
	nop
	;***************************************
	
	ret
	
.endfunc
