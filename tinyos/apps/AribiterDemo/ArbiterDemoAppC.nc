/*
* @author Markus Hartmann e9808811@student.tuwien.ac.at
*/

configuration ArbiterDemoAppC{
}
implementation{
  //enum { UID1 = unique( UQ_ARBITER_APP ), UID2 = unique( UQ_ARBITER_APP ) };
  components MainC;
  components ArbiterDemoC;
  components LCD128x64C;
  components HplAtm128GeneralIOC as IO;
  components new TimerMilliC() as Timer0;

  ArbiterDemoC.Boot -> MainC.Boot;
  ArbiterDemoC.LCD128x64 -> LCD128x64C.LCD128x64;
  ArbiterDemoC.Button0 -> IO.PortB5;
  ArbiterDemoC.Button1 -> IO.PortB6;
  ArbiterDemoC.Timer0 -> Timer0;

  components new SharedResourceC() as Resource0;
  components new SharedResourceC() as Resource1;

  ArbiterDemoC.Resource0 -> Resource0;
  ArbiterDemoC.ResourceOperations0 -> Resource0;
  ArbiterDemoC.Resource1 -> Resource1;
  ArbiterDemoC.ResourceOperations1 -> Resource1;
}
