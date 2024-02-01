#include "common.h"

#if 0
void func_80092068(void) {
    s16 temp_a0;
    s16 temp_a1_2;
    s16 temp_s0;
    s16 temp_s0_3;
    s16 temp_s0_4;
    s16 temp_s0_6;
    s16 temp_s1_2;
    s16 temp_v1_2;
    s16 var_a0_4;
    s16 var_a1;
    s16 var_v0;
    s16 var_v1_2;
    s16 var_v1_4;
    s32 temp_a0_4;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 temp_a1_3;
    s32 temp_a2_2;
    s32 temp_s0_5;
    s32 temp_s1_3;
    s32 temp_s2_3;
    s32 temp_v1;
    s32 temp_v1_3;
    s32 temp_v1_5;
    s32 temp_v1_7;
    s32 temp_v1_9;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a1_2;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v1;
    s32 var_v1_3;
    s8 temp_s2;
    struct004 *temp_s4;
    u16 *temp_a1;
    u16 temp_a0_2;
    u16 temp_a0_3;
    u16 temp_a2;
    u16 temp_v0_2;
    u32 temp_s1;
    u32 temp_s3;
    u32 temp_v0;
    u64 temp_ret;
    u64 temp_ret_10;
    u64 temp_ret_11;
    u64 temp_ret_2;
    u64 temp_ret_3;
    u64 temp_ret_4;
    u64 temp_ret_5;
    u64 temp_ret_6;
    u64 temp_ret_7;
    u64 temp_ret_8;
    u64 temp_ret_9;
    u64 temp_s0_2;
    u64 temp_s2_2;
    u8 *temp_a1_4;
    u8 *temp_v1_4;
    u8 *var_a1_3;
    u8 temp_a0_5;
    u8 temp_v1_10;
    u8 temp_v1_6;
    u8 temp_v1_8;
    u8 var_t0;
    u8 var_v0_5;

    temp_s0 = abs((s32) D_800E527C->xVel.h[1]);
    if (((temp_s0 + abs((s32) D_800E527C->zVel.h[1])) >= 0xB) && ((D_800E527C->yPos.h[1] + 0x60) < (func_800373B0((s16) ((u16) D_800E527C->xPos.h[1] + ((s32) (D_800E527C->xVel.h[1] * 3) >> 1)), (s16) ((u16) D_800E527C->zPos.h[1] + ((s32) (D_800E527C->zVel.h[1] * 3) >> 1)), D_800E527C) >> 0x10))) {
        D_800E527C->xVel.h[1] = (s16) ((s16) -D_800E527C->xVel.h[1] >> 1);
        D_800E527C->zVel.h[1] = (s16) ((s16) -D_800E527C->zVel.h[1] >> 1);
    }
    if (D_80111CC6 != 2) {
        if (D_800E527C->yVel.h[1] >= 0x3D) {
            D_800E527C->yVel.h[1] = (u16) D_800E527C->yVel.h[1] - 2;
        }
        if (D_800E527C->yVel.h[1] >= 0x33) {
            D_800E527C->yVel.h[1] = (u16) D_800E527C->yVel.h[1] - 2;
        }
        if (D_800E527C->yVel.h[1] >= 0x29) {
            D_800E527C->yVel.h[1] = (u16) D_800E527C->yVel.h[1] - 2;
        }
        if (D_800E527C->yVel.h[1] >= 0x1F) {
            D_800E527C->yVel.h[1] = (u16) D_800E527C->yVel.h[1] - 2;
        }
        if (D_800E527C->yVel.h[1] >= 0x15) {
            D_800E527C->yVel.h[1] = (u16) D_800E527C->yVel.h[1] - 2;
        }
    }
    if (D_800E5274->unk386 == 1) {
        // temp_s2 = D_800E52E0;
        if (D_800E52E0 != 0) {
            if (D_800E527C->unk4A == 0) {
                temp_ret = __floatsidf(D_800E52E0);
                temp_ret_2 = __muldf3(temp_ret, (u32) temp_ret, 0x11111111, 0x3F911111);
                temp_ret_3 = __adddf3(temp_ret_2, (u32) temp_ret_2, 0x66666666U, 0x3FE66666U);
                temp_ret_4 = __muldf3(temp_ret_3, (u32) temp_ret_3, 0, 0x40D48000);
                temp_s2_2 = temp_ret_4;
                temp_s3 = (u32) temp_ret_4;
                temp_ret_5 = __floatsidf(temp_s2, NULL);
                temp_ret_6 = __muldf3(temp_ret_5, (u32) temp_ret_5, 0x11111111, 0x3FA11111);
                temp_ret_7 = __adddf3(temp_ret_6, (u32) temp_ret_6, 0x66666666U, 0x3FE66666U);
                temp_s0_2 = temp_ret_7;
                temp_a1 = ((D_800E5264 << 6) & 0x1C0) + D_800CA604;
                temp_s1 = (u32) temp_ret_7;
                temp_ret_8 = __floatsidf((s8) ((s32) (*temp_a1 << 0x10) >> 0x17), temp_a1);
                temp_ret_9 = __muldf3(temp_ret_8, (u32) temp_ret_8, 0, 0x3F400000);
                temp_ret_10 = __adddf3(temp_s0_2, temp_s1, temp_ret_9, (u32) temp_ret_9);
                temp_ret_11 = __muldf3(temp_ret_10, (u32) temp_ret_10, 0x55555555, 0x3FE55555);
                func_8001B714(D_800E527C, 0x64, temp_s2_2, temp_s3, temp_ret_11, (u32) temp_ret_11, (s32) D_800E527C->xPos.h[1], (s32) D_800E527C->zPos.h[1], (s32) D_800E527C->yPos.h[1]);
            }
        }
    }
    if (D_800E525C != 0) {
        if ((D_800E527C->unk162 == 5) && (D_800E527C->unk4A == 0)) {
            temp_s0_3 = abs(D_800E527C->xVel.w);
            if (abs(D_800E527C->zVel.w) < temp_s0_3) {
                var_a0 = D_800E527C->xVel.w;
            } else {
                var_a0 = D_800E527C->zVel.w;
            }
            temp_s1_2 = abs(var_a0);
            temp_s0_4 = abs(D_800E527C->xVel.w);
            if (temp_s0_4 < abs(D_800E527C->zVel.w)) {
                var_a0_2 = D_800E527C->xVel.w;
            } else {
                var_a0_2 = D_800E527C->zVel.w;
            }
            temp_v0 = abs(var_a0_2);
            temp_v1 = (temp_s1_2 + ((s32) ((temp_v0 >> 0x1F) + temp_v0) >> 1)) / 1000000;
            func_8001B714(D_800E527C, 0xC, (temp_v1 * 0x5000) / 3, 0U, temp_v1 + 1, (u32) D_800E527C->xPos.h[1], (s32) D_800E527C->zPos.h[1], (s32) D_800E527C->yPos.h[1]);
        }
        if (D_800E525C == 0) {
            goto block_29;
        }
    } else {
block_29:
        if (D_800E5274->unk38E != 0) {
            if (!(D_800E5264 & 1)) {
                temp_s2_3 = ((func_8001CEB4() & 0x7FFF) * 2) + 0xFFFF63C0;
                temp_s1_3 = ((func_8001CEB4() & 0x7FFF) * 2) + 0xFFFF63C0;
                temp_s0_5 = (func_8001CEB4() & 3) + 0x1F;
                create_particle_effect((s32) D_800E527C->xPos.h[1], (s32) D_800E527C->zPos.h[1], (s32) D_800E527C->yPos.h[1], 0x40, temp_s2_3, temp_s1_3, 0, temp_s0_5, (u16) 0, (u16) 0, (func_8001CEB4() & 0xF) + 0x44);
            }
            temp_v0_2 = (u16) D_800E5274->unk30C;
            D_800E5274->unk30C = temp_v0_2 - 1;
            if ((temp_v0_2 << 0x10) <= 0) {
                D_800E5274->unk38E = 0;
            }
        }
    }
    temp_s0_6 = abs((s32) D_800E527C->xVel.h[1]);
    var_v1 = 0;
    if ((temp_s0_6 + abs((s32) D_800E527C->zVel.h[1])) >= 3) {
        var_v1_2 = D_800E5274->unk22;
        temp_a0 = D_800E5274->unk1E;
        if (var_v1_2 == 0) {
            var_v1_2 = 1;
        }
        if (temp_a0 > 0) {
            if (var_v1_2 > 0) {
                var_v0 = func_8001CF98((s16) ((s32) (temp_a0 << 6) / var_v1_2));
                var_v1_3 = 0xB4;
                goto block_44;
            }
            var_a1 = -func_8001CF98((s16) ((s32) (temp_a0 << 6) / var_v1_2));
        } else {
            if (var_v1_2 > 0) {
                var_v0 = func_8001CF98((s16) ((s32) (temp_a0 << 6) / var_v1_2));
                var_v1_3 = 0xB4;
            } else {
                var_v0 = func_8001CF98((s16) ((s32) (temp_a0 << 6) / var_v1_2));
                var_v1_3 = 0x168;
            }
block_44:
            var_a1 = var_v1_3 - var_v0;
        }
        var_v1 = (s32) ((((((0x21C - var_a1) << 8) / 360) & 0xFF) - D_800E5274->unk322) << 0xF) >> 0x10;
    }
    temp_a1_2 = D_800E5274->unk32C;
    var_a0_3 = temp_a1_2 + 3;
    if (temp_a1_2 < var_v1) {
        var_v0_2 = var_a0_3 < var_v1;
        goto block_50;
    }
    var_a0_3 = temp_a1_2 - 3;
    if (var_v1 < temp_a1_2) {
        var_v0_2 = var_v1 < var_a0_3;
block_50:
        if (var_v0_2 != 0) {
            var_v1 = var_a0_3;
        }
        D_800E5274->unk32C = (s16) var_v1;
    }
    if (D_800E5274->unk32C >= 0x21) {
        D_800E5274->unk32C = 0x20;
    }
    if (D_800E5274->unk32C < -0x20) {
        D_800E5274->unk32C = -0x20;
    }
    temp_a0_2 = D_800E527C->state;
    switch (temp_a0_2) {                            /* irregular */
    case 0x8E:
    case 0x16:
        var_a0_4 = 0x40;
        break;
    case 0x8F:
    case 0x17:
        var_a0_4 = 0x60;
        break;
    case 0x18:
        var_a0_4 = -0x30;
        break;
    default:
        var_a0_4 = 8;
        if (D_800E5274->unk328 < 0) {
            var_a0_4 = -8;
        }
        break;
    }
    temp_v1_2 = D_800E5274->unk328;
    if (temp_v1_2 < var_a0_4) {
        var_v1_4 = temp_v1_2 + 3;
        var_v0_3 = var_a0_4 < var_v1_4;
        goto block_74;
    }
    var_v1_4 = temp_v1_2 - 1;
    if (var_a0_4 < temp_v1_2) {
        var_v0_3 = var_v1_4 < var_a0_4;
block_74:
        if (var_v0_3 != 0) {
            var_v1_4 = var_a0_4;
        }
        D_800E5274->unk328 = var_v1_4;
    }
    func_800A2698((D_800E529C->unkAE * 4) / 5, 1, 2, 2, 0);
    func_8001B3FC();
    func_800A0ADC();
    func_800A1294();
    func_800A3828(0x17, 0x1C, 0xB);
    D_800E54C0 = ((s32) (D_800E54B4 + 0xFFFF0000) >> 2) + 0x10000;
    D_800E54C4 = ((s32) (D_800E54B8 - 0x10000) >> 2) + 0x10000;
    D_800E54C8 = ((s32) (D_800E54BC - 0x10000) >> 2) + 0x10000;
    func_800A0F8C();
    D_800E5274->unk278 = (s16) ((s32) D_800E54B4 >> 4);
    D_800E5274->unk27A = (s16) ((s32) D_800E54BC >> 4);
    D_800E5274->unk27C = (s16) ((s32) D_800E54B8 >> 4);
    D_800E5274->unk280 = (s16) ((s32) D_800E54C0 >> 4);
    D_800E5274->unk282 = (s16) ((s32) D_800E54C8 >> 4);
    D_800E5274->unk284 = (s16) ((s32) D_800E54C4 >> 4);
    temp_a2 = (u16) D_800E527C->zPos.h[1];
    temp_a0_3 = (u16) D_800E527C->xPos.h[1];
    temp_a2_2 = ((s32) (temp_a2 << 0x10) >> 0x16) * 8;
    temp_a0_4 = (s32) (temp_a0_3 << 0x10) >> 0x16;
    temp_v1_3 = *D_800E53A4 + 6;
    temp_v1_4 = temp_v1_3 + (temp_a2_2 + ((temp_a0_4 + 1) * 0x408));
    temp_a0_5 = *(temp_v1_3 + (temp_a2_2 + (temp_a0_4 * 0x408)));
    var_t0 = temp_a0_5;
    if ((u8) *temp_v1_4 >= temp_a0_5) {
        var_t0 = *temp_v1_4;
    }
    temp_a1_3 = *D_800E53A4 + 6;
    temp_a0_6 = (((s32) ((u16) D_800E527C->zPos.h[1] << 0x10) >> 0x16) + 1) * 8;
    temp_v1_5 = (s32) ((u16) D_800E527C->xPos.h[1] << 0x10) >> 0x16;
    temp_a1_4 = temp_a1_3 + (temp_a0_6 + ((temp_v1_5 + 1) * 0x408));
    temp_v1_6 = *(temp_a1_3 + (temp_a0_6 + (temp_v1_5 * 0x408)));
    if ((u8) *temp_a1_4 < temp_v1_6) {
        var_a1_2 = *D_800E53A4 + 6;
        if ((s32) temp_v1_6 >= (s32) var_t0) {
            goto block_85;
        }
        goto block_83;
    }
    var_a1_2 = *D_800E53A4 + 6;
    if ((s32) *temp_a1_4 < (s32) var_t0) {
block_83:
        temp_a0_7 = ((s32) ((u16) D_800E527C->zPos.h[1] << 0x10) >> 0x16) * 8;
        temp_v1_7 = (s32) ((u16) D_800E527C->xPos.h[1] << 0x10) >> 0x16;
        var_a1_3 = var_a1_2 + (temp_a0_7 + ((temp_v1_7 + 1) * 0x408));
        temp_v1_8 = *(var_a1_2 + (temp_a0_7 + (temp_v1_7 * 0x408)));
        if ((u8) *var_a1_3 < temp_v1_8) {
            var_v0_4 = temp_v1_8 * 4;
        } else {
            goto block_86;
        }
    } else {
block_85:
        temp_a0_8 = (((s32) ((u16) D_800E527C->zPos.h[1] << 0x10) >> 0x16) + 1) * 8;
        temp_v1_9 = (s32) ((u16) D_800E527C->xPos.h[1] << 0x10) >> 0x16;
        var_a1_3 = var_a1_2 + (temp_a0_8 + ((temp_v1_9 + 1) * 0x408));
        temp_v1_10 = *(var_a1_2 + (temp_a0_8 + (temp_v1_9 * 0x408)));
        var_v0_5 = temp_v1_10;
        if ((u8) *var_a1_3 >= temp_v1_10) {
block_86:
            var_v0_5 = *var_a1_3;
        }
        var_v0_4 = var_v0_5 * 4;
    }
    if (abs((var_v0_4 + *(((D_800E717C.unk204 + (((s16) temp_a2 + (s16) temp_a0_3) * (s16) temp_a0_3 * 8)) & 0x3F) + ((((s16) temp_a0_3 * (s16) temp_a2) & 7) << 6) + &D_800E717C)) - D_800E527C->yPos.h[1]) < 0x30) {
        func_8008875C(D_800E527C, 1, 0xA, 0x10, 0, -0xA, 0, 0xFF, 0xFF, 0xFF, 0, 0xB9, 0xFF, 1, 2, D_800E527C);
        func_8008875C(D_800E527C, 2, 0xA, 0x10, 0, -0xA, 0, 0xFF, 0xFF, 0xFF, 0, 0xB9, 0xFF, 1, 2, (struct004 *) &D_800E527C->pad191[0xE7]);
    }
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/walrus", func_80092068);
#endif

INCLUDE_ASM("asm/esa/nonmatchings/walrus", func_80092D74);

INCLUDE_ASM("asm/esa/nonmatchings/walrus", func_80093190);

INCLUDE_ASM("asm/esa/nonmatchings/walrus", walrus_fire_missile);

INCLUDE_ASM("asm/esa/nonmatchings/walrus", walrus_turbo);
