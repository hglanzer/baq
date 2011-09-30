/*
	Harald Glanzer, 0727156 TU Wien

	implementation of component bigAVR6UARTAC
	this is RS-232 B on the bigAVR6 board
*/

#include "Platform.h"

module bigAVR6UARTAP
{
	provides interface bigAVR6UARTA;

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
                        bigAVR6UARTA - interfacefunctions
		########################################################        */

	/*
		splitphase function to send strings with uart
	*/	
	command error_t bigAVR6UARTA.send(uint8_t *str, uint16_t len)
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

	command void bigAVR6UARTA.sendByte(uint8_t byte)
	{
		call StdControl.start();
		call UartStream.send(&byte, 1);
	}

	command error_t bigAVR6UARTA.receive(uint8_t* buf, uint16_t len)
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
		signal bigAVR6UARTA.sendDone(buf, len, error);
	}

	/*
		not used by upstream component...
	*/
	async event void UartStream.receivedByte( uint8_t byte )
	{
	}

	async event void UartStream.receiveDone( uint8_t* buf, uint16_t len, error_t error )
	{
		signal bigAVR6UARTA.receiveDone(buf, len, error);
	}
}
