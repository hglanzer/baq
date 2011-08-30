#include "IEEE8023.h"

//#include<stdio.h>

module IEEE8023P
{
	provides interface IEEE8023;
	uses interface GeneralIO as ssMMC;	// SS for mmc / must be set to high in this modul, otherwise driver-collision
	uses interface GeneralIO as ssETH;
	uses interface GeneralIO as rstETH;

	uses interface HplAtm128Interrupt as intETH;

	uses interface SpiByte;
	uses interface Resource;
}

implementation
{
	static volatile uint8_t stateETH = IEEE8023_UNINIT, ipType = 0, IEEE8023packet[60], tmpString[10];
	static volatile uint16_t *TXdataPtr, *TXdstMAC, TXlen, nextPacketPtr = RXSTART_INIT;

	uint8_t writeSPI(uint8_t opcode, uint8_t data)
	{
		uint8_t rc = 0;
		call ssETH.clr();
		rc = call SpiByte.write(opcode);	
		rc = call SpiByte.write(data);
		call ssETH.set();

		return rc;
	}
	
	void setBit(uint8_t reg, uint8_t bit)
	{
		call ssETH.clr();
		call SpiByte.write((ENC28J60_BIT_FIELD_SET | reg));
		call SpiByte.write(bit);
		call ssETH.set();
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

	/*
		read PHY - register
		PHY is 16bit wide - parameter 'high' controls wheter high- or lowbyte will be returned
	*/
	uint8_t readPHY(uint8_t addr, uint8_t high)
	{
		static volatile uint8_t rc = 0;
		
		setBank(0x02);
		writeSPI(ENC28J60_WRITE_CTRL_REG | MIREGADR, addr);
		setBit(MICMD, MICMD_MIIRD);

		setBank(0x03);
		do
		{
			rc = writeSPI((ENC28J60_READ_CTRL_REG | MISTAT), (ENC28J60_READ_CTRL_REG | MISTAT));
		}while((rc & MISTAT_BUSY) == 1);

		setBank(0x02);
		writeSPI(ENC28J60_WRITE_CTRL_REG | MICMD, 0x00);
		if(high)
		{
			rc = writeSPI(ENC28J60_READ_CTRL_REG | MIRDL, ENC28J60_READ_CTRL_REG | MIRDL);
			rc = writeSPI(ENC28J60_READ_CTRL_REG | MIRDH, ENC28J60_READ_CTRL_REG | MIRDH);
		}
		else
		{
			rc = writeSPI(ENC28J60_READ_CTRL_REG | MIRDH, ENC28J60_READ_CTRL_REG | MIRDH);
			rc = writeSPI(ENC28J60_READ_CTRL_REG | MIRDL, ENC28J60_READ_CTRL_REG | MIRDL);
		}

		return rc;
	}

	void sendPacket()
	{		
		uint16_t payloadCounter = 0;
		uint16_t *tmpPtr;

		setBank(0x00);
		// set START-adress for WR-Pointer = TX-Buffer-Start
		writeSPI((ENC28J60_WRITE_CTRL_REG | EWRPTL), (TXSTART_INIT & 0xFF));
		writeSPI((ENC28J60_WRITE_CTRL_REG | EWRPTH), (TXSTART_INIT >> 8));

		// write per-packet-control-byte - nothing to override.
		writeSPI((ENC28J60_WRITE_BUF_MEM), 0x00);
	
		// DEST-MAC
		if(ipType == IP)
		{
			writeSPI((ENC28J60_WRITE_BUF_MEM), (*(TXdstMAC+0)) & 0xFF);
			writeSPI((ENC28J60_WRITE_BUF_MEM), (*(TXdstMAC+0)) >> 8);
			writeSPI((ENC28J60_WRITE_BUF_MEM), *(TXdstMAC+1) & 0xFF);
			writeSPI((ENC28J60_WRITE_BUF_MEM), *(TXdstMAC+1) >> 8);
			writeSPI((ENC28J60_WRITE_BUF_MEM), *(TXdstMAC+2) & 0xFF);
			writeSPI((ENC28J60_WRITE_BUF_MEM), *(TXdstMAC+2) >> 8);
		}
		else	// ARP - Request
		{
			writeSPI((ENC28J60_WRITE_BUF_MEM), 0xFF);
			writeSPI((ENC28J60_WRITE_BUF_MEM), 0xFF);
			writeSPI((ENC28J60_WRITE_BUF_MEM), 0xFF);
			writeSPI((ENC28J60_WRITE_BUF_MEM), 0xFF);
			writeSPI((ENC28J60_WRITE_BUF_MEM), 0xFF);
			writeSPI((ENC28J60_WRITE_BUF_MEM), 0xFF);
		}
	
		// SOURCE-MAC
		writeSPI((ENC28J60_WRITE_BUF_MEM), MACADR5);
		writeSPI((ENC28J60_WRITE_BUF_MEM), MACADR4);
		writeSPI((ENC28J60_WRITE_BUF_MEM), MACADR3);
		writeSPI((ENC28J60_WRITE_BUF_MEM), MACADR2);
		writeSPI((ENC28J60_WRITE_BUF_MEM), MACADR1);
		writeSPI((ENC28J60_WRITE_BUF_MEM), MACADR0);

		// LLC-Header --> upper protocol is IP, so the value is the constant 0x0800
		// the documentation for this 2 byte is very misleading
		// at first, the framepayload-len was used here / but that doesn't work: packet
		// won' get recognized, wireshark says 'unknown DSAP'(although Ethernet-frame was recognized) 
		writeSPI((ENC28J60_WRITE_BUF_MEM), 0x08);

		if(ipType == IP)
		{
			writeSPI((ENC28J60_WRITE_BUF_MEM), 0x00);	// standard-ip

			// frame-PAYLOAD - write ip-header(20 bytes, 2 bytes per loop --> 10 loops)
			for(payloadCounter = 0; payloadCounter < 10; payloadCounter++)
			{
				writeSPI((ENC28J60_WRITE_BUF_MEM), *(TXdataPtr+payloadCounter) & 0xFF);
				writeSPI((ENC28J60_WRITE_BUF_MEM), *(TXdataPtr+payloadCounter) >> 8);
			}
		
			// TXdataPtr points to start of ip-packet. we use 16bit-pointer, so a offset of 10
			// means start of the ip-payload = upd-header(only if minimum ip-header is used, 20bytes, NO options!)
			tmpPtr = (uint16_t *)*(TXdataPtr+10);
	
			// frame-PAYLOAD - write UDP-header(8 byte)
			for(payloadCounter = 0; payloadCounter < 4; payloadCounter++)
			{
				writeSPI((ENC28J60_WRITE_BUF_MEM), *(tmpPtr+payloadCounter));
				writeSPI((ENC28J60_WRITE_BUF_MEM), *(tmpPtr+payloadCounter) >> 8);
			}

			// frame-PAYLOAD - write ACTUAL PAYLOAD-DATA from application - finally...
			tmpPtr = (uint16_t *)*(tmpPtr+4);
			for(payloadCounter = 0; payloadCounter < (TXlen/2); payloadCounter++)
			{
				writeSPI((ENC28J60_WRITE_BUF_MEM), *(tmpPtr + payloadCounter));
				writeSPI((ENC28J60_WRITE_BUF_MEM), *(tmpPtr + payloadCounter) >> 8);
			}	
		}
		else	// this is ARP...
		{
			writeSPI((ENC28J60_WRITE_BUF_MEM), 0x06);

			for(payloadCounter = 0; payloadCounter < (TXlen/2); payloadCounter++)
			{
				writeSPI((ENC28J60_WRITE_BUF_MEM), *(TXdataPtr+payloadCounter) & 0xFF);
				writeSPI((ENC28J60_WRITE_BUF_MEM), *(TXdataPtr+payloadCounter) >> 8);
			}

		}

// FIXME data for odd-length

		// set end-adress for TX / misuse TXlen as TX-END-buffer
		TXlen = TXSTART_INIT + TXlen + 14;
		writeSPI((ENC28J60_WRITE_CTRL_REG | ETXNDL), (TXlen & 0xFF));
		writeSPI((ENC28J60_WRITE_CTRL_REG | ETXNDH), (TXlen >> 8));
		
		// START transmission!
		setBit(ECON1, ECON1_TXRTS);
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

			call intETH.clear();
			call intETH.edge(FALSE);	// we want falling edge interrupts
			call intETH.enable();

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

	command uint8_t IEEE8023.sendFrame(uint16_t *dataPtr, uint16_t *dstMAC, uint16_t len, uint8_t type)
	{
/*
uint8_t rc = 0;
while(1)
{
rc = readPHY(PHSTAT1, 0);
PORTA = rc;
};
*/

		if(stateETH == IEEE8023_READY)
		{
			if(call Resource.request() == FAIL)
			{
				return FAIL;
			}
			else
			{
				ipType = type;
				TXdataPtr = dataPtr;
				TXdstMAC = dstMAC;
				TXlen = len;
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
		volatile uint8_t rc = 0;
		volatile uint16_t count = 0, frameLen = 0;
	
		call ssETH.set();		// start with HIGH-level
		call ssMMC.makeOutput();	// must be high, regardless if MMC is used or not
		call ssMMC.set();		// otherwise driver-collission: ethernetboard cann't drive MISO
	
		switch(stateETH)
		{
			case IEEE8023_INITIALIZING:
				// perform soft reset, write 0xFF
				writeSPI(ENC28J60_SOFT_RESET, ENC28J60_SOFT_RESET);

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
				setBank(0x00);

				// set RX/TX - buffer. we have 8kb RAM for rx AND tx 
				// ~1500byte for TX(1 MTU-frame), rest for RX

				//set START-adress for RX
				writeSPI((ENC28J60_WRITE_CTRL_REG | ERXSTL), (RXSTART_INIT & 0xFF));
				writeSPI((ENC28J60_WRITE_CTRL_REG | ERXSTH), (RXSTART_INIT >> 8));
				
				nextPacketPtr = RXSTART_INIT;

				//set ERXRDPT with same values as ERXST, as suggested in datasheet, 6.1
				writeSPI((ENC28J60_WRITE_CTRL_REG | ERXRDPTL), (RXSTART_INIT & 0xFF));
				writeSPI((ENC28J60_WRITE_CTRL_REG | ERXRDPTH), (RXSTART_INIT >> 8));

				//set END-adress for RX
				writeSPI((ENC28J60_WRITE_CTRL_REG | ERXNDL), (RXSTOP_INIT & 0xFF));
				writeSPI((ENC28J60_WRITE_CTRL_REG | ERXNDH), (RXSTOP_INIT >> 8));

				//set START-adress for TX
				writeSPI((ENC28J60_WRITE_CTRL_REG | ETXSTL), (TXSTART_INIT & 0xFF));
				writeSPI((ENC28J60_WRITE_CTRL_REG | ETXSTH), (TXSTART_INIT >> 8));
				
				// set Autoincrement for Read/Write-buffer
				writeSPI((ENC28J60_WRITE_CTRL_REG | ECON2), (ECON2_AUTOINC));
				/*	
					BANK1 - STUFF
					Filter Options
				*/
				setBank(0x01);
	
				// enable unicast-, broadcast- and CRC-filter 
				//writeSPI((ENC28J60_WRITE_CTRL_REG | ERXFCON), 0x80);	// FIXME - debugging: accept unicast only, no crc-check
				writeSPI((ENC28J60_WRITE_CTRL_REG | ERXFCON), 0xA1);

				/*
					BANK2 - STUFF
					MAC - Options
				*/
				setBank(0x02);

				// pull MAC out of reset @ MACON2
				writeSPI(ENC28J60_WRITE_CTRL_REG | MACON2, 0x00);

				// no loopback, no txpause/rxpause - frames, no passall. enable RX
//			writeSPI(ENC28J60_WRITE_CTRL_REG | MACON1, MACON1_MARXEN|MACON1_TXPAUS|MACON1_RXPAUS);
				writeSPI(ENC28J60_WRITE_CTRL_REG | MACON1, 0x01);

				// automatic padding + CRC, enable TX, framelen-checking
				writeSPI(ENC28J60_WRITE_CTRL_REG | MACON3, 0x32);	// HALF DUPLEX
//				writeSPI(ENC28J60_WRITE_CTRL_REG | MACON3, 0x33);	// FULL DUPLEX

				// MACON4 - reset to 0x00 is ok

				// set maximum frame lengh = 1518 byte
				writeSPI(ENC28J60_WRITE_CTRL_REG | MAMXFLL, (MAX_FRAMELEN & 0xFF));
				writeSPI(ENC28J60_WRITE_CTRL_REG | MAMXFLH, (MAX_FRAMELEN >> 8));
				
				// set interframe - gap(back-to-back)
				//writeSPI(ENC28J60_WRITE_CTRL_REG | MABBIPG, 0x15);	// FULL DUPLEX
				writeSPI(ENC28J60_WRITE_CTRL_REG | MABBIPG, 0x12);	// HALF DUPLEX

				// set interframe - gap(non-back-to-back)
				writeSPI(ENC28J60_WRITE_CTRL_REG | MAIPGL, 0x12);	// HALF DUPLEX ONLY
				writeSPI(ENC28J60_WRITE_CTRL_REG | MAIPGH, 0x0C);	// HALF DUPLEX ONLY


				/*
					BANK3 - STUFF
					set HW-adress
				*/
				setBank(0x03);
				writeSPI(ENC28J60_WRITE_CTRL_REG | MAADR0, MACADR5);
				writeSPI(ENC28J60_WRITE_CTRL_REG | MAADR1, MACADR4);
				writeSPI(ENC28J60_WRITE_CTRL_REG | MAADR2, MACADR3);
				writeSPI(ENC28J60_WRITE_CTRL_REG | MAADR3, MACADR2);
				writeSPI(ENC28J60_WRITE_CTRL_REG | MAADR4, MACADR1);
				writeSPI(ENC28J60_WRITE_CTRL_REG | MAADR5, MACADR0);
				
				setBank(0x02);

				// set FULL DUPLEX
				//rc = writeSPI(ENC28J60_WRITE_CTRL_REG | MIREGADR, PHCON1);
				//rc = writeSPI(ENC28J60_WRITE_CTRL_REG | MIWRL, 0x00);
				//rc = writeSPI(ENC28J60_WRITE_CTRL_REG | MIWRH, 0x01);

				// no loopbackback
				rc = writeSPI(ENC28J60_WRITE_CTRL_REG | MIREGADR, PHCON2);
				rc = writeSPI(ENC28J60_WRITE_CTRL_REG | MIWRL, 0x00);
				rc = writeSPI(ENC28J60_WRITE_CTRL_REG | MIWRH, 0x01);

				// ledA & ledB
				rc = writeSPI(ENC28J60_WRITE_CTRL_REG | MIREGADR, PHLCON);
				rc = writeSPI(ENC28J60_WRITE_CTRL_REG | MIWRL, (0x04<<4));	// link status
				rc = writeSPI(ENC28J60_WRITE_CTRL_REG | MIWRH, 0x01);		// transmit activity
				
				// set linkchange - interrupt
				rc = writeSPI(ENC28J60_WRITE_CTRL_REG | MIREGADR, PHIE);
				rc = writeSPI(ENC28J60_WRITE_CTRL_REG | MIWRL, 0x12);
				rc = writeSPI(ENC28J60_WRITE_CTRL_REG | MIWRH, 0x00);

				/*	
					DEBUGGING only. read value just set and write to PORTA-leds for checking...
					setBank(0x02);
					rc = writeSPI(ENC28J60_READ_CTRL_REG | MAADR5, ENC28J60_READ_CTRL_REG | MAADR5);
					PORTA = rc;
				*/
			
				setBank(0x00);

				// enable receive packet pending, linkchange and global-interrupt 
				//rc = writeSPI((ENC28J60_WRITE_CTRL_REG | EIE), 0x90);
				rc = writeSPI((ENC28J60_WRITE_CTRL_REG | EIE), 0xD0);

				// enable RX
				setBit(ECON1, ECON1_RXEN);
				
				stateETH = IEEE8023_READY;
/*				
				rc = readPHY(PHSTAT2, 0);
				if(rc & 0x04)
					PORTA = 0xFF;
				else
					PORTA = 0x11;
while(1)
{};
*/
				call Resource.release();
				signal IEEE8023.initDone();
			break;

			case IEEE8023_RX:
/*
*/
				setBank(0x00);

				//frameLen = (uint16_t)writeSPI((ENC28J60_READ_CTRL_REG | ERXWRPTL), (ENC28J60_READ_CTRL_REG | ERXWRPTL));
				//frameLen |= (uint16_t)(writeSPI((ENC28J60_READ_CTRL_REG | ERXWRPTH), (ENC28J60_READ_CTRL_REG | ERXWRPTH))) << 8;
				//frameLen = (uint16_t)writeSPI((ENC28J60_READ_CTRL_REG | ERXSTL), (ENC28J60_READ_CTRL_REG | ERXSTL));
				//frameLen |= (uint16_t)(writeSPI((ENC28J60_READ_CTRL_REG | ERXSTH), (ENC28J60_READ_CTRL_REG | ERXSTH))) << 8;
/*
DDRA = 0xFF;
PORTA = (writeSPI((ENC28J60_READ_CTRL_REG | ERXSTH), (ENC28J60_READ_CTRL_REG | ERXSTH)));
while(1)
{};

				tmpString[5] = '\0';
				tmpString[4] = (frameLen % 10) + 0x30;
				frameLen = frameLen / 10;
				tmpString[3] = (frameLen % 10) + 0x30;
				frameLen = frameLen / 10;
				tmpString[2] = (frameLen % 10) + 0x30;
				frameLen = frameLen / 10;
				tmpString[1] = (frameLen % 10) + 0x30;
				frameLen = frameLen / 10;
				tmpString[0] = (frameLen % 10) + 0x30;

				signal IEEE8023.hwInterrupt((uint16_t *)&tmpString);
*/
				// working through the buffer memory. we use AUTOINC, we don't need to update the read-pointer
				// set READ - pointer to correct start-adress
				rc = writeSPI((ENC28J60_WRITE_CTRL_REG | ERDPTL), ( nextPacketPtr & 0xFF));
				rc = writeSPI((ENC28J60_WRITE_CTRL_REG | ERDPTH), ( nextPacketPtr >> 8));

				// read next packet pointer
				nextPacketPtr  = (uint16_t)writeSPI((ENC28J60_READ_BUF_MEM), 0x00);
				nextPacketPtr |= ((uint16_t)(writeSPI((ENC28J60_READ_BUF_MEM), 0x00)) << 8);

				// read status vector - length of data, lowbyte
				frameLen = (uint16_t)(writeSPI((ENC28J60_READ_BUF_MEM), 0x00));
				// length of data, highbyte
				frameLen |= ((uint16_t)(writeSPI((ENC28J60_READ_BUF_MEM), 0x00)) << 8);
				// rest of receive status vector, ignored for now FIXME
				rc = writeSPI((ENC28J60_READ_BUF_MEM), 0x00);
				rc = writeSPI((ENC28J60_READ_BUF_MEM), 0x00);

				for(count = 0; count < frameLen; count++)
				{
					IEEE8023packet[count] = writeSPI((ENC28J60_READ_BUF_MEM), 0x00);
				}
/*
				tmpString[0] = IEEE8023packet[42];
				tmpString[1] = IEEE8023packet[43];
				tmpString[2] = IEEE8023packet[44];
				tmpString[3] = IEEE8023packet[45];
				tmpString[4] = IEEE8023packet[46];
				tmpString[5] = 'H';
				tmpString[6] = 'A';
				tmpString[7] = 'R';
				tmpString[8] = 'I';
				tmpString[9] = '\0';
*/			
				rc = writeSPI((ENC28J60_WRITE_CTRL_REG | ERXRDPTL), ( nextPacketPtr & 0xFF));
				rc = writeSPI((ENC28J60_WRITE_CTRL_REG | ERXRDPTH), ( nextPacketPtr >> 8));

				writeSPI((ENC28J60_WRITE_CTRL_REG | ECON2), (ECON2_PKTDEC | ECON2_AUTOINC));

				call Resource.release();
				stateETH = IEEE8023_READY;
				signal IEEE8023.gotDatagram(frameLen, (uint8_t *)&IEEE8023packet);
				
				// enable interrupts AFTER stackprocessing	FIXME
				writeSPI((ENC28J60_WRITE_CTRL_REG | EIE), 0xD0);
			break;

			case IEEE8023_TX:
				sendPacket();				// FIXME - DEBUGGING RX...
				call Resource.release();
				stateETH = IEEE8023_READY;
				
				signal IEEE8023.sendDone();
			break;
		}
	}

	task void checkInterruptflag()
	{
		static volatile uint8_t iFlag, rc = 0, rc2 = 0;

		iFlag =  writeSPI(ENC28J60_READ_CTRL_REG | EIR, ENC28J60_READ_CTRL_REG | EIR);

		readPHY(PHIR, 0);
		readPHY(PHIR, 1);
		
		// packet pending
		if((iFlag & EIR_PKTIF) != 0)
		{
			if(call Resource.request() == FAIL)
			{
				// FIXME: THIS IS BAD... what now?
			}
			else
			{
				stateETH = IEEE8023_RX;
			}
		}

		// link-change interrupt occured
		if((iFlag & EIR_LINKIF) != 0)
		{
			do
			{
				rc = readPHY(PHSTAT1, 0);
				rc = readPHY(PHSTAT1, 0);
				rc2 = readPHY(PHSTAT2, 1);
			}while(rc != rc2);

			if((rc & 0x04) != 0)
			{
				signal IEEE8023.hwInterrupt((uint16_t *)"Link UP  ");
			}
			else
			{
				signal IEEE8023.hwInterrupt((uint16_t *)"Link DOWN");
			}
			writeSPI((ENC28J60_WRITE_CTRL_REG | EIE), 0xD0);
		}
	}

	/*
		interrupt generated by ethernetboard
	*/
	async event void intETH.fired()
	{
		writeSPI((ENC28J60_WRITE_CTRL_REG | EIE), 0x00);
		// disable interrupts temporary
		post checkInterruptflag();
	}
}
