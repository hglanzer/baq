configuration MMCC
{
	provides interface MMC;
}

implementation
{
	components MMCP;
	components Atm128SpiC;
	components HplAtm128GeneralIOC as IO;
	
	MMC = MMCP;
	MMCP.SpiByte -> Atm128SpiC.SpiByte;
	MMCP.Resource -> Atm128SpiC.Resource[0];	// FIXME: defines for Resource[CLIENT_ID]
	MMCP.ssMMC -> IO.PortG1;
	MMCP.cdMMC -> IO.PortG2;
	MMCP.ssB0 -> IO.PortB0;
}
