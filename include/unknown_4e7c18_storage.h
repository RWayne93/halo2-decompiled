#ifndef UNKNOWN_4E7C18_STORAGE_H
#define UNKNOWN_4E7C18_STORAGE_H

/* retail's busy flag 0x4e7c18, stamp 0x4e7c1c and marks 0x4e7c20 (1024
   longs, read by 0x134390, 0x16a440 and 0x244c10) are one global, so LTCG
   keeps `g_4e7c18 = true` before the calls that read them.
   Defined in src/unknown_1689b0.cpp. */

#include <stddef.h>
#include "unknown_11c920.h"

struct s_4e7c18_storage
{
	bool field_0;
	byte unknown_1[0x3];
	long field_4;
	long field_8[1024];
};

extern s_4e7c18_storage g_4e7c18_storage;
#define g_4e7c18 (g_4e7c18_storage.field_0)
#define g_4e7c1c (g_4e7c18_storage.field_4)
#define g_4e7c20 (g_4e7c18_storage.field_8)
typedef char assert_4e7c18_offset_4[(offsetof(s_4e7c18_storage, field_4) == 0x4) ? 1 : -1];
typedef char assert_4e7c18_offset_8[(offsetof(s_4e7c18_storage, field_8) == 0x8) ? 1 : -1];
typedef char assert_4e7c18_size[(sizeof(s_4e7c18_storage) == 0x1008) ? 1 : -1];

#endif
