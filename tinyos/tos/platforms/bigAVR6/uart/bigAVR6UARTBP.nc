/*
	Harald Glanzer, 0727156 TU Wien

	implementation of component bigAVR6UARTBC
	this is RS-232 B on the bigAVR6 board
*/

#include "Platform.h"

module bigAVR6UARTBP
{
	provides interface bigAVR6UARTB;

	uses interface UartStream;
	uses interface StdControl;
}

implementation
{
	static volatile uint8_t *data, state = READY;
	static volatile uint16_t length;

	/*
		receiving is done interrupt-driven by component UartStream --> ASYNC
		to get from async to sync context, use this task
	*/
	task void asyncStop()
	{
		call StdControl.start();
	}

	task void sendUartStream()
	{
		call StdControl.start();
		call UartStream.send((uint8_t *)data, length);
	}

	/*      ########################################################
                        bigAVR6UARTB - interfacefunctions
		########################################################        */

	/*
		splitphase function to send strings with uart
	*/	
	command error_t bigAVR6UARTB.send(uint8_t *str, uint16_t len)
	{
		atomic
		{
			if(state != READY)
				return FAIL;
		}

		data = str;
		length = len;
		if(post sendUartStream() == SUCCESS)
		{
			atomic
			{
				state = BUSY;
			}
			return SUCCESS;
		}
		else
			return FAIL;
	}

	command void bigAVR6UARTB.sendByte(uint8_t byte)
	{
		call StdControl.start();
		call UartStream.send(&byte, 1);
	}

	command error_t bigAVR6UARTB.receive(uint8_t* buf, uint16_t len)
	{
		call UartStream.receive(buf, len);

		return 0;
	}


	/*      ########################################################
	                        UartStream - events
		########################################################        */
	
	async event void UartStream.sendDone( uint8_t* buf, uint16_t len, error_t error )
	{
		post asyncStop();
		atomic
		{
			state = READY;
		}
		signal bigAVR6UARTB.sendDone(buf, len, error);
	}

	/*
		not used by upstream component...
	*/
	async event void UartStream.receivedByte( uint8_t byte )
	{
	}

	async event void UartStream.receiveDone( uint8_t* buf, uint16_t len, error_t error )
	{
		signal bigAVR6UARTB.receiveDone(buf, len, error);
	}
}
