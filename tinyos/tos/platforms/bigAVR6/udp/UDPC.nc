configuration UDPC
{
	provides interface UDP;
}

implementation
{
	components UDPP;
	components IPC;

	UDP = UDPP;
	UDPP.IP -> IPC;
}
