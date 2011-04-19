#include "IEEE8023.h"

module IEEE8023P
{
	provides interface IEEE8023;
	uses interface GeneralIO as ssMMC;	// SS for mmc / must be set to high in this modul, otherwise driver-collision
	uses interface GeneralIO as ssETH;
	uses interface GeneralIO as rstETH;
	uses interface GeneralIO as intETH;

	uses interface SpiByte;
	uses interface Resource;
}

implementation
{
	static volatile uint8_t stateETH = IEEE8023_UNINIT;
	static volatile uint16_t *TXdataPtr, *TXdstMAC;

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

	void setBit(uint8_t reg, uint8_t bit)
	{
		call ssETH.clr();
		call SpiByte.write((ENC28J60_BIT_FIELD_SET | reg));
		call SpiByte.write(bit);
		call ssETH.set();
	}

	void sendPacket()
	{		
		uint16_t payloadCounter = 0, payloadLength;
		uint16_t *tmpPtr;
		uint16_t *tmpDoublePtr;

		setBank(0x00);
		// set START-adress for WR-Pointer = TX-Buffer-Start
		writeSPI((ENC28J60_WRITE_CTRL_REG | EWRPTL), (TXSTART_INIT & 0xFF));
		writeSPI((ENC28J60_WRITE_CTRL_REG | EWRPTH), (TXSTART_INIT >> 8));

		// write per-packet-control-byte - nothing to override.
		writeSPI((ENC28J60_WRITE_BUF_MEM), 0x00);
	
		// DEST-MAC
		writeSPI((ENC28J60_WRITE_BUF_MEM), (*(TXdstMAC+0)) & 0xFF);
		writeSPI((ENC28J60_WRITE_BUF_MEM), (*(TXdstMAC+0)) >> 8);
		writeSPI((ENC28J60_WRITE_BUF_MEM), *(TXdstMAC+1) & 0xFF);
		writeSPI((ENC28J60_WRITE_BUF_MEM), *(TXdstMAC+1) >> 8);
		writeSPI((ENC28J60_WRITE_BUF_MEM), *(TXdstMAC+2) & 0xFF);
		writeSPI((ENC28J60_WRITE_BUF_MEM), *(TXdstMAC+2) >> 8);
	
		// SOURCE-MAC
		writeSPI((ENC28J60_WRITE_BUF_MEM), MACADR0);
		writeSPI((ENC28J60_WRITE_BUF_MEM), MACADR1);
		writeSPI((ENC28J60_WRITE_BUF_MEM), MACADR2);
		writeSPI((ENC28J60_WRITE_BUF_MEM), MACADR3);
		writeSPI((ENC28J60_WRITE_BUF_MEM), MACADR4);
		writeSPI((ENC28J60_WRITE_BUF_MEM), MACADR5);

		// set len = datapayload WITHOUT PADDING in byte
		writeSPI((ENC28J60_WRITE_BUF_MEM), *(TXdataPtr+1) >> 8);
		writeSPI((ENC28J60_WRITE_BUF_MEM), *(TXdataPtr+1));

		// frame-PAYLOAD - write ip-header(20 bytes, 2 bytes per loop --> 10 loops)
		for(payloadCounter = 0; payloadCounter < 10; payloadCounter++)
		{
			writeSPI((ENC28J60_WRITE_BUF_MEM), *(TXdataPtr+payloadCounter));
			writeSPI((ENC28J60_WRITE_BUF_MEM), *(TXdataPtr+payloadCounter) >> 8);
		}

		tmpPtr = (uint16_t *)*(TXdataPtr+10);
	
		// frame-PAYLOAD - write udp-header(8 byte)
		for(payloadCounter = 0; payloadCounter < 4; payloadCounter++)
		{
			writeSPI((ENC28J60_WRITE_BUF_MEM), *(tmpPtr+payloadCounter));
			writeSPI((ENC28J60_WRITE_BUF_MEM), *(tmpPtr+payloadCounter) >> 8);
		}

		// frame-PAYLOAD - write ACTUAL PAYLOAD-DATA from application - finally...
		payloadLength = *(tmpPtr + 2);
		payloadLength = payloadLength - 8;

		tmpDoublePtr = (uint16_t *)*(tmpPtr+4);

		for(payloadCounter = 0; payloadCounter < (payloadLength/2); payloadCounter++)
		{
			writeSPI((ENC28J60_WRITE_BUF_MEM), *(tmpDoublePtr + payloadCounter));
			writeSPI((ENC28J60_WRITE_BUF_MEM), *(tmpDoublePtr + payloadCounter) >> 8);
		}

// FIXME data for odd-length
// ETXNDH/L richtig berechent?

		// set end-adress for TX
		// misuse payloadCounter. ip-packet-totallength + ethernetframe-bytes
		payloadCounter = *(TXdataPtr+1) + 14;
		writeSPI((ENC28J60_WRITE_CTRL_REG | ETXNDL), ((TXSTART_INIT & 0xFF) + (payloadCounter & 0xFF)));
		writeSPI((ENC28J60_WRITE_CTRL_REG | ETXNDH), (TXSTART_INIT >> 8) + (payloadCounter >> 8));
		
		// START transmission!
		setBit(ECON1, ECON1_TXRTS);
	}

	uint8_t arp()
	{

	}

	command uint8_t IEEE8023.init()
	{
		if(stateETH == IEEE8023_UNINIT)
		{
			call ssETH.makeOutput();	// must be OUTPUT or Master-function is resetted to Slave-function
							// should be done in SPI-stack, see bigAVR6/mmc/
			call ssETH.set();		// perhaps we can use this pin for IEEE8023-slaveselect...?

			call rstETH.makeOutput();
			call rstETH.set();		// IEEE8023board has low-active reset

			if(call Resource.request() == FAIL)
			{
				return FAIL;
			}
			else
			{
				stateETH = IEEE8023_INITIALIZING;
				return SUCCESS;
			}	
		}
		else
		{
			return FAIL;
		}
	}

	command uint8_t IEEE8023.sendFrame(uint16_t *dataPtr, uint16_t *dstMAC)
	{
		if(stateETH == IEEE8023_READY)
		{
			if(call Resource.request() == FAIL)
			{
				return FAIL;
			}
			else
			{
				TXdataPtr = dataPtr;
				TXdstMAC = dstMAC;
				stateETH = IEEE8023_TX;
				return SUCCESS;
			}

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
			case IEEE8023_INITIALIZING:
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
				
				// set Autoincrement for Read/Write-buffer
				writeSPI((ENC28J60_WRITE_CTRL_REG | ECON2), 0x80);
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
				
				setBank(0x02);


				// no loopbackback
				rc = writeSPI(ENC28J60_WRITE_CTRL_REG | MIREGADR, PHCON2);
				rc = writeSPI(ENC28J60_WRITE_CTRL_REG | MIWRL, 0x00);
				rc = writeSPI(ENC28J60_WRITE_CTRL_REG | MIWRH, 0x01);

				// ledA & ledB
				rc = writeSPI(ENC28J60_WRITE_CTRL_REG | MIREGADR, PHLCON);
				rc = writeSPI(ENC28J60_WRITE_CTRL_REG | MIWRL, (0x04<<4));	// link status
				rc = writeSPI(ENC28J60_WRITE_CTRL_REG | MIWRH, 0x01);		// transmit activity
				
				/*	
					DEBUGGING only. read value just set and write to PORTA-leds for checking...
				setBank(0x02);
				rc = writeSPI(ENC28J60_READ_CTRL_REG | MAADR5, ENC28J60_READ_CTRL_REG | MAADR5);
				PORTA = rc;
				*/

				stateETH = IEEE8023_READY;
				
				call Resource.release();
				signal IEEE8023.initDone();
			break;

			case IEEE8023_RX:

			break;
	
			case IEEE8023_TX:
				sendPacket();
				stateETH = IEEE8023_READY;
				signal IEEE8023.sendDone();
				call Resource.release();
			break;
		}
	}
}
