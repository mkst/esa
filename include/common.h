#ifndef COMMON_H
#define COMMON_H

#define NULL 0

#define ABS(x) ((x)<0 ? -(x) : (x))
#define ABSF(x) ((x)<0.0f ? -(x) : (x))

#define	FTOFIX32(x)	(long)((x) * (float)0x00010000)

// TBD
// ABBBBBGG GGGRRRRR
#define GPACK_RGBA5551(r, g, b, a) \
    ((r) & 0x1f) | \
    (((g) << 5) & 0x3e0) | \
    (((b) << 10) & 0x7c00) | \
    (((a) << 15) & 0x8000)

#include "types.h"
#include "macros.h"
#include "include_asm.h"

#include "structs.h"
#include "functions.h"
#include "variables.h"

#include "animals.h"

#endif
