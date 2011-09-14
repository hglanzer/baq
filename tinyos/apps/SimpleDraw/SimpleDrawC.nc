module SimpleDrawC{
  uses interface Boot;
  uses interface GeneralIO as Button0;
  uses interface GeneralIO as Button1;
  uses interface GeneralIO as Button2;
  uses interface GeneralIO as Button3;
  uses interface GeneralIO as Button4;
  uses interface GeneralIO as Button5;
  uses interface GeneralIO as Button6;
  uses interface GeneralIO as Button7;
  uses interface Timer<TMilli> as Timer0;
  uses interface GLCD;
}
implementation{

  bool dots = TRUE;

  event void Boot.booted(){
    call GLCD.initLCD( 0x00 );
    call Button0.makeInput();
    call Button1.makeInput();
    call Button2.makeInput();
    call Button3.makeInput();
    call Button4.makeInput();
    call Button5.makeInput();
    call Button6.makeInput();
    call Button7.makeInput();
    call Timer0.startPeriodic( 200 );
  }

  event void Timer0.fired(){
    if ( call Button0.get() ){
      call GLCD.startClearScreen( 0x00 );
    }
    if ( call Button1.get() ){
      call GLCD.startWriteString( "Hello World!", 10, 3 );
    }
    if ( call Button2.get() ){
      call GLCD.startWriteBar( 8, 40, 64, 16  );
    }
    if ( call Button3.get() ){
      call GLCD.startWriteLine( 0, 0, 127, 63 );
    }
    if ( call Button4.get() ){
      call GLCD.startWriteLine( 127, 0, 0, 63 );
    }
    if ( call Button5.get() ){
      call GLCD.startWriteCircle( 24, 20, 16 );      
    }
    if ( call Button6.get() ){
      call GLCD.startWriteRectangle( 80, 16, 28, 32 );
    }
    if ( call Button7.get() ){
      if ( dots ) {
	dots = FALSE;
	call GLCD.startWriteString( "Copy ", 0, 5 );
      } else {
	dots = TRUE;
	call GLCD.startWriteString( "Paint", 0, 5 );
      }
    }
    
  }

  event void GLCD.initDone() {
    call GLCD.calibrateTouchScreen();
  }

  event void GLCD.barWritten() {
  }
  event void GLCD.screenCleared() {
  }
  event void GLCD.lineWritten() {
  }
  event void GLCD.circleWritten() {
  }
  event void GLCD.rectangleWritten() {
  }
  event void GLCD.stringWritten() {
  }
  event void GLCD.tsPressed() {
    call GLCD.getXY();
  }
  event void GLCD.calibrated() {
    call GLCD.startWriteString( "Press D0-D7", 0, 2 );
    call GLCD.isPressed( 1 );
  }

  event void GLCD.xyReady( uint16_t x, uint16_t y ) {
    if (dots){
      call GLCD.setPixel( x, ( 64 - y) );
    } else {
      call GLCD.copyByte( x, ( 64 - y) );
    }
    call GLCD.isPressed( 1 );
  }
}
