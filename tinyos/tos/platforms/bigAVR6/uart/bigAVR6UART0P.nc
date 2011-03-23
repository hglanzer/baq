module bigAVR6UART0P
{
	provides interface bigAVR6UART0;

	uses interface UartByte;
	uses interface UartStream;
	uses interface StdControl;
//	uses interface Init;
}

implementation
{
	static volatile uint8_t count = 1;	

	/*      ########################################################
                        bigAVR6UART0 - interfacefunctions
		########################################################        */
	
	command void bigAVR6UART0.send(uint8_t *str, uint16_t len)
	{
		call StdControl.start();
		call UartStream.send(str, len);
	}

	command void bigAVR6UART0.sendByte(uint8_t byte)
	{
		call StdControl.start();
		call UartStream.send(&byte, 1);
	}

	command error_t bigAVR6UART0.receive(uint8_t* buf, uint16_t len)
	{
		call UartStream.receive(buf, len);

		return 0;
	}


	/*      ########################################################
	                        UartStream - events
		########################################################        */
	
	async event void UartStream.sendDone( uint8_t* buf, uint16_t len, error_t error )
	{
		signal bigAVR6UART0.sendDone(buf, len, error);
	}

	async event void UartStream.receivedByte( uint8_t byte )
	{

	}

	async event void UartStream.receiveDone( uint8_t* buf, uint16_t len, error_t error )
	{
		signal bigAVR6UART0.receiveDone(buf, len, error);
	}
}
