module MyUARTC {

	// interfaces used by this module
	uses interface Boot;
	uses interface LCD128x64;
	uses interface bigAVR6UART0;
	uses interface Timer<TMilli> as Timer0; 

}

implementation {

	// implementation of THIS module

	char* counter = "9";


	event void Boot.booted(){
	
		call LCD128x64.initLCD(0x00);
	
	}

	event void bigAVR6UART0.receivedByte( uint8_t byte ){

	}

	event void bigAVR6UART0.receiveDone( uint8_t* buf, uint16_t len, error_t error ){

	}

	event void bigAVR6UART0.sendDone( uint8_t* buf, uint16_t len, error_t error ){

	}

	task void greetWorld(void){

	  call bigAVR6UART0.send("Hello World!\n\r",15 );	         
	  
	}

	task void writeLCD(void){

	  call LCD128x64.startWriteString(counter, 78, 0);

	}


	event void Timer0.fired(){
		
	  post greetWorld();
	  post writeLCD();
	  counter[0]--;
		
	  if (counter[0] == '0'){
	    counter[0] = '9';
	  }
		
	}

	event void LCD128x64.initDone() {
		
		call LCD128x64.startWriteString("Lift off in: ", 0, 0);
		call Timer0.startPeriodic( 1000 );
		
	}
	event void LCD128x64.barWritten() {

	}
	event void LCD128x64.screenCleared() {

	}
	event void LCD128x64.lineWritten() {

	}
	event void LCD128x64.circleWritten() {

	}
	event void LCD128x64.rectangleWritten() {

	}
	event void LCD128x64.stringWritten() {

	}
	
}
