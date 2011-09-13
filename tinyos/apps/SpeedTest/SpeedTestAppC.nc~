configuration TouchTestAppC{
}
implementation{
  components MainC, TouchTestC;
  components HplAtm128GeneralIOC as IO;
  components new TimerMilliC() as Timer0;
  components new TimerMilliC() as Timer1;
  components GLCDC;
  
  TouchTestC -> MainC.Boot;
  TouchTestC.Button0 -> IO.PortB5;
  TouchTestC.Button1 -> IO.PortB6;
  TouchTestC.Timer0 -> Timer0;
  TouchTestC.Timer1 -> Timer1;
  TouchTestC.GLCD -> GLCDC;
}

