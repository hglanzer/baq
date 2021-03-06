/*
* @author Markus Hartmann e9808811@student.tuwien.ac.at
*/

module ArbiterDemoC{
  uses interface Boot;
  uses interface LCD128x64;
  
  uses interface GeneralIO as Button0;
  uses interface GeneralIO as Button1;
    uses interface Timer<TMilli> as Timer0;

  uses interface Resource as Resource0; // connected to SharedResource()
  uses interface ResourceOperations as ResourceOperations0;
  uses interface Resource as Resource1; // connected to SharedResource()
  uses interface ResourceOperations as ResourceOperations1;
}
implementation{
  event void Boot.booted(){
    call LCD128x64.initLCD( 0x00 );
    call Button0.makeInput();
    call Button1.makeInput();
    call Timer0.startPeriodic( 500 );
  }
  event void Resource0.granted(){
    call LCD128x64.startWriteString( "Resource0 Granted ", 0 , 1 );
    call ResourceOperations0.operation( 0x0F );
  }
  event void Resource1.granted(){
    call LCD128x64.startWriteString( "Resource1 Granted ", 0 , 1 );
    call ResourceOperations1.operation( 0xF0 );
  }
  event void Timer0.fired(){
    if ( call Button0.get() ){
      if ( call Resource0.isOwner() ){
	call ResourceOperations0.operation( 0x00 );
	call Resource0.release();
	call LCD128x64.startWriteString( "Resource0 released ", 0 , 1 );
      } else {
	if ( !call Resource0.request() ){
	  call LCD128x64.startWriteString( "Resource0 busy   ", 0 , 1 );
	}
      }
    }

    if ( call Button1.get() ){
      if ( call Resource1.isOwner() ){
	call ResourceOperations1.operation( 0x00 );
	call Resource1.release();
	call LCD128x64.startWriteString( "Resource1 released ", 0 , 1 );
      } else {
	if ( !call Resource1.request() ){
	  call LCD128x64.startWriteString( "Resource1 busy   ", 0 , 1 );
	}
      }
    }
  }
  event void LCD128x64.initDone() {
    call LCD128x64.startWriteString( "ArbiterDemo", 0 , 0 );
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
