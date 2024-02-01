#include "common.h"


// load_polar_bear
INCLUDE_ASM("asm/esa/nonmatchings/polar_bear", func_800934AC);

#if 0

void func_8001B714(struct004*, s32, f64, void*, f64, s16, s16, s16);

extern u8  D_800E525C;
extern s32 D_800E54B4;
extern s32 D_800E54B8;
extern s32 D_800E54BC;
extern struct005 *D_800E52A8;

void func_80093D28(void) {
    s16 var_v1;
    s32 temp_s0;
    s32 temp_v1;
    s16 var_a0;
    s32 var_a2;
    u16 ticks_remaining;

    u8 var_s0;
    s8 var_a1;

    s32 pad[0x10];

    var_s0 = D_800E5274->unk330 & 0xFF;
    var_a1 = D_800E5274->unk330 >> 0x8;

    if (D_800E525C != 0) {
        var_v1 = D_800E73A8.unkB33A;
    } else {
        var_v1 = MIN(D_800E5274->unk388 >> 2, 24);
    }

    switch (var_v1) {
    case 0:
        var_a0 = -5;
        var_a2 = 0;
        break;
    case 1:
        var_a0 = 2;
        var_a2 = 0;
        break;
    case 2:
        var_a0 = 5;
        var_a2 = 10;
        break;
    case 3:
        var_a0 = 8;
        var_a2 = 20;
        if (var_s0 < 70) {
            var_s0 = 70;
        }
        break;
    case 4:
    default:
        var_a0 = 0xB;
        var_a2 = 0x1E;
        if (var_s0 < 80) {
            var_s0 = 80;
        }
    }

    if (var_a1 < var_a0) {
        var_a1 = MIN(var_a1 + 5, var_a0);
    } else if (var_a0 < var_a1) {
        var_a1 = MAX(var_a1 - 1, var_a0);
    }

    if (var_a1 > 3) {
        var_a1 -= 1;
    }
    if (var_a1 > 6) {
        var_a1 -= 1;
    }
    if (var_a1 < -3) {
        var_a1 += 1;
    }
    if (var_a1 < -6) {
        var_a1 += 1;
    }

    temp_v1 = var_a2 + 80;
    if (temp_v1 < var_s0) {
        var_a1 -= (var_s0 - temp_v1) / 5;
    }
    if (var_s0 < 20) {
        var_a1 += (20 - var_s0) / 2;
    }

    temp_s0 = (var_s0 + var_a1) & 0xFF;
    D_800E5274->unk330 = (var_a1 << 8) | temp_s0;

    if ((D_800E5274->unk386 == 3) || (D_800E5274->unk386 == 1) || (D_800E5274->unk386 == 4)) {
        if (D_800E527C->unk4A == 0) {
            func_8001B714(
                D_800E527C,
                0x81,
                ((temp_s0 * (1/ 250.0)) + 0.4) * 16384.0, // __muldf3(__adddf3(__muldf3(__floatsidf(temp_s0), 0.004), 0.4), 16384.0),
                0,
                (temp_s0 * (1 / 300.0)) + 0.2, // __adddf3(__muldf3(__floatsidf(temp_s0), 0.0033333333333333335), 0.2),
                D_800E527C->xPos.h[1],
                D_800E527C->zPos.h[1],
                D_800E527C->yPos.h[1]);
        }
    }
    if (D_800E4FB0 == 0) {
        if (D_800E5274->unk328 < 0) {
            D_800E5274->unk328++;
        } else if (D_800E5274->unk328 > 0) {
            D_800E5274->unk328--;
        }
    }
    if (D_800E5274->unk385 == 0x1A) {

      ticks_remaining = (D_800E52C0 - D_800E5274->unk34A);
        D_800E52A8->unk3E0 = 0;
        if (ticks_remaining < 6) {
            D_800E5274->unk328 -= 3;
            if (ticks_remaining == 5) {
                fire_cannonball_1(0x11, 0x5A, 0, 0x34, 0x17, 0, 2, 0x1E);
                D_800E5274->unk328 = MIN(0x2E, D_800E5274->unk328 + 0x1E);
                func_8002E6A0(0x14);
                play_sound_effect_at_location(0x1B, D_800E527C->xPos.h[1], D_800E527C->zPos.h[1]);
            }
        } else {
              D_800E5274->unk385 = 0;
        }
    } else {
        D_800E5274->unk385 = 0;
    }
    func_8006BC30(
        D_800E5274->xPos.h[1],
        D_800E5274->zPos.h[1],
        D_800E5274->yPos.h[1] + (D_800E529C->unkAE >> 1),
        D_800E5274->unk322,
        NULL,
        0x28,
        0x1F,
        0x9B,
        0,
        0,
        0,
        0,
        D_800E525C);

    func_800A0ADC();
    func_800A1294();
    func_800A0F8C();
    func_800A3A38(0xC8);
    func_800A3828(0x1C, 0x1E, 8);

    D_800E5274->unk278 = D_800E54B4 >> 4;
    D_800E5274->unk27A = D_800E54BC >> 4;
    D_800E5274->unk27C = D_800E54B8 >> 4;

    D_800E5274->unk280 = D_800E54C0 >> 4;
    D_800E5274->unk282 = D_800E54C8 >> 4;
    D_800E5274->unk284 = D_800E54C4 >> 4;
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/polar_bear", func_80093D28);
#endif

// empty (jump thump?)
INCLUDE_ASM("asm/esa/nonmatchings/polar_bear", func_8009428C);

// sssv:func_80368AC4_77A174
INCLUDE_ASM("asm/esa/nonmatchings/polar_bear", func_80094294);

// sssv:func_80368B04_77A1B4
INCLUDE_ASM("asm/esa/nonmatchings/polar_bear", func_800942D0);

// sssv:func_80368B78_77A228
INCLUDE_ASM("asm/esa/nonmatchings/polar_bear", func_80094338);

// sssv:func_80368BA0_77A250
INCLUDE_ASM("asm/esa/nonmatchings/polar_bear", func_80094358);

INCLUDE_ASM("asm/esa/nonmatchings/polar_bear", polar_tank_drop_mine);

INCLUDE_ASM("asm/esa/nonmatchings/polar_bear", polar_tank_fire_cannon);

// sssv:polar_bear_jump_thump
INCLUDE_ASM("asm/esa/nonmatchings/polar_bear", func_80094498);

// sssv:func_80368D60_77A410
INCLUDE_ASM("asm/esa/nonmatchings/polar_bear", func_800944E4);
