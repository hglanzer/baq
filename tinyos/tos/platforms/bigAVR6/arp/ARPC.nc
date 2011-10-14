/*
	Harald Glanzer, 0727156 TU Wien
*/

configuration ARPC
{
	provides interface ARP;
}

implementation
{
	components ARPP;

	ARPP = ARP;
}
