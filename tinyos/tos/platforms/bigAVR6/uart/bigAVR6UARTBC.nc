/*
	Harald Glanzer, 0727156 TU Wien

	configuration for component bigAVR6UARTBC
	this is uart port B on the bigAVR6 board
*/

configuration bigAVR6UARTBC
{
	provides interface bigAVR6UARTB;
}

implementation
{
	components bigAVR6UARTBP, Atm128Uart1C;

	bigAVR6UARTB = bigAVR6UARTBP;
	bigAVR6UARTBP.UartStream -> Atm128Uart1C;
	bigAVR6UARTBP.StdControl -> Atm128Uart1C;
}
