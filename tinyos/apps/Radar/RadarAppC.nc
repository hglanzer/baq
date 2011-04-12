// $Id: BlinkAppC.nc,v 1.6 2010-06-29 22:07:14 scipio Exp $

/*									tab:4
 * Copyright (c) 2000-2005 The Regents of the University  of California.  
 *
 **/

configuration RadarAppC
{
}
implementation
{
	components MainC, RadarC, LCD128x64C;
	components new TimerMilliC() as TIMER0;

	RadarC -> MainC.Boot;
	RadarC.LCD128x64 -> LCD128x64C;
	RadarC.Timer0 -> TIMER0;
}

