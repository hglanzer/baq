configuration UARTC1
{
	provides interface UART1 as uartProvided;
}

implementation
{
		components UARTP1 as UARTComp;

		UARTComp.UART1 = uartProvided;
}
