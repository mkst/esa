#include "common.h"

u16 D_800E5264;
struct005 *D_800E5274;
struct004 *D_800E527C;
struct006 *D_800E529C;

s16 gCurrentAnimalIndex; // bss

void func_80039D34(void) {
    D_800E527C->state = 2;
    D_800E5274->unk33A = 0;
    D_800E5274->unk312 = 0;
    D_800E5274->unk314 = 0;
    D_800E5274->unk388 = 0;
}

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_80039D58);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_80039E0C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_80039EC4);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_80039F78);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003A4A0);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003A4C4);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003A4F8);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003A52C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003A554);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003A578);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003A5D0);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003A620);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003A678);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003A69C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003A6D0);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003A704);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003A738);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003A764);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003ABDC);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003AC14);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003AC5C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003AC90);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003ACC0);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003ACE8);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003AD14);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003AD38);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003AD94);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003ADF4);

void func_8003AE30(void) {
    D_800E527C->state = 0x65;
    D_800E5274->unk33A = 0;
    D_800E5274->unk312 = 0;
    D_800E5274->unk314 = 0;
    D_800E5274->unk388 = 0;
}

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003AE54);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003AE78);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003AEBC);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003AEF0);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003AF20);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003B02C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003B05C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003B08C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003B0FC);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003BD40);

// sssv:func_802A78CC_6B8F7C
#if 0
extern s32 D_800E524C;
extern void **D_800E5284;
extern u16 D_800E528C;
extern void *D_800E5298;
extern s16 D_800E52B4;
extern s8 D_800E52CC;
extern s8 D_800E52E0;

