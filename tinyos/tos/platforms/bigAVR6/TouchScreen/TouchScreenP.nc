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

	uses interface Read<uint16_t>;
	uses interface GeneralIO as driveA;
	uses interface GeneralIO as driveB;
	uses interface GeneralIO as adcX;
	uses interface GeneralIO as adcY;

	provides interface Atm128AdcConfig;
	provides interface TouchScreen;

}

implementation
{
	volatile uint8_t channel;
	static volatile uint8_t state, pressDetect = FALSE;
	static volatile uint16_t x, y;
	
	enum { READ_DUMMY, READ_X0, READ_X1, READ_X2, READ_X3, \
	       READ_Y0, READ_Y1, READ_Y2, READ_Y3 };
	uint16_t results[4];
	uint16_t meanOfFour( void ); /* returns the mean of results[4] */

	task void checkTS()
	{
		call TouchScreen.getXY();
	}

	command void TouchScreen.getXY()
	{
	  state = READ_DUMMY; //DUMMY_FIRST_X;
		call driveA.makeOutput();
		call driveB.makeOutput();
		call adcX.makeInput();
		call adcY.makeInput();

		call driveA.set();
		call driveB.clr();
		call adcX.clr();
		call adcY.clr();
		
		atomic
		{
			channel =  ATM128_ADC_SNGL_ADC0;
		}
		call Read.read();
	}

	event void Read.readDone( error_t err, uint16_t val ){
	  if ( err == SUCCESS ){
	    switch (state){
	    case (READ_DUMMY):
	      /* read and ignore first ADC result */
	      x = val;
	      state = READ_X0;
	      call Read.read();
	      break;

	    case (READ_X0):
	      if ( val > X_TRESHOLD || val > Y_TRESHOLD ){
		/* val OK */
		if ( pressDetect ){
		  pressDetect = FALSE;
		  signal TouchScreen.tsPressed();
		} else {
		  /* store first result */
		  results[0] = val;
		  state = READ_X1;
		  call Read.read();
		}
	      } else {
		/* val < threshold */
		if ( pressDetect ){
		  /* simply repost */
		  post checkTS(); 
		} else {
		  /* read again */
		  call Read.read(); 
		  /* TODO: read again or abort? */
		}
	      }
	      break;

	    case (READ_X1):
	      results[1] = val;
	      state = READ_X2;
	      call Read.read();
	      break;
	    case (READ_X2):
	      results[2] = val;
	      state = READ_X3;
	      call Read.read();
	      break;
	    case (READ_X3):
	      results[3] = val;
	      /* calculate result */
	      x = meanOfFour();
	      state = READ_Y0;
	      /* switch drive to read Y */
	      call driveA.clr();
	      call driveB.set();
	      atomic { channel = ATM128_ADC_SNGL_ADC1; }
	      call Read.read();
	      break;
	      
	      /* start read Y */
	    case (READ_Y0):
	      results[0] = val;
	      state = READ_Y1;
	      call Read.read();
	      break;
	    case (READ_Y1):
	      results[1] = val;
	      state = READ_Y2;
	      call Read.read();
	      break;
	    case (READ_Y2):
	      results[2] = val;
	      state = READ_Y3;
	      call Read.read();
	      break;
	    case (READ_Y3):
	      results[3] = val;
	      /* calculate result */
	      y = meanOfFour();
	      signal TouchScreen.xyReady( x, y );
	      break;
	    default:
	      break;
	    }
	  }
	}
	
	uint16_t meanOfFour( void ) {
	  uint16_t tmp;

	  if ( results[0] > results[1] ){
	    tmp = results[1];
	    results[1] = results[0];
	    results[0] = tmp;
	  }
	  if ( results[2] > results[3] ){
	    tmp = results[3];
	    results[3] = results[2];
	    results[2] = tmp;
	  }

	  if ( results[0] < results[2] ){
	    tmp = results[2];
	  } else {
	    tmp = results[0];
	  }
	  if ( results[1] > results[3] ){
	    tmp += results[3];
	  } else {
	    tmp += results[1];
	  }

	  tmp >>= 1; /* divide by 2 */
	  return tmp;
	}


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
