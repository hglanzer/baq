// $Id: PlatformLedsC.nc,v 1.5 2010-06-29 22:07:53 scipio Exp $

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

/**
 * Platform-specific LED interface.
 *
 * @author Martin Turon <mturon@xbow.com>
 */

#include "hardware.h"

configuration PlatformLedsC
{
  provides interface GeneralIO as Led0;
  provides interface GeneralIO as Led1;
  provides interface GeneralIO as Led2;

  provides interface GeneralIO as LedA0;
  provides interface GeneralIO as LedA1;
  provides interface GeneralIO as LedA2;
  provides interface GeneralIO as LedA3;
  provides interface GeneralIO as LedA4;
  provides interface GeneralIO as LedA5;
  provides interface GeneralIO as LedA6;
  provides interface GeneralIO as LedA7;

  provides interface GeneralIO as LedB0;
  provides interface GeneralIO as LedB1;
  provides interface GeneralIO as LedB2;
  provides interface GeneralIO as LedB3;
  provides interface GeneralIO as LedB4;
  provides interface GeneralIO as LedB5;
  provides interface GeneralIO as LedB6;
  provides interface GeneralIO as LedB7;

  provides interface GeneralIO as LedC0;
  provides interface GeneralIO as LedC1;
  provides interface GeneralIO as LedC2;
  provides interface GeneralIO as LedC3;
  provides interface GeneralIO as LedC4;
  provides interface GeneralIO as LedC5;
  provides interface GeneralIO as LedC6;
  provides interface GeneralIO as LedC7;

  provides interface GeneralIO as LedD0;
  provides interface GeneralIO as LedD1;
  provides interface GeneralIO as LedD2;
  provides interface GeneralIO as LedD3;
  provides interface GeneralIO as LedD4;
  provides interface GeneralIO as LedD5;
  provides interface GeneralIO as LedD6;
  provides interface GeneralIO as LedD7;

  provides interface GeneralIO as LedE0;
  provides interface GeneralIO as LedE1;
  provides interface GeneralIO as LedE2;
  provides interface GeneralIO as LedE3;
  provides interface GeneralIO as LedE4;
  provides interface GeneralIO as LedE5;
  provides interface GeneralIO as LedE6;
  provides interface GeneralIO as LedE7;

  uses interface Init;
}
implementation
{
  components HplAtm128GeneralIOC as IO;
  components PlatformP;

  Init = PlatformP.MoteInit;

  Led0 = IO.PortA0;
  Led1 = IO.PortA1;
  Led2 = IO.PortA2;

  LedA0 = IO.PortA0;
  LedA1 = IO.PortA1;
  LedA2 = IO.PortA2; 
  LedA3 = IO.PortA3;
  LedA4 = IO.PortA4;
  LedA5 = IO.PortA5;
  LedA6 = IO.PortA6; 
  LedA7 = IO.PortA7; 

  LedB0 = IO.PortB0;
  LedB1 = IO.PortB1;
  LedB2 = IO.PortB2; 
  LedB3 = IO.PortB3;
  LedB4 = IO.PortB4;
  LedB5 = IO.PortB5;
  LedB6 = IO.PortB6; 
  LedB7 = IO.PortB7; 

  LedC0 = IO.PortC0;
  LedC1 = IO.PortC1;
  LedC2 = IO.PortC2; 
  LedC3 = IO.PortC3;
  LedC4 = IO.PortC4;
  LedC5 = IO.PortC5;
  LedC6 = IO.PortC6; 
  LedC7 = IO.PortC7; 

  LedD0 = IO.PortD0;
  LedD1 = IO.PortD1;
  LedD2 = IO.PortD2; 
  LedD3 = IO.PortD3;
  LedD4 = IO.PortD4;
  LedD5 = IO.PortD5;
  LedD6 = IO.PortD6; 
  LedD7 = IO.PortD7; 

  LedE0 = IO.PortE0;
  LedE1 = IO.PortE1;
  LedE2 = IO.PortE2; 
  LedE3 = IO.PortE3;
  LedE4 = IO.PortE4;
  LedE5 = IO.PortE5;
  LedE6 = IO.PortE6; 
  LedE7 = IO.PortE7; 
}
