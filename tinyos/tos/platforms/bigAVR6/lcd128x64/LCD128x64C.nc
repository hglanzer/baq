configuration LCD128x64C
{
        provides interface LCD128x64 as Lcd128x64;
}

implementation
{
                components LCD128x64P as LCD128x64Comp;
                LCD128x64Comp.LCD128x64 = Lcd128x64;
}
