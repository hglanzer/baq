/*
	Harald Glanzer, 0727156 TU Wien

	configuration for component GLCD
	needs components TouchScreenC and LCD128x64C for its work
*/

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
