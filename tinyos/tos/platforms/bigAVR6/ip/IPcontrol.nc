interface IPcontrol
{
	command void setIP(uint8_t *newIP, uint8_t *gateway, uint8_t *netmask);
}
