#include "common.h"

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_78E970", func_80076864);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_78E970", func_80076D60);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_78E970", func_80076D94);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_78E970", func_80076DC4);

#if 1
u16 D_800E53FC;
extern s64 D_800EAF2C[]; // fake

void func_800775B8(void) {
    s32 sp20;
    Animal *animal;
    s16 temp_s0;
    s16 temp_s0_3;
    s16 temp_s0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 var_a0;
    s16 var_s3;
    s32 newHealth;
    s16 temp_a0;
    s16 temp_s6;
    s32 doLaughter;
    s32 var_a1;
    s32 var_a2;
    struct006 *temp_a0_2;
    struct065 *var_s2;
    s16 zPos;
    s16 xPos;
    s16 var_a3; // from sssv

    if (D_800E529C->unk90 != MYSTERY_BEAR) {
        func_8001B714(
            D_800E527C,
            0x77, // SFX_CONTAGIOUS_LAUGHTER
            0x7000,
            0,
            30,
            D_800E527C->xPos.h[1],
            D_800E527C->zPos.h[1],
            D_800E527C->yPos.h[1]);
    }

    xPos = D_800E527C->xPos.h[1];
    zPos = D_800E527C->zPos.h[1];
    temp_a0 = xPos >> 0xA;
    temp_s6 = zPos >> 0xA;

    sp20 = -1;
    var_a1 = -1;
    var_a2 = 1;
    var_a3 = 1;

    if ((temp_a0 + 1) >= 5) {
        var_a3 = 0;
    }
    if (temp_a0 <= 0) {
        var_a1 = 0;
    }
    if ((temp_s6 + 1) >= 8) {
        var_a2 = 0;
    }
    if (temp_s6 <= 0) {
        sp20 = 0;
    }

    for (var_s3 = temp_a0 + var_a1; var_s3 <= (temp_a0 + var_a3); var_s3++) {
        for (var_a0 = temp_s6 + sp20;var_a0 <= (temp_s6 + var_a2); var_a0++) {
            for (var_s2 = D_80112DF8[(s16) (var_s3 + ((var_a0 * 5)))].next; var_s2 != NULL; var_s2 = var_s2->next) {
                if ((&var_s2->animal->unk116[6] == var_s2) && (D_800E527C != var_s2->animal)) {
                    animal = var_s2->animal;
                    if (abs(animal->yPos.h[1] - D_800E527C->yPos.h[1]) < 0xC0) {
                        temp_s0_3 = xPos - animal->xPos.h[1];
                        temp_s0 =  zPos - animal->zPos.h[1];

                        temp_s0_2 = abs(temp_s0_3);
                        temp_v0_3 = abs(temp_s0);

                        temp_v0_4 = MAX(temp_s0_2, temp_v0_3) + (MIN(temp_s0_2, temp_v0_3) >> 1);

                        if (temp_v0_4 < 0x200) {
                            temp_a0_2 = animal->unk16C;
                            if (temp_a0_2->unk80 & 0x40000) {
                                if ((animal->unk386 != 2) && (animal->unk386 != 5)) {
                                    if ((temp_a0_2->unk90 != EVO_TRANSFER) && (temp_a0_2->unk90 != HYENA) && (temp_a0_2->unk90 != HYENA_BIKER)) {
                                        doLaughter = 0;
                                        if (animal == D_800EAF2C[gCurrentAnimalIndex]) {
                                            if (D_800E53FC != D_800E52C0) {
                                                D_800E53FC = D_800E52C0;
                                                doLaughter = 1;
                                            }
                                        } else {
                                            doLaughter = 1;
                                        }
                                        if (doLaughter != 0) {
                                            if ((animal->unk16C->unk90 != RACING_TORTOISE_DEFENDING) && (animal->unk16C->unk90 != TORTOISE_TANK_DEFENDING) && (animal->unk16C->unk90 != HYENA) && (animal->unk16C->unk90 != HYENA_BIKER)) {
                                                if (animal->unk378 < 0x64) {
                                                    animal->unk378++;
                                                    if (temp_v0_4 < 0x100) {
                                                        animal->unk378++;
                                                    }
                                                }
                                                if (animal->unk378 >= 0x51) {
                                                    animal->unk383 = 1;

                                                    // SFX_LAUGHTER function removed

                                                    if (!(D_800E5264 & 3)) {
                                                        animal->health = MAX(0, animal->health - 1);
                                                        func_8007DA18((struct000 *) animal, 1);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if (animal->unk16C->objectType != (256 + HYENA)) {
                                animal->pad50[7] = 0x16;
                            }
                        }
                    }
                }
            }
        }
    }
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_78E970", func_800775B8);
#endif

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_78E970", func_800779AC);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_78E970", func_80077CD8);

#if 0
s32 func_80077FD0(s16 arg0, s16 arg1) {
    s16 sp28;
    s16 sp2A;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 sp44;
    s16 temp_s5;
    s16 temp_v0;
    s16 temp_v0_3;
    s16 temp_v1;
    s16 temp_v1_3;
    s16 i;
    s16 var_s0;
    s16 var_s0_2;
    s16 var_v0_6;
    s32 temp_fp;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0_2;
    s32 temp_v1_2;
    s32 var_s6;
    s32 var_s7;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v1;

    sp30 = arg0;
    sp34 = D_800CA604[arg1 & 0xFF] >> 0x7;
    sp38 = D_800CA604[(arg1 + 0x40) & 0xFF] >> 0x7;

    sp3C = D_800E527C->xPos.h[1];
    sp40 = D_800E527C->zPos.h[1];
    temp_s5 = D_800E527C->yPos.h[1];


    for (i = 0x20; i < arg0; i += 0x20) {
        s32 a, b;
        a = (sp38 * i) >> 8;
        b = (sp38 * i) >> 8;
        temp_v0 = sp3C + a;
        temp_v1 = sp40 + b;

        if (D_800E527C->unk162 != 1) {
            var_s0 = MAX(temp_s5, func_800373B0(temp_v0, temp_v1) >> 0x10) + 8;
        } else  if ((D_800E527C->unk160 == 0) || (D_800E527C->unk160 == 1)) {
            var_s0 = (func_800373B0(temp_v0, temp_v1) + 8) >> 0x10;
        } else {
            temp_s0 = func_800370FC(temp_v0, temp_v1) >> 0x10;
            if (temp_s0 == 0x4000) {
                var_s0 = (func_800373B0(temp_v0, temp_v1) + 8) >> 0x10;
            } else {
                var_s0 = (temp_s0 + 8); // << 0x10;
            }
        }

        temp_v0_2 = func_80039554(temp_v0, temp_v1, var_s0);
        if (((temp_v0_2 != 1) || (D_800E527C->unk160 != 2)) && ((temp_v0_2 != 2) || (D_800E527C->unk160 != 1))) {
            func_80037C10(temp_v0, temp_v1, &sp28, &sp2A, temp_v0_2);
            if ((func_8001D8F4(sp3C, sp40, sp44 >> 0x10, D_800E527C->unk160, temp_v0, temp_v1, var_s0, temp_v0_2, 0, 0) == 0) &&
                (abs(var_s0 - temp_s5) < 0x50) &&
                (func_800730B4(D_800E527C, 0, temp_v0 << 0x10, temp_v1 << 0x10, var_s0 << 0x10, &sp2C, 1) == 0) &&
                (abs(sp28) < 0x18) && (abs(sp2A) < 0x18)) {

                continue;
            }
        }

        break;
    }

    temp_v1_2 = i - 0x30;
    var_v0_5 = sp30 << 0x10;
    if (temp_v1_2 < sp30) {
        var_v0_5 = temp_v1_2 << 0x10;
    }
    i = var_v0_5 >> 0x10;

    if (i > 0x10) {
        temp_v0 = sp3C + ((s32) (sp34 * i) >> 8);
        temp_v1 = sp40 + ((s32) (sp38 * i) >> 8);

        if (D_800E527C->unk160 == 2) {
            temp_s0 = func_800370FC(temp_v0, temp_v1) >> 0x10;
            if (temp_s0 == 0x4000) {
                var_s0 = MAX(temp_s5, func_800373B0(temp_v0, temp_v1) >> 0x10) + 0x10;
            } else {
                var_s0 = MAX(temp_s5, temp_s0) + 0x10;
            }
        } else {
            var_s0 = MAX(temp_s5, func_800373B0(temp_v0, temp_v1) >> 0x10) + 0x10;
        }
        D_800E527C->xPos.h[1] = temp_v0;
        D_800E527C->zPos.h[1] = temp_v1;
        D_800E527C->yPos.h[1] = var_s0;
        D_800E527C->xVel.w = 0;
        D_800E527C->zVel.w = 0;
        D_800E527C->yVel.w = 0;
        D_800E527C->unk160 = func_80039554(temp_v0, temp_v1, var_s0);
        return i;
    }
    return 0;
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_78E970", func_80077FD0);
#endif

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_78E970", func_80078478);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_78E970", func_80078550);
