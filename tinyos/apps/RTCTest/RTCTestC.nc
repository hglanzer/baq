/**
 * @author Markus Hartmann e988811@student.tuwien.ac.at
 */

module RTCTestC{
  uses interface Boot;
  uses interface GeneralIO as Button5;
  uses interface GeneralIO as Button6;
  uses interface GeneralIO as Button7;
  uses interface LCD2x16;
  uses interface Timer<TMilli> as Timer0;
  uses interface RTC;
}
implementation{

  char itosBuffer[] = {'0', '0', '0', '0', '0', '\0'};
  char time_str[] = {'H', 'H', ':', 'M', 'M', ':', 'S', 'S', '\0'};
  char date_str[] = {'W', 'D', ' ', 'D', 'D', '/', 'M', 'M', '/','Y','Y', '\0'};
  char *itos( uint16_t i );
  error_t terror;
  rtc_time_t time;
  bool writeDone = FALSE;

  task void writeLCD();
  task void readTime();

  event void Boot.booted(){
    call Timer0.startPeriodic( 200 );
    call LCD2x16.init( 0x02 );
    call LCD2x16.clearDisplay();
    call Button5.makeInput();
    call Button6.makeInput();
    call Button7.makeInput();
    call LCD2x16.sendString( time_str, 8, 0, 0 ); 
    //post readTime();
  }

  

  event void Timer0.fired(){
    
    if ( call Button5.get() ){
      time.seconds = 0;
      time.minutes = 26;
      time.hours = 15;
      time.day = 3;
      time.date = 13;
      time.month = 10;
      time.year = 11;
      //call RTC.start( NULL );
      call RTC.start( &time );
    }  
    if ( call Button6.get() ){
      call RTC.stop();
      /*
      call LCD2x16.sendString( "STOP ", 5, 0, 0 );
      
      if ( terror == FAIL ){
	call LCD2x16.sendString( "FF", 2, 0, 0 );
      } else if ( terror == SUCCESS ){
	call LCD2x16.sendString( "OK", 2, 0, 0 );
	} */
    }  

    if ( call Button7.get() ){
      call RTC.control( RTC_OUT|RTC_SQWE|RTC_8KHZ );
      //call RTC.readTime( &time );
    }  

    call RTC.readTime( &time );
  }

  task void writeLCD(){
    call LCD2x16.sendString( time_str, 8, 0, 0 );     
  }

  task void readTime(){
    call RTC.readTime( &time );
  }

  event void RTC.timeReady( rtc_time_t *rdata ){
    
    itos( time.seconds );
    time_str[6] = itosBuffer[3];
    time_str[7] = itosBuffer[4];
    
    itos( time.minutes );
    time_str[3] = itosBuffer[3];
    time_str[4] = itosBuffer[4];
    
    itos( time.hours );
    time_str[0] = itosBuffer[3];
    time_str[1] = itosBuffer[4];
    
    itos( time.date );
    date_str[3] = itosBuffer[3];
    date_str[4] = itosBuffer[4];

    itos( time.month );
    date_str[6] = itosBuffer[3];
    date_str[7] = itosBuffer[4];

    itos( time.year );
    date_str[9] = itosBuffer[3];
    date_str[10] = itosBuffer[4];

    switch ( time.day ){
    case 0:
      date_str[0] = 'M';
      date_str[1] = 'O';
      break;
    case 1:
      date_str[0] = 'T';
      date_str[1] = 'U';
      break;
    case 2:
      date_str[0] = 'W';
      date_str[1] = 'E';
      break;
    case 3:
      date_str[0] = 'T';
      date_str[1] = 'H';
      break;
    case 4:
      date_str[0] = 'F';
      date_str[1] = 'R';
      break;
    case 5:
      date_str[0] = 'S';
      date_str[1] = 'A';
      break;
    case 6:
      date_str[0] = 'S';
      date_str[1] = 'U';
      break;
    }
    post writeLCD();
  }

  event void LCD2x16.stringWritten(){
    if (writeDone == TRUE){
      writeDone = FALSE;
      //post readTime();
    } else {
      writeDone = TRUE;
      call LCD2x16.sendString( date_str, 11, 1, 0 );     
    }
  }

  event void LCD2x16.displayCleared(){
    call LCD2x16.sendString( time_str, 8, 0, 0 ); 
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
