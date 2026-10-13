#ifndef UNKNOWN_4E7410_STORAGE_H
#define UNKNOWN_4E7410_STORAGE_H

/* retail's busy flag 0x4e7411, stamp 0x4e7414 and marks 0x4e7418 (0x200
   longs, ending at 0x4e7c18 where the next block starts; read by 0x14a5b0
   and 0x14a6d0) are one global, so LTCG keeps `g_4e7411 = true` before the
   calls that read the stamp. 0x4e7410 is never referenced in retail.
   Defined in src/unknown_180b60.cpp. */

#include <stddef.h>
#include "unknown_11c920.h"

struct s_4e7410_storage
{
	byte unknown_0;
	bool field_1;
	byte unknown_2[0x2];
	long field_4;
	long field_8[0x200];
};

extern s_4e7410_storage g_4e7410_storage;
#define g_4e7411 (g_4e7410_storage.field_1)
#define g_4e7414 (g_4e7410_storage.field_4)
#define g_4e7418 (g_4e7410_storage.field_8)
typedef char assert_4e7410_offset_1[(offsetof(s_4e7410_storage, field_1) == 0x1) ? 1 : -1];
typedef char assert_4e7410_offset_4[(offsetof(s_4e7410_storage, field_4) == 0x4) ? 1 : -1];
typedef char assert_4e7410_offset_8[(offsetof(s_4e7410_storage, field_8) == 0x8) ? 1 : -1];
typedef char assert_4e7410_size[(sizeof(s_4e7410_storage) == 0x808) ? 1 : -1];

#endif
