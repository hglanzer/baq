configuration SimpleDrawAppC{
}
implementation{
  components MainC, SimpleDrawC;
  components HplAtm128GeneralIOC as IO;
  components new TimerMilliC() as Timer0;
  components GLCDC;
  
  SimpleDrawC -> MainC.Boot;
  SimpleDrawC.Button0 -> IO.PortD0;
  SimpleDrawC.Button1 -> IO.PortD1;
  SimpleDrawC.Button2 -> IO.PortD2;
  SimpleDrawC.Button3 -> IO.PortD3;
  SimpleDrawC.Button4 -> IO.PortD4;
  SimpleDrawC.Button5 -> IO.PortD5;
  SimpleDrawC.Button6 -> IO.PortD6;
  SimpleDrawC.Button7 -> IO.PortD7;
  SimpleDrawC.Timer0 -> Timer0;
  SimpleDrawC.GLCD -> GLCDC;
}

