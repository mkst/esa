#include "common.h"


// sssv:func_8029B000_6AC6B0
#if 0
extern s16 D_800CD820[];
s32 func_800397B0(s16 arg0, s16 arg1, s32 arg2, Animal *arg3, s32 arg4, Animal **arg5, s32 *arg6, s32 arg7, Animal **arg8, s32 *arg9) {
    s32 sp18;
    s32 sp1C;
    Animal *animal;
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_a0_4;
    s16 temp_a0_5;
    s16 temp_v1;
    s16 temp_v1_4;
    s16 temp_v1_5;
    s32 temp_a0_3;
    s32 temp_t0;
    s32 temp_v0_2;
    s32 temp_v1_3;
    s32 var_s5;
    s32 var_s6;
    s32 var_s7;
    s32 var_v1;
    struct006 *temp_v0;
    struct065 *var_s1;
    u8 temp_v1_2;

    var_s7 = 0;
    var_s6 = 0x40000000;

    temp_t0 = (s16)(arg0 >> 0xA) + ((s16)(arg1 >> 0xA) * 5);
    var_s1 = D_80112DF8[temp_t0].next;

    *arg6 = -1;
    *arg9 = -1;
    *arg5 = NULL;
    *arg8 = NULL;

    // if ((temp_t0 < 0) || (temp_t0 >= 40)) {
    if (((u32) (temp_t0 & 0xFFFF) )>= 40) {
        return 0;
    }

    for (; var_s1 != NULL; var_s1 = var_s1->next) {
        animal = var_s1->animal;
        if (animal != arg3) {
            temp_v0 = arg3->unk16C;
            if ((temp_v0->objectType == 0x13F) && (arg3->pad384[1] == 9)) {
                var_v1 = D_800CD820[5] >> animal->unk16C->unk2;
            } else {
                var_v1 = (D_800CD820[temp_v0->unk2]) >> animal->unk16C->unk2;
            }

            if (!(var_v1 & 1)) {
                continue;
            }

            if (((temp_v0->unk2 != 5) || (arg3->unk340 != animal)) && ((animal->unk15C == 0) || (animal->unk168 != arg3)) && ((arg3->unk15C == 0) || (arg3->unk168 != animal))) {
                var_s5 = 0;
                if ((animal->unk16C->unk2 == 5) && (temp_v0->unk2 == 5)) {
                    if (animal->unk16C->unkDA >= temp_v0->unkDA) {
                        if ((func_8007CFAC(animal, arg3, animal->unk16C, temp_v0) != 0) || (animal->unk386 == 5) || (arg3->unk386 == 5)) {
                            if (animal->unk16C->unkDA < arg3->unk16C->unkDA) {
                                goto block_29;
                            } else {
                                if ((arg0 >= (animal->xPos.h[1] - animal->unk34)) && (arg0 < (animal->xPos.h[1] + animal->unk34))) {
                                    if ((arg1 >= ( animal->zPos.h[1] - animal->unk34)) && (arg1 < ( animal->zPos.h[1] + animal->unk34))) {
                                        var_s5 = func_8001C944(animal, arg0, arg1, &sp18, &sp1C);
                                    }
                                }
                            }
                        }
                    } else {
block_29:
                        if ((((arg3->unk162 != 1) || (arg3->unk68 != NULL)) && (arg3->unk24.w < 0xFFFA0000)) || (animal->unk386 == 5) || (animal->unk386 == 2)) {
                            temp_v0_2 = arg0 - animal->xPos.h[1];
                            temp_a0_3 = arg1 - animal->zPos.h[1];
                            temp_v1_3 = animal->unk30 * 2;
                            if (SQ(temp_v1_3) >= (SQ(temp_v0_2) + SQ(temp_a0_3))) {
                                sp18 = animal->yPos.w + (animal->unk42 << 0x10);
                                var_s5 = 1;
                                sp1C = animal->yPos.w;
                            }
                        }
                    }
                } else {
                    if ((arg0 >= (animal->xPos.h[1] - animal->unk30)) && (arg0 < (animal->xPos.h[1] + animal->unk30))) {
                        if ((arg1 >= (animal->zPos.h[1] - animal->unk32)) && (arg1 < (animal->zPos.h[1] + animal->unk32))) {
                            var_s5 = func_8007E6A0(animal, arg0, arg1, &sp18, &sp1C);
                        }
                    }
                }

                if (var_s5 != 0) {
                    animal->unk4C |= 0x02000000;
                    if (animal == arg4) {
                        if (sp18 >= var_s7) {
                            var_s7 = sp18;
                            *arg6 = var_s7;
                            *arg5 = animal;
                        }
                    } else if (animal == arg7) {
                        if (var_s6 >= sp1C) {
                            var_s6 = sp1C;
                            goto block_57;
                        }
                    } else if (animal->unk68 == arg3) {
                        if (sp1C < var_s6) {
                            var_s6 = sp1C;
                            *arg9 = sp1C;
                            *arg8 = animal;
                        }
                    } else if (animal->unk70 == arg3) {
                        if (var_s7 < sp18) {
                            var_s7 = sp18;
                            *arg6 = sp18;
                            *arg5 = animal;
                        }
                    } else if (arg2 < ((s32) (sp1C + sp18) >> 1)) {
                        if (sp1C < var_s6) {
                            var_s6 = sp1C;
block_57:
                            *arg9 = var_s6;
                            *arg8 = animal;
                        }
                    } else if (var_s7 < sp18) {
                        var_s7 = sp18;
                        *arg6 = sp18;
                        *arg5 = animal;
                    }
                }
            }
        }
    }

    return *arg5 != NULL;
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6AC360", func_800397B0);
#endif
