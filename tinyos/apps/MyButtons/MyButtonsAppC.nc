configuration MyButtonsAppC {
}
implementation {

  components MainC, MyButtonsC, LCD128x64C;
  components HplAtm128GeneralIOC as IO;
  components new TimerMilliC() as Timer0;

  MyButtonsC -> MainC.Boot;
  MyButtonsC -> LCD128x64C.LCD128x64;
  MyButtonsC.Timer0 -> Timer0;
  MyButtonsC.Button1 -> IO.PortB5;
  MyButtonsC.Button2 -> IO.PortB6;
  MyButtonsC.Button3 -> IO.PortB7;

}





