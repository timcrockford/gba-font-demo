/*
-------------------------------------------------------------------------------
File:		types.h
Author:		Tim Crockford (raven@shakari.myvnc.com)
Version:	0.4
-------------------------------------------------------------------------------
Description:
This file contains all the types used by the GBA. They are simply typedefs of
standard types, however more clearly defined to indicate their purpose. (For
example, u32 indicated an unsigned 32 bit value, u16vp would indicate a 16 bit
volatile pointer (unsigned is specified, however you cannot have a negative
pointer, so this is assumed.))

Some non-standard types will also be defined (such as u5, u2, etc) which still
effectively are 8, 16 or 32 bit values, however clearly indicate the type of
data required. An RGB value for example takes three 5 bit values. You still
pass in an 8 bit value, however the range is only from 0-31, this simply
is an indication of the data required.
-------------------------------------------------------------------------------
*/

#ifndef __types_h__
#define __types_h__

typedef	unsigned char				u2;
typedef	unsigned char				u4;
typedef unsigned char				u5;

typedef	unsigned char				u8;
typedef const unsigned char			u8c;
typedef	unsigned char*				u8p;
typedef unsigned volatile char*		u8vp;
typedef signed char					s8;
typedef const signed char			s8c;

typedef unsigned short				u16;
typedef const unsigned short		u16c;
typedef unsigned short*				u16p;
typedef unsigned volatile short*	u16vp;
typedef signed short				s16;
typedef const signed short			s16c;

typedef unsigned long				u32;
typedef const unsigned long			u32c;
typedef unsigned long*				u32p;
typedef unsigned volatile long*		u32vp;
typedef signed long					s32;
typedef const signed long			s32c;

typedef unsigned char				byte;
typedef unsigned short				hword;
typedef unsigned long				word;
typedef unsigned long long			dword;

#endif
