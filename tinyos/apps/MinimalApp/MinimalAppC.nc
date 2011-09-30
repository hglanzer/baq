// $Id: BlinkAppC.nc,v 1.6 2010-06-29 22:07:14 scipio Exp $

/*									tab:4
 * Copyright (c) 2000-2005 The Regents of the University  of California.  
 *
 **/

configuration MinimalAppC
{
}
implementation
{
	components MainC, MinimalC;

	MinimalC -> MainC.Boot;
}

