#include "Platform.h"

module MMCP
{
	uses interface SpiByte;
	uses interface Resource;
	uses interface GeneralIO as ssMMC;
	uses interface GeneralIO as cdMMC;
	uses interface GeneralIO as ssB0;

        provides interface MMC;

}

implementation
{
	uint8_t state = UNINIT, cmd[6], data[32], *cmdPtr, tmp;
	uint32_t mmcAddr;

	command uint8_t MMC.init(void)
	{
		uint8_t rc = 0;
		
		call cdMMC.makeInput();

		if(call cdMMC.get() == TRUE)
		{
			state = EJECTED;
			signal MMC.error((uint8_t *)"FAIL: MMC EJECTED\0");
		}

		call ssMMC.makeOutput();	// this is the !SS-pin for MMC: Chip Enable on PortG1
	
		// should be done in SPI / see atm128.pdf page 167
		// !SS - pin(=PortB0) must be OUTPUT to enable SPI-Mastermode, otherwise reset to slavemode
		// but DDRB0 is never set to high... so do it here...
		call ssB0.makeOutput();	
		call ssMMC.set();

		state = INITIALIZE;
		rc = call Resource.request();
		return rc;
	}

	command uint8_t MMC.readBlock(uint32_t addr)
	{
		uint8_t rc = 0;
		if(state != READY)		// no card inserted, not initialized yet or busy at the moment
		{
			signal MMC.error((uint8_t *)"FAIL: BUSY\0");
			return FAIL;
		}
		else if(call cdMMC.get() == TRUE)
		{
			signal MMC.error((uint8_t *)"FAIL: MMC EJECTED\0");
			return FAIL;
		}
		else
		{
			rc = call Resource.request();
			if(rc == EBUSY)
			{
				signal MMC.error((uint8_t *)"READ ERROR\0");
				return FAIL;
			}
			else
			{
				state = READ;
				mmcAddr = addr << 5;	// blocklen = 32 --> addr is always multiple of 32
				return SUCCESS;
			}
		}
	}

	event void Resource.granted(void)
	{
		uint8_t div_var_8t = 0, rc[5];
		
		call ssB0.makeOutput();	
		call ssMMC.makeOutput();	
		call ssMMC.clr();		// mmc - slaveselect, low-active!

		switch(state)
		{
		case INITIALIZE:

			// sending dummy-packets
			for(div_var_8t = 0; div_var_8t < 200; div_var_8t++)
			{
				call SpiByte.write(0xFF);
			}

			// send reset-command:
			call SpiByte.write(0x40);
			call SpiByte.write(0x00);
			call SpiByte.write(0x00);
			call SpiByte.write(0x00);
			call SpiByte.write(0x00);
			call SpiByte.write(0x95);

			do{
				rc[0]=call SpiByte.write(0xFF);
			}while(rc[0] == 255);


			do
			{
				// init card, CMD55
				call SpiByte.write(0x77);
				call SpiByte.write(0x00);
				call SpiByte.write(0x00);
				call SpiByte.write(0x00);
				call SpiByte.write(0x00);
				call SpiByte.write(0xFF);

				do{
					rc[0]=call SpiByte.write(0xFF);
				}while(rc[0] == 255);


				// init card, ACMD41
				call SpiByte.write(0x69);
				call SpiByte.write(0x00);
				call SpiByte.write(0x00);
				call SpiByte.write(0x00);
				call SpiByte.write(0x00);
				call SpiByte.write(0xFF);

				do{
					rc[0]=call SpiByte.write(0xFF);
				}while(rc[0] == 255);

			}while(rc[0] != 0);

			// CMD16	-	set blocklen
			call SpiByte.write(0x50);
			call SpiByte.write(0x00);
			call SpiByte.write(0x00);
			call SpiByte.write(0x00);
			call SpiByte.write(0x20);
			call SpiByte.write(0xFF);

			do{
				rc[0]=call SpiByte.write(0xFF);
			}while(rc[0] == 255);

			state = READY;
	
			call ssMMC.set();		// deactivate MMC
			call Resource.release();	// resource must be released manually by requester!!
			signal MMC.initDone();
		break;
		case READ:
			call ssMMC.clr();		// mmc - slaveselect, low-active!

			/* send address */
			call SpiByte.write(0x51);	// always 0x51
			div_var_8t = (mmcAddr >> 24) & 0xFF;;
			call SpiByte.write(div_var_8t);
			div_var_8t = (mmcAddr >> 16) & 0xFF;;
			call SpiByte.write(div_var_8t);
			div_var_8t = (mmcAddr >> 8) & 0xFF;;
			call SpiByte.write(div_var_8t);
			div_var_8t = mmcAddr & 0xFF;;
			call SpiByte.write(div_var_8t);
			call SpiByte.write(0xFF);
			
			do{
				rc[0]=call SpiByte.write(0xFF);
			}while(rc[0] == 255);

			do{
				rc[0]=call SpiByte.write(0xFF);
			}while(rc[0] != 254);

			for(div_var_8t = 0; div_var_8t < 32; div_var_8t++)
			{
				data[div_var_8t] = call SpiByte.write(0xFF);
			}
			call Resource.release();	// resource must be released manually by requester!!
			call ssMMC.set();		// mmc - slaveselect DISABLE SLAVE
			state = READY;
			signal MMC.blockReady(data);
		break;
		}
	}
}
