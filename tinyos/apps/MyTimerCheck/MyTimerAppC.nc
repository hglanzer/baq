configuration MyTimerAppC {
}

implementation {

  components MainC, MyTimerC;
  components LedsC;
  components new TimerMilliC() as Timer0;
  components new TimerMilliC() as Timer1;
  
  components HplAtm1280GeneralIOC as IO;
  
  MyTimerC -> MainC.Boot;
  MyTimerC.Leds -> LedsC;
  MyTimerC.Timer0 -> Timer0;
  MyTimerC.Timer1 -> Timer1;
  MyTimerC.Out0 -> IO.PortG0;
  MyTimerC.Out1 -> IO.PortH1;
  MyTimerC.Out2 -> IO.PortJ2;
  MyTimerC.Out3 -> IO.PortK3;
  MyTimerC.Out4 -> IO.PortL4;

  
}
