#include <avr/io.h>

#define SET_BITS(reg, val) 	reg |= (val)
#define CLR_BITS(reg, val) 	reg &= ~(val)

#define MAX	10		// groesse des empfangsbuffers

enum
{
	IDLE,
	TRANSMITTING
};

module UARTP1
{
	provides interface UART1;
}

implementation
{
	uint8_t sendLen;
	char* sendMsg;
	uint8_t state = IDLE;
	uint8_t sendPos;
	char rcvBuffer[MAX];
	uint8_t rcvPos;

	uint8_t count = 0;

	task void sendDone()
	{
		state = IDLE;
		signal UART1.uartSendDone(sendMsg, sendLen);
	}

	task void triggerDelivery()
	{
		signal UART1.uartDeliver(rcvBuffer);
	}

	task void deliverChar()
	{
	}

	void sendChar()
	//task void sendChar()
	{
		UDR1 = sendMsg[sendPos];
		sendPos++;
//		atomic
		{
			if (sendPos == sendLen)
			{
				UCSR1B &= ~(1 << UDRIE0);		// ISR deaktivieren
				post sendDone();
			}
		}
	}

	AVR_ATOMIC_HANDLER(SIG_UART1_DATA)
	{
		sendChar();
	}

	command error_t UART1.uartSend(char* msg, uint8_t msg_len)
	{
		if (state != IDLE)
		{
			count++;
			PORTB = count;
			return FAIL;
		}

		state = TRANSMITTING;
		atomic sendMsg = msg;
		atomic sendLen = msg_len;
		atomic sendPos = 0;

		UCSR1B |= (1 << UDRIE0);

		sendChar();
		
		return SUCCESS;
	}

	void uartRecvCtrl(uint8_t active)
	{
		if(active == TRUE)
		{
			UCSR1B |= ((1 << RXCIE1) | (1 << RXEN));
		}
		else
		{
			UCSR1B &= ~((1 << RXCIE1) | ( 1 << RXEN));
		}
	}

	command void UART1.uartRecv(uint8_t len)	// interface zum empfangen von zeichen
	{
		if( len > 0)
		{
			uartRecvCtrl(TRUE);
			rcvPos = 0;
		}
	}

	AVR_ATOMIC_HANDLER(SIG_UART1_RECV)
	{
		rcvBuffer[rcvPos] = UDR1;
//		PORTC = rcvBuffer[rcvPos];
		rcvPos++;

		if(rcvPos == MAX)
		{
			uartRecvCtrl(FALSE);
			post triggerDelivery();
		}
	}

	command void UART1.uartInit()
	{
		uint8_t reg;

		// UART initialization
//		reg = 0;
		UCSR1A = 0x00;

		reg = 0;
//		SET_BITS(reg, _BV(RXEN0) | _BV(TXEN0));		// enable RX,TX, interrupt fuer Data Register Empty
		UCSR1B |= (1 << TXEN);		

		reg = 0;
//		SET_BITS(reg, _BV(UCSZ01) | _BV(UCSZ00));
		UCSR1C |= ((1<<UCSZ01) | (UCSZ00));

		UBRR1L = 8;
		UBRR1H = 0;

		signal UART1.uartStartDone();
	}
}
