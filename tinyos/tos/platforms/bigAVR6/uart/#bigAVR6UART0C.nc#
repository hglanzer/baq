configuration bigAVR6UART0C
{
	provides interface bigAVR6UART0;
}

implementation
{
	components bigAVR6UART0P, Atm128Uart1C;		// FIXME: testweise bigAVR6UART__0__ --> Atm128Uart__1__

	bigAVR6UART0 = bigAVR6UART0P;
	bigAVR6UART0P.UartStream -> Atm128Uart1C;	// FIXME: testweise bigAVR6UART__0__ --> Atm128Uart__1__
	bigAVR6UART0P.UartByte -> Atm128Uart1C;		//FIXME: testweise bigAVR6UART__0__ --> Atm128Uart__1__
	bigAVR6UART0P.StdControl -> Atm128Uart1C;	// FIXME: testweise bigAVR6UART__0__ --> Atm128Uart__1__

}
