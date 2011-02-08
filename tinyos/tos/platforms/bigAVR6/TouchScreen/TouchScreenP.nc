#include "TouchScreen.h"


module TouchScreenP
{
	uses interface Read<uint16_t>;

	provides interface Atm128AdcConfig;
	provides interface TouchScreen;
	
}

implementation
{
	uint8_t state = INIT;
	uint16_t x;

	command void TouchScreen.getXY()
	{
		DDRG |= ((1<<3) | (1<<4));
		PORTG |= (1<<3);
		PORTG &= ~(1<<4);
		
	atomic
	{
		state = GOTXDUMMY;
		call Read.read();
	}
				
	}
	
	event void Read.readDone(error_t err, uint16_t val)
	{
		atomic
		{
		switch(state)
		{
			case GOTXDUMMY:
				state = GOTX;
				PORTG |= (1<<3);
				PORTG &= ~(1<<4);
				call Read.read();
				break;
			case GOTX:
				state = GOTYDUMMY;
				x = val;
				PORTG |= (1<<4);
				PORTG &= ~(1<<3);
				call Read.read();
				break;
			case GOTYDUMMY:
				PORTG |= (1<<4);
				PORTG &= ~(1<<3);
				state = GOTY;
				call Read.read();
				break;
			case GOTY:
				signal TouchScreen.xyReady(x, val);
				DDRG &= ~((1<<3) | (1<<4));
				PORTG &= ~((1<<3) | (1<<4));
				break;
			default:
				break;
		}
		}

	}

	async command uint8_t Atm128AdcConfig.getRefVoltage(void)
	{
		return 1;
	}
	
	async command uint8_t Atm128AdcConfig.getChannel()
	{
		if((state == GOTX) || (state == GOTXDUMMY))
			return ATM128_ADC_SNGL_ADC0;
		else
			return ATM128_ADC_SNGL_ADC1;
	}
	
	async command uint8_t Atm128AdcConfig.getPrescaler()
	{
		return ATM128_ADC_PRESCALE_128;
	}
}
