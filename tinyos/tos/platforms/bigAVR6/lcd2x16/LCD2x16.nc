interface LCD2x16
{
	/*
		parameter:
		* uint8_t	mode	// cursor on/off, cursor_blink on/off
	*/
	command void init(uint8_t mode);

	/*
		parameter:
		* char *	datastring
		* uint8_t	datalength
		* uint8_t	linepos
		* uint8_t	rowpos
	*/
	command void sendString(char *str, uint8_t len, uint8_t line, uint8_t row);

	command void clearDisplay(void);

	event void LcdInitDone(void);
//      command void uartRecvCtrl(uint8_t active);
//      event void uartSendDone(char* msg, uint8_t msg_len);
}