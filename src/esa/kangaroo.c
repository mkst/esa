#include "common.h"
#include "libgte.h"

s16 func_8001D8F4(s16, s16, s16, s16, s16, s16, s16, u8, u8, u8);
s32 func_80039554(s16 arg0, s16 arg1, s16 arg2);

extern s32 D_800E5E9C[4][4];

// not forward declared?
// s32 func_80083350(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, Animal **arg5, s32 arg6, u8 arg7);

void func_8009A408(s32 arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4, u8 arg5);

// uses RTPS
INCLUDE_ASM("asm/esa/nonmatchings/kangaroo", func_8009A408);

#if 0
void func_8009A794(void) {
    Animal *sp78; // ?
    s32 sp38[4][4]; // TBD

    s16 temp_a0;
    s16 temp_v0;
    s16 var_s2;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 var_s0;
    s32 var_s3;
    s32 var_s4;
    s16 var_s5;
    u16 ticks_remaining;

    s32 tmp;

    gte_SetRotMatrix(&D_800E5E9C);
    sp38[1][1] = 0;
    sp38[1][2] = 0;
    sp38[1][3] = 0;
    gte_SetTransMatrix(sp38);

    func_8009A0D4();
    if ((D_800E525C != 0) && (((D_800E52C0 - D_800E5274->unk37E) & 0x1FF) == 170)) {
        func_8009B224(D_800E5274);
    }

    func_800A350C(0);
    func_8001B3FC();
    func_800A0ADC();
    func_800A1294();
    func_800A0F8C();

    switch (D_800E5274->unk385) {
    case 35:
        ticks_remaining = D_800E52C0 - D_800E5274->unk34A;
        if (ticks_remaining >= 8) {
            D_800E5274->unk385 = 0x21;
            D_800E5274->unk37C = -0x1F4;
            D_800E5274->unk34A = D_800E52C0;
        }
        break;

    case 33:
        ticks_remaining = D_800E52C0 - D_800E5274->unk34A;
        if ((ticks_remaining < 38) && (D_800E527C->unk4A == 0)) {
            func_8001B714(
                D_800E527C,
                31,
                0x5000,
                0,
                ((D_800CA604[(ticks_remaining << 3) & 0xFF] >> 7) * (1.0 / 400)) + 1.0,
                D_800E527C->xPos.h[1],
                D_800E527C->zPos.h[1],
                D_800E527C->yPos.h[1]);

            for (var_s2 = 0; var_s2 < 6; var_s2++) {

                temp_v0 = (ticks_remaining + var_s2) - 6;
                if ((temp_v0 >= 0) && (temp_v0 < 0x20)) {
                    temp_a0 = D_800E5274->unk34C - (temp_v0 << 3);
                    temp_a1 = ((var_s2 * 8) + 16) & 0xFF;
                    var_s4 = (((SIN(D_800E5274->unk34C) >> 7) - (SIN(temp_a0) >> 7)) * 21) >> 5;
                    var_s3 = (((COS(D_800E5274->unk34C) >> 7) - (COS(temp_a0) >> 7)) * 21) >> 5;
                    func_8009A408(
                        D_800E527C->xPos.w + (var_s4 << 0x10),
                        D_800E527C->zPos.w + (var_s3 << 0x10),
                        D_800E527C->yPos.w + (D_800E529C->unkAE * 0xC000),
                        temp_a1,
                        temp_a1,
                        0);
                }
            }

            var_s0 = 0;
            if (func_80083350(D_800E527C->xPos.h[1] + var_s4, D_800E527C->zPos.h[1] + var_s3, D_800E527C->yPos.h[1] + ((D_800E529C->unkAE * 3) >> 2), 0x14, 0x1E, &sp78, 0, 8) != 0) {
                var_s0 = 1;
                play_sound_effect_at_location(0x61, D_800E527C->xPos.h[1], D_800E527C->zPos.h[1]);
            }

            tmp = func_8001D8F4(
                D_800E527C->xPos.h[1],
                D_800E527C->zPos.h[1],
                D_800E527C->yPos.h[1] + (D_800E529C->unkAE >> 1),
                D_800E527C->unk160,
                D_800E527C->xPos.h[1] + var_s4,
                D_800E527C->zPos.h[1] + var_s3,
                D_800E527C->yPos.h[1] + ((D_800E529C->unkAE * 3) >> 2),
                func_80039554(
                    (D_800E527C->xPos.h[1] + var_s4),
                    (D_800E527C->zPos.h[1] + var_s3),
                    (D_800E527C->yPos.h[1] + ((D_800E529C->unkAE * 3) >> 2))),
                    0,
                    0);

            if (tmp || ((D_800E527C->yPos.h[1] + ((D_800E529C->unkAE * 3) >> 2)) < (func_800373B0((D_800E527C->xPos.h[1] + var_s4), (D_800E527C->zPos.h[1] + var_s3)) >> 0x10))) {
                var_s0 = 1;
                play_sound_effect_at_location(0x26, D_800E527C->xPos.h[1], D_800E527C->zPos.h[1]);
            }

            if (var_s0 != 0) {
                D_800E5274->unk385 = 0x22; // ATTACK_KANGAROO_4
                D_800E5274->unk34A = D_800E52C0;
                D_800E5274->unk34C = (((var_s4 << 6) & ~0xFF) | ((var_s3 >> 2) & 0xFF));

                for (var_s5 = 0; var_s5 < 4; var_s5++) {
                    create_particle_effect(
                        D_800E527C->xPos.h[1] + var_s4,
                        D_800E527C->zPos.h[1] + var_s3,
                        D_800E527C->yPos.h[1] + ((D_800E529C->unkAE * 3) >> 2),
                        0x18,
                        ((func_8001CEB4() & 0xF) - 7) << 0x10,
                        ((func_8001CEB4() & 0xF) - 7) << 0x10,
                        (func_8001CEB4() & 0xF) << 0x10,
                        (func_8001CEB4() & 3) | 4,
                        0xFFE0,
                        0xC200,
                        0);
                }
            }
        } else {
            D_800E5274->unk385 = 0;
        }
        break;

    case 34:
        ticks_remaining = (D_800E52C0 - D_800E5274->unk34A);
        if (ticks_remaining < 16) {

            for (var_s2 = 0; var_s2 < 6; var_s2++ ) {
                temp_v0 = (ticks_remaining + var_s2) - 3;

                if ((temp_v0 >= 0) && ( temp_v0 < 0x10)) {
                    temp_a1_2 = (COS(temp_v0 << 3) >> 7) + 0x100;
                    temp_a0_2 = ((var_s2 << 3) + 16) & 0xFF;

                    func_8009A408(
                        D_800E527C->xPos.w + (((((((s16)(D_800E5274->unk34C & ~0xFF))) >> 6) * temp_a1_2) >> 9) << 0x10),
                        D_800E527C->zPos.w + ((((((((s16)(D_800E5274->unk34C << 8) & ~0xFF))) >> 6) * temp_a1_2) >> 9) << 0x10),
                        D_800E527C->yPos.w + (D_800E529C->unkAE * 0xC000),
                        temp_a0_2,
                        temp_a0_2,
                        0);
                }
            }
        } else {
            D_800E5274->unk385 = 0;
            D_800E5274->unk37A = -2500;
        }
        break;

    default:
        D_800E5274->unk385 = 0;
        break;
    }

    func_800A2698((D_800E529C->unkAE * 8) / 5, 2, 3, 3, 0);
    func_800A281C(2, 1, 3, 0, 0);
    func_8006BC30(
        D_800E5274->xPos.h[1],
        D_800E5274->zPos.h[1],
        D_800E5274->yPos.h[1] + (D_800E529C->unkAE >> 1),
        D_800E5274->unk322,
        NULL, // image
        21,
        21,
        155,
        0,
        0,
        0,
        0,
        D_800E525C);

    D_800E5274->unk278 = D_800E54B4 >> 4;
    D_800E5274->unk27A = D_800E54BC >> 4;
    D_800E5274->unk27C = D_800E54B8 >> 4;
    D_800E5274->unk280 = D_800E54C0 >> 4;
    D_800E5274->unk282 = D_800E54C8 >> 4;
    D_800E5274->unk284 = D_800E54C4 >> 4;
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/kangaroo", func_8009A794);
#endif

// sssv:func_80372510_783BC0
INCLUDE_ASM("asm/esa/nonmatchings/kangaroo", func_8009B0D8);

// sssv:func_803725A4_783C54
INCLUDE_ASM("asm/esa/nonmatchings/kangaroo", func_8009B150);

// sssv:func_80372604_783CB4
INCLUDE_ASM("asm/esa/nonmatchings/kangaroo", func_8009B1AC);

// sssv:func_80372698_783D48
INCLUDE_ASM("asm/esa/nonmatchings/kangaroo", func_8009B224);
