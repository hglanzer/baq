configuration IPC
{
	provides interface IP;
}

implementation
{
	components IPP;
	components IEEE8023C;

	IP = IPP;
	IPP.IEEE8023 -> IEEE8023C;
}
