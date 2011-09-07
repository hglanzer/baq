configuration OWTestAppC{
}

implementation{

  components MainC, OWTestC, OneWireC;
  components bigAVR6UART0C;
  components new TimerMilliC() as Timer0;
  components new TimerMicroC() as Timer1;

  OWTestC.Boot -> MainC;
  OWTestC.OneWire -> OneWireC;
  OWTestC.Timer0 -> Timer0;
  OWTestC.Timer1 -> Timer1;
  OWTestC.bigAVR6UART0 -> bigAVR6UART0C;

}
