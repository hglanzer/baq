/*
	harald glanzer, tu wien
	TouchScreen - Interfaceimplementierung
	
	touchscreen - funktionalität über aufgeklebte folie mit veränderlichen	widerständen
	x - wert über ADC / kanal 0	PORTF_0
	y - wert über ADC / kanal 1	PORTF_1

	verwendet Read-interface welches mit AdcReadClient wired wurde
	--> damit zugriff ueber arbiter
*/

#include "TouchScreen.h"

module TouchScreenP
{
	/*

	*/
	uses interface Read<uint16_t>;

	provides interface Atm128AdcConfig;
	provides interface TouchScreen;
}

implementation
{
	volatile uint8_t channel;
	static volatile uint8_t state, pressDetect = FALSE;
	static volatile uint16_t x, y;

	task void checkTS()
	{
		call TouchScreen.getXY();
	}

	command void TouchScreen.getXY()
	{
		state = DUMMY_FIRST_X;
		DDRG |= (1<<4);		// FIXME - GPIO??
		DDRG |= (1<<3);
		DDRF &= ~(1<<1);	// ADC - kanäle 
		DDRF &= ~(1<<0);

		UNREAD_X;
		UNREAD_Y;

		DRIVE_A;
		UNDRIVE_B;
		
		atomic
		{
			channel =  ATM128_ADC_SNGL_ADC0;
		}
		call Read.read();
	}

	event void Read.readDone(error_t err, uint16_t val)
	{	
		atomic
		{
			if(err == SUCCESS)
			{
				switch(state)
				{
					// dummy-value for first x-value --> TRASH
					case DUMMY_FIRST_X:
						x = val;
						state = FIRST_X;
						call Read.read();
					break;
					
					// got the actual x-value
					case FIRST_X:
						if(val > X_TRESHOLD)
						{
							if(pressDetect == TRUE)
							{
								pressDetect = FALSE;
								signal TouchScreen.tsPressed();
							}
							else
							{
								x = val;

								UNDRIVE_A;
								DRIVE_B;
								channel = ATM128_ADC_SNGL_ADC1;
								state = DUMMY_FIRST_Y;
								call Read.read();
							}
						}
						else
						{
							if(pressDetect == TRUE)
							{
								post checkTS();
							}
							else
							{
								call Read.read();
							}
						}
					break;
	
					// dummy-value for the first y-value
					case DUMMY_FIRST_Y:
						y = val;
						state = FIRST_Y;
						call Read.read();
					break;

					case FIRST_Y:
						if(val > Y_TRESHOLD)
						{
							y = val;
							state = FINISHED;
							UNDRIVE_B;
							signal TouchScreen.xyReady(x, y);
						}
						else
						{
							call Read.read();
						}
					break;

					case FINISHED:
					break;
			
				}
			}
		}
	}


	/*
		interface wird verwendet um press-detection EIN / AUSzuschalten
		wenn EIN --> setze globales flag und poste entspr. task
	*/
	command void TouchScreen.isPressed(bool on)
	{
		pressDetect = on;
		if(on == TRUE)
		{
			post checkTS();
		}
	}

	async command uint8_t Atm128AdcConfig.getRefVoltage(void)
	{
		return 1;
	}
	
	async command uint8_t Atm128AdcConfig.getChannel()
	{
		atomic
		{
			return channel;
		}
	}
	
	async command uint8_t Atm128AdcConfig.getPrescaler()
	{
		return ATM128_ADC_PRESCALE_128;
	}

}
