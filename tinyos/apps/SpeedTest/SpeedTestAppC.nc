configuration SpeedTestAppC{
}
implementation{
  components MainC, SpeedTestC;
  components LCD2x16C;
  components HplAtm128GeneralIOC as IO;
  components new TimerMilliC() as Timer0;
  
  SpeedTestC -> MainC.Boot;
  SpeedTestC.LCD2x16 -> LCD2x16C;
  SpeedTestC.Measure0 -> IO.PortB5;
  SpeedTestC.Timer0 -> Timer0;
}

