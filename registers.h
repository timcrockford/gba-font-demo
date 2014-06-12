/*
-------------------------------------------------------------------------------
File:		registers.h
Author:		Tim Crockford (raven@shakari.myvnc.com)
Version:	0.3
-------------------------------------------------------------------------------
Description:
The register file contains all the register definitions for the various parts
of the GBA. Most of this information is pulled from resources like The Pern
Project or the tutorials available on sites such as GBADev. I have modifed
these from #define statements into actual constants so type checking can be
used by the compiler (although it should still do this because of the
preprocessing step of compilation).

Also, personally I prefer to actually see where I am using pointers to areas of
memory and know that I'm using data rather than a memory location. Naturally
your mileage may vary, so you can replace this file with a standard GBA.h file
from one of the usual places and use the appropriate definitions in your code.
(Note that any subsystems will still use this file, so don't overwrite it.)
-------------------------------------------------------------------------------
*/

#ifndef __registers_h__
#define __registers_h__

#include "types.h"

u16vp	OAMmem			= (u16vp) 0x7000000;
u16vp	VideoBuffer		= (u16vp) 0x6000000;
u16vp	BackBuffer		= (u16vp) 0x600A000;
u16vp	OAMData			= (u16vp) 0x6010000;
u16vp	BGPaletteMem	= (u16vp) 0x5000000;
u16vp	OBJPaletteMem	= (u16vp) 0x5000200;

u32vp	REG_INTERUPT	= (u32vp) 0x3007FFC;

u32vp	REG_DISPCNT		= (u32vp) 0x4000000;
u16vp	REG_DISPCNT_L	= (u16vp) 0x4000000;
u16vp	REG_DISPCNT_H	= (u16vp) 0x4000002;
u16vp	REG_DISPSTAT	= (u16vp) 0x4000004;

u16vp	REG_VCOUNT		= (u16vp) 0x4000006;

u16vp	REG_BG0CNT		= (u16vp) 0x4000008;
u16vp	REG_BG1CNT		= (u16vp) 0x400000A;
u16vp	REG_BG2CNT		= (u16vp) 0x400000C;
u16vp	REG_BG3CNT		= (u16vp) 0x400000E;

u16vp	REG_BG0HOFS		= (u16vp) 0x4000010;
u16vp	REG_BG0VOFS		= (u16vp) 0x4000012;
u16vp	REG_BG1HOFS		= (u16vp) 0x4000014;
u16vp	REG_BG1VOFS		= (u16vp) 0x4000016;
u16vp	REG_BG2HOFS		= (u16vp) 0x4000018;
u16vp	REG_BG2VOFS		= (u16vp) 0x400001A;
u16vp	REG_BG3HOFS		= (u16vp) 0x400001C;
u16vp	REG_BG3VOFS		= (u16vp) 0x400001E;

u16vp	REG_BG2PA		= (u16vp) 0x4000020;
u16vp	REG_BG2PB		= (u16vp) 0x4000022;
u16vp	REG_BG2PC		= (u16vp) 0x4000024;
u16vp	REG_BG2PD		= (u16vp) 0x4000026;

u32vp	REG_BG2X		= (u32vp) 0x4000028;
u16vp	REG_BG2X_L		= (u16vp) 0x4000028;
u16vp	REG_BG2X_H		= (u16vp) 0x400002A;

u32vp	REG_BG2Y		= (u32vp) 0x400002C;
u16vp	REG_BG2Y_L		= (u16vp) 0x400002C;
u16vp	REG_BG2Y_H		= (u16vp) 0x400002E;

u16vp	REG_BG3PA		= (u16vp) 0x4000030;
u16vp	REG_BG3PB		= (u16vp) 0x4000032;
u16vp	REG_BG3PC		= (u16vp) 0x4000034;
u16vp	REG_BG3PD		= (u16vp) 0x4000036;

u32vp	REG_BG3X		= (u32vp) 0x4000038;
u16vp	REG_BG3X_L		= (u16vp) 0x4000038;
u16vp	REG_BG3X_H		= (u16vp) 0x400003A;

u32vp	REG_BG3Y		= (u32vp) 0x400003C;
u16vp	REG_BG3Y_L		= (u16vp) 0x400003C;
u16vp	REG_BG3Y_H		= (u16vp) 0x400003E;

