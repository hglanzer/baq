configuration MyUARTAppC {
}
implementation {
  // components my app uses
  components MainC, MyUARTC, bigAVR6UARTBC;
  //components LCD128x64C;
  components new TimerMilliC() as Timer0;
  
  // wire app to other components
  MyUARTC.Boot -> MainC.Boot;
  //MyUARTC.LCD128x64 -> LCD128x64C;
  MyUARTC.bigAVR6UARTB -> bigAVR6UARTBC;
  MyUARTC.Timer0 -> Timer0;
  
}
