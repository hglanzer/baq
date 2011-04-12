configuration TouchScreenC
{
	provides interface TouchScreen;	
}
implementation
{
	components TouchScreenP;
	components new AdcReadClientC();
	components HplAtm128GeneralIOC as IO;

	TouchScreen = TouchScreenP;
	
	TouchScreenP.Read -> AdcReadClientC;
	TouchScreenP.Atm128AdcConfig <- AdcReadClientC;
	TouchScreenP.driveA -> IO.PortG3;
	TouchScreenP.driveB -> IO.PortG4;
	TouchScreenP.adcX -> IO.PortF0;
	TouchScreenP.adcY -> IO.PortF1;
}