u16vp	REG_WIN0H		= (u16vp) 0x4000040;
u16vp	REG_WIN1H		= (u16vp) 0x4000042;
u16vp	REG_WIN0V		= (u16vp) 0x4000044;
u16vp	REG_WIN1V		= (u16vp) 0x4000046;
u16vp	REG_WININ		= (u16vp) 0x4000048;
u16vp	REG_WINOUT		= (u16vp) 0x400004A;

u32vp	REG_MOSAIC		= (u32vp) 0x400004C;
u32vp	REG_MOSAIC_L	= (u32vp) 0x400004C;
u32vp	REG_MOSAIC_H	= (u32vp) 0x400004E;

u16vp	REG_BLDMOD		= (u16vp) 0x4000050;

u16vp	REG_COLEV		= (u16vp) 0x4000052;
u16vp	REG_COLEY		= (u16vp) 0x4000054;

u32vp	REG_SG10		= (u32vp) 0x4000060;
u16vp	REG_SG10_L		= (u16vp) 0x4000060;
u16vp	REG_SG10_H		= (u16vp) 0x4000062;

u16vp	REG_SG11		= (u16vp) 0x4000064;
u16vp	REG_SG20		= (u16vp) 0x4000068;
u16vp	REG_SG21		= (u16vp) 0x400006C;

u32vp	REG_SG30		= (u32vp) 0x4000070;
u16vp	REG_SG30_L		= (u16vp) 0x4000070;
u16vp	REG_SG30_H		= (u16vp) 0x4000072;

u16vp	REG_SG31		= (u16vp) 0x4000074;
u16vp	REG_SG40		= (u16vp) 0x4000078;
u16vp	REG_SG41		= (u16vp) 0x400007C;

u32vp	REG_SGCNT0		= (u32vp) 0x4000080;
u16vp	REG_SGCNT0_L	= (u16vp) 0x4000080;
u16vp	REG_SGCNT0_H	= (u16vp) 0x4000082;

u16vp	REG_SGCNT1		= (u16vp) 0x4000084;
u16vp	REG_SGBIAS		= (u16vp) 0x4000088;

u32vp	REG_SGWR0		= (u32vp) 0x4000090;
u16vp	REG_SGWR0_L		= (u16vp) 0x4000090;
u16vp	REG_SGWR0_H		= (u16vp) 0x4000092;

u32vp	REG_SGWR1		= (u32vp) 0x4000094;
u16vp	REG_SGWR1_L		= (u16vp) 0x4000094;
u16vp	REG_SGWR1_H		= (u16vp) 0x4000096;

u32vp	REG_SGWR2		= (u32vp) 0x4000098;
u16vp	REG_SGWR2_L		= (u16vp) 0x4000098;
u16vp	REG_SGWR2_H		= (u16vp) 0x400009A;

u32vp	REG_SGWR3		= (u32vp) 0x400009C;
u16vp	REG_SGWR3_L		= (u16vp) 0x400009C;
u16vp	REG_SGWR3_H		= (u16vp) 0x400009E;

u32vp	REG_SGFIF0A		= (u32vp) 0x40000A0;
u16vp	REG_SGFIFOA_L	= (u16vp) 0x40000A0;
u16vp	REG_SGFIFOA_H	= (u16vp) 0x40000A2;

u32vp	REG_SGFIFOB		= (u32vp) 0x40000A4;
u16vp	REG_SGFIFOB_L	= (u16vp) 0x40000A4;
u16vp	REG_SGFIFOB_H	= (u16vp) 0x40000A6;

u32vp	REG_DM0SAD		= (u32vp) 0x40000B0;
u16vp	REG_DM0SAD_L	= (u16vp) 0x40000B0;
u16vp	REG_DM0SAD_H	= (u16vp) 0x40000B2;

u32vp	REG_DM0DAD		= (u32vp) 0x40000B4;
u16vp	REG_DM0DAD_L	= (u16vp) 0x40000B4;
u16vp	REG_DM0DAD_H	= (u16vp) 0x40000B6;

u32vp	REG_DM0CNT		= (u32vp) 0x40000B8;
u16vp	REG_DM0CNT_L	= (u16vp) 0x40000B8;
u16vp	REG_DM0CNT_H	= (u16vp) 0x40000BA;

u32vp	REG_DM1SAD		= (u32vp) 0x40000BC;
u16vp	REG_DM1SAD_L	= (u16vp) 0x40000BC;
u16vp	REG_DM1SAD_H	= (u16vp) 0x40000BE;

