.equ PORT, 0x15 ; PORTC
.equ MOSI, 2 ; PC2
.equ SCK, 0 ; PC0

.global spiSendByteRising
.func spiSendByteRising
spiSendByteRising:

	;first param passed in r24

	;***************************************
	bst r24, 7; store bit in T reg
	sbi PORT, MOSI; set MOSI to high
	
	cbi PORT, SCK ; SCK to LOW ***
	
	brts tset7
		cbi PORT, MOSI ; PORTC POS4
	tset7:
		;already set - was not deleted
		
	sbi PORT, SCK ; SCK to HIGH ***
	;***************************************
	;***************************************
	bst r24, 6; store bit in T reg
	sbi PORT, MOSI; set MOSI to high
	
	cbi PORT, SCK ; SCK to LOW ***
	
	brts tset6
		cbi PORT, MOSI ; PORTC POS4
	tset6:
		;already set - was not deleted
		
	sbi PORT, SCK ; SCK to HIGH ***
	;***************************************
	;***************************************
	bst r24, 5; store bit in T reg
	sbi PORT, MOSI; set MOSI to high
	
	cbi PORT, SCK ; SCK to LOW ***
	
	brts tset5
		cbi PORT, MOSI ; PORTC POS4
	tset5:
		;already set - was not deleted
		
	sbi PORT, SCK ; SCK to HIGH ***
	;***************************************
	;***************************************
	bst r24, 4; store bit in T reg
	sbi PORT, MOSI; set MOSI to high
	
	cbi PORT, SCK ; SCK to LOW ***
	
	brts tset4
		cbi PORT, MOSI ; PORTC POS4
	tset4:
		;already set - was not deleted
		
	sbi PORT, SCK ; SCK to HIGH ***
	;***************************************
	;***************************************
	bst r24, 3; store bit in T reg
	sbi PORT, MOSI; set MOSI to high
	
	cbi PORT, SCK ; SCK to LOW ***
	
	brts tset3
		cbi PORT, MOSI ; PORTC POS4
	tset3:
		;already set - was not deleted
		
	sbi PORT, SCK ; SCK to HIGH ***
	;***************************************
	;***************************************
	bst r24, 2; store bit in T reg
	sbi PORT, MOSI; set MOSI to high
	
	cbi PORT, SCK ; SCK to LOW ***
	
	brts tset2
		cbi PORT, MOSI ; PORTC POS4
	tset2:
		;already set - was not deleted
		
	sbi PORT, SCK ; SCK to HIGH ***
	;***************************************
	;***************************************
	bst r24, 1; store bit in T reg
	sbi PORT, MOSI; set MOSI to high
	
	cbi PORT, SCK ; SCK to LOW ***
	
	brts tset1
		cbi PORT, MOSI ; PORTC POS4
	tset1:
		;already set - was not deleted
		
	sbi PORT, SCK ; SCK to HIGH ***
	;***************************************	
	;***************************************
	bst r24, 0; store bit in T reg
	sbi PORT, MOSI; set MOSI to high
	
	cbi PORT, SCK ; SCK to LOW ***
	
	brts tset0
		cbi PORT, MOSI ; PORTC POS4
	tset0:
		;already set - was not deleted
		
	sbi PORT, SCK ; SCK to HIGH ***
	;***************************************
	
	ret
.endfunc
