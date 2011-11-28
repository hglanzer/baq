module MyTimerC {
  
  uses interface Boot;
  uses interface Leds;

  uses interface GeneralIO as Out0;
  uses interface GeneralIO as Out1;
  
  uses interface Timer<TMilli> as Timer0;
  uses interface Timer<TMilli> as Timer1;
}

implementation {

  event void Boot.booted(){
    call Out0.makeOutput();
    call Out1.makeOutput();
    call Out0.set();
    call Out1.clr();
    call Timer0.startPeriodic( 100 );
    call Timer1.startPeriodic( 1000 );

  }
  
  event void Timer0.fired(){
    call Out0.toggle();
    call Leds.led0Toggle();
  }
  event void Timer1.fired(){
    call Out1.toggle();
    call Leds.led1Toggle();
  }
  
}
