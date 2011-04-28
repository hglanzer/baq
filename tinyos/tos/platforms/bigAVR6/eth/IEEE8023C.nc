configuration IEEE8023C
{
	provides interface IEEE8023;
}

implementation
{
	components IEEE8023P;
	components HplAtm128GeneralIOC as IO;
	components Atm128SpiC as SPI;
	components HplAtm128InterruptC;

	IEEE8023 = IEEE8023P;

	IEEE8023P.SpiByte -> SPI.SpiByte;
	IEEE8023P.Resource -> SPI.Resource[0];

	IEEE8023P.ssMMC -> IO.PortG1;			// SlaveSelect memorycard.  must be high(driver collission)
	IEEE8023P.ssETH -> IO.PortB0;			// ChipSelect ethernetboard
	IEEE8023P.rstETH -> IO.PortB4;			// should be free. !RST of IEEE8023Board must be set HIGH 
	IEEE8023P.intETH -> HplAtm128InterruptC.Int2;	// extInt2 - see pdf page 67 / falling edge
}
