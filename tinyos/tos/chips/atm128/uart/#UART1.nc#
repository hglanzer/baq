interface UART1
{
	command void uartInit();
	command error_t uartSend(char* msg, uint8_t msg_len);
	command void uartRecv(uint8_t len);
//	command void uartRecvCtrl(uint8_t active);
	event void uartSendDone(char* msg, uint8_t msg_len);
	event void uartDeliver(char *ch);
	event void uartStartDone();
}