void func_8003BF7C(void) {
    s16 sp38;
    s16 sp3A;
    s16 sp3C;
    s16 sp3E;
    s32 sp40;
    s32 sp44;
    s16 temp_s0_10;
    s16 temp_s0_2;
    s16 temp_s0_3;
    s16 temp_s0_6;
    s16 temp_v1;
    s16 var_a0_2;
    s16 var_a0_9;
    s16 var_a1;
    s16 var_s4;
    s16 var_v0_3;
    s16 var_v0_7;
    s16 var_v0_8;
    s16 var_v0_9;
    s16 var_v1_4;
    s16 var_v1_6;
    s16 var_v1_7;
    s32 temp_a0;
    s32 temp_a0_3;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_s0;
    s32 temp_s0_4;
    s32 temp_s0_7;
    s32 temp_s0_8;
    s32 temp_s0_9;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s2_2;
    s32 temp_s2_4;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_v0_10;
    s32 temp_v0_11;
    s32 temp_v0_12;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a0_6;
    s32 var_a0_7;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_5;
    struct004 *temp_a0_4;
    u16 temp_a0_2;
    u16 temp_a1;
    u16 temp_a1_2;
    u16 temp_v0;
    u16 temp_v1_5;
    u16 temp_v1_6;
    u16 var_s5;
    u16 var_s5_3;
    u32 temp_a2;
    u32 temp_s1;
    u32 temp_s3_2;
    u32 var_a0_8;
    u32 var_s1;
    u32 var_s5_2;
    u64 temp_ret;
    u64 temp_ret_10;
    u64 temp_ret_2;
    u64 temp_ret_3;
    u64 temp_ret_4;
    u64 temp_ret_5;
    u64 temp_ret_6;
    u64 temp_ret_7;
    u64 temp_ret_8;
    u64 temp_ret_9;
    u64 temp_s0_5;
    u64 temp_s2;
    u64 temp_v0_6;
    u64 var_a0_5;
    u8 temp_s2_3;
    u8 temp_v1_2;
    u8 var_a0;

    if (D_800E527C->unk4A == 0) {
        temp_v0 = (u16) D_800E5274->unk312;
        temp_v1 = temp_v0 + 1;
        D_800E5274->unk314 = (s16) temp_v0;
        D_800E5274->unk312 = temp_v1;
        if ((u32) (temp_v1 & 0xFFFF) >= 0x4000U) {
            D_800E5274->unk312 = temp_v1 - 0x2000;
        }

        temp_v1_2 = D_800E5274->pad387;
        temp_s0 = D_800E527C->unk6C;
        if (temp_v1_2 != 0) {
            D_800E5274->pad387 = temp_v1_2 - 1;
        }
        if ((D_800E52B4 != 0) && ((D_800E52B4 = (u16) D_800E52B4 - 1, temp_v1_3 = D_800E527C->unk162 & 0xF, (temp_v1_3 == 1)) || (temp_v1_3 == 6))) {
            D_800E52B4 = 0;
        }
        temp_s3 = D_800E5274->yPos.w;
        temp_v0_2 = D_800E527C->unk162 & 0xF;
        temp_a2 = temp_v0_2 - 1;
        if (temp_a2 < 7U) {
            switch (temp_v0_2) {                    /* switch 1 */
            case 1:                                 /* switch 1 */
                D_800E5274->unk24 = (s32) (D_800E5274->unk24 - D_800E4BA0);
                if (func_80030364(D_800E527C, D_800E5274, temp_a2) == 1) {
                    D_800E527C->unk162 = 3;
                    func_8003B08C();
                    D_800E5274->unk24 = (s32) (D_800E5274->unk24 + (D_800E4BA0 - (D_800E4B9C * 2)));
                }

                temp_v0_3 = D_800E527C->unk6C;
                if ((temp_v0_3 == temp_s0) || (temp_v0_3 == 0)) {
                    sp3A = 0;
                    sp38 = 0;
                    if (temp_v0_3 == 0) {
                        func_80037C10(D_800E527C->xPos.h[1], D_800E527C->zPos.h[1], &sp38, &sp3A, (s32) D_800E527C->unk160);
                    }
                    if (((abs((s32) sp38) < 0x24) && (abs((s32) sp3A) < 0x24)) || ((D_800E527C->yPos.h[1] - (func_80037098(D_800E527C->xPos.h[1], D_800E527C->zPos.h[1], D_800E527C->unk160) >> 0x10)) >= 0x41)) {
                        D_800E527C->yVel.w = D_800E527C->yPos.w - temp_s3;
                    } else {
                        var_v1 = D_800E527C->yPos.w - temp_s3;
                        if (var_v1 > 0x40000) {
                            var_v1 = 0x40000;
                        }
                        D_800E527C->yVel.w = var_v1;
                    }
                }
                var_a0 = D_800E527C->unk162;
                if ((var_a0 == 3) && ((D_800E5274->unk380 != 0) || ((D_800E529C->unk96 & 1) && ((D_800E52C0 - D_800E528C) < 3) && (D_800E5274->pad387 == 0) && ((var_a0 = 0x20000, (D_800E5298 == NULL)) || (D_800E5298->unk16C->unk80 & 0x20000U))))) {
                    temp_v1_4 = D_800E5274->unk24;
                    if (temp_v1_4 < 0) {
                        var_a0 = (u8) D_800E4BA0;
                        if (temp_v1_4 < (s32) var_a0) {
                            D_800E5274->unk24 = (s32) (temp_v1_4 + var_a0);
                        } else {
                            D_800E5274->unk24 = 0;
                        }
                    }
                }
                func_80045CA4((s32) var_a0);
                func_800646E4();
                func_800400F8(&sp40, &sp44);
                var_s5 = (*D_800E5284)->unkA6;
                temp_v1_5 = D_800E529C->unk90;
                if (temp_v1_5 == 0x2A) {
                    func_80064CD0(2, 0xC, var_s5);
                    if (D_800E52E0 != 0) {
                        temp_a2_2 = D_800E527C->xVel.w;
                        var_v0 = temp_a2_2;
                        if (temp_a2_2 < 0) {
                            var_v0 = temp_a2_2 + 0xFFFF;
                        }
                        temp_v0_4 = var_v0 >> 0x10;
                        temp_a3 = D_800E527C->zVel.w;
                        var_v1_2 = temp_a3;
                        if (temp_a3 < 0) {
                            var_v1_2 = temp_a3 + 0xFFFF;
                        }
                        temp_v0_5 = var_v1_2 >> 0x10;
                        if (((temp_v0_4 * temp_v0_4) + (temp_v0_5 * temp_v0_5)) < 0x310) {
                            D_800E527C->xVel.w = temp_a2_2 + (((s32) ((u16) D_800CA604[D_800E5274->unk322] << 0x10) >> 0x17) * 0xDE);
                            D_800E527C->zVel.w = temp_a3 + (((s32) ((u16) D_800CA604[(D_800E5274->unk322 + 0x40) & 0xFF] << 0x10) >> 0x17) * 0xDE);
                        }
                    }
                } else if (temp_v1_5 == 0x2C) {
                    func_80064CD0(2, 0xC, var_s5);
                    if (D_800E52E0 != 0) {
                        if (D_80111C74.unk52 != 2) {
                            D_800E527C->xVel.w += ((s32) ((u16) D_800CA604[D_800E5274->unk322] << 0x10) >> 0x17) << 7;
                            var_v0_2 = D_800E527C->zVel.w;
                            var_v1_3 = ((s32) ((u16) D_800CA604[(D_800E5274->unk322 + 0x40) & 0xFF] << 0x10) >> 0x17) << 7;
                        } else {
                            D_800E527C->xVel.w += ((s32) ((u16) D_800CA604[D_800E5274->unk322] << 0x10) >> 0x17) << 8;
                            var_v0_2 = D_800E527C->zVel.w;
                            var_v1_3 = ((s32) ((u16) D_800CA604[(D_800E5274->unk322 + 0x40) & 0xFF] << 0x10) >> 0x17) << 8;
                        }
                        D_800E527C->zVel.w = var_v0_2 + var_v1_3;
                    }
                } else if (D_800E52E0 != 0) {
                    sp40 += (s32) (sp40 * D_800E52CC) >> 4;
                    sp44 += (s32) (sp44 * D_800E52CC) >> 4;
                    temp_s0_2 = abs(D_800E527C->xVel.w);
                    var_v1_4 = abs(D_800E527C->zVel.w);
                    var_a0_2 = var_v1_4;
                    if (var_v1_4 < temp_s0_2) {
                        var_a0_2 = temp_s0_2;
                    }
                    if (temp_s0_2 < var_v1_4) {
                        var_v1_4 = temp_s0_2;
                    }
                    temp_a1 = D_800E529C->unk98;
                    temp_a0 = var_a0_2 + (var_v1_4 >> 1);
                    if ((temp_a1 << 0xB) < temp_a0) {
                        var_s5 = (u16) (var_s5 >> 2);
                    } else if ((temp_a1 << 0xA) < temp_a0) {
                        var_s5 = (u16) (var_s5 >> 1);
                    } else if (temp_a0 < (temp_a1 << 8)) {
                        var_s5 = (var_s5 + (var_s5 >> 1)) & 0xFFFF;
                    }
                }
                if ((D_80111C74.unk20 == 1) && (D_800E527C->unk6C == 0) && ((temp_a0_2 = D_800E529C->unk90, (temp_a0_2 == 0x2C)) || ((temp_a0_2 == 0x2A) && (D_800E5274->unk330 == 0)) || ((abs(sp40) <= 0xFFFF) && (abs(sp44) <= 0xFFFF) && ((abs(D_800E527C->xVel.w) > 0x20000) || (abs(D_800E527C->zVel.w) > 0x20000))))) {
                    temp_s0_3 = abs(D_800E527C->xVel.w);
                    if (abs(D_800E527C->zVel.w) < temp_s0_3) {
                        var_a0_3 = D_800E527C->xVel.w;
                    } else {
                        var_a0_3 = D_800E527C->zVel.w;
                    }
                    var_s4 = abs(var_a0_3);
                    if (var_s4 > 0x60000) {
                        var_s4 = 0x60000;
                    }
                    var_v0_3 = var_s4;
                    if (var_s4 < 0) {
                        var_v0_3 = var_s4 + 0x3FFFF;
                    }
                    var_a0_4 = var_v0_3 >> 0x12;
                    if (var_a0_4 >= 2) {
                        var_a0_4 = 1;
                    }
                    temp_s0_4 = __floatsisf(var_a0_4);
                    temp_ret = __extendsfdf2(D_800E524C);
                    temp_ret_2 = __adddf3(temp_ret, (u32) temp_ret, 0x9999999A, 0x3FC99999);
                    temp_s2 = temp_ret_2;
                    temp_s3_2 = (u32) temp_ret_2;
                    temp_ret_3 = __extendsfdf2(temp_s0_4);
                    temp_v0_6 = temp_ret_3;
                    var_s1 = (u32) temp_ret_3;
                    var_a0_5 = temp_v0_6;
                    if (__ledf2(temp_v0_6, var_s1, temp_s2, temp_s3_2) > 0) {
                        var_s1 = temp_s3_2;
                        var_a0_5 = temp_s2;
                    }
                    D_800E524C = __truncdfsf2(var_a0_5, var_s1);
                    temp_ret_4 = __floatsidf(var_s4);
                    temp_ret_5 = __muldf3(temp_ret_4, (u32) temp_ret_4, 0, 0x3EF00000);
                    temp_ret_6 = __adddf3(temp_ret_5, (u32) temp_ret_5, 0, 0x3FF00000);
                    temp_ret_7 = __floatsidf(SquareRoot0(__fixdfsi(temp_ret_6, (u32) temp_ret_6)));
                    temp_ret_8 = __muldf3(temp_ret_7, (u32) temp_ret_7, 0, 0x3FE00000);
                    temp_s0_5 = temp_ret_8;
                    temp_s1 = (u32) temp_ret_8;
                    temp_ret_9 = __extendsfdf2(__mulsf3(D_800E524C, 0x46A00000));
                    temp_ret_10 = __muldf3(temp_ret_9, (u32) temp_ret_9, 0x9999999A, 0x3FD99999);
                    func_8001B714(D_800E527C, 0x6F, 0x3F, temp_ret_10, (u32) temp_ret_10, 0, (s32) temp_s0_5, temp_s1, (s32) D_800E527C->xPos.h[1], (s32) D_800E527C->zPos.h[1], (s32) D_800E527C->yPos.h[1]);
                }
                func_8003F83C(var_s5, &sp40, &sp44);
                func_80064858(D_800E527C, &sp40, &sp44);
                D_800E5274->unk1C = sp40;
                D_800E5274->unk20 = sp44;
                D_800E527C->unk10 = (s32) (D_800E527C->xPos.w + D_800E527C->xVel.w);
                D_800E527C->unk14 = (s32) (D_800E527C->zPos.w + D_800E527C->zVel.w);
                var_v0_4 = (D_800E527C->yPos.w + D_800E527C->yVel.w) - D_800E4BA0;
block_195:
                D_800E527C->unk18 = var_v0_4;
                break;
            case 2:                                 /* switch 1 */
                temp_v0_7 = func_80030364(D_800E527C, D_800E5274, temp_a2);
                switch (temp_v0_7) {                /* switch 3; irregular */
                case 0:                             /* switch 3 */
                    if (func_8003B0FC() != 0) {
                        D_800E527C->yVel.w = D_800E527C->yPos.w - temp_s3;
                    }
                    if ((D_800E52C0 - D_800E527C->unk48) >= 4) {
                        func_8006309C(6U, D_800E5274);
                    }
                    break;
                case 1:                             /* switch 3 */
                case 2:                             /* switch 3 */
                    D_800E527C->yVel.w = D_800E527C->yPos.w - temp_s3;
                    break;
                }
                func_80045CA4();
                func_800400F8(&sp40, &sp44);
                if (D_800E52E0 != 0) {
                    sp40 += (s32) (sp40 * D_800E52CC) >> 4;
                    sp44 += (s32) (sp44 * D_800E52CC) >> 4;
                }
                func_8003FFE4(((*D_800E5284)->unkAA * 0x64) & 0xFFFC, &sp40, &sp44);
                D_800E527C->xVel.w = sp40;
                D_800E527C->unk10 = (s32) (D_800E527C->xPos.w + sp40);
                D_800E527C->zVel.w = sp44;
                var_a0_6 = D_800E527C->zPos.w + sp44;
                var_v0_4 = D_800E527C->yPos.w + D_800E527C->yVel.w;
block_194:
                D_800E527C->unk14 = var_a0_6;
                goto block_195;
            case 3:                                 /* switch 1 */
                temp_v0_8 = func_80030364(D_800E527C, D_800E5274, temp_a2);
                switch (temp_v0_8) {                /* switch 4; irregular */
                case 0:                             /* switch 4 */
                    if (func_8003B0FC() != 0) {
                        var_a0_7 = D_800E527C->yVel.w + 0x40000;
                        if (var_a0_7 < 0x40000) {
                            var_a0_7 = 0x40000;
                        }
                        var_v0_5 = D_800E527C->yPos.w - temp_s3;
                        if (var_a0_7 < var_v0_5) {
                            var_v0_5 = var_a0_7;
                        }
                        D_800E527C->yVel.w = var_v0_5;
                    }
                    if (D_800E5274->unk384 == 3) {
                        D_800E5274->unk384 = 4;
                        D_800E5274->unk354 = D_800E52C0;
                    }
                    if (((D_800E52C0 - D_800E527C->unk48) >= 5) && ((func_80037C10(D_800E527C->xPos.h[1], D_800E527C->zPos.h[1], &sp3C, &sp3E, (s32) D_800E527C->unk160), ((D_800E527C->yVel.h[1] < -6) != 0)) || ((abs((s32) sp3C) < 0x18) && (abs((s32) sp3E) < 0x18)))) {
                        func_8006309C(6U, D_800E5274);
                    }
                    break;
                case 1:                             /* switch 4 */
                case 2:                             /* switch 4 */
                    D_800E527C->yVel.w = D_800E527C->yPos.w - temp_s3;
                    break;
                }
                func_80045CA4();
                if (D_800E52B4 == 0) {
                    func_80040260(&sp40, &sp44);
                    var_s5_2 = ((*D_800E5284)->unkA6 * 0x10) & 0xFFFF;
                    if (D_800E529C->unk90 == 0x2A) {
                        var_a0_8 = var_s5_2;
                        if (D_800E52E0 != 0) {
                            temp_a2_3 = D_800E527C->xVel.w;
                            var_v0_6 = temp_a2_3;
                            if (temp_a2_3 < 0) {
                                var_v0_6 = temp_a2_3 + 0xFFFF;
                            }
                            temp_v0_9 = var_v0_6 >> 0x10;
                            temp_a3_2 = D_800E527C->zVel.w;
                            var_v1_5 = temp_a3_2;
                            if (temp_a3_2 < 0) {
                                var_v1_5 = temp_a3_2 + 0xFFFF;
                            }
                            temp_v0_10 = var_v1_5 >> 0x10;
                            if (((temp_v0_9 * temp_v0_9) + (temp_v0_10 * temp_v0_10)) < 0x310) {
                                D_800E527C->xVel.w = temp_a2_3 + (((s32) ((u16) D_800CA604[D_800E5274->unk322] << 0x10) >> 0x17) * 0xDE);
                                D_800E527C->zVel.w = temp_a3_2 + (((s32) ((u16) D_800CA604[(D_800E5274->unk322 + 0x40) & 0xFF] << 0x10) >> 0x17) * 0xDE);
                            }
                            goto block_134;
                        }
                    } else if (D_800E52E0 != 0) {
                        sp40 += (s32) (sp40 * D_800E52CC) >> 4;
                        sp44 += (s32) (sp44 * D_800E52CC) >> 4;
                        temp_s0_6 = abs(D_800E527C->xVel.w);
                        var_v1_6 = abs(D_800E527C->zVel.w);
                        var_a0_9 = var_v1_6;
                        if (var_v1_6 < temp_s0_6) {
                            var_a0_9 = temp_s0_6;
                        }
                        if (temp_s0_6 < var_v1_6) {
                            var_v1_6 = temp_s0_6;
                        }
                        temp_a1_2 = D_800E529C->unk98;
                        temp_a0_3 = var_a0_9 + (var_v1_6 >> 1);
                        if ((temp_a1_2 << 0xB) < temp_a0_3) {
                            var_s5_2 = var_s5_2 >> 2;
                            goto block_134;
                        }
                        var_a0_8 = var_s5_2;
                        if ((temp_a1_2 << 0xA) < temp_a0_3) {
                            var_s5_2 = var_s5_2 >> 1;
                            goto block_134;
                        }
                    } else {
block_134:
                        var_a0_8 = var_s5_2;
                    }
                    func_8003FFE4(var_a0_8, &sp40, &sp44);
                    D_800E527C->xVel.w = sp40;
                    D_800E527C->zVel.w = sp44;
                }
                if ((D_800E5274->unk380 == 0) && (!(D_800E529C->unk96 & 1) || (D_800E529C->unk92 == 8) || ((u32) ((D_800E52C0 - D_800E528C) & 0xFFFF) >= 3U) || (D_800E5274->pad387 != 0) || ((D_800E5298 != NULL) && !(D_800E5298->unk16C->unk80 & 0x20000)))) {
                    D_800E527C->yVel.w -= D_800E4B9C;
                }
block_193:
                D_800E527C->unk10 = (s32) (D_800E527C->xPos.w + D_800E527C->xVel.w);
                var_a0_6 = D_800E527C->zPos.w + D_800E527C->zVel.w;
                var_v0_4 = D_800E527C->yPos.w + D_800E527C->yVel.w;
                goto block_194;
            case 4:                                 /* switch 1 */
                temp_s4 = D_800E527C->xPos.w;
                temp_s2_2 = D_800E527C->zPos.w;
                temp_s1_2 = D_800E527C->yPos.w;
                temp_s0_7 = temp_s1_2 + D_800E527C->yVel.w;
                if (((temp_s0_7 >> 0x10) - (func_800373B0((s32) (temp_s4 + D_800E527C->xVel.w) >> 0x10, (s32) (temp_s2_2 + D_800E527C->zVel.w) >> 0x10, temp_a2) >> 0x10)) < 0xA) {
                    temp_s0_8 = func_80037098((s16) ((s32) (D_800E527C->xPos.w + D_800E527C->xVel.w) >> 0x10), (s16) ((s32) (D_800E527C->zPos.w + D_800E527C->zVel.w) >> 0x10), D_800E527C->unk160);
                    var_s0 = temp_s0_8 - func_80037098(D_800E527C->xPos.h[1], D_800E527C->zPos.h[1], D_800E527C->unk160);
                    if (var_s0 > 0x60000) {
                        var_s0 = 0x60000;
                    }
                    if (var_s0 < 0) {
                        var_s0 = 0;
                    }
                    if (D_800E527C->yVel.w < var_s0) {
                        D_800E527C->yVel.w = var_s0;
                    }
                }
                if (func_80030364(D_800E527C) == 0) {
                    if ((D_800E527C->unk6C == 0) && (D_800E527C->unk70 == NULL)) {
                        D_800E527C->xPos.w = temp_s4;
                        D_800E527C->zPos.w = temp_s2_2;
                        D_800E527C->yPos.w = temp_s1_2;
                    }
                }
                D_800E527C->yVel.w = D_800E527C->yPos.w - temp_s3;
                func_80045E24();
                func_80064A14(D_800E527C, 5);
                func_80064B5C();
                goto block_193;
            case 5:                                 /* switch 1 */
                temp_s0_9 = D_800E527C->xPos.w;
                temp_s1_3 = D_800E527C->zPos.w;
                temp_s2_3 = D_800E527C->unk160;
                func_80030364(D_800E527C, D_800E5274, temp_a2);
                if (func_80045FA4(D_800E527C->xPos.w - temp_s0_9, D_800E527C->zPos.w - temp_s1_3) != 0) {
                    D_800E527C->unk160 = temp_s2_3;
                    temp_s2_4 = D_800E527C->xPos.w;
                    D_800E527C->xPos.w = temp_s0_9;
                    if (func_80045FA4(0, D_800E527C->zPos.w - temp_s1_3) != 0) {
                        D_800E527C->xPos.w = temp_s2_4;
                        D_800E527C->zPos.w = temp_s1_3;
                        if (func_80045FA4(temp_s2_4 - temp_s0_9, 0) != 0) {
                            D_800E527C->xPos.w = temp_s0_9;
                        }
                    }
                }
                D_800E527C->yVel.w = D_800E527C->yPos.w - temp_s3;
                func_80045E24();
                func_80064AC0();
                func_800400F8(&sp40, &sp44);
                var_s5_3 = (*D_800E5284)->unkA8;
                if (D_800E529C->unk90 == 0x2C) {
                    func_80064CD0(2, 0xC, var_s5_3);
                    if (D_800E52E0 != 0) {
                        D_800E527C->xVel.w += ((s32) ((u16) D_800CA604[D_800E5274->unk322] << 0x10) >> 0x17) * 0xC0;
                        D_800E527C->zVel.w += ((s32) ((u16) D_800CA604[(D_800E5274->unk322 + 0x40) & 0xFF] << 0x10) >> 0x17) * 0xC0;
                    }
                } else if (D_800E52E0 != 0) {
                    sp40 += (s32) (sp40 * D_800E52CC) >> 4;
                    sp44 += (s32) (sp44 * D_800E52CC) >> 4;
                    temp_s0_10 = abs(D_800E527C->xVel.w);
                    var_a1 = abs(D_800E527C->zVel.w);
                    var_v1_7 = var_a1;
                    if (var_a1 < temp_s0_10) {
                        var_a1 = temp_s0_10;
                    }
                    if (temp_s0_10 < var_v1_7) {
                        var_v1_7 = temp_s0_10;
                    }
                    if ((D_800E529C->unk9E << 0xA) < (var_a1 + (var_v1_7 >> 1))) {
                        var_s5_3 = (u16) (var_s5_3 >> 1);
                    } else {
                        var_s5_3 = (var_s5_3 * 2) & 0xFFFF;
                    }
                }
                func_80064930(&sp40, &sp44);
                func_8003FDC4((u32) var_s5_3, &sp40, &sp44);
                D_800E527C->xVel.w = sp40;
                D_800E527C->unk10 = (s32) (D_800E527C->xPos.w + sp40);
                D_800E527C->zVel.w = sp44;
                var_a0_6 = D_800E527C->zPos.w + sp44;
                var_v0_4 = D_800E527C->yPos.w + D_800E527C->yVel.w;
                goto block_194;
            case 6:                                 /* switch 1 */
                D_800E527C->yVel.w -= D_800E4B9C;
                if (func_80030364(D_800E527C, (struct005 *) D_800E4B9C, temp_a2) == 1) {
                    func_8003B08C();
                    D_800E527C->unk162 = 7;
                }
                temp_v0_11 = D_800E527C->unk6C;
                if ((temp_v0_11 == temp_s0) || (temp_v0_11 == 0)) {
                    D_800E527C->yVel.w = D_800E527C->yPos.w - temp_s3;
                }
                func_80045E24(D_800E527C);
                func_800646E4();
                func_80064A14(D_800E527C, 3);
                func_800400F8(&sp40, &sp44);
                func_8003F83C((*D_800E5284)->unkA6, &sp40, &sp44);
                D_800E527C->xVel.w = sp40;
                D_800E527C->unk10 = (s32) (D_800E527C->xPos.w + sp40);
                D_800E527C->unk14 = (s32) (D_800E527C->zPos.w + sp44);
                D_800E527C->zVel.w = sp44;
                D_800E527C->unk18 = (s32) ((D_800E527C->yPos.w + D_800E527C->yVel.w) - D_800E4B9C);
                break;
            case 7:                                 /* switch 1 */
                temp_v0_12 = func_80030364(D_800E527C, D_800E5274, temp_a2);
                switch (temp_v0_12) {               /* switch 5; irregular */
                case 0:                             /* switch 5 */
                    if (func_8003B0FC() != 0) {
                        D_800E527C->yVel.w = D_800E527C->yPos.w - temp_s3;
                        if ((D_800E52C0 - D_800E527C->unk48) >= 5) {
                            if (D_800E5274->unk384 == 3) {
                                D_800E5274->unk384 = 4;
                                D_800E5274->unk354 = D_800E52C0;
                            } else {
                                func_8006309C(6U, D_800E5274);
                            }
                        }
                    }
                    break;
                case 1:                             /* switch 5 */
                case 2:                             /* switch 5 */
                    D_800E527C->yVel.w = D_800E527C->yPos.w - temp_s3;
                    break;
                }
                func_80045E24();
                D_800E527C->yVel.w -= D_800E4B9C;
                func_80064A14(D_800E527C, 3, D_800E4B9C);
                goto block_193;
            }
        }
        if (D_800E52E0 > 0) {
            D_800E52E0 = (u8) D_800E52E0 - 1;
        }
        D_800E52CC = 0;

        temp_v1_6 = D_800E527C->state;
        switch (temp_v1_6) {                        /* switch 2 */
        case 0x2:                                   /* switch 2 */
        case 0x3:                                   /* switch 2 */
        case 0x4:                                   /* switch 2 */
        case 0x5:                                   /* switch 2 */
        case 0x6:                                   /* switch 2 */
        case 0x15:                                  /* switch 2 */
        case 0x16:                                  /* switch 2 */
        case 0x17:                                  /* switch 2 */
        case 0x18:                                  /* switch 2 */
        case 0x29:                                  /* switch 2 */
        case 0x2A:                                  /* switch 2 */
        case 0x3D:                                  /* switch 2 */
        case 0x3E:                                  /* switch 2 */
        case 0x65:                                  /* switch 2 */
        case 0x67:                                  /* switch 2 */
        case 0x68:                                  /* switch 2 */
        case 0x69:                                  /* switch 2 */
        case 0x6A:                                  /* switch 2 */
        case 0x79:                                  /* switch 2 */
        case 0x7A:                                  /* switch 2 */
        case 0x7B:                                  /* switch 2 */
        case 0x8D:                                  /* switch 2 */
        case 0x8E:                                  /* switch 2 */
        case 0x8F:                                  /* switch 2 */
        case 0x90:                                  /* switch 2 */
        case 0xA1:                                  /* switch 2 */
        case 0xA2:                                  /* switch 2 */
        case 0xB5:                                  /* switch 2 */
        case 0xB6:                                  /* switch 2 */
        case 0xB7:                                  /* switch 2 */
        case 0xB8:                                  /* switch 2 */
        case 0xB9:                                  /* switch 2 */
        case 0xC9:                                  /* switch 2 */
        case 0xCA:                                  /* switch 2 */
        case 0xCB:                                  /* switch 2 */
        case 0xCC:                                  /* switch 2 */
        case 0xDD:                                  /* switch 2 */
            D_800E5274->unk324 = (s16) (u16) D_800E5274->unk322;
            func_80062F98(&D_800E5274->unk322, D_800E5274->unk2C, D_800E529C->unkA4);
            break;
        case 0x51:                                  /* switch 2 */
            D_800E5274->unk324 = (s16) (u16) D_800E5274->unk322;
            D_800E5274->unk322 = (s16) (u16) D_800E527C->unk2C;
            break;
        }
        D_800E527C->unk65 = 0;
        if (((u8) D_800E527C->unk4B >= 0x21U) && !(D_800E527C->unk4C & 0x04000000)) {
            var_v0_7 = D_800E527C->unk14C - 1;
            if (var_v0_7 < 0) {
                var_v0_7 = 0;
            }
            D_800E527C->unk14C = var_v0_7;
            func_8007DA18((struct000 *) D_800E527C, 1);
            temp_a0_4 = D_800E527C;
            if ((u8) temp_a0_4->unk4B >= 0x31U) {
                var_v0_8 = temp_a0_4->unk14C - 1;
                if (var_v0_8 < 0) {
                    var_v0_8 = 0;
                }
                temp_a0_4->unk14C = var_v0_8;
                func_8007DA18((struct000 *) temp_a0_4, 1);
            }
            if ((u8) temp_a0_4->unk4B >= 0x3DU) {
                var_v0_9 = temp_a0_4->unk14C - 4;
                if (var_v0_9 < 0) {
                    var_v0_9 = 0;
                }
                temp_a0_4->unk14C = var_v0_9;
                func_8007DA18((struct000 *) temp_a0_4, 4);
            }
        }
        func_800466EC();
        if (D_800E527C->xPos.h[1] < 0x80) {
            D_800E527C->xPos.h[1] = 0x80;
            D_800E527C->xVel.w = 0;
        }
        if (D_800E527C->zPos.h[1] < 0x80) {
            D_800E527C->zPos.h[1] = 0x80;
            D_800E527C->zVel.w = 0;
        }
        if (D_800E527C->xPos.h[1] >= 0x1180) {
            D_800E527C->xPos.h[1] = 0x117F;
            D_800E527C->xVel.w = 0;
        }
        if (D_800E527C->zPos.h[1] >= 0x1F80) {
            D_800E527C->zPos.h[1] = 0x1F7F;
            D_800E527C->zVel.w = 0;
        }
    }
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003BF7C);
#endif

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003D794);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003E300);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003E3D0);

