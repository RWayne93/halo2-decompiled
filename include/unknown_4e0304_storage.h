#ifndef UNKNOWN_4E0304_STORAGE_H
#define UNKNOWN_4E0304_STORAGE_H

/* retail's busy flag at 0x4e0304 and the stamp at 0x4e0308 are one global,
   so LTCG keeps `g_4e0304 = true` before calls that read the stamp
   (0x1320f0 -> 0x132220). Defined in src/unknown_1321f0.cpp. */

#include <stddef.h>
#include "unknown_11c920.h"

struct s_4e0304_storage
{
	bool field_0;
	byte unknown_1[0x3];
	long field_4;
};

extern s_4e0304_storage g_4e0304_storage;
#define g_4e0304 (g_4e0304_storage.field_0)
#define g_4e0308 (g_4e0304_storage.field_4)
typedef char assert_4e0304_offset_4[(offsetof(s_4e0304_storage, field_4) == 0x4) ? 1 : -1];
typedef char assert_4e0304_size[(sizeof(s_4e0304_storage) == 0x8) ? 1 : -1];

#endif
