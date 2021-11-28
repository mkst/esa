#include "common.h"

INCLUDE_ASM("asm/esa/nonmatchings/91BBC", func_800A15BC);

INCLUDE_ASM("asm/esa/nonmatchings/91BBC", func_800A1754);

INCLUDE_ASM("asm/esa/nonmatchings/91BBC", func_800A186C);

INCLUDE_ASM("asm/esa/nonmatchings/91BBC", func_800A1A20);

INCLUDE_ASM("asm/esa/nonmatchings/91BBC", func_800A1BD4);

INCLUDE_ASM("asm/esa/nonmatchings/91BBC", func_800A1D78);

INCLUDE_ASM("asm/esa/nonmatchings/91BBC", func_800A1E80);

INCLUDE_ASM("asm/esa/nonmatchings/91BBC", func_800A2074);

INCLUDE_ASM("asm/esa/nonmatchings/91BBC", func_800A21B0);
// void func_800A21B0(s16 arg0, u16 arg1) {
//     s16 phi_a2;
//     u16 temp_a1;
//
//     temp_a1 = (arg0 << 7) / arg1;
//
//     if (temp_a1 < 96) {
//         phi_a2 = (temp_a1 << 2) / 3;
//     } else {
//         phi_a2 = (128 - temp_a1) << 2;
//     }
//
//     D_800E54C0 += phi_a2 * (D_800CA604[(temp_a1 << 3) & 0xFC] >> 7);
//     D_800E54C4 -= phi_a2 * (D_800CA604[(temp_a1 << 3) & 0xFC] >> 7);
//     D_800E54C8 += phi_a2 * (D_800CA604[(temp_a1 << 2) & 0xFC] >> 7);
// }

INCLUDE_ASM("asm/esa/nonmatchings/91BBC", func_800A22B0);

INCLUDE_ASM("asm/esa/nonmatchings/91BBC", func_800A2344);

INCLUDE_ASM("asm/esa/nonmatchings/91BBC", func_800A23EC);

INCLUDE_ASM("asm/esa/nonmatchings/91BBC", func_800A2660);
