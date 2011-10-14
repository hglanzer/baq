/*
	Harald Glanzer, 0727156 TU Wien

	interfacedefinitions for component bigAVR6UARTBC
	this is uart port B on the bigAVR6 board
*/
interface bigAVR6UARTB
{
	command void sendByte(uint8_t byte);
	
	command error_t send(uint8_t* str, uint16_t len);

	command error_t receive(uint8_t* buf, uint16_t len );


	/*
			EVENTS
	*/
	async event void receiveDone(uint8_t* buf, uint16_t len, error_t error );

	async event void sendDone(uint8_t* buf, uint16_t len, error_t error );
	
}
