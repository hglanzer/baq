module MyTimerC {
  
  uses interface Boot;
  //  uses interface Leds;
  uses interface Timer<TMilli> as Timer0;
  uses interface Timer<TMicro> as Timer1;
  uses interface GeneralIO as Out0;
  uses interface GeneralIO as Out1;

}

implementation {

  event void Boot.booted(){

    call Timer1.startPeriodic( 40 );
    //    call Timer1.startPeriodic( 40 );
    call Out0.makeOutput();
    call Out1.makeOutput();

  }

  event void Timer0.fired(){

    call Out0.toggle();

  }

  event void Timer1.fired(){

    call Out0.toggle();

   }

}