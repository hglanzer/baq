configuration TouchScreenC
{
	provides interface TouchScreen;	
}
implementation
{
	components TouchScreenP;
	components new AdcReadClientC();

	TouchScreen = TouchScreenP;
	
	TouchScreenP.Read -> AdcReadClientC;
	TouchScreenP.Atm128AdcConfig <- AdcReadClientC;
}
