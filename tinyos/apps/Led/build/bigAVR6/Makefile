#
# Microcontroller VL, SS 2005
#
# Date:		10.03.2005, Christian Troedhandl
#
# TU Vienna, Embedded Computing Systems Group
#
# Targets:
#	<none>		generate flash file
#	install		generate and download flash
#	install_flash	generate and download flash
#	clean		remove obj- and temporary files
#
# change PROJNAME for new projects
# add your object files to OBJS
#

#-------------------------------------------------------------------------
# project specific things
# change these definitions for new projects
#-------------------------------------------------------------------------

#PROJNAME = led_demo
PROJNAME = main

OBJS = main.o

#-------------------------------------------------------------------------
# constants which you won't have to modify for each exercise
#-------------------------------------------------------------------------

# target architecture
MCU	= atmega128

#-------------------------------------------------------------------------
# macros for the tools
#-------------------------------------------------------------------------

# output format of binary; at16prog requires ihex
#BINFORMAT = srec
BINFORMAT = ihex

# for serial I/O; for parallel IFC, use stk200
PROGFORMAT = dasa2
#PROGFORMAT = dapa
#PROGFORMAT = stk200

# for serial I/O; for parallel IFC, do not specify anything
#IFCTYPE	= -dlpt=/dev/ttyS0
#IFCTYPE	= -dlpt=/dev/ttyS1
IFCTYPE	= -dlpt=/dev/ttyACM1
#IFCTYPE	= -dlpt=/dev/ttyACM0

# Tools
AS	= avr-as
ASLD	= avr-gcc -x assembler
LD	= avr-ld
CC	= avr-gcc
OBJCOPY = avr-objcopy
#PROGR	= uisp
#PROGR	= at16prog
PROGR   = avrdude

# Flags
CFLAGS  = -mmcu=$(MCU) -Wall -Os
LDFLAGS	= -Wl,-Map=$*.map -mmcu=$(MCU)
OCFLAGS	= -O $(BINFORMAT)
EEPFLAGS= --set-section-flags=.eeprom="alloc,load" --change-section-address .eeprom-0x810000
#PRFLAGS	= $(IFCTYPE) -dprog=$(PROGFORMAT) -dpart=$(MCU)
PRFLAGS = -p m128 -c avrisp2 -P usb -e -U

#-------------------------------------------------------------------------
# the targets
#-------------------------------------------------------------------------

all: $(PROJNAME).ihex $(PROJNAME).elf $(OBJS)

%.ihex:	%.elf
	$(OBJCOPY) $(OCFLAGS) $< $@
	@chmod ugo-x $@

%.elf:	$(OBJS)
	$(CC) $(OBJS) $(LIBS) $(LDFLAGS) -o $@

%.o:	%.c
	$(CC) $(CFLAGS) -Wa,-a=$*.list -c -o $@ $<

install: install_flash

install_flash: $(PROJNAME).ihex
	$(PROGR) $(PRFLAGS) flash:w:$(PROJNAME).ihex
#$(PROGR) $(PRFLAGS) --segment=flash --erase
#$(PROGR) $(PRFLAGS) --segment=flash --upload if=$(PROJNAME).hex

clean:
	rm -f *.ihex *.elf *.map *.list *.o

