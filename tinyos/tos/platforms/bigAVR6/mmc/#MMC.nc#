interface MMC
{
	command uint8_t init(void);

	command uint8_t readBlock(uint32_t addr);

	event void initDone();

	event void blockReady(uint8_t *data);
	
	event void error(uint8_t *errStr);
}
