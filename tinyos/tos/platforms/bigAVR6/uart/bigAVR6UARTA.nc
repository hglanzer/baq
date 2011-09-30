/*
	Harald Glanzer, 0727156 TU Wien

	interfacedefinitions for component bigAVR6UARTAC
	this is uart port A on the bigAVR6 board
*/
interface bigAVR6UARTA
{
	command void sendByte(uint8_t byte);

	command error_t send(uint8_t* str, uint16_t len);

	/*
		split-phase command for receiving UART bytes
		activate UART to receive len bytes
		data will get saved in memory *buf is pointing to 	
	*/	
	command error_t receive(uint8_t* buf, uint16_t len );

	//	EVENTS
	/*
		event for split-phase command send()
		will get signaled after len bytes have been received or if error occured
	*/
	async event void receiveDone(uint8_t* buf, uint16_t len, error_t error );

	async event void sendDone(uint8_t* buf, uint16_t len, error_t error );
	
}
