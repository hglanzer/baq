configuration IEEE8023C
{
        provides interface IEEE8023;
}

implementation
{
        components IEEE8023P;
        components Atm128SpiC as SPI;

        IEEE8023 = IEEE8023P;
        IEEE8023P.SpiByte -> SPI.SpiByte;
        IEEE8023P.Resource -> SPI.Resource[0];

	/*
		unimportant components and wiring not shown here
	*/

}
