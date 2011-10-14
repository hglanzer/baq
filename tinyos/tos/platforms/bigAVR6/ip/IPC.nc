configuration IPC
{
	provides interface IP;
	provides interface IPcontrol;
}

implementation
{
	components IPP;
	components IEEE8023C;
	components ARPC;
	components new TimerMilliC();

	IP = IPP;
	IPcontrol = IPP;
	IPP.IEEE8023 -> IEEE8023C;
	IPP.ARP -> ARPC;
	IPP.ARPtimeout -> TimerMilliC;

}
