configuration LCD128x64C
{
	provides interface LCD128x64;
}

implementation
{

	components LCD128x64P;
	LCD128x64P.LCD128x64 = LCD128x64;
}
