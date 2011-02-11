// $Id: BlinkAppC.nc,v 1.6 2010-06-29 22:07:14 scipio Exp $

/*									tab:4
 * Copyright (c) 2000-2005 The Regents of the University  of California.  
 *
 **/

configuration BlinkAppC
{
}
implementation
{
	components MainC, BlinkC, LCD128x64C;
	components new TimerMilliC() as TIMER0;
	components new AdcReadClientC();

	BlinkC -> MainC.Boot;
	BlinkC.LCD128x64 -> LCD128x64C;
	BlinkC.Timer0 -> TIMER0;

	BlinkC.Read -> AdcReadClientC;
	BlinkC.Atm128AdcConfig <- AdcReadClientC;
}

