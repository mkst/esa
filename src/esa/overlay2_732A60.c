#include "common.h"

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_732A60", func_80081A9C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_732A60", func_80081CFC);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_732A60", func_80081FE4);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_732A60", func_8008202C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_732A60", func_80082294);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_732A60", fire_cannonball_1);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_732A60", fire_cannonball_2);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_732A60", apply_recoil);

#if 0
extern u8 D_800E525C;

s32 func_80082D94(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, u8 arg7) {

    s16 temp_t0;
    s16 temp_v0;
    s16 damage_factor;

    s16 ret;
    s16 i;

    struct004 *animal;
    struct043 *var_s1;
    struct065 *var_s3;

    s16 sp18;
    s16 sp1C;
    s16 sp20;

    ret = 0;

    temp_t0 = D_800CA604[D_800E5274->unk322 & 0xFF] >> 7;
    temp_v0 = D_800CA604[(D_800E5274->unk322 + 0x40) & 0xFF] >> 7;
    sp18 = (D_800E527C->xPos.h[1] + ((temp_t0 * arg1) >> 8)) + ((temp_v0 * arg2) >> 8);
    sp1C = (D_800E527C->zPos.h[1] + ((temp_v0 * arg1) >> 8)) - ((temp_t0 * arg2) >> 8);
    sp20 = (D_800E527C->yPos.h[1] + arg0);

    for (var_s3 = D_80112DF8[(sp18 >> 0xA) + ((sp1C >> 0xA) * 5)].next; var_s3 != NULL; var_s3 = var_s3->next) {
        animal = var_s3->animal;
        if ((animal != D_800E527C) && (D_800E527C->unk6C != animal) && (((animal->unk16C->unk80 & 0x40000) && ((animal == D_800E73A8.animals[gCurrentAnimalIndex].animal) || (D_800E525C != 0) || (D_800E529C->unk90 != animal->unk16C->unk90))) || (!(animal->unk16C->unk80 & 0x40000) && (animal->unk16C->unk0 != 0x40)))) {
            for (var_s1 = animal->unkC4; var_s1->unkC != 0; var_s1++) {
                if ((abs((animal->xPos.h[1] + var_s1->xPos.h[1]) - sp18) < (var_s1->unkC + arg3)) &&
                    (abs((animal->zPos.h[1] + var_s1->zPos.h[1]) - sp1C) < (var_s1->unkC + arg3)) &&
                    (abs((animal->yPos.h[1] + var_s1->yPos.h[1]) - sp20) < (var_s1->unkC + arg3))) {

                    if (arg7 != 0) {
                        animal->unk57 = arg7;
                    }

                    if (D_800E527C->unk44 < animal->unk44) {
                        damage_factor = 1;
                    } else {
                        damage_factor = 0;
                    }

                    if ((D_800E527C->unk44 * 2) < animal->unk44) {
                        damage_factor++;
                    }
                    if ((D_800E527C->unk44 * 3) < animal->unk44) {
                        damage_factor++;
                    }

                    if ((animal->unk4C.unk1B == 0) || (D_800E529C->unk90 == HARD_MOUSE) || (((animal->unk16C->unk80 & 0x40000) == 0) && ((D_800E527C->unk44 * 3) < animal->unk44))) { //  & 0x08000000
                        damage_factor = 8;
                    }

                    if (animal->unk16C->unk80 & 0x40000) {
                        func_8004693C(animal, arg4, D_800E529C->unkDA, 1);
                        ret = 2;
                        if (D_800E525C != 0) {
                            animal->unk30B++;
                        }
                    } else if (((animal->unk4C.unk1A) == 0) && (animal->unk4A == 0)) {
                        animal->unk14C = MAX(0, animal->unk14C - MAX(1, arg4 >> damage_factor));
                        if (ret == 0) {
                            ret = 1;
                        }
                    }

                    func_80056774(D_800E527C, animal);

                    if (damage_factor < 6) {
                        animal->xVel.h[1] += (D_800CA604[D_800E5274->unk322 & 0xFF] >> 7) >> (damage_factor + 6);
                        animal->zVel.h[1] += (D_800CA604[(D_800E5274->unk322 + 0x40) & 0xFF] >> 7) >> (damage_factor + 6);
                        animal->unk65 = MIN(100, animal->unk65 + (20 >> damage_factor));
                    }

                    animal->unk4C.unk19 = 1;

                    if ((animal->unk16C->unk80 & 0x40000) && ((animal->unk386 == 1) || (animal->unk386 == 3) || (animal->unk386 == 4))) {
                        animal->unk368 = MAX(animal->unk368, arg6);
                        animal->unk36A = MAX(animal->unk36A, arg5);
                    }
                    break;
                }
            }
        }
    }
    return ret;
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_732A60", func_80082D94);
#endif

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_732A60", func_80083350);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_732A60", func_80083664);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_732A60", func_800838D4);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_732A60", func_80083BE8);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_732A60", func_80083BF0);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_732A60", func_80083CB8);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_732A60", func_80083CE8);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_732A60", func_80083EF8);
