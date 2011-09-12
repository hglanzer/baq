module TouchTestC{
  uses interface Boot;
  uses interface GeneralIO as Button0;
  uses interface GeneralIO as Button1;
  uses interface Timer<TMilli> as Timer0;
  uses interface Timer<TMilli> as Timer1;
  uses interface GLCD;
}
implementation{

  char itosBuffer[] = {'0', '0', '0', '0', '0', '\0'};
  char *itos( uint16_t i );

  char str[24];
  //char *str;

  void paintLCD( void );
  uint8_t pstate;
  uint16_t x_cmin, x_cmax, y_cmin, y_cmax;
  uint16_t x_c,y_c;
  
  enum { L0 , L1, L2, L3, L4, L5, L6, L7, L8, L9, CALIBRATE=55, CALIBRATE_DONE=66, NONE=255 };
  
  event void Boot.booted(){
    pstate = CALIBRATE;  
    call GLCD.initLCD( 0x00 );
    call Timer0.startPeriodic( 200 );
  }

  event void Timer0.fired(){
    if ( pstate == NONE ){
      call GLCD.getXY();
    }
  }

  event void Timer1.fired(){
    call GLCD.startClearScreen( 0x00 );
  }

  event void GLCD.initDone() {
    pstate = CALIBRATE;
    call GLCD.calibrateTouchScreen();
  }

  event void GLCD.barWritten() {
    paintLCD();
  }
  event void GLCD.screenCleared() {
    if ( pstate != CALIBRATE ){
      pstate = L0; /* repaint */
      paintLCD();
    }    
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
    paintLCD();
  }
  event void GLCD.tsPressed() {
    call GLCD.getXY();
  }
  event void GLCD.calibrated() {
    //call GLCD.isPressed(TRUE);
    pstate = CALIBRATE_DONE;
    paintLCD();
  }
  
  enum { X_1=40, Y_1=40, A_1=48, B_1=24 };
  bool inside = FALSE;

  event void GLCD.xyReady( uint16_t x, uint16_t y ) {
    x_c = x;
    y_c = y;
    call GLCD.setPixel( x_c, ( 64 - y_c) );
    call GLCD.getCalibration( &x_cmin, &x_cmax, &y_cmin, &y_cmax );
    if ( pstate != CALIBRATE ){
      if ( (x_c > X_1) && (x_c < (X_1+A_1)) && ((64-y_c) > Y_1)  && ((64-y_c)<(Y_1+B_1)) ){
	inside = TRUE;
      } else {
	inside = FALSE;
      }
      pstate = L1;
      paintLCD();
    }
  }
  
  
  void paintLCD( void ){
    //pstate = NONE;
    switch (pstate){
    case L0:
      pstate = L1;
      call GLCD.startWriteString( "Touchscreen Test", 0 , 0 );
      break;
    case L1:
      str[0] = '\0';
      strcat( str, "x/y:" );
      strcat( str, itos(x_c) );
      strcat (str, "/");
      strcat( str, itos(y_c) );
      pstate = L2;
      call GLCD.startWriteString( str, 0 , 1 );
      break;
    case L2:
      str[0] = '\0';
      strcat( str, "x/y_cmin:" );
      strcat( str, itos(x_cmin) );
      strcat (str, "/");
      strcat( str, itos(y_cmin) );
      pstate = L3;
      call GLCD.startWriteString( str, 0 , 2 );
      break;
    case L3:
      str[0] = '\0';
      strcat( str, "x/y_cmax:" );
      strcat( str, itos(x_cmax) );
      strcat (str, "/");
      strcat( str, itos(y_cmax) );
      pstate = L4;
      call GLCD.startWriteString( str, 0 , 3 );
      break;
    case L4:
      call GLCD.startWriteRectangle( X_1, Y_1, A_1, B_1 );
      if ( inside ){
	call GLCD.startWriteString( "IN ", 0 , 6 );      
      } else {
	call GLCD.startWriteString( "OUT", 0 , 6 );      
      }
      pstate = NONE;
      break;
    case L5:
      pstate = NONE;
      break;
    case L6:
      pstate = NONE;
      break;
    case L7:
      pstate = NONE;
      break;
    case L8:
      pstate = NONE;
      break;
    case L9:
      pstate = NONE;
      call GLCD.startWriteString( "Calib. done", 0 , 7 );
      break;
    case NONE:
      /* do nothing */
      break;
    case CALIBRATE:
      /* do nothing */
      break;
    case CALIBRATE_DONE:
      call GLCD.startWriteString( "Calib. done", 0 , 7 );
      call Timer1.startOneShot( 1000 );
      pstate = NONE;
      break;
    default:
      pstate = NONE;
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
