#include "songs.h"

module MP3TestC{
  uses interface Boot;
  //uses interface SoftSPI;
  uses interface MP3;
  uses interface GeneralIO as Button0;
  uses interface GeneralIO as Button1;
  uses interface GeneralIO as Button2;
  uses interface Timer<TMilli> as Timer0;
  uses interface Timer<TMilli> as Timer1;
  uses interface GLCD;
  uses interface MMC;
}
implementation{
  enum { BLOCK_SIZE = 32 };
  //enum { X_1 = 8, Y_1 = 32, A_1 = 48, B_1 = 24, X_2 = ( 128 - (8+48) ) };
  enum { RVS_X = 0, RVS_Y = 31, RVS_A = 32, RVS_B = 24 };
  enum { PLAY_X = 48, PLAY_Y = 31, PLAY_A = 32, PLAY_B = 24 };
  enum { FWD_X = 95, FWD_Y = 31, FWD_A = 32, FWD_B = 24 };
  enum { PRESS_PAUSE_TIME = 950 };

  enum { START_1 = 0x6, START_2 = 0x23F67, START_3 = 0x30B71, END_ADDRESS = 0x3F97A };

  /*uint8_t x1 = 8;
    uint8_t y1 = 32;
    uint8_t a1 = 48;
    uint8_t b1 = 24;

    uint8_t x2;
    x2 = ( 128-(8+48) );*/

  uint32_t blockAddr = 0;
  uint32_t nextAddress;
  char playTime[] = { '0', '0', ':', '0', '0', '\0'};
  uint8_t *dataBuffer;
  bool play = FALSE;
  bool dataReady = FALSE;
  bool refresh = FALSE;
  bool keypressed = FALSE;
  /*             12345678901234567890*/
  char title[21] = {'1','2','3','4','5','6','7','8','9','0','1','2','3','4','5','6','7','8','9','0','\0' };
  char artist[21] = {'1','2','3','4','5','6','7','8','9','0','1','2','3','4','5','6','7','8','9','0','\0' };
  char trackStr[21] = {'T','r','a','c','k',':','0','1','/','0','3',' ','-',' ','0','0',':','0','0',' ','\0' };
  /*              12345678901234567890*/
  uint8_t track = 1;
  enum{ CALIBRATION, LINE0, LINE1, LINE2, LINE3, LINE4, LINE5, LINE6, LINE7,LINE8, LINE9, LINE10, LINE11,  NONE };

  enum { VOLUME = 250};
  
  uint8_t paintState = CALIBRATION;

  char itosBuffer[] = {'0', '0', '0', '0', '0', '\0'};
  char *itos( uint16_t i );

  void paintLCD( void );
  void forward( void );
  void reverse( void );

  //struct song *curSong;

  //static struct song song1, song2, song3, song4, song5, song6;

  event void Boot.booted(){
    //uint8_t i;

    call MMC.init();
    call Button0.makeInput();
    call Button1.makeInput();
    call Button2.makeInput();
    call GLCD.initLCD( 0x00 );
    //call Timer0.startPeriodic( 200 );
    //call Timer1.startPeriodic( 200 );
    strncpy(artist, "AC/DC               ", 20);
    strncpy(title, "Highway To Hell     ", 20);
    
    //for ( i = 0; i< 21; i++ ){
      //artist[i] = 61;
      //title[i] = 61;
    //}
    
    //title[21] = '/0';
    //artist[21] = '/0';

    if ( !call MP3.init() ){
      call GLCD.startWriteString( "MP3 Init Error", 0, 1 );
    }
    call MP3.setVolume( VOLUME );
  }

  /*task void readPlaytime(){
    uint16_t temp = 0;
    if ( call MP3.isReady() ){
      playTime[0] = '0';
      playTime[1] = '0';
      playTime[3] = '0';
      playTime[4] = '0';
      temp = call MP3.readRegister( 0x04 );
      while (temp >= 600){
	temp -= 600;
	playTime[0]++;
      }
      while (temp >= 60){
	temp -= 60;
	playTime[1]++;
      }
      while (temp >= 10){
	temp -= 10;
	playTime[3]++;
      }
      playTime[4] += temp;
      call GLCD.startWriteString( playTime, 84, 0 );
    }
    if ( play ){
      post readPlaytime();
    }
  }
  */
  task void readMMCData(){
    if ( play ){
      call MMC.readBlock( blockAddr );
    }
  }

  task void writeMP3Data(){
    if ( call MP3.isReady() ){
      call MP3.writeData( dataBuffer, BLOCK_SIZE );
      post readMMCData();
    } else {
      post writeMP3Data();
    }
  }

  event void Timer0.fired(){
    uint16_t temp = 0;
    if ( call MP3.isReady() ){
      playTime[0] = '0';
      playTime[1] = '0';
      playTime[3] = '0';
      playTime[4] = '0';
      temp = call MP3.readRegister( 0x04 );
      while (temp >= 600){
	temp -= 600;
	playTime[0]++;
      }
      while (temp >= 60){
	temp -= 60;
	playTime[1]++;
      }
      while (temp >= 10){
	temp -= 10;
	playTime[3]++;
      }
      playTime[4] += temp;
      call GLCD.startWriteString( playTime, 84, 0 );
    }

    /*    if ( call Button0.get() ){
      call MP3.setVolume( 230 );
      }    
    if ( call Button1.get() ){
      call MP3.setVolume( 200 );
    }
    if ( call Button2.get() ){
      call MP3.setVolume( 30 );
    }
    */
    //playTime = call MP3.readRegister( 0x04 );
    //call GLCD.startWriteString( itos(playTime), 83, 0 );
  }

  event void Timer1.fired(){
    keypressed = FALSE;
  }

  event void MMC.initDone(){
  }

  event void MMC.blockReady( uint8_t *data ){
    dataBuffer = data;
    dataReady = TRUE;
    if ( blockAddr > nextAddress ){
      forward();      
    }
    blockAddr++;
    post writeMP3Data();
  }

  event void MMC.error( uint8_t *errStr ){
    dataReady = FALSE;
    call GLCD.startWriteString( (char *) errStr, 5 , 1 );
  }

  event void GLCD.initDone() {
    paintState = LINE0;
    paintLCD();
  }

  event void GLCD.barWritten() {
    paintLCD();
  }
  event void GLCD.screenCleared() {
    paintState = LINE0;
    paintLCD();
  }
  event void GLCD.lineWritten() {
    paintLCD();
  }
  event void GLCD.circleWritten() {
    paintLCD();
  }
  event void GLCD.rectangleWritten() {
    paintLCD();
  }
  event void GLCD.stringWritten() {
    if (refresh){
      paintLCD();
    }
  }
  event void GLCD.tsPressed() {
    call GLCD.getXY();
  }
  event void GLCD.calibrated() {
    call GLCD.isPressed( 1 );
    paintState = LINE0;
  }

  event void GLCD.xyReady( uint16_t x, uint16_t y ) {
    uint16_t x_c = x;
    uint16_t y_c = (64-y);
    call GLCD.isPressed( 1 );
    if (!keypressed){
      if ( y_c > RVS_Y ){ 
	/* height OK */
	if ( x_c < ((RVS_X + RVS_A) - 8)){
	  /* *** Reverse Pressed *** */
	  keypressed = TRUE;
    	  reverse();
	  call Timer1.startOneShot( PRESS_PAUSE_TIME );
	} else {
	  if ( x_c > (PLAY_X + 1) && x_c < ((PLAY_X + PLAY_A) - 12)) {
	    /* *** Play/Stop Pressed *** */
	    keypressed = TRUE;
	    call Timer1.startOneShot( PRESS_PAUSE_TIME );
	    if ( play ){
	      play = FALSE;
	      call GLCD.startWriteString( "PLAY", 52, 5 );
	    } else {
	      play = TRUE;
	      //post readPlaytime();
	      post readMMCData();
	      call GLCD.startWriteString( "STOP", 52, 5 );
	    }	  
	  } else {
	    if ( x_c > (FWD_X + 8) && x_c < 128 ){
	      /* *** FWD Pressed *** */
	      keypressed = TRUE;
	      forward();
	      call Timer1.startOneShot( PRESS_PAUSE_TIME );
	      //call GLCD.startWriteString( "FWD ", 40, 1 );
	    } else {
	      /* nothing happened */
	    }
	  }
	}
      }
      /* deactivate touchscreen for some time to avoid spamming */
    } /* END if keypressed */
  }
  
  //uint16_t xmin, xmax, ymin, ymax;

  void forward( void ){
    //play = FALSE;
    switch (track){
    case 1:
      track = 2;
      blockAddr = START_2;
      /*               12345678901234567890 */
      strncpy(artist, "AC/DC               ", 20);
      strncpy(title, "Highway To Hell     ", 20);
      /*              12345678901234567890 */
      nextAddress = START_3;
      playTime[0] = '0';
      playTime[1] = '3';
      playTime[3] = '1';
      playTime[4] = '7';
      break;
    case 2:
      track = 3;
      blockAddr = START_3;
      /*               12345678901234567890 */
      strncpy(artist, "Van Halen           ", 20);
      strncpy(title, "Jump                ", 20);
      /*              12345678901234567890 */
      nextAddress = END_ADDRESS;
      playTime[0] = '0';
      playTime[1] = '4';
      playTime[3] = '0';
      playTime[4] = '1';
      break;
    case 3:
      track = 1;
      blockAddr = START_1;
      /*               12345678901234567890 */
      strncpy(artist, "Lady Gaga           ", 20);
      strncpy(title, "Bad Romance         ", 20);
      /*              12345678901234567890 */
      nextAddress = START_2;
      playTime[0] = '0';
      playTime[1] = '4';
      playTime[3] = '5';
      playTime[4] = '4';
      break;
    }

    //call MP3.writeRegister( 0x04, 0x00 );
    //call MP3.writeRegister( 0x04, 0x00 );
    paintState = LINE0;
    paintLCD();
  }

  void reverse( void ){
    switch (track){
    case 1:
      track = 3;
      blockAddr = START_3;
      /*               12345678901234567890 */
      strncpy(artist, "Van Halen           ", 20);
      strncpy(title, "Jump                ", 20);
      /*              12345678901234567890 */
      nextAddress = END_ADDRESS;
      playTime[0] = '0';
      playTime[1] = '4';
      playTime[3] = '0';
      playTime[4] = '1';
      break;
    case 2:
      track = 1;
      blockAddr = START_1;
      /*               12345678901234567890 */
      strncpy(artist, "Lady Gaga           ", 20);
      strncpy(title, "Bad Romance         ", 20);
      /*              12345678901234567890 */
      nextAddress = START_2;
      playTime[0] = '0';
      playTime[1] = '4';
      playTime[3] = '5';
      playTime[4] = '4';
      break;
    case 3:
      track = 2;
      blockAddr = START_2;
      /*               12345678901234567890 */
      strncpy(artist, "AC/DC               ", 20);
      strncpy(title, "Highway To Hell     ", 20);
      /*              12345678901234567890 */
      nextAddress = START_3;
      playTime[0] = '0';
      playTime[1] = '3';
      playTime[3] = '1';
      playTime[4] = '7';
      break;
    }

    //call MP3.writeRegister( 0x04, 0x00 );
    //call MP3.writeRegister( 0x04, 0x00 );
    paintState = LINE0;
    paintLCD();
  }

  /* set to TRUE to get new esw...*/
  void paintLCD( void ){
    refresh = TRUE;
    switch (paintState){
    case LINE0:
      //call GLCD.startWriteString( "Track:0_/03 - 00:00", 0 , 0 );
      trackStr[7] = ('0' + track);
      trackStr[14] = playTime[0];
      trackStr[15] = playTime[1];
      trackStr[17] = playTime[3];
      trackStr[18] = playTime[4];
      call GLCD.startWriteString( trackStr, 0, 0 );
      //call GLCD.startWriteString( "012345678901234567890", 0 , 0 );
      paintState = LINE1;
      break;
    case LINE1:
      call GLCD.startWriteString( artist, 0 , 1 );
      paintState = LINE2;
      break;
    case LINE2:
      call GLCD.startWriteString( title, 0 , 2 );
      paintState = LINE3;
      break;
    case LINE3:
      if (play){
	call GLCD.startWriteString( "<<     STOP     >>", 10 , 5 );
      } else {
	call GLCD.startWriteString( "<<     PLAY     >>", 10 , 5 );
      }
      paintState = LINE4;
      break;
    case LINE4:
      call GLCD.startWriteRectangle( RVS_X, RVS_Y, RVS_A, RVS_B);
      paintState = LINE5;
      break;
    case LINE5:
      call GLCD.startWriteRectangle( PLAY_X, PLAY_Y, PLAY_A, PLAY_B);
      paintState = LINE6;
      break;
    case LINE6:
      call GLCD.startWriteRectangle( FWD_X, FWD_Y, FWD_A, FWD_B);
      //paintState = LINE7;
      paintState = NONE;
      refresh = FALSE;
      call GLCD.isPressed( 1 );
      break;
    case LINE7:
      switch (track){
      case 1:
	call GLCD.startWriteString( "1", 42 , 0 );
	break;
      case 2:
	call GLCD.startWriteString( "2", 42 , 0 );
	break;
      case 3:
	call GLCD.startWriteString( "3", 42 , 0 );
	break;
      }
      paintState = NONE;
      refresh = FALSE;
      call GLCD.isPressed( 1 );
      break;
    case CALIBRATION:
      /* do nothing */
      break;
    default:
      paintState = NONE;
      /* do nothing*/
      break;
    }
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
