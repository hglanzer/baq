interface bigAVR6UART0
{
	command void sendByte(uint8_t byte);
	
	command void send(uint8_t* str, uint16_t len);

	command error_t receive(uint8_t* buf, uint16_t len );


	/*
			EVENTS
	*/
	event void receivedByte(uint8_t byte );

	event void receiveDone(uint8_t* buf, uint16_t len, error_t error );

	event void sendDone(uint8_t* buf, uint16_t len, error_t error );
	
}
