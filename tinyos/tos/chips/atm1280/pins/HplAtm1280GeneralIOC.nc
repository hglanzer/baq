/// $Id: HplAtm128GeneralIOC.nc,v 1.5 2010-06-29 22:07:43 scipio Exp $

/*
 * Copyright (c) 2004-2005 Crossbow Technology, Inc.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of Crossbow Technology nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <atm128hardware.h>

/**
 * Provide GeneralIO interfaces for all of the ATmega128's pins.
 *
 * @author Martin Turon <mturon@xbow.com>
 *
 * Changed for Atm1280
 * @author Markus Hartmann <e9808811@student.tuwien.ac.at>
 */

configuration HplAtm1280GeneralIOC
{
  // provides all the ports as raw ports
  provides {
    interface GeneralIO as PortA0;
    interface GeneralIO as PortA1;
    interface GeneralIO as PortA2;
    interface GeneralIO as PortA3;
    interface GeneralIO as PortA4;
    interface GeneralIO as PortA5;
    interface GeneralIO as PortA6;
    interface GeneralIO as PortA7;

    interface GeneralIO as PortB0;
    interface GeneralIO as PortB1;
    interface GeneralIO as PortB2;
    interface GeneralIO as PortB3;
    interface GeneralIO as PortB4;
    interface GeneralIO as PortB5;
    interface GeneralIO as PortB6;
    interface GeneralIO as PortB7;

    interface GeneralIO as PortC0;
    interface GeneralIO as PortC1;
    interface GeneralIO as PortC2;
    interface GeneralIO as PortC3;
    interface GeneralIO as PortC4;
    interface GeneralIO as PortC5;
    interface GeneralIO as PortC6;
    interface GeneralIO as PortC7;

    interface GeneralIO as PortD0;
    interface GeneralIO as PortD1;
    interface GeneralIO as PortD2;
    interface GeneralIO as PortD3;
    interface GeneralIO as PortD4;
    interface GeneralIO as PortD5;
    interface GeneralIO as PortD6;
    interface GeneralIO as PortD7;

    interface GeneralIO as PortE0;
    interface GeneralIO as PortE1;
    interface GeneralIO as PortE2;
    interface GeneralIO as PortE3;
    interface GeneralIO as PortE4;
    interface GeneralIO as PortE5;
    interface GeneralIO as PortE6;
    interface GeneralIO as PortE7;

    interface GeneralIO as PortF0;
    interface GeneralIO as PortF1;
    interface GeneralIO as PortF2;
    interface GeneralIO as PortF3;
    interface GeneralIO as PortF4;
    interface GeneralIO as PortF5;
    interface GeneralIO as PortF6;
    interface GeneralIO as PortF7;

    interface GeneralIO as PortG0;
    interface GeneralIO as PortG1;
    interface GeneralIO as PortG2;
    interface GeneralIO as PortG3;
    interface GeneralIO as PortG4;

    interface GeneralIO as PortH0;
    interface GeneralIO as PortH1;
    interface GeneralIO as PortH2;
    interface GeneralIO as PortH3;
    interface GeneralIO as PortH4;
    interface GeneralIO as PortH5;
    interface GeneralIO as PortH6;
    interface GeneralIO as PortH7;
    
    interface GeneralIO as PortJ0;
    interface GeneralIO as PortJ1;
    interface GeneralIO as PortJ2;
    interface GeneralIO as PortJ3;
    interface GeneralIO as PortJ4;
    interface GeneralIO as PortJ5;
    interface GeneralIO as PortJ6;
    interface GeneralIO as PortJ7;

    interface GeneralIO as PortK0;
    interface GeneralIO as PortK1;
    interface GeneralIO as PortK2;
    interface GeneralIO as PortK3;
    interface GeneralIO as PortK4;
    interface GeneralIO as PortK5;
    interface GeneralIO as PortK6;
    interface GeneralIO as PortK7;

    interface GeneralIO as PortL0;
    interface GeneralIO as PortL1;
    interface GeneralIO as PortL2;
    interface GeneralIO as PortL3;
    interface GeneralIO as PortL4;
    interface GeneralIO as PortL5;
    interface GeneralIO as PortL6;
    interface GeneralIO as PortL7;
    
  }
}

