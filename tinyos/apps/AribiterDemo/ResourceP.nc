/*
* @author Markus Hartmann e9808811@student.tuwien.ac.at
*/

module ResourceP{
  provides interface ResourceOperations;
  uses interface Leds;
  uses interface Timer<TMilli> as Timer0;
}
implementation{
  uint8_t ledValue;
  bool state;
  
  command error_t ResourceOperations.operation( uint8_t value ){
    ledValue = value;
    if ( value == 0x00 ){
      call Timer0.stop();
      call Leds.setPort( 0x00, 2 );
    } else {
      call Timer0.startPeriodic( 500 );
    }
    return SUCCESS;
  }

  event void Timer0.fired(){
    /* flash on PORTB */
    if ( state ){
      call Leds.setPort( 0x00, 2 );
      state = FALSE;
    } else {
      call Leds.setPort( ledValue, 2 );
      state = TRUE;
    }
  } 
  
}
