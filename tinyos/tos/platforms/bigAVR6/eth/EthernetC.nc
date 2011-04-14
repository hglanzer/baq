configuration EthernetC
{
	provides interface Ethernet;
}

implementation
{
	components EthernetP;
	components HplAtm128GeneralIOC as IO;
	components Atm128SpiC as SPI;


	Ethernet = EthernetP;

	EthernetP.SpiByte -> SPI.SpiByte;
	EthernetP.Resource -> SPI.Resource[0];

	EthernetP.ssMMC -> IO.PortG1;			// SlaveSelect SPI
	EthernetP.ssETH -> IO.PortB0;			// SlaveSelect SPI
	EthernetP.rstETH -> IO.PortB4;			// should be free. !RST of EthernetBoard must be set HIGH 
	EthernetP.intETH -> IO.PortB5;			// should be external interrupt pin?  FIXME
							// see pdf page 67 / interrupts
							// FALLING EDGES
}
