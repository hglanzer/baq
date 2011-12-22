module MyTimerC {
  
  uses interface Boot;
  uses interface Leds;

  uses interface GeneralIO as Out0;
  uses interface GeneralIO as Out1;
  uses interface GeneralIO as Out2;
  uses interface GeneralIO as Out3;
  uses interface GeneralIO as Out4;
  
  uses interface Timer<TMilli> as Timer0;
  uses interface Timer<TMilli> as Timer1;
}

implementation {

  event void Boot.booted(){
    call Out0.makeOutput();
    call Out1.makeOutput();
    call Out2.makeOutput();
    call Out3.makeOutput();
    call Out4.makeOutput();
    call Out0.set();
    call Out1.set();
    call Out2.set();
    call Out3.set();
    call Out4.set();
    call Timer0.startPeriodic( 1000 );
    call Timer1.startPeriodic( 500 );
  }
  
  event void Timer0.fired(){
    //PORTH ^= _BV(1);
    //_SFR_MEM8(0x102) ^= _BV(1);
    call Out0.toggle();
    call Out2.toggle();
    call Out4.toggle();
    /*call Leds.led0Toggle();*/
  }
  event void Timer1.fired(){
    /*PORTK ^= (1<<4);*/
    call Out1.toggle();
    call Out3.toggle();
    /*  call Leds.led1Toggle();*/
  }
  
}
