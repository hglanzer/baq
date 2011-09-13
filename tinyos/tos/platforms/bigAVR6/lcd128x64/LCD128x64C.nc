configuration LCD128x64C
{
	provides interface LCD128x64;
}

implementation
{
	components LCD128x64P;
	components HplAtm128GeneralIOC as IO;
	LCD128x64P.LCD128x64 = LCD128x64;
	//LCD128x64P.Measure0 -> IO.PortB6;
	//LCD128x64P.Measure1 -> IO.PortB7;
}