void func_8003E5CC(void) {
    func_8003E5EC();
}

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003E5EC);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003E734);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003E9A0);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003EBC8);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003F628);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003F83C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003FDC4);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8003FFE4);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_800400F8);

// sssv:func_802AC8A0_6BDF50
void func_80040260(s32* arg0, s32* arg1) {
    *arg0 = 0;

    if (D_800E73A8.unkB33A > 2) {
        *arg1 = D_800E529C->unk98 * 1024;
    } else if (D_800E73A8.unkB33A > 0) {
        *arg1 = (D_800E529C->unk98 * 5) << 7;
    } else {
        *arg1 = 0;
    }
    func_80064658(D_800E527C->unk2C, arg0, arg1);
}


INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_80040304);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_80040350);

// sssv:func_802AC9FC_6BE0AC
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_800403E4);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_80040A78);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_80040E04);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_80041018);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_80041488);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_80041880);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_80041A9C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_80041CB8);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_80041FEC);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_80042204);


s16 func_80020C8C(s16, s16);

// sssv:func_802AEE18_6C04C8
void func_80042474(void) {

    switch (D_800E527C->state) {                              /* irregular */
    case 0x3E:
        D_800E527C->unk2C += D_800E73A8.unkB33C >> 0x3;
        D_800E527C->unk2C &= 0xFF;

        D_800E527C->unk28 = D_800E73A8.unkB33E;

        D_800E527C->yVel.w = ((D_800E527C->yVel.w * 7) >> 3) + ((D_800E527C->unk28 * 5) << 8);
        D_800E527C->yVel.w += (D_800CA604[(D_800E5264 << 2) & 0xFF] >> 0x7) << 6;

        if ((D_800E73A8.unkB33C != 0) || (D_800E5274->unk32C != 0)) {
            D_800E5274->unk32E = MIN(16, D_800E5274->unk32E + 1);
        } else {
            D_800E5274->unk32E = MAX(0, D_800E5274->unk32E - 2);
        }

        if (D_800E73A8.unkB33C != 0) {
            if (D_800E5274->unk32C == 0) {
                if (D_800E73A8.unkB33C < 0) {
                    if ((D_800E5274->unk330 <= 0x300) && (D_800E5274->unk330 >= 0x2EA)) {
                        D_800E5274->unk330 = 0x300;
                    } else {
                        D_800E5274->unk330 = (D_800E5274->unk330 + 0x14) & 0x3FF;
                    }
                } else {
                    if ((D_800E5274->unk330 <= 0x100) && (D_800E5274->unk330 >= 0xEB)) {
                        D_800E5274->unk330 = 0x100;
                    } else {
                        D_800E5274->unk330 = (D_800E5274->unk330 + 0x14) & 0x3FF;
                    }
                }
            }
        }
        if (D_800E73A8.unkB312 != 0) {
            if (D_800E73A8.unkB318 == 0) {
                D_800E5274->unk32C += 64;
            } else {
                D_800E5274->unk32C = MAX(64, D_800E5274->unk32C);
            }
        }

        if (D_800E5274->unk32C < 50) {
            D_800E5274->unk32C = MAX(0, D_800E5274->unk32C - 6);
        } else {
            D_800E5274->unk32C = (D_800E5274->unk32C * 7) >> 3;
        }

        D_800E527C->xVel.w += (D_800E5274->unk32C * D_800CA604[D_800E5274->unk322 & 0xFF]) / 110;
        D_800E527C->zVel.w += (D_800E5274->unk32C * D_800CA604[(D_800E5274->unk322 + 0x40) & 0xFF]) / 110;
        if ((D_800E5274->unk385 == 0) && (D_800E73A8.unkB316 != 0) && (D_800E73A8.unkB31C == 0)) {
            if ((D_800E527C->yPos.h[1] - func_80020C8C(D_800E527C->xPos.h[1], D_800E527C->zPos.h[1])) >= -0x3F) {
                D_800E5274->unk389 = 0;
                D_800E527C->yPos.h[1] += 23;
                D_800E527C->yVel.h[1] += 23;
                D_800E527C->xVel.w += D_800CA604[D_800E5274->unk322 & 0xFF] * 6;
                D_800E527C->zVel.w += D_800CA604[(D_800E5274->unk322 + 0x40) & 0xFF] * 6;
                D_800E5274->unk328 = 0;
                D_800E527C->state = 0x3F;
                D_800E527C->unk162 = 3;
                play_sound_effect_at_location(0x2A, D_800E527C->xPos.h[1], D_800E527C->zPos.h[1]);
            } else if (D_800E529C->unk90 != PIRANA) {
                play_sound_effect_at_location(0x10, D_800E527C->xPos.h[1], D_800E527C->zPos.h[1]);
            }
        }
        break;

    case 0x1:
    case 0x3D:
    case 0x3F:
        break;
    }
}

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_800428D0);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_800431C4);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_800433F0);

