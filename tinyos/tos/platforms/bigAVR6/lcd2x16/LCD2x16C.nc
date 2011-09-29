/*
	Harald Glanzer, 0727156 TU Wien
*/

configuration LCD2x16C
{
        provides interface LCD2x16 as Lcd2x16;
}

implementation
{
                components LCD2x16P as LCD2x16Comp;
                LCD2x16Comp.LCD2x16 = Lcd2x16;

}
