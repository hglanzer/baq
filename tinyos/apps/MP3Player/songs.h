#ifndef SONGS_H
#define SONGS_H

struct song{
  char track[2];
  uint32_t startBlockAddress;
  uint32_t *nextAddress;
  uint32_t *prevAddress;
  char artist[20];
  char title[20];
};

/* buffer for progmem */
#define MAX_P_STRING 20
static char scpBuffer[MAX_P_STRING];
#define SCP(x) strncpy_P(scpBuffer, PSTR(x), MAX_P_STRING);

#endif
