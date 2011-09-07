/*
* @author Markus Hartmann e9808811@student.tuwien.ac.at
*/

module SPITestC{
  uses interface Boot;
  
  uses interface GeneralIO as Button0;
  uses interface GeneralIO as Button1;
  uses interface Timer<TMilli> as Timer0;

  uses interface Resource as Resource0;
  uses interface SoftSPI as SoftSPI0;
  uses interface Resource as Resource1;
  uses interface SoftSPI as SoftSPI1;
}
implementation{
  event void Boot.booted(){
    call Button0.makeInput();
    call Button1.makeInput();
    call Timer0.startPeriodic( 500 );
    call Resource0.request();
  }
  event void Resource0.granted(){
  }
  event void Resource1.granted(){
  }

  event void Timer0.fired(){
    if ( call Button0.get() ){
      call SoftSPI0.sendByte( 0xF0 );
      call SoftSPI0.sendByte( 0x0F );
    }
    if ( call Button1.get() ){
    }
  }
}
