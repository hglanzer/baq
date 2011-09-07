configuration OneWireC{
  
  provides interface OneWire;

}

implementation{


  components OneWireP;
  components new TimerMilliC() as Timer0;
  components BusyWaitMicroC as BusyWait;
  components HplAtm128GeneralIOC as IO;

  OneWire = OneWireP;
  
  OneWireP.Timer0 -> Timer0;
  OneWireP.Bus -> IO.PortG0;
  OneWireP.BusyWait -> BusyWait;
  
}
