#include "common.h"

INCLUDE_ASM("asm/esa/nonmatchings/C278", func_8001BC78);

INCLUDE_ASM("asm/esa/nonmatchings/C278", func_8001C0E8);

INCLUDE_ASM("asm/esa/nonmatchings/C278", func_8001C340);

INCLUDE_ASM("asm/esa/nonmatchings/C278", func_8001C618);

// sssv:convert_text_to_int
u8 func_8001C864(s16 *arg0) {
    u8 ret = 0;
    u8 i = 0;

    while ((arg0[i] >= TILESET_ZERO) && (arg0[i] <= TILESET_NINE)) {
        ret = ret*10 + (arg0[i] - TILESET_ZERO);
        i++;
    }
    return ret;
}

INCLUDE_ASM("asm/esa/nonmatchings/C278", func_8001C8D4);

INCLUDE_ASM("asm/esa/nonmatchings/C278", func_8001C944);

// fpu misery
INCLUDE_ASM("asm/esa/nonmatchings/C278", func_8001CA94);
