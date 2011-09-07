module OneWireP{

  uses interface Timer<TMilli> as Timer0;
  uses interface GeneralIO as Bus;
  uses interface BusyWait<TMicro,uint16_t> as BusyWait;

  provides interface OneWire;

}

implementation{

  command void OneWire.init(void){
    
    call Bus.makeOutput();
    call Bus.set();
    call Bus.clr();
    call BusyWait.wait( 500 );
    call Bus.makeInput();
    call BusyWait.wait( 20 );
    
    if ( call Bus.get() == FALSE ){

      signal OneWire.initDone( FAIL  );

    } else {

      signal OneWire.initDone( SUCCESS );

    }



  }
  
  event void Timer0.fired(){
  }

}


