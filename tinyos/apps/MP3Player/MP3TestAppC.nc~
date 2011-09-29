configuration MP3TestAppC{
}
implementation{
  components MainC, MP3C;
  //components SoftSPIC;
  components MP3TestC;
  components HplAtm128GeneralIOC as IO;
  components new TimerMilliC() as Timer0;
  components new TimerMilliC() as Timer1;
  components GLCDC;
  components MMCC;

  MP3TestC -> MainC.Boot;
  MP3TestC.Button0 -> IO.PortB5;
  MP3TestC.Button1 -> IO.PortB6;
  MP3TestC.Timer0 -> Timer0;
  MP3TestC.Timer1 -> Timer1;
  MP3TestC.GLCD -> GLCDC;
  MP3TestC.MMC -> MMCC;
  MP3TestC.MP3 -> MP3C;
  //MP3TestC.SoftSPI -> SoftSPIC;
}

