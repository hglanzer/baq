module MyButtonsC {
  
  uses interface Boot;
  uses interface LCD128x64;
  uses interface GeneralIO as Button1;
  uses interface GeneralIO as Button2;
  uses interface GeneralIO as Button3;
  uses interface Timer<TMilli> as Timer0;

}

implementation {
  
  event void Boot.booted(){

    call LCD128x64.initLCD( 0x00 );

    call Button1.makeInput();
    call Button2.makeInput();
    call Button3.makeInput();

    call Timer0.startPeriodic( 200 );

  }

  event void Timer0.fired(){
    
    if ( call Button1.get() == TRUE ){

      call LCD128x64.startWriteString( "1", 0, 2 );

    } else {

      call LCD128x64.startWriteString( "-", 0, 2 );

    }

    
         
    if ( call Button2.get() == TRUE ){

      call LCD128x64.startWriteString( "2", 0, 3 );

    } else {

      call LCD128x64.startWriteString( "-", 0, 3 );

    } 
    
    
    if ( call Button3.get() == TRUE ){

      call LCD128x64.startWriteString( "3", 0, 4 );

    } else {

      call LCD128x64.startWriteString( "-", 0, 4 );

    } 
    
  }

  event void LCD128x64.initDone(){

    call LCD128x64.startWriteString( "Button Test ...", 0, 0 );

  }
  event void LCD128x64.barWritten(){

  }
  event void LCD128x64.screenCleared(){

  }
  event void LCD128x64.lineWritten(){

  }
  event void LCD128x64.circleWritten(){

  }
  event void LCD128x64.rectangleWritten(){

  }
  event void LCD128x64.stringWritten(){

  }
}
