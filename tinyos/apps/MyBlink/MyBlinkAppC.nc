configuration MyBlinkAppC {
}
implementation {
	components MainC, MyBlinkC, LedsC, LCD128x64C;
	components new TimerMilliC() as Timer0;

	MyBlinkC -> MainC.Boot;
	MyBlinkC.Timer0 -> Timer0;
	MyBlinkC.Leds -> LedsC;
	MyBlinkC.LCD128x64 -> LCD128x64C;
}

