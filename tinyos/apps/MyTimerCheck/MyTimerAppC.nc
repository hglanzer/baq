configuration MyTimerAppC {
}

implementation {

  components MainC, MyTimerC;
  //components LedsC;
  components new TimerMilliC() as Timer0;
  components new TimerMicroC() as Timer1;

  components HplAtm128GeneralIOC as IO;

  MyTimerC -> MainC.Boot;

  MyTimerC.Timer0 -> Timer0;
  MyTimerC.Timer1 -> Timer1;
  MyTimerC.Out0 -> IO.PortC1;
  MyTimerC.Out1 -> IO.PortC5;

}
