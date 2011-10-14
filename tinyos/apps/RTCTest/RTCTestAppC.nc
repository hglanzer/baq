/**
 * @author Markus Hartmann e988811@student.tuwien.ac.at
 */

configuration RTCTestAppC{
}
implementation{
  components MainC, RTCTestC, RTCC, LCD2x16C;
  components HplAtm128GeneralIOC as IO;
  components new TimerMilliC() as Timer0;
  
  RTCTestC -> MainC.Boot;
  RTCTestC.Button5 -> IO.PortB5;
  RTCTestC.Button6 -> IO.PortB6;
  RTCTestC.Button7 -> IO.PortB7;
  RTCTestC.Timer0 -> Timer0;
  RTCTestC.LCD2x16 -> LCD2x16C;
  RTCTestC.RTC -> RTCC;
}

