#ifndef COMMON_H
#define COMMON_H

#define NULL 0

#define ABS(x) ((x)<0 ? -(x) : (x))
#define ABSF(x) ((x)<0.0f ? -(x) : (x))

#ifndef MAX
#define MAX(a,b) (((a)>(b))?(a):(b))
#endif
#ifndef MIN
#define MIN(a,b) (((a)<(b))?(a):(b))
#endif

#define FROM_FLOAT(x) (((s32)x) << 0xC)
#define TO_FLOAT(x)   (((s32)x) >> 0xC)

#define MAX_INT                 0x7FFFFFFF
#define OB_TYPE_ANIMAL_OFFSET   256

#define TILESET_ASCII_OFFSET    272
#define TILESET_ZERO            (TILESET_ASCII_OFFSET + '0')
#define TILESET_NINE            (TILESET_ASCII_OFFSET + '9')
#define TILESET_SPACE           (TILESET_ASCII_OFFSET + ' ')

#define SQ(x) ((x) * (x))

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