u32vp	REG_DM1DAD		= (u32vp) 0x40000C0;
u16vp	REG_DM1DAD_L	= (u16vp) 0x40000C0;
u16vp	REG_DM1DAD_H	= (u16vp) 0x40000C2;

u32vp	REG_DM1CNT		= (u32vp) 0x40000C4;
u16vp	REG_DM1CNT_L	= (u16vp) 0x40000C4;
u16vp	REG_DM1CNT_H	= (u16vp) 0x40000C6;

u32vp	REG_DM2SAD		= (u32vp) 0x40000C8;
u16vp	REG_DM2SAD_L	= (u16vp) 0x40000C8;
u16vp	REG_DM2SAD_H	= (u16vp) 0x40000CA;

u32vp	REG_DM2DAD		= (u32vp) 0x40000CC;
u16vp	REG_DM2DAD_L	= (u16vp) 0x40000CC;
u16vp	REG_DM2DAD_H	= (u16vp) 0x40000CE;

u32vp	REG_DM2CNT		= (u32vp) 0x40000D0;
u16vp	REG_DM2CNT_L	= (u16vp) 0x40000D0;
u16vp	REG_DM2CNT_H	= (u16vp) 0x40000D2;

u32vp	REG_DM3SAD		= (u32vp) 0x40000D4;
u16vp	REG_DM3SAD_L	= (u16vp) 0x40000D4;
u16vp	REG_DM3SAD_H	= (u16vp) 0x40000D6;

u32vp	REG_DM3DAD		= (u32vp) 0x40000D8;
u16vp	REG_DM3DAD_L	= (u16vp) 0x40000D8;
u16vp	REG_DM3DAD_H	= (u16vp) 0x40000DA;

u32vp	REG_DM3CNT		= (u32vp) 0x40000DC;
u16vp	REG_DM3CNT_L	= (u16vp) 0x40000DC;
u16vp	REG_DM3CNT_H	= (u16vp) 0x40000DE;

u16vp	REG_TM0D		= (u16vp) 0x4000100;
u16vp	REG_TM0CNT		= (u16vp) 0x4000102;

u16vp	REG_TM1D		= (u16vp) 0x4000104;
u16vp	REG_TM1CNT		= (u16vp) 0x4000106;

u16vp	REG_TM2D		= (u16vp) 0x4000108;
u16vp	REG_TM2CNT		= (u16vp) 0x400010A;

u16vp	REG_TM3D		= (u16vp) 0x400010C;
u16vp	REG_TM3CNT		= (u16vp) 0x400010E;

u16vp	REG_SCD0		= (u16vp) 0x4000120;
u16vp	REG_SCD1		= (u16vp) 0x4000122;
u16vp	REG_SCD2		= (u16vp) 0x4000124;
u16vp	REG_SCD3		= (u16vp) 0x4000126;

u32vp	REG_SCCNT		= (u32vp) 0x4000128;
u16vp	REG_SCCNT_L		= (u16vp) 0x4000128;
u16vp	REG_SCCNT_H		= (u16vp) 0x400012A;

u16vp	REG_P1			= (u16vp) 0x4000130;
u16vp	REG_P1CNT		= (u16vp) 0x4000132;
u16vp	REG_R			= (u16vp) 0x4000134;
u16vp	REG_HS_CTRL		= (u16vp) 0x4000140;

u32vp	REG_JOYRE		= (u32vp) 0x4000150;
u16vp	REG_JOYRE_L		= (u16vp) 0x4000150;
u16vp	REG_JOYRE_H		= (u16vp) 0x4000152;

u32vp	REG_JOYTR		= (u32vp) 0x4000154;
u16vp	REG_JOYTR_L		= (u16vp) 0x4000154;
u16vp	REG_JOYTR_H		= (u16vp) 0x4000156;

u32vp	REG_JSTAT		= (u32vp) 0x4000158;
u16vp	REG_JSTAT_L		= (u16vp) 0x4000158;
u16vp	REG_JSTAT_H		= (u16vp) 0x400015A;

u16vp	REG_IE			= (u16vp) 0x4000200;
u16vp	REG_IF			= (u16vp) 0x4000202;

u16vp	REG_WSCNT		= (u16vp) 0x4000204;
u16vp	REG_IME			= (u16vp) 0x4000208;
u16vp	REG_PAUSE		= (u16vp) 0x4000300;

#endif
