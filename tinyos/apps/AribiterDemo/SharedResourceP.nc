/*
 * Copyright (c) 2006 Washington University in St. Louis.
 * All rights reserved.
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
 * - Neither the name of the copyright holders nor the names of
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
 * The SharedResourceP component is used to create a shared resource
 * out of a dedicated one.
 *
 * @author Kevin Klues (klueska@cs.wustl.edu)
 * @version $Revision: 1.2 $
 * @date $Date: 2010-06-29 22:07:40 $
 *
 * changed by Markus Hartmann (e9808811@student.tuwien.ac.at)
 * @date 2011-08-25
 */
#include "SharedResource.h"
configuration SharedResourceP{
  provides interface Resource[uint8_t id];
  provides interface ResourceOperations[uint8_t id];
  provides interface ResourceRequested[uint8_t id];
  uses interface ResourceConfigure[uint8_t id];
}
implementation{
  components new FcfsArbiterC(UQ_SHARED_RESOURCE) as Arbiter;
  components SharedResourceImplP;
  components ResourceP;
  components LedsC;
  components new TimerMilliC() as Timer0;

  ResourceOperations = SharedResourceImplP;

  Resource = Arbiter;
  ResourceRequested = Arbiter;
  ResourceConfigure = Arbiter;

  SharedResourceImplP.ArbiterInfo -> Arbiter;
  SharedResourceImplP.ResourceOperations -> ResourceP;
  ResourceP.Leds -> LedsC;
  ResourceP.Timer0 -> Timer0;
}
