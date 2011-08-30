configuration MyUARTAppC {
}
implementation {
	// components my app uses
	components MainC, MyUARTC, LCD128x64C, bigAVR6UART0C;
	components new TimerMilliC() as Timer0;
	
	// wire app to other components
	MyUARTC.Boot -> MainC.Boot;
	MyUARTC.LCD128x64 -> LCD128x64C;
	MyUARTC.bigAVR6UART0 -> bigAVR6UART0C;
	MyUARTC.Timer0 -> Timer0;

	
}
