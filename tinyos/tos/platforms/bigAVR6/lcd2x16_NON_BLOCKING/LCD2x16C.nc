/*
	Harald Glanzer, 0727156 TU Wien
	
	NON - blocking version of LCD2x16C
*/

configuration LCD2x16C
{
        provides interface LCD2x16 as Lcd2x16;
}

implementation
{
                components LCD2x16P as LCD2x16Comp;
		components new TimerMilliC() as LCDTimer;
		components HplAtm128GeneralIOC as IO;

		LCD2x16Comp.TimerLCD -> LCDTimer;
                LCD2x16Comp.LCD2x16 = Lcd2x16;

		LCD2x16Comp.REGSEL -> IO.PortC2;
		LCD2x16Comp.ENABLE -> IO.PortC3;
}
