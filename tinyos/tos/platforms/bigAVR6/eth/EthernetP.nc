#include "Ethernet.h"

module EthernetP
{
	provides interface Ethernet;
	uses interface GeneralIO as ssMMC;		// SS for mmc / must be set to high in this modul, otherwise driver-collision
	uses interface GeneralIO as ssETH;
	uses interface GeneralIO as rstETH;
	uses interface GeneralIO as intETH;

	uses interface SpiByte;
	uses interface Resource;
}

implementation
{
	static volatile uint8_t stateETH = UNINIT;

	uint8_t writeSPI(uint8_t opcode, uint8_t data)
	{
		uint8_t rc = 0;
		call ssETH.clr();
		rc = call SpiByte.write(opcode);	
		rc = call SpiByte.write(data);
		call ssETH.set();

		return rc;
	}

	/*
		set registerbank: 0...3
	*/
	void setBank(uint8_t bank)
	{
		// clear bit0 and bit1 of ECON1 at first:
		call ssETH.clr();
		call SpiByte.write((ENC28J60_BIT_FIELD_CLR | ECON1));
		call SpiByte.write(ECON1_BSEL1 | ECON1_BSEL0);
		call ssETH.set();
		call ssETH.clr();
		call SpiByte.write((ENC28J60_BIT_FIELD_SET | ECON1));
		call SpiByte.write(bank);
		call ssETH.set();
	}

	command uint8_t Ethernet.init(uint8_t *mac)
	{
		if(stateETH == UNINIT)
		{
			call ssETH.makeOutput();	// must be OUTPUT or Master-function is resetted to Slave-function
							// should be done in SPI-stack, see bigAVR6/mmc/
			call ssETH.set();		// perhaps we can use this pin for Ethernet-slaveselect...?

			call rstETH.makeOutput();
			call rstETH.set();		// Ethernetboard has low-active reset / FIXME - eigenartiges verhalten wenn set to HIGH

			if(call Resource.request() == FAIL)
			{
				return FAIL;
			}
			else
			{
				stateETH = INITIALIZING;
				return SUCCESS;
			}	
/*
		call rstETH.makeOutput();
		call rstETH.set();		// Ethernetboard has low-active reset / FIXME - eigenartiges verhalten wenn set to HIGH
		call ssMMC.makeOutput();	// must be high, regardless if MMC is used or not
		call ssMMC.set();		// otherwise driver-collission: ethernetboard cann't drive MISO
			DDRB |= (1<<0);	//SS
			DDRB |= (1<<1);	//SCK
			DDRB |= (1<<2);	//MOSI
			DDRB &= ~(1<<3);//MISO

			PORTB |= (1<<0);
			PORTB |= (1<<3);
	
			SPCR |= (1<<MSTR);
			SPCR &= ~(1<<CPOL);
			SPCR &= ~(1<<DORD);
			SPCR &= ~(1<<SPR0);
			SPCR &= ~(1<<SPR1);
			SPCR |= (1<<SPE);
while(1)
{
		PORTB &= ~(1<<0);
			writeSPI(0xff, 0xff); // soft-reset
			rc = writeSPI((ENC28J60_READ_CTRL_REG | ESTAT), (ENC28J60_READ_CTRL_REG | ESTAT));
			writeSPI((ENC28J60_WRITE_CTRL_REG | ETXSTL), 0x00);
			writeSPI((ENC28J60_WRITE_CTRL_REG | ETXSTH), 0x00);
			
			writeSPI((ENC28J60_WRITE_CTRL_REG | ETXNDL), 0xFC);
			writeSPI((ENC28J60_WRITE_CTRL_REG | ETXNDH), 0x0F);

			rc = writeSPI(0x06, 0x06);
			PORTA = rc;
		PORTB |= (1<<0);
};
*/

		}
		else
		{
			return FAIL;
		}
	}

	event void Resource.granted(void)
	{
		volatile uint8_t rc = 0, count=0;
	
		call ssETH.set();		// start with HIGH-level
		call ssMMC.makeOutput();	// must be high, regardless if MMC is used or not
		call ssMMC.set();		// otherwise driver-collission: ethernetboard cann't drive MISO
	
		switch(stateETH)
		{
			case INITIALIZING:
				// perform soft reset, write 0xFF
				writeSPI(ENC28J60_SOFT_RESET, ENC28J60_SOFT_RESET);

				for(rc = 0; rc < 255; rc++)
				{
					for(count = 0; count < 255; count++)
					{
						// just waiting...
						;
					}
				}
				
				// after that, wait for oscillcator timer to expire - about 300us
				// wait until OST has expired: LSB in ESTAT will become 1. no bank select needed for ESTAT
				do
				{
					rc = writeSPI((ENC28J60_READ_CTRL_REG | ESTAT), (ENC28J60_READ_CTRL_REG | ESTAT));
				}while((rc & ESTAT_CLKRDY) == 0);
				// OST has expired, PHY is ready... go on

				/*
					BANK0 - STUFF	
					Pointer Options
				*/

				// set RX/TX - buffer. we have 8kb RAM for rx AND tx 
				// ~1500byte for TX(1 MTU-frame), rest for RX

				//set START-adress for RX
				writeSPI((ENC28J60_WRITE_CTRL_REG | ERXSTL), (RXSTART_INIT & 0xFF));
				writeSPI((ENC28J60_WRITE_CTRL_REG | ERXSTH), (RXSTART_INIT >> 8));
				
				//set END-adress for RX
				writeSPI((ENC28J60_WRITE_CTRL_REG | ERXNDL), (RXSTOP_INIT & 0xFF));
				writeSPI((ENC28J60_WRITE_CTRL_REG | ERXNDH), (RXSTOP_INIT >> 8));

				//set ERXRDPT with same values as ERXST, as suggested in datasheet, 6.1
				writeSPI((ENC28J60_WRITE_CTRL_REG | ERXRDPTL), (RXSTART_INIT & 0xFF));
				writeSPI((ENC28J60_WRITE_CTRL_REG | ERXRDPTH), (RXSTART_INIT >> 8));

				//set START-adress for TX
				writeSPI((ENC28J60_WRITE_CTRL_REG | ETXSTL), (TXSTART_INIT & 0xFF));
				writeSPI((ENC28J60_WRITE_CTRL_REG | ETXSTH), (TXSTART_INIT >> 8));
				
				/*	
					BANK1 - STUFF
					Filter Options
				*/
				setBank(0x01);

				/*
					BANK2 - STUFF
					MAC - Options
				*/
				setBank(0x02);

				//writeSPI((ENC28J60_WRITE_CTRL_REG | MACON1), MACON1_MARXEN|MACON1_TXPAUS|MACON1_RXPAUS);
				// no flow-control for the beginning / halfduplex only @MACON1				FIXME
				writeSPI(ENC28J60_WRITE_CTRL_REG | MACON1, MACON1_MARXEN);

				// pull MAC out of reset @ MACON2
				writeSPI(ENC28J60_WRITE_CTRL_REG | MACON2, 0x00);

				// set checksum/padding-options @ MACON3
				writeSPI(ENC28J60_WRITE_CTRL_REG | MACON3, 0x32);

				// MACON4 - reset to 0x00 is ok

				// set maximum frame lengh = 1518 byte
				writeSPI(ENC28J60_WRITE_CTRL_REG | MAMXFLL, (MAX_FRAMELEN & 0xFF));
				writeSPI(ENC28J60_WRITE_CTRL_REG | MAMXFLH, (MAX_FRAMELEN >> 8));
				
				// set interframe - gap(back-to-back)
				writeSPI(ENC28J60_WRITE_CTRL_REG | MABBIPG, 0x12);

				// set interframe - gap(non-back-to-back)
				writeSPI(ENC28J60_WRITE_CTRL_REG | MAIPGL, 0x12);
				writeSPI(ENC28J60_WRITE_CTRL_REG | MAIPGH, 0x0C);


				/*
					BANK3 - STUFF
					set HW-adress
				*/
				setBank(0x03);
				writeSPI(ENC28J60_WRITE_CTRL_REG | MAADR0, MACADR0);
				writeSPI(ENC28J60_WRITE_CTRL_REG | MAADR1, MACADR1);
				writeSPI(ENC28J60_WRITE_CTRL_REG | MAADR2, MACADR2);
				writeSPI(ENC28J60_WRITE_CTRL_REG | MAADR3, MACADR3);
				writeSPI(ENC28J60_WRITE_CTRL_REG | MAADR4, MACADR4);
				writeSPI(ENC28J60_WRITE_CTRL_REG | MAADR5, MACADR5);
				
				
				/*	
					DEBUGGING only. read one of the values just set and write to PORTA-leds for checking...
					and set LEDA/B to blink-mode by accessing PHY-register
					dont forget to set the bank!!!
				*/
				setBank(0x02);



// FIXME: loopback, interrupts, packet-reception, siehe avrlib...



				rc = writeSPI(ENC28J60_WRITE_CTRL_REG | MIREGADR, PHLCON);
				rc = writeSPI(ENC28J60_WRITE_CTRL_REG | MIWRL, 0xB0);	// SLOW BLINK LEDB
				rc = writeSPI(ENC28J60_WRITE_CTRL_REG | MIWRH, 0x0A);	// FAST BLINK LEDA
				
				setBank(0x02);
				rc = writeSPI(ENC28J60_READ_CTRL_REG | MAADR5, ENC28J60_READ_CTRL_REG | MAADR5);
				PORTA = rc;

				call Resource.release();
				signal Ethernet.initDone();
			break;

			case RX:

			break;
	
			case TX:

			break;
		}
	}
}
