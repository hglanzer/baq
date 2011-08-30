module OWTestC{

  uses interface Boot;
  uses interface bigAVR6UART0;
  uses interface OneWire;
  uses interface Timer<TMilli> as Timer0;
  uses interface Timer<TMicro> as Timer1;

}

implementation{

  char *str = "<NOT INIT>";

  event void Boot.booted(){

    call Timer0.startPeriodic( 2000 );
    //call Timer1.startPeriodic( 200 );

  }

  event void Timer0.fired(){

      call OneWire.init();

  }

  event void Timer1.fired(){
 
    //call OneWire.init();

  }

  event void OneWire.initDone( error_t msg ){
    
    if ( msg == FAIL ){

      str = "FAIL";

    } else {

      str = "YESSSS";

    }

      call bigAVR6UART0.send( str, strlen(str)+1 );

  }


  event void  bigAVR6UART0.receivedByte( uint8_t byte ){
    
    str = "Cmd: ";

    call OneWire.init();

    call bigAVR6UART0.send( str, strlen(str)+1 );

    if ( byte == 'i' ){

      str  = "init rcvd\n\r";
      call OneWire.init();
      call bigAVR6UART0.send( str, strlen(str)+1 );
    

    }

  }

  event void bigAVR6UART0.receiveDone( uint8_t* buf, uint16_t len, error_t error ){

  }

  event void bigAVR6UART0.sendDone( uint8_t* buf, uint16_t len, error_t error ){

  }

}
