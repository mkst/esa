#include "common.h"

INCLUDE_ASM("asm/esa/nonmatchings/C278", func_8001BC78);

// write chars to screen 1
INCLUDE_ASM("asm/esa/nonmatchings/C278", func_8001C0E8);

// write chars to screen 2
INCLUDE_ASM("asm/esa/nonmatchings/C278", func_8001C340);

// write chars to screen 3
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

s32 func_8001C8D4(s8 *arg0) {
    u32 temp_a0;
    s32 var_v1;

    var_v1 = 0;
    while (*arg0 != 0) {
        temp_a0 = *arg0++;
        if (temp_a0 == 32) {
            var_v1 += 4;
        } else {
            temp_a0 = temp_a0 - 0x20;
            if (temp_a0 < 0xFF) {
                var_v1 += D_800C8E26[temp_a0 << 2] - 1;
            }
        }
    }
    return var_v1;
}

INCLUDE_ASM("asm/esa/nonmatchings/C278", func_8001C944);

// fpu misery
INCLUDE_ASM("asm/esa/nonmatchings/C278", func_8001CA94);
