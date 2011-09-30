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
	components MainC, BlinkC;
	components GLCDC;
	components UDPC;
//	components MMCC;
	components LCD2x16C;
	components new TimerMilliC() as TIMER0;

	BlinkC -> MainC.Boot;
	BlinkC.GLCD -> GLCDC;
	BlinkC.UDP -> UDPC;
	BlinkC.LCD2x16 -> LCD2x16C;
	BlinkC.Timer0 -> TIMER0;
//	BlinkC.MMC -> MMCC;
}

