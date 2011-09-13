#define TOGGLE_PERIOD 50

module SpeedTestC{
  uses interface Boot;
  uses interface LCD2x16;
  uses interface GeneralIO as Measure0;
  uses interface Timer<TMilli> as Timer0;
}
implementation{

  char itosBuffer[] = {'0', '0', '0', '0', '0', '\0'};
  char *itos( uint16_t i );

  event void Boot.booted(){
    call LCD2x16.init( 0x02 );
    call Measure0.makeOutput();
    call Measure0.set();
    call Timer0.startPeriodic( TOGGLE_PERIOD );
  }

  event void Timer0.fired(){
    call Measure0.toggle();
  }

  event void LCD2x16.LcdInitDone(){
    call LCD2x16.clearDisplay();
    call LCD2x16.sendString( itos(TOGGLE_PERIOD*2), 5, 0, 0 );   
    call LCD2x16.sendString( "ms", 2, 0, 5 );
  }

  char *itos(uint16_t i){
    itosBuffer[0] = '0';
    itosBuffer[1] = '0';
    itosBuffer[2] = '0';
    itosBuffer[3] = '0';
    itosBuffer[4] = '0';
    while (i >= 10000){
      itosBuffer[0]++;
      i -= 10000;
    }
    while (i >= 1000){
      itosBuffer[1]++;
      i -= 1000;	
    }
    while (i >= 100){
      itosBuffer[2]++;
      i -= 100;	
    }
    while (i >= 10){
      itosBuffer[3]++;
      i -= 10;	
    }
    itosBuffer[4] += i;
    return itosBuffer;
  }
}
