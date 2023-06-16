#include "common.h"

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6ED230", func_800A1754);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6ED230", func_800A186C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6ED230", func_800A1A20);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6ED230", func_800A1BD4);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6ED230", func_800A1D78);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6ED230", func_800A1E80);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6ED230", func_800A2074);

void func_800A21B0(s16 arg0, u16 arg1) {
    s16 var_a2;
    s32 temp_lo;
    s32 var_a3;

    u16 temp_a1;

    temp_a1 = (arg0 << 7) / arg1;

    if (temp_a1 < 0x60) {
        var_a2 = (temp_a1 * 4) / 3;
    } else {
        var_a2 = (0x80 - temp_a1) * 4;
    }

    D_800E54C0 += var_a2 * (D_800CA604[(s16)((temp_a1 << 3) & 0xF8) & 0xFF] >> 7);
    D_800E54C4 += var_a2 * (D_800CA604[(s16)((temp_a1 << 2) & 0xFC) & 0xFF] >> 7);
    D_800E54C8 -= var_a2 * (D_800CA604[(s16)((temp_a1 << 3) & 0xF8) & 0xFF] >> 7);
}

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6ED230", func_800A22B0);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6ED230", func_800A2344);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6ED230", func_800A23EC);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6ED230", func_800A2660);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6ED230", func_800A2698);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6ED230", func_800A281C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6ED230", func_800A2A54);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6ED230", func_800A2D30);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6ED230", func_800A300C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6ED230", func_800A32EC);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6ED230", func_800A3404);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6ED230", func_800A350C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6ED230", func_800A3628);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6ED230", func_800A3630);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6ED230", func_800A3828);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6ED230", func_800A3A38);
