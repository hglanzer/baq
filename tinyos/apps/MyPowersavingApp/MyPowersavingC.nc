/*
	Harald Glanzer, 0727156 TU Wien	

	interface 'Boot' provides the event 'bootet' to us,
	which MUST BE implemented by the user of 'Boot'

	Additionally, we are using the generic interface StdControl
	this interface is provided by various components - this app
	uses the interface provided by 'Atm128Uart0C', so we can 
	enable / disable TX for UART0

	see file MyPowersavingAppC.nc for how the wiring works	
*/

module MyPowersavingC @safe()
{
	uses interface Boot;
	uses interface StdControl;
}
implementation
{
	/*
	when system has 'bootet' up, we will receive this event and
	can take over from here...
	*/
	event void Boot.booted()
	{
		call StdControl.start();
	}
}

