configuration GLCDC
{
	provides interface GLCD;
}

implementation
{
	components GLCDP, TouchScreenC, LCD128x64C;
	GLCD = GLCDP;

	GLCDP.LCD128x64 -> LCD128x64C;
	GLCDP.TouchScreen -> TouchScreenC;
}
