/*									tab:4
	Harald Glanzer, 0727156 TU Wien

	control bigAVR6 - LEDs with GeneralIOC
*/

configuration bigAVR6DemoAppC
{
}
implementation
{
	components MainC;
	components bigAVR6DemoC;
	components new TimerMilliC() as TIMER0;
	components LCD2x16C;
	components GLCDC;
	components bigAVR6UARTAC;
	components UDPC;

	bigAVR6DemoC -> MainC.Boot;
	bigAVR6DemoC.Timer0 -> TIMER0;
	bigAVR6DemoC.LCD2x16 -> LCD2x16C;
	bigAVR6DemoC.GLCD -> GLCDC;
	bigAVR6DemoC.bigAVR6UARTA -> bigAVR6UARTAC;
	bigAVR6DemoC.UDP -> UDPC;
}

