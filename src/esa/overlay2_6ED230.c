#include "common.h"

// sssv:func_802DBB80_6ED230
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6ED230", func_800A1754);

// sssv:func_802DBCDC_6ED38C
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6ED230", func_800A186C);

// sssv:func_802DBED8_6ED588
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6ED230", func_800A1A20);

// sssv:func_802DC0D4_6ED784
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6ED230", func_800A1BD4);

// sssv:func_802DC2AC_6ED95C
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6ED230", func_800A1D78);

// sssv:func_802DC3F4_6EDAA4
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6ED230", func_800A1E80);

// sssv:func_802DC6A4_6EDD54
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6ED230", func_800A2074);

// sssv:func_802DC854_6EDF04
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

// sssv:func_802DC968_6EE018
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6ED230", func_800A22B0);

// sssv:func_802DCCAC_6EE35C
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6ED230", func_800A2344);

// sssv:func_802DCD70_6EE420
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6ED230", func_800A23EC);

// sssv:func_802DD004_6EE6B4
void func_800A2660(u16 arg0) {
    u16 tmp = D_800E52C0 - D_800E5274->unk354;

    if (arg0 < tmp) {
        D_800E5274->unk384 = 0;
    }
}
