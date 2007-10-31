#ifndef _MULTIPOW_H
#define _MULTIPOW_H
#include "powerup.h"

#define NETFLAG_DOLASER   1     //  0x0000001
#define NETFLAG_DOQUAD    2     //  0x0000002
#define NETFLAG_DOVULCAN  4     //  0x0000004
#define NETFLAG_DOSPREAD  8     //  0x0000008
#define NETFLAG_DOPLASMA  16    //  0x0000010
#define NETFLAG_DOFUSION  32    //  0x0000020
#define NETFLAG_DOHOMING  64    //  0x0000040
#define NETFLAG_DOSMART   128   //  0x0000080
#define NETFLAG_DOMEGA    256   //  0x0000100
#define NETFLAG_DOPROXIM  512   //  0x0000200
#define NETFLAG_DOCLOAK   1024  //  0x0000400
#define NETFLAG_DOINVUL   2048  //  0x0000800
#define NETFLAG_DOPOWERUP 4095  //  0x0000fff mask for all powerup flags

#define NETFLAG_SHORTPACKETS        0x1000000

#define MULTI_ALLOW_POWERUP_MAX 12
int multi_allow_powerup_mask[MAX_POWERUP_TYPES];
extern char *multi_allow_powerup_text[MULTI_ALLOW_POWERUP_MAX];
#endif