// sssv:func_802B066C_6C1D1C
#if 0
void func_80043E8C(void) {
    s16 temp_s2;
    s16 temp_s0;
    s16 temp_s1;
    s16 var_a3;
    s32 idx;

    temp_s2 = D_800E5274->unk328;
    if (D_800E73A8.unkB33E < 0) {
        var_a3 = (-D_800E73A8.unkB33E >> 3) * -1;
    } else {
        var_a3 =   D_800E73A8.unkB33E >> 3;
    }

    if (D_8011E58C[temp_s2].unk35 == 0) {
        D_800E5274->unk32A += var_a3;
    }

    if (D_800E5274->unk32A < 0x38) {
        D_800E5274->unk32A = 0x3A;
    }

    if (((D_8011E58C[temp_s2].unk14 - 1) << 4) < D_800E5274->unk32A) {
        D_800E5274->unk32A = (D_8011E58C[temp_s2].unk14 - 1) << 4;
    }

    temp_s0 = D_800E5274->unk32A >> 4;
    D_8011E58C[temp_s2].unk30 = temp_s0;
    temp_s1 = D_800E5274->unk32A & 0xF;

    if (D_800E73A8.unkB33C > 0) {
        D_800E527C->unk2C = (((s32) D_8010CC50[D_800E5144].unk74 >> 0xC) + 0x40) & 0xFF;
    }
    if (D_800E73A8.unkB33C < 0) {
        D_800E527C->unk2C = (((s32) D_8010CC50[D_800E5144].unk74 >> 0xC) + 0xC0) & 0xFF;
    }

    if (D_8011E58C[temp_s2].unk35 != 0) {
        idx = (s32) D_8010CC50[D_800E5144].unk74 >> 0xC;
        func_80086120(
            temp_s2,
            D_8011E58C[temp_s2].unk30,
             D_800E73A8.unkB33C * ((s16)(D_800CA604[((s16) idx + 0x40) & 0xFF]) >> 0x7),
            -D_800E73A8.unkB33C * ((s16)(D_800CA604[idx & 0xFF]) >> 0x7),
            -0x10000);
    } else {
        D_8011E58C[temp_s2].unk35--;
    }

    if (temp_s1 == 0) {
        D_800E527C->xPos.w = D_8011C96C[D_8011E58C[temp_s2].unk16 + temp_s0].unk0;
        D_800E527C->zPos.w = D_8011C96C[D_8011E58C[temp_s2].unk16 + temp_s0].unk4;
        D_800E527C->yPos.w = D_8011C96C[D_8011E58C[temp_s2].unk16 + temp_s0].unk8;
    } else {
        D_800E527C->xPos.w = ((16 - temp_s1) * (D_8011C96C[(D_8011E58C[temp_s2].unk16 + temp_s0) + 0].unk0 >> 4)) +
                             ((     temp_s1) * (D_8011C96C[(D_8011E58C[temp_s2].unk16 + temp_s0) + 1].unk0 >> 4));
        D_800E527C->zPos.w = ((16 - temp_s1) * (D_8011C96C[(D_8011E58C[temp_s2].unk16 + temp_s0) + 0].unk4 >> 4)) +
                             ((     temp_s1) * (D_8011C96C[(D_8011E58C[temp_s2].unk16 + temp_s0) + 1].unk4 >> 4));
        D_800E527C->yPos.w = ((16 - temp_s1) * (D_8011C96C[(D_8011E58C[temp_s2].unk16 + temp_s0) + 0].unk8 >> 4)) +
                             ((     temp_s1) * (D_8011C96C[(D_8011E58C[temp_s2].unk16 + temp_s0) + 1].unk8 >> 4));
    }
    func_8003950C(D_800E527C);
    D_800E527C->xVel = D_8011C96C[D_8011E58C[temp_s2].unk16 + temp_s0].unkC;
    D_800E527C->zVel = D_8011C96C[D_8011E58C[temp_s2].unk16 + temp_s0].unk10;
    D_800E527C->yVel = D_8011C96C[D_8011E58C[temp_s2].unk16 + temp_s0].unk14;
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_80043E8C);
#endif

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8004436C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_800444D8);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_80044628);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8004473C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8004484C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_800449A4);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_80044C2C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_80044EE4);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_80045160);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_80045270);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_800453A0);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8004596C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_800459A0);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_80045CA4);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_80045E24);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_80045FA4);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_800460A4);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_800463C4);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_800464F4);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_80046628);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_800466EC);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_80046850);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8004688C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_800468E0);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_80046900);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_8004693C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5A40", func_80046C94);

