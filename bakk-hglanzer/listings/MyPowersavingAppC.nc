/*									tab:4
	Harald Glanzer, 0727156 TU Wien

	Boot hardware, and turn on UART0 - TX when system is up

	this program uses the given components MainC and Atm128Uart0C
	component 'MyPowersavingC' is the app itself	
*/

configuration MyPowersavingAppC
{
}
implementation
{
	components MainC;
	components Atm128Uart0C;
	components MyPowersavingC;

	/*
	wire our app to the interface 'Boot'
	this interface is provided by component 'MainC'
	*/
	MyPowersavingC -> MainC.Boot;

	/*
	wire our app to the interface 'StdControl'
	this interface is provided by component 'Atm128Uart0C'
	*/
	MyPowersavingC -> Atm128Uart0C.StdControl;
}