implementation
{
  components 
  new HplAtm128GeneralIOPortP((uint8_t)&PORTA, (uint8_t)&DDRA, (uint8_t)&PINA) as PortA,
    new HplAtm128GeneralIOPortP((uint8_t)&PORTB, (uint8_t)&DDRB, (uint8_t)&PINB) as PortB,
    new HplAtm128GeneralIOPortP((uint8_t)&PORTC, (uint8_t)&DDRC, (uint8_t)&PINC) as PortC,
    new HplAtm128GeneralIOPortP((uint8_t)&PORTD, (uint8_t)&DDRD, (uint8_t)&PIND) as PortD,
    new HplAtm128GeneralIOPortP((uint8_t)&PORTE, (uint8_t)&DDRE, (uint8_t)&PINE) as PortE,
    new HplAtm128GeneralIOPortP((uint8_t)&PORTF, (uint8_t)&DDRF, (uint8_t)&PINF) as PortF,

  // PortF cannot use sbi, cbi
    new HplAtm128GeneralIOSlowPinP((uint8_t)&PORTF, (uint8_t)&DDRF, (uint8_t)&PINF, 0) as F0,
    new HplAtm128GeneralIOSlowPinP((uint8_t)&PORTF, (uint8_t)&DDRF, (uint8_t)&PINF, 1) as F1,
    new HplAtm128GeneralIOSlowPinP((uint8_t)&PORTF, (uint8_t)&DDRF, (uint8_t)&PINF, 2) as F2,
    new HplAtm128GeneralIOSlowPinP((uint8_t)&PORTF, (uint8_t)&DDRF, (uint8_t)&PINF, 3) as F3,
    new HplAtm128GeneralIOSlowPinP((uint8_t)&PORTF, (uint8_t)&DDRF, (uint8_t)&PINF, 4) as F4,
    new HplAtm128GeneralIOSlowPinP((uint8_t)&PORTF, (uint8_t)&DDRF, (uint8_t)&PINF, 5) as F5,
    new HplAtm128GeneralIOSlowPinP((uint8_t)&PORTF, (uint8_t)&DDRF, (uint8_t)&PINF, 6) as F6,
    new HplAtm128GeneralIOSlowPinP((uint8_t)&PORTF, (uint8_t)&DDRF, (uint8_t)&PINF, 7) as F7,


  // PortG only exposes 5 bits and cannot use sbi, cbi
    new HplAtm128GeneralIOSlowPinP((uint8_t)&PORTG, (uint8_t)&DDRG, (uint8_t)&PING, 0) as G0,
    new HplAtm128GeneralIOSlowPinP((uint8_t)&PORTG, (uint8_t)&DDRG, (uint8_t)&PING, 1) as G1,
    new HplAtm128GeneralIOSlowPinP((uint8_t)&PORTG, (uint8_t)&DDRG, (uint8_t)&PING, 2) as G2,
    new HplAtm128GeneralIOSlowPinP((uint8_t)&PORTG, (uint8_t)&DDRG, (uint8_t)&PING, 3) as G3,
    new HplAtm128GeneralIOSlowPinP((uint8_t)&PORTG, (uint8_t)&DDRG, (uint8_t)&PING, 4) as G4,
    

  // PortH cannot use sbi, cbi
    new HplAtm1280GeneralIOSlowPinP((uint16_t)&PORTH, (uint16_t)&DDRH, (uint16_t)&PINH, 0) as H0,
    new HplAtm1280GeneralIOSlowPinP((uint16_t)&PORTH, (uint16_t)&DDRH, (uint16_t)&PINH, 1) as H1,
    new HplAtm1280GeneralIOSlowPinP((uint16_t)&PORTH, (uint16_t)&DDRH, (uint16_t)&PINH, 2) as H2,
    new HplAtm1280GeneralIOSlowPinP((uint16_t)&PORTH, (uint16_t)&DDRH, (uint16_t)&PINH, 3) as H3,
    new HplAtm1280GeneralIOSlowPinP((uint16_t)&PORTH, (uint16_t)&DDRH, (uint16_t)&PINH, 4) as H4,
    new HplAtm1280GeneralIOSlowPinP((uint16_t)&PORTH, (uint16_t)&DDRH, (uint16_t)&PINH, 5) as H5,
    new HplAtm1280GeneralIOSlowPinP((uint16_t)&PORTH, (uint16_t)&DDRH, (uint16_t)&PINH, 6) as H6,
    new HplAtm1280GeneralIOSlowPinP((uint16_t)&PORTH, (uint16_t)&DDRH, (uint16_t)&PINH, 7) as H7,

  // PortJ cannot use sbi, cbi
    new HplAtm1280GeneralIOSlowPinP((uint16_t)&PORTJ, (uint16_t)&DDRJ, (uint16_t)&PINJ, 0) as J0,
    new HplAtm1280GeneralIOSlowPinP((uint16_t)&PORTJ, (uint16_t)&DDRJ, (uint16_t)&PINJ, 1) as J1,
    new HplAtm1280GeneralIOSlowPinP((uint16_t)&PORTJ, (uint16_t)&DDRJ, (uint16_t)&PINJ, 2) as J2,
    new HplAtm1280GeneralIOSlowPinP((uint16_t)&PORTJ, (uint16_t)&DDRJ, (uint16_t)&PINJ, 3) as J3,
    new HplAtm1280GeneralIOSlowPinP((uint16_t)&PORTJ, (uint16_t)&DDRJ, (uint16_t)&PINJ, 4) as J4,
    new HplAtm1280GeneralIOSlowPinP((uint16_t)&PORTJ, (uint16_t)&DDRJ, (uint16_t)&PINJ, 5) as J5,
    new HplAtm1280GeneralIOSlowPinP((uint16_t)&PORTJ, (uint16_t)&DDRJ, (uint16_t)&PINJ, 6) as J6,
    new HplAtm1280GeneralIOSlowPinP((uint16_t)&PORTJ, (uint16_t)&DDRJ, (uint16_t)&PINJ, 7) as J7,

  // PortK cannot use sbi, cbi
    new HplAtm1280GeneralIOSlowPinP((uint16_t)&PORTK, (uint16_t)&DDRK, (uint16_t)&PINK, 0) as K0,
    new HplAtm1280GeneralIOSlowPinP((uint16_t)&PORTK, (uint16_t)&DDRK, (uint16_t)&PINK, 1) as K1,
    new HplAtm1280GeneralIOSlowPinP((uint16_t)&PORTK, (uint16_t)&DDRK, (uint16_t)&PINK, 2) as K2,
    new HplAtm1280GeneralIOSlowPinP((uint16_t)&PORTK, (uint16_t)&DDRK, (uint16_t)&PINK, 3) as K3,
    new HplAtm1280GeneralIOSlowPinP((uint16_t)&PORTK, (uint16_t)&DDRK, (uint16_t)&PINK, 4) as K4,
    new HplAtm1280GeneralIOSlowPinP((uint16_t)&PORTK, (uint16_t)&DDRK, (uint16_t)&PINK, 5) as K5,
    new HplAtm1280GeneralIOSlowPinP((uint16_t)&PORTK, (uint16_t)&DDRK, (uint16_t)&PINK, 6) as K6,
    new HplAtm1280GeneralIOSlowPinP((uint16_t)&PORTK, (uint16_t)&DDRK, (uint16_t)&PINK, 7) as K7,

  // PortL cannot use sbi, cbi
    new HplAtm1280GeneralIOSlowPinP((uint16_t)&PORTL, (uint16_t)&DDRL, (uint16_t)&PINL, 0) as L0,
    new HplAtm1280GeneralIOSlowPinP((uint16_t)&PORTL, (uint16_t)&DDRL, (uint16_t)&PINL, 1) as L1,
    new HplAtm1280GeneralIOSlowPinP((uint16_t)&PORTL, (uint16_t)&DDRL, (uint16_t)&PINL, 2) as L2,
    new HplAtm1280GeneralIOSlowPinP((uint16_t)&PORTL, (uint16_t)&DDRL, (uint16_t)&PINL, 3) as L3,
    new HplAtm1280GeneralIOSlowPinP((uint16_t)&PORTL, (uint16_t)&DDRL, (uint16_t)&PINL, 4) as L4,
    new HplAtm1280GeneralIOSlowPinP((uint16_t)&PORTL, (uint16_t)&DDRL, (uint16_t)&PINL, 5) as L5,
    new HplAtm1280GeneralIOSlowPinP((uint16_t)&PORTL, (uint16_t)&DDRL, (uint16_t)&PINL, 6) as L6,
    new HplAtm1280GeneralIOSlowPinP((uint16_t)&PORTL, (uint16_t)&DDRL, (uint16_t)&PINL, 7) as L7
    
    ;

  PortA0 = PortA.Pin0;
  PortA1 = PortA.Pin1;
  PortA2 = PortA.Pin2;
  PortA3 = PortA.Pin3;
  PortA4 = PortA.Pin4;
  PortA5 = PortA.Pin5;
  PortA6 = PortA.Pin6;
  PortA7 = PortA.Pin7;

  PortB0 = PortB.Pin0;
  PortB1 = PortB.Pin1;
  PortB2 = PortB.Pin2;
  PortB3 = PortB.Pin3;
  PortB4 = PortB.Pin4;
  PortB5 = PortB.Pin5;
  PortB6 = PortB.Pin6;
  PortB7 = PortB.Pin7;

  PortC0 = PortC.Pin0;
  PortC1 = PortC.Pin1;
  PortC2 = PortC.Pin2;
  PortC3 = PortC.Pin3;
  PortC4 = PortC.Pin4;
  PortC5 = PortC.Pin5;
  PortC6 = PortC.Pin6;
  PortC7 = PortC.Pin7;

  PortD0 = PortD.Pin0;
  PortD1 = PortD.Pin1;
  PortD2 = PortD.Pin2;
  PortD3 = PortD.Pin3;
  PortD4 = PortD.Pin4;
  PortD5 = PortD.Pin5;
  PortD6 = PortD.Pin6;
  PortD7 = PortD.Pin7;

  PortE0 = PortE.Pin0;
  PortE1 = PortE.Pin1;
  PortE2 = PortE.Pin2;
  PortE3 = PortE.Pin3;
  PortE4 = PortE.Pin4;
  PortE5 = PortE.Pin5;
  PortE6 = PortE.Pin6;
  PortE7 = PortE.Pin7;

  PortF0 = PortF.Pin0;
  PortF1 = PortF.Pin1;
  PortF2 = PortF.Pin2;
  PortF3 = PortF.Pin3;
  PortF4 = PortF.Pin4;
  PortF5 = PortF.Pin5;
  PortF6 = PortF.Pin6;
  PortF7 = PortF.Pin7;

  PortG0 = G0;
  PortG1 = G1;
  PortG2 = G2;
  PortG3 = G3;
  PortG4 = G4;

  PortH0 = H0;
  PortH1 = H1;
  PortH2 = H2;
  PortH3 = H3;
  PortH4 = H4;
  PortH5 = H5;
  PortH6 = H6;
  PortH7 = H7;
  
  PortJ0 = J0;
  PortJ1 = J1;
  PortJ2 = J2;
  PortJ3 = J3;
  PortJ4 = J4;
  PortJ5 = J5;
  PortJ6 = J6;
  PortJ7 = J7;

  PortK0 = K0;
  PortK1 = K1;
  PortK2 = K2;
  PortK3 = K3;
  PortK4 = K4;
  PortK5 = K5;
  PortK6 = K6;
  PortK7 = K7;

  PortL0 = L0;
  PortL1 = L1;
  PortL2 = L2;
  PortL3 = L3;
  PortL4 = L4;
  PortL5 = L5;
  PortL6 = L6;
  PortL7 = L7;
  
}