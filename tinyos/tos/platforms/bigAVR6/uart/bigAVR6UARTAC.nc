/*
	Harald Glanzer, 0727156 TU Wien

	configuration for component bigAVR6UARTAC
	this is uart port A on the bigAVR6 board
*/

configuration bigAVR6UARTAC
{
	provides interface bigAVR6UARTA;
}

implementation
{
	components bigAVR6UARTAP, Atm128Uart0C;

	bigAVR6UARTA = bigAVR6UARTAP;
	bigAVR6UARTAP.UartStream -> Atm128Uart0C;
	bigAVR6UARTAP.StdControl -> Atm128Uart0C;
}