void func_80046EC8(struct000 *arg0, struct000 *arg1, s16 *arg2) {
    s16 orig = *arg2;
    s16 tmp;

    switch (arg0->unk16C->unkDA) {
    case 0:
        *arg2 = *arg2 * 36 >> 4;
        break;
    case 1:
        *arg2 = *arg2 * 24 >> 4;
        break;
    case 2:
        *arg2 = *arg2 * 16 >> 4;
        break;
    case 3:
        *arg2 = *arg2 * 8 >> 4;
        break;
    case 4:
        *arg2 = *arg2 * 5 >> 4;
        break;
    }

    if (arg0 != D_800E73A8.animals[gCurrentAnimalIndex].animal) {
        tmp = (arg0->unk16C->unkDA - arg1->unk16C->unkDA);
        switch (tmp) {
        case 2:
            *arg2 = *arg2 >> 1;
            break;
        case 3:
            *arg2 = *arg2 >> 2;
            break;
        case 4:
            *arg2 = *arg2 >> 3;
            break;
        case 5:
        case 6:
        case 7:
            *arg2 = 0;
            break;
        }
    }
    if (orig != 0) {
        *arg2 = MAX(*arg2, 1);
    }
}

s16 func_80047058(s16 arg0, struct000 *arg1) {
    if (arg0 == 0) {
        return 0;
    }

    switch (arg1->unk16C->unkDA) {
    case 0:
        arg0 = (arg0 * 32) >> 4;
        break;
    case 1:
        arg0 = (arg0 * 24) >> 4;
        break;
    case 2:
        // arg0 = (arg0 * 16) >> 4;
        break;
    case 3:
        arg0 = (arg0 * 10) >> 4;
        break;
    case 4:
        arg0 = (arg0 * 6) >> 4;
        break;
    }
    return  MAX(1, arg0);
}
