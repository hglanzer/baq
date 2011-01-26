// $Id: BlinkAppC.nc,v 1.6 2010-06-29 22:07:14 scipio Exp $


configuration LedAppC
{
}
implementation
{
	components MainC, LedC, LedsC;
	
//	components UARTC1;
//	components LCD2x16C;
	components LCD128x64C;
	components new TimerMilliC() as Timer0;
	components new TimerMilliC() as Timer1;
/*
	components new TimerMilliC() as Timer2;
	components new TimerMilliC() as Timer3;

	LedC.UART1 -> UARTC1;
	LedC.LCD2x16 -> LCD2x16C;
*/  
	LedC -> MainC.Boot;
	LedC.Leds -> LedsC;
	LedC.LCD128x64 -> LCD128x64C;

	LedC.Timer0 -> Timer0;
	LedC.Timer1 -> Timer1;
/*
	LedC.Timer2 -> Timer2;
	LedC.Timer3 -> Timer3;
*/
}

