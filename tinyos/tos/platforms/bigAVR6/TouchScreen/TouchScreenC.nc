configuration TouchScreenC
{
	provides interface TouchScreen;	
//	uses interface LCD128x64;
}
implementation
{
	components TouchScreenP;
	components LCD128x64C;
	components new AdcReadClientC();

	TouchScreen = TouchScreenP;
	
	TouchScreenP.Read -> AdcReadClientC;
	TouchScreenP.Atm128AdcConfig <- AdcReadClientC;

	TouchScreenP.LCD128x64 -> LCD128x64C;

}
