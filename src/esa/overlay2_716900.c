#include "common.h"

void func_80078710(struct079_inner*, struct000 *, s16, s16);
s32  func_80060D74(struct000 *);
s32  func_80060DC8(struct000 *);
s32  can_swim(struct004 *);
s16  func_80062668(u16, u16);
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_716900", func_80078710);

// sssv:func_80305368_716A18
#if 0
// rodata is wrong?
void func_80078890(struct079 *arg0) {
    s16 start_2; // sp10
    s16 end_1; // sp14
    s16 max_height;
    s16 min_height;
    s16 start_1;
    s16 end_2;

    s16 k;
    s16 j;
    s32 dist;
    u16 idx;
    u8 ai_behavior;
    struct000 *animal;
    struct006 *temp_a1;
    struct065 *var_s4;
    s16 x_pos;
    s16 z_pos;
    s16 i;

    if ((D_800E529C->unk92 == 0x40) || (D_800E529C->unk94 & 4)) {
        max_height = D_800E527C->yPos.h[1] + 0x190;
        min_height = D_800E527C->yPos.h[1] - 0x1F4;
    } else {
        max_height = D_800E527C->yPos.h[1] + 0xC8;
        min_height = D_800E527C->yPos.h[1] - 0xC8;
    }

    x_pos = D_800E527C->xPos.h[1];
    z_pos = D_800E527C->zPos.h[1];

    start_2 = ((s16)x_pos >> 0x6) - 1;
    end_2 = ((s16)x_pos >> 0x6) + 1;

    start_1 = ((s16)z_pos >> 0x6) - 1;
    end_1 = ((s16)z_pos >> 0x6) + 1;

    if (start_2 < 0) {
        start_2 = 0;
    } else if (end_2 > 0x48) {
        end_2 = 0x48;
    }
    if (start_1 < 0) {
        start_1 = 0;
    } else if (end_1 > 0x80) {
        end_1 = 0x80;
    }

    start_2 = start_2 >> 4; // start 2
    end_2 = end_2 >> 4;     // end 2

    start_1 = start_1 >> 4; // start 1
    end_1 = end_1 >> 4;     // end 1

    for (i = 0; i < 3; i++) {
        arg0->unk38.distance[i] = MAX_INT;
        arg0->unk1C.distance[i] = MAX_INT;
        arg0->unk0.distance[i]  = MAX_INT;
    }

    arg0->unk38.used = 0;
    arg0->unk1C.used = 0;
    arg0->unk0.used = 0;

    arg0->unk5C = MAX_INT;
    arg0->unk54 = MAX_INT;

    arg0->unk58 = NULL;
    arg0->unk60 = NULL;

    for (j = start_1; j <= end_1; j++) {
        for (k = start_2; k <= end_2; k++) {
            idx = (k + (j * 5));
            for (var_s4 = D_80112DF8[idx].next;  var_s4 != NULL; var_s4 = var_s4->next) {
                animal = var_s4->animal;
                temp_a1 = animal->unk16C;
                if (temp_a1->unk0 < OB_TYPE_ANIMAL_OFFSET) {
                    // its an object
                    if (!(temp_a1->unk80 & 0x20000) && (temp_a1->unk0 != 0x36) && (temp_a1->unk0 != 0x37) && (temp_a1->unk0 != 0x38)) {
                        if ((temp_a1->unk2 != 1) && (temp_a1->unk2 != 9) && (temp_a1->unk15 != 2) && (animal != D_800E5274->unk2CC) && (animal != D_800E5274->unk340)) {
                            dist = abs(animal->xPos.h[1] - x_pos) + abs(animal->zPos.h[1] - z_pos);
                            dist = dist - D_800E529C->unkB2;
                            if (animal->unk16C->unk2 == 2) {
                                if (((D_800E529C->unk90 == RAT) || (D_800E529C->unk90 == POLAR_BEAR) || (D_800E529C->unk90 == HIPPO) || (D_800E529C->unk90 == KING_RAT) || ((D_800E529C->unk90 == POLAR_TANK)))) {
                                    if (animal->unk15C < 0x19) {
                                        dist = dist - (animal->unk30 + 100);
                                        func_80078710(&arg0->unk38, animal, dist, 2);
                                    }
                                } else {
                                    dist = dist - (animal->unk30 + 100);
                                    func_80078710(&arg0->unk1C, animal, dist, 2);
                                }
                            } else {
                                func_80078710(&arg0->unk38, animal, dist, 2);
                            }
                        }
                    }
                } else if ((animal != D_800E527C) && (temp_a1->unk0 != OB_TYPE_ANIMAL_OFFSET+EVO_TRANSFER)) {
                    // its an animal
                    if ((animal->yPos.h[1] < max_height) && (min_height < animal->yPos.h[1])) {

                        if ((func_80060D74(animal) != 0) || ((can_swim(D_800E527C) != 0) && ((func_80060DC8(animal) == 0)))) {
                            ai_behavior = 0;
                        } else {
                            ai_behavior = func_80062668(D_800E527C->unk16C->unk0, animal->unk16C->unk0);
                        }

                        dist = abs(animal->xPos.h[1] - x_pos) + abs(animal->zPos.h[1] - z_pos);
                        dist = dist - D_800E529C->unkB2;
                        dist = dist - animal->unk16C->unkB2;
                        if (dist < 0) {
                            dist = 0;
                        }

                        switch (ai_behavior) {
                        case 0: // AI_IGNORE
                            func_80078710(&arg0->unk38, animal, dist, 2);
                            break;
                        case 1: // AI_FLEE
                            if (D_800E5274->unk292 & 4) {
                                func_80078710(&arg0->unk1C, animal, dist, 2);
                            } else {
                                func_80078710(&arg0->unk38, animal, dist, 2);
                            }
                            break;
                        case 2: // AI_ATTACK
                            if (D_800E5274->unk292 & 1) {
                                if (dist < arg0->unk54) {
                                    arg0->unk54 = dist;
                                    arg0->unk58 = animal;
                                }
                            } else {
                                func_80078710(&arg0->unk38, animal, dist, 2);
                            }
                            break;
                        case 3: // AI_SAME_ANIMAL
                            func_80078710(&arg0->unk38, animal, dist, 2);
                            break;
                        case 4: // AI_HERD
                            if ((D_800E5274->unk292 & 8)) {
                                func_80078710(&arg0->unk0, animal, dist, 2);
                            } else {
                                func_80078710(&arg0->unk38, animal, dist, 2);
                            }
                            break;
                        case 5: // AI_LEAD_HERD
                            if (D_800E5274->unk292 & 8) {
                                if (dist < arg0->unk5C) {
                                    arg0->unk5C = dist;
                                    arg0->unk60 = animal;
                                    arg0->unk64 = 0;
                                }
                            } else {
                                func_80078710(&arg0->unk38, animal, dist, 2);
                            }
                            break;
                        case 6: // AI_FOLLOWER
                            if (dist < arg0->unk5C) {
                                arg0->unk5C = dist;
                                arg0->unk60 = animal;
                                arg0->unk64 = 1;
                            }
                            break;
                        case 7: // AI_LEADER
                            break;
                        case 8: // AI_INVISIBLE
                            break;
                        }
                    }
                }
            }
        }
    }

}
#else
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_716900", func_80078890);
#endif

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_716900", func_80078EAC);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_716900", func_800791C4);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_716900", func_80079984);


s32 func_80078EAC(s16, s16, s32, s16, s16);
s32 func_800791C4(s16, s16, s32, s16, s16);

#if 1
// sssv:func_803065F0_717CA0
s16 func_80079A84(s16 arg0, s16 arg1, s32 arg2, s16 arg3, s16 arg4) {

    if ((arg3 != 0x40) || ((D_800E527C->unk6C != NULL) && (D_800E527C->unk6C->unk16C->unk80 & 0x20000))) {
        return 0;
    }

    switch (arg4) {
    case 0:
        if ((func_80078EAC(arg0, arg1, arg2, arg3, 3) == 0) && (func_80078EAC(arg0, arg1, arg2, arg3, 1) != 0) && (func_800791C4(arg0 - arg3, arg1, arg2, arg3, 0) != 0) && (func_800791C4(arg0, arg1 + arg3, arg2, arg3, 3) != 0)) {
            return 6;
        }
        if ((func_80078EAC(arg0, arg1, arg2, arg3, 0) == 0) && (func_80078EAC(arg0, arg1, arg2, arg3, 2) != 0) && (func_800791C4(arg0 + arg3, arg1, arg2, arg3, 1) != 0) && (func_800791C4(arg0, arg1 + arg3, arg2, arg3, 3) != 0)) {
            return 5;
        }
        if ((func_80078EAC(arg0, arg1, arg2, arg3, 1) == 0) && (func_80078EAC(arg0, arg1, arg2, arg3, 3) != 0) && (func_800791C4(arg0 + arg3, arg1, arg2, arg3, 1) != 0) && (func_800791C4(arg0, arg1 - arg3, arg2, arg3, 2) != 0)) {
            return 9;
        }
        if ((func_80078EAC(arg0, arg1, arg2, arg3, 2) == 0) && (func_80078EAC(arg0, arg1, arg2, arg3, 0) != 0) && (func_800791C4(arg0 - arg3, arg1, arg2, arg3, 0) != 0) && (func_800791C4(arg0, arg1 - arg3, arg2, arg3, 2) != 0)) {
            return 0xA;
        }
        return 0; // !!
        break;
    case 1:
        if (func_800791C4(arg0 + arg3, arg1, arg2, arg3, 1) != 0) {
            return 1;
        }
        else if ((func_800791C4(arg0, (s16) (arg1 + arg3), arg2, arg3, 3) != 0) && (func_80078EAC(arg0 + arg3, arg1, arg2, arg3, 1) != 0)) {
            return 5;
        }
        else if ((func_800791C4(arg0, (s16) (arg1 - arg3), arg2, arg3, 2) != 0) && (func_80078EAC(arg0 + arg3, arg1, arg2, arg3, 0) != 0)) {
            return 9;
        }
        break;
    case 2:
        if (func_800791C4(arg0 - arg3, arg1, arg2, arg3, 0) != 0) {
            return 2;
        }
        if ((func_800791C4(arg0, (s16) (arg1 + arg3), arg2, arg3, 3) != 0) && (func_80078EAC(arg0 - arg3, arg1, arg2, arg3, 2) != 0)) {
            return 6;
        }
        if ((func_800791C4(arg0, (s16) (arg1 - arg3), arg2, arg3, 2) != 0) && (func_80078EAC(arg0 - arg3, arg1, arg2, arg3, 3) != 0)) {
            return 0xA;
        }
        break;
    case 3:
        return 0;
        break;
    case 4:
        if (func_800791C4(arg0, arg1 + arg3, arg2, arg3, 3) != 0) {
            return 4;
        }
        if ((func_800791C4(arg0 - arg3, arg1, arg2, arg3, 0) != 0) && (func_80078EAC(arg0, arg1 + arg3, arg2, arg3, 0) != 0)) {
            return 6;
        }
        if ((func_800791C4(arg0 + arg3, arg1, arg2, arg3, 1) != 0) && (func_80078EAC(arg0, arg1 + arg3, arg2, arg3, 3) != 0)) {
            return 5;
        }
        break;
    case 5:
        if ((func_80078EAC(arg0, arg1, arg2, arg3, 0) == 0) && (((func_800791C4(arg0 + arg3, arg1 + arg3, arg2, arg3, 1) != 0)) || (func_800791C4(arg0 + arg3, arg1 + arg3, arg2, arg3, 3) != 0))) {
            return 5;
        }
        break;
    case 6:
        if ((func_80078EAC(arg0, arg1, arg2, arg3, 3) != 0) || (((func_800791C4(arg0 - arg3, arg1 + arg3, arg2, arg3, 0) == 0)) && (func_800791C4(arg0 - arg3, arg1 + arg3, arg2, arg3, 3) == 0))) {
            // return 0;
        }
        break;
    case 7:
        return 0;
        break;
    case 8:
        if (func_800791C4(arg0, arg1 - arg3, arg2, arg3, 2) != 0) {
            return 8;
        }
        if ((func_800791C4(arg0 - arg3, arg1, arg2, arg3, 0) != 0) && (func_80078EAC(arg0, arg1 - arg3, arg2, arg3, 1) != 0)) {
            return 0xA;
        }
        if ((func_800791C4(arg0 + arg3, arg1, arg2, arg3, 1) != 0) && (func_80078EAC(arg0, arg1 - arg3, arg2, arg3, 2) != 0)) {
            return 9;
        }
        break;
    case 9:
        if ((func_80078EAC(arg0, arg1, arg2, arg3, 1) != 0) || (((func_800791C4(arg0 + arg3, arg1 - arg3, arg2, arg3, 1) == 0)) && (func_800791C4(arg0 + arg3, arg1 - arg3, arg2, arg3, 2) == 0))) {
            // fallthrough to case 10
        } else {
            break; // return 0 also works
        }
    case 10:
        // fallthrough
        if ((func_80078EAC(arg0, arg1, arg2, arg3, 2) != 0) || (((func_800791C4(arg0 - arg3, arg1 - arg3, arg2, arg3, 0) == 0)) && (func_800791C4(arg0 - arg3, arg1 - arg3, arg2, arg3, 2) == 0))) {
            // nothing?
        }
        break;
    case 11:
        return 0;
    case 12:
        return 0;
    case 13:
        return 0;
    case 14:
        return 0;
    case 15:
        return 0;
    }

    return 0;

}
#else
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_716900", func_80079A84);
#endif

#define GET_WATER_LEVEL(COLLISION, X, Z) \
    MAX(MAX(COLLISION[((X) >> 6) + 0][((Z) >> 6) + 0].unk6, COLLISION[((X) >> 6) + 1][((Z) >> 6) + 0].unk6), MAX(COLLISION[((X) >> 6) + 0][((Z) >> 6) + 1].unk6, COLLISION[((X) >> 6) + 1][((Z) >> 6) + 1].unk6))


#if 0
extern struct079 D_801135F8;
extern struct005 *D_800E52A8;
extern u8 D_800D7B34[];
void func_8007A280(void) {
    // u8 *arg1, s32 arg3

    s32 sp18;
    s32 sp1C;

    s32 sp58;
    s32 sp5C;
    s32 sp98;
    s32 sp9C;

    s32 spD8;
    s32 spDC;
    s32 spE0;
    s32 spE4;
    s16 temp_s5;
    s16 temp_s6;
    s16 temp_v0_15;
    s16 temp_v0_16;
    s16 temp_v0_17;
    s16 temp_v0_3;
    s16 temp_v0_6;
    s16 temp_v1_15;
    s16 var_a0_3;
    s16 var_a0_6;
    s16 var_a1_3;
    s16 var_a1_4;
    s16 var_a2;
    s16 var_a2_3;
    s16 var_a2_6;
    s16 var_a3_2;
    s16 var_s0;
    s16 var_s2;
    s16 var_s2_2;
    s16 var_s2_3;
    s16 var_s3;
    s16 var_s4;
    s16 var_v0_19;
    s16 var_v0_20;
    s16 var_v0_4;
    s16 var_v0_5;
    s16 var_v1_4;
    s32 temp_a0;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a1;
    s32 temp_a1_2;
    struct000 *temp_a1_7;
    s32 temp_a2;
    s32 temp_a2_3;
    s32 temp_a2_4;
    s32 temp_a3;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s0_6;
    s32 temp_s0_7;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s1_4;
    s32 temp_s1_5;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_10;
    s32 temp_v0_11;
    s32 temp_v0_12;
    s32 temp_v0_13;
    s32 temp_v0_14;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 temp_v1;
    s32 temp_v1_10;
    s32 temp_v1_11;
    struct000 *temp_v1_12;
    s32 temp_v1_13;
    s32 temp_v1_14;
    s32 temp_v1_3;
    s32 temp_v1_5;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_4;
    s32 var_a0_5;
    s32 var_a1_2;
    s32 var_a1_5;
    s32 var_a2_2;
    s32 var_a2_4;
    s32 var_a2_5;
    s32 var_a3;
    s32 var_fp;
    s32 var_s1;
    s32 var_s7;
    s32 var_v0;
    s32 var_v0_10;
    s32 var_v0_11;
    s32 var_v0_12;
    s32 var_v0_13;
    s32 var_v0_14;
    s32 var_v0_15;
    s32 var_v0_16;
    s32 var_v0_17;
    s32 var_v0_18;
    s32 var_v0_3;
    s32 var_v0_6;
    s32 var_v0_7;
    s32 var_v0_8;
    s32 var_v0_9;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    struct005 *temp_a0_6;
    u16 temp_a0_7;
    u16 temp_a2_6;
    u32 var_s1_2;
    u8 *temp_a1_3;
    u8 *temp_a2_2;
    u8 *var_a1;
    u8 temp_a0_2;
    u8 temp_a2_5;
    u8 temp_v0_2;
    u8 temp_v1_2;
    u8 temp_v1_4;
    u8 temp_v1_6;
    u8 temp_v1_7;
    u8 temp_v1_8;
    u8 temp_v1_9;
    u8 var_t0;
    u8 var_v0_2;
    struct000 *temp_a1_4;
    struct000 *temp_a1_5;
    struct000 *temp_a1_6;

    // var_s3 = saved_reg_s3;
    // var_s4 = saved_reg_s4;
    // var_s7 = saved_reg_s7;
    // var_a1 = arg1;
    // var_a3 = arg3;

    temp_s5 = D_800E527C->xPos.h[1];
    temp_s6 = D_800E527C->zPos.h[1];

    sp9C = 0;
    sp98 = 0;

    if (D_800E529C->unk94 & 4) {
        spD8 = 0xA;
        // temp_v0 = func_80037098(D_800E527C->xPos.h[1], D_800E527C->zPos.h[1], D_800E527C->unk160);

        spDC = (s32) ((GET_WATER_LEVEL(D_800E53A4, D_800E527C->xPos.h[1], D_800E527C->zPos.h[1]) * 4) + (func_80037098(D_800E527C->xPos.h[1], D_800E527C->zPos.h[1], D_800E527C->unk160) >> 0x10)) >> 1;
    } else if (D_800E529C->unk92 & 0x40) {
        spD8 = 0xA;
        spDC = -0xC8;
    } else {
        spD8 = -1;
        spDC = 0;
    }

    temp_v0_2 = D_800E5274->pad294[0];
    if (temp_v0_2 != 0) {
        switch (temp_v0_2) {                            /* switch 1; irregular */
        case 0:                                         /* switch 1 */
            break;
        case 1:                                         /* switch 1 */
            temp_v0_3 = D_800E5274->unk296;
            sp18 = (s32) (s16) D_800C9CDC[temp_v0_3 + 0x168];
            sp1C = (s32) (s16) D_800C9CDC[temp_v0_3 + 0x1C2];

            temp_v1_7 = D_800E5274->pad294[1];
            var_v1 = temp_v1_7 << 0x18;
            var_v0_3 = spD8 < (s8) temp_v1_7;
            spDC = (s32) D_800E5274->unk29C;
    block_31:
            if (var_v0_3 != 0) {
                spD8 = var_v1 >> 0x18;
            }
    block_34:
            func_80062494(&sp18, &sp58);
            sp98 += (s32) (sp58 << 7) >> 8;
            sp9C += (s32) (sp5C << 7) >> 8;
            break;
        case 2:                                         /* switch 1 */
            spDC = (s32) D_800E5274->unk29C;
            sp18 = D_800E5274->unk298 - temp_s5;
            sp1C = D_800E5274->unk29A - temp_s6;
            temp_v1_8 = D_800E5274->pad294[1];
            if (spD8 < (s8) temp_v1_8) {
                spD8 = (s32) (s8) temp_v1_8;
            }
            if ((D_800E529C->unk92 == 8) && (spD8 >= 9)) {
                if (func_80062454(&sp18, var_a1, D_800E5274, var_a3) < 0x100) {
                    spD8 = 8;
                }
            }
            goto block_34;
        case 3:                                         /* switch 1 */
            spDC = (s32) D_800E5274->unk29C;
            sp18 = temp_s5 - D_800E5274->unk298;
            sp1C = temp_s6 - D_800E5274->unk29A;
            temp_v1_9 = D_800E5274->pad294[1];
            var_v1 = temp_v1_9 << 0x18;
            var_v0_3 = spD8 < (s8) temp_v1_9;
            goto block_31;
        }
    }

    temp_a0_6 = D_800E5274;
    if (temp_a0_6->pad294[0x2C] != 3) {
        if ((temp_a0_6->unk2C0 != 0x05) && (temp_a0_6->unk2C1 != 0xFF) && (D_801135F8.unk5C < 0x280) && ((u16) temp_a0_6->unk292 & 8) && (D_801135F8.unk60 != temp_a0_6->unk2EC)) {
            sp18 = D_801135F8.unk60->xPos.h[1] - temp_s5;
            sp1C = D_801135F8.unk60->zPos.h[1] - temp_s6;
            if (D_801135F8.unk5C < 0xC) {
                func_80062494(&sp18, &sp58);
                sp98 -= (s32) (sp58 * 0xC0) >> 8;
                sp9C -= (s32) (sp5C * 0xC0) >> 8;
                var_a2 = ((0xC - D_801135F8.unk5C) * 0x10) / 12;
                goto block_47;
            }
            if ((temp_a0_6->pad294[0] == 0) && (D_801135F8.unk5C >= 0x4D)) {
                func_80062494(&sp18, &sp58);
                sp98 += (s32) (sp58 * 0xA0) >> 8;
                var_a2 = (((D_801135F8.unk5C - 0x4C) * 6) / 141) + 0xE;
                sp9C += (s32) (sp5C * 0xA0) >> 8;
                if (var_a2 >= 0x15) {
                    var_a2 = 0x14;
                }
block_47:
                if (spD8 < var_a2) {
                    spD8 = (s32) var_a2;
                }
            }
        }

        if ((temp_a0_6->pad294[0x2C] != 3) && (temp_a0_6->unk2C0 != 0x05) && (temp_a0_6->unk2C1 != 0xFF) && (D_801135F8.unk0.used != 0) && ((u16) temp_a0_6->unk292 & 8)) {
            var_s2 = 0;
            if (D_801135F8.unk0.used != 0) {
                var_a0 = 0 * 4;
                do {
                    temp_a1_4 = D_801135F8.unk0.animal[var_s2]; // (&D_801135F8 + var_a0)->unk10;
                    var_v0_4 = var_s2 + 1;
                    if (temp_a1_4 != D_800E5274->unk2EC) {
                        sp18 = temp_a1_4->xPos.h[1] - temp_s5;
                        temp_s0 = D_801135F8.unk0.distance[var_s2]; //(&D_801135F8 + var_a0)->unk4;
                        sp1C = temp_a1_4->zPos.h[1] - temp_s6;
                        if (temp_s0 < 0x140) {
                            if (temp_s0 < 0x40) {
                                func_80062494(&sp18, &sp58); //, D_800E5274);
                                temp_v1_10 = 0xC0 - (temp_s0 * 3);
                                var_a2_2 = (0x40 - temp_s0) * 0xA;
                                sp98 -= (s32) (temp_v1_10 * sp58) >> 8;
                                sp9C -= (s32) (temp_v1_10 * sp5C) >> 8;
                                if (var_a2_2 < 0) {
                                    var_a2_2 += 0x3F;
                                }
                                temp_a2_3 = (s32) (var_a2_2 << 0xA) >> 0x10;
                                var_v0_4 = var_s2 + 1;
                                if (spD8 < temp_a2_3) {
                                    spD8 = temp_a2_3;
                                }
                            } else {
                                var_v0_4 = var_s2 + 1;
                                if (D_800E5274->pad294[0] == 0) {
                                    var_v0_4 = var_s2 + 1;
                                    if (temp_s0 >= 0x81) {
                                        var_s1 = 0x40;
                                        if (temp_s0 >= 0x101) {
                                            var_s1 = 0x40 - (temp_s0 - 0x100);
                                        }
                                        func_80062494(&sp18, &sp58); //, D_800E5274);
                                        var_a2_3 = (temp_s0 - 0x80) / 6;
                                        sp98 += (s32) (var_s1 * sp58) >> 8;
                                        sp9C += (s32) (var_s1 * sp5C) >> 8;
                                        if (var_a2_3 >= 0x11) {
                                            var_a2_3 = 0x10;
                                        }
                                        var_v0_4 = var_s2 + 1;
                                        if (spD8 < var_a2_3) {
                                            spD8 = (s32) var_a2_3;
                                            goto block_71;
                                        }
                                    }
                                }
                            }
                        } else {
block_71:
                            var_v0_4 = var_s2 + 1;
                        }
                    }
                    var_s2 = var_v0_4;
                    var_a0 = var_s2 * 4;
                } while (var_s2 < (s32) D_801135F8.unk0.used);
            }
        }
    }

    D_800E5274->pad294[0x16] = 0;
    if (((u16) D_800E5274->unk292 & 4) && (D_801135F8.unk1C.used != 0)) {
        var_fp = 0x10000;
        var_a0_2 = 0 * 4;
        do {
            temp_a1_5 = D_801135F8.unk1C.animal[temp_s2]; //(&D_801135F8 + var_a0_2)->unk2C;
            temp_v0_4 = var_fp;
            if (D_800E5274->unk2EC != temp_a1_5) {
                sp18 = temp_a1_5->xPos.h[1] - temp_s5;
                temp_s0_2 = D_801135F8.unk1C.distance[temp_s2]; //(&D_801135F8 + var_a0_2)->unk20;
                sp1C = temp_a1_5->zPos.h[1] - temp_s6;
                if (temp_s0_2 < 0x180) {
                    D_800E5274->pad294[0x16] = 1;
                    func_80062494(&sp18, &sp58); //, D_800E5274);
                    temp_s1 = 0x180 - temp_s0_2;
                    sp9C -= (s32) (temp_s1 * sp5C) >> 8;
                    sp98 -= (s32) (temp_s1 * sp58) >> 8;
                    if (spD8 < 0x10) {
                        spD8 = 0x10;
                    }
                }
            }
            var_fp += 0x10000;
            temp_s2 = temp_v0_4 >> 0x10;
            var_a0_2 = temp_s2 * 4;
        } while (temp_s2 < (s32) D_801135F8.unk1C.used);
    }

    if ((D_800E5274->pad294[0x2C] != 3) && (D_800E5274->unk2C0 != 0x05) && (D_800E5274->unk2C1 != 0xFF) && ((u16) D_800E5274->unk292 & 2)) {
        var_s2_2 = 0;
        if (D_801135F8.unk38.used != 0) {
            var_a2_4 = 0 * 4;
            do {
                temp_a1_6 = D_801135F8.unk38.animal[var_s2_2]; //(&D_801135F8 + var_a2_4)->unk48;
                var_v0_5 = var_s2_2 + 1;
                if (temp_a1_6 != D_800E5274->unk2EC) {
                    if ((temp_a1_6 != D_800E5274->unk2CC) && (sp18 = temp_a1_6->xPos.h[1] - temp_s5, temp_s0_3 = D_801135F8.unk38.distance[var_a2_4], sp1C = temp_a1_6->zPos.h[1] - temp_s6, ((temp_s0_3 < 0x80) != 0))) {
                        func_80062494(&sp18, &sp58); //, (struct005 *) var_a2_4);
                        temp_v0_5 = temp_s0_3 * 0xC0;
                        var_v1_2 = temp_v0_5 >> 7;
                        if (temp_v0_5 < 0) {
                            var_v1_2 = (s32) (temp_v0_5 + 0x7F) >> 7;
                        }
                        temp_v1_11 = 0xC0 - var_v1_2;
                        var_a2_5 = (0x80 - temp_s0_3) * 0xA;
                        sp98 -= (s32) (temp_v1_11 * sp58) >> 8;
                        sp9C -= (s32) (temp_v1_11 * sp5C) >> 8;
                        if (var_a2_5 < 0) {
                            var_a2_5 += 0x7F;
                        }
                        temp_a2_4 = (s32) (var_a2_5 << 9) >> 0x10;
                        var_v0_5 = var_s2_2 + 1;
                        if (spD8 < temp_a2_4) {
                            spD8 = temp_a2_4;
                            goto block_96;
                        }
                    } else {
block_96:
                        var_v0_5 = var_s2_2 + 1;
                    }
                }
                var_s2_2 = var_v0_5;
                var_a2_4 = var_s2_2 * 4;
            } while (var_s2_2 < (s32) D_801135F8.unk38.used);
        }
    }

    temp_a0_7 = D_800E529C->unk92;
    if ((temp_a0_7 != 0x40) && (temp_a0_7 != 0x20)) {
        var_s1_2 = 0;
        if ((temp_a0_7 != 0x80) && ((u16) D_800E5274->unk292 & 0x30)) {
            temp_a1_7 = D_800E527C->unk6C;
            if (temp_a1_7 != 0) {
                if (temp_a1_7->unk16C->unk80 & 0x20000) {
                    var_s3 = temp_a1_7->xPos.h[1];
                    var_s4 = temp_a1_7->zPos.h[1];
                    temp_v0_6 = temp_a1_7->unk30 * 2;
                    spE0 = (s32) temp_v0_6;
                    spE4 = (s32) (s16) (temp_v0_6 - 1);
                    var_s7 = (s32) ((temp_v0_6 * 4) + spE0) >> 6;
                } else {
                    goto block_106;
                }
            } else {
block_106:
                var_s7 = 5;
                spE0 = 0x40;
                var_s3 = (temp_s5 & ~0x3F) | 0x20;
                var_s4 = (temp_s6 & ~0x3F) | 0x20;
                spE4 = 0x3F;
            }
            temp_v1_12 = D_800E527C->unk6C;
            var_s1_2 = func_80079984(var_s3, var_s4, D_800E527C->yPos.w, D_800E527C->unk160, spE0) & 0xFF;
            if ((temp_v1_12 == 0) || !(temp_v1_12->unk16C->unk80 & 0x20000)) {
                temp_v0_7 = func_80079A84(var_s3, var_s4, D_800E527C->yPos.w, spE0, var_s1_2);
                if (temp_v0_7 != 0) {
                    var_s7 = 0xA;
                    spE4 = 0x47;
                    var_s3 = temp_s5 & ~0x3F;
                    spE0 = 0x48;
                    var_s4 = temp_s6 & ~0x3F;
                    if (temp_v0_7 & 4) {
                        var_s4 += 0x40;
                    }
                    if (temp_v0_7 & 1) {
                        var_s3 += 0x40;
                    }
                    var_s1_2 = func_80079984(var_s3, var_s4, D_800E527C->yPos.w, D_800E527C->unk160, spE0) & 0xFF;
                }
            }
        }
    } else {
        var_s1_2 = 0;
    }

    var_s0 = -1;
    if ((sp98 | sp9C) == 0) {
        var_s2_3 = D_800E527C->unk2C;
        var_v0_6 = var_s1_2 < 0x10U;
    } else {
        var_s2_3 = (func_8001CFEC((s16) sp98, (s16) sp9C) << 8) / 360;
        var_v0_6 = var_s1_2 < 0x10U;
    }
    if (var_v0_6 != 0) {
        switch (var_s1_2) {
        case 1:
            var_v0_7 = var_s2_3 - 0x21;
            if ((func_80078EAC(var_s3, var_s4, D_800E527C->yPos.w, spE0, 0) != 0) || (var_v0_7 = var_s2_3 - 0x21, (func_80078EAC(var_s3, var_s4, D_800E527C->yPos.w, spE0, 1) != 0))) {
                var_v0_8 = var_s2_3 < 0x80;
                if ((u32) (var_v0_7 & 0xFFFF) >= 0x3FU) {
                    var_v0_9 = var_s2_3 - 0x40;
block_138:
                    if ((u32) (var_v0_9 & 0xFFFF) < 0x80U) {
                        var_s0 = 0x448;
                        if (temp_s5 >= (var_s3 - var_s7)) {
                            var_s0 = 0x80;
                            var_v0_10 = (var_s3 + var_s7) < temp_s5;
block_236:
                            if (var_v0_10 != 0) {
block_237:
                                var_s0 = 0x488;
                            }
                        }
                    } else {
block_169:
                        var_s0 = 0x408;
                        if (temp_s5 >= (var_s3 - var_s7)) {
                            var_s0 = 0;
                            if ((var_s3 + var_s7) < temp_s5) {
block_171:
                                var_s0 = 0x4C8;
                            }
                        }
                    }
                } else {
block_239:
                    if (var_v0_8 != 0) {
                        var_a1_3 = var_s4 - temp_s6;
                        var_a0_3 = (var_s3 + (spE0 >> 1)) - temp_s5;
                        goto block_251;
                    }
block_179:
                    var_a0_4 = var_s3 - temp_s5;
                    if (abs(temp_s5 - var_s3) < var_s7) {
                        if (abs(temp_s6 - var_s4) >= var_s7) {
                            var_a0_4 = var_s3 - temp_s5;
                            goto block_248;
                        }
block_246:
                        spD8 = -1;
                    } else {
block_248:
                        var_a0_5 = var_a0_4 << 0x10;
block_249:
                        var_a0_3 = (s16) (var_a0_5 >> 0x10);
                        var_a1_4 = var_s4 - temp_s6;
block_250:
                        var_a1_3 = var_a1_4;
block_251:
                        var_s0 = ((func_8001CFEC(var_a0_3, var_a1_3) << 8) / 360) + 0x3E8;
                    }
                }
            } else if ((var_s3 < temp_s5) || (var_s2_3 < 0x80)) {
                sp98 += 0x280;
                var_s2_3 = (func_8001CFEC((s16) sp98, (s16) sp9C) << 8) / 360;
                var_v0_11 = spD8 < 0xA;
block_222:
                if (var_v0_11 != 0) {
                    spD8 = 0xA;
                }
            } else {
                var_s0 = 0x428;
            }
            break;
        case 2:
            var_v0_12 = var_s2_3 - 0xA0;
            if ((func_80078EAC(var_s3, var_s4, D_800E527C->yPos.w, spE0, 3) != 0) || (var_v0_12 = var_s2_3 - 0xA0, (func_80078EAC(var_s3, var_s4, D_800E527C->yPos.w, spE0, 2) != 0))) {
                var_v0_13 = var_s2_3 < 0x80;
                if ((u32) (var_v0_12 & 0xFFFF) >= 0x40U) {
                    var_v0_9 = var_s2_3 - 0x40;
                    goto block_138;
                }
block_242:
                if (var_v0_13 == 0) {
                    var_a1_3 = var_s4 - temp_s6;
                    var_a0_3 = (var_s3 - (spE0 >> 1)) - temp_s5;
                    goto block_251;
                }
                goto block_179;
            }
            if ((temp_s5 < var_s3) || (var_s2_3 >= 0x80)) {
                sp98 -= 0x280;
                var_s2_3 = (func_8001CFEC((s16) sp98, (s16) sp9C) << 8) / 360;
                var_v0_11 = spD8 < 0xA;
                goto block_222;
            }
            var_s0 = 0x4A8;
            break;
        case 3:
            var_v0_9 = var_s2_3 - 0x40;
            goto block_138;
        case 4:
            var_v0_14 = var_s2_3 - 0x20;
            if ((func_80078EAC(var_s3, var_s4, D_800E527C->yPos.w, spE0, 3) != 0) || (var_v0_14 = var_s2_3 - 0x20, (func_80078EAC(var_s3, var_s4, D_800E527C->yPos.w, spE0, 0) != 0))) {
                var_v0_15 = var_s2_3 < 0x80;
                if ((u32) (var_v0_14 & 0xFFFF) < 0xC0U) {
block_228:
                    temp_v0_8 = var_s4 - var_s7;
                    if (var_v0_15 != 0) {
                        var_s0 = 0x40;
                        if (temp_s6 < temp_v0_8) {
block_230:
                            var_s0 = 0x408;
                        } else {
block_231:
                            if ((var_s4 + var_s7) < temp_s6) {
block_232:
                                var_s0 = 0x448;
                            }
                        }
                    } else {
                        var_s0 = 0x4C8;
                        if (temp_s6 >= temp_v0_8) {
                            var_s0 = 0xC0;
block_235:
                            var_v0_10 = (var_s4 + var_s7) < temp_s6;
                            goto block_236;
                        }
                    }
                } else {
                case 7:
                    if ((u32) ((var_s2_3 - 0x40) & 0xFFFF) < 0x80U) {
                        goto block_179;
                    }
                    var_a0_3 = var_s3 - temp_s5;
                    var_a1_4 = (var_s4 + (spE0 >> 1)) - temp_s6;
                    goto block_250;
                }
            } else {
                if ((var_s4 < temp_s6) || ((u32) ((var_s2_3 - 0x40) & 0xFFFF) >= 0x80U)) {
                    sp9C += 0x280;
                    var_s2_3 = (func_8001CFEC((s16) sp98, (s16) sp9C) << 8) / 360;
                    var_v0_11 = spD8 < 0xA;
                    goto block_222;
                }
                var_s0 = 0x3E8;
            }
            break;
        case 5:
            if (func_80078EAC(var_s3, var_s4, D_800E527C->yPos.w, spE0, 0) != 0) {
                temp_s0_4 = temp_s5 - var_s3;
                temp_s1_2 = temp_s6 - var_s4;
                if ((abs(temp_s0_4) < var_s7) && (abs(temp_s1_2) < var_s7)) {
                    var_s0 = ((u32) ((var_s2_3 - 0x20) & 0xFFFF) < 0x80U) << 6;
                } else {
                    temp_v1_13 = (s32) (spE0 << 0xF) >> 0x10;
                    temp_v0_9 = var_s2_3 - 0x20;
                    if (((spE4 - (temp_s0_4 + temp_v1_13)) + (temp_s1_2 + temp_v1_13)) >= spE4) {
                        if ((u32) (temp_v0_9 & 0xFFFF) < 0x80U) {
                            var_a0_5 = (var_s3 - temp_s5) << 0x10;
                            goto block_249;
                        }
                        goto block_169;
                    }
                    var_a0_4 = var_s3 - temp_s5;
                    if ((u32) (temp_v0_9 & 0xFFFF) < 0x80U) {
block_157:
                        var_s0 = 0x408;
                        if (temp_s6 >= (var_s4 - var_s7)) {
                            var_s0 = 0x40;
                            goto block_231;
                        }
                    } else {
                        goto block_248;
                    }
                }
            } else {
                if ((var_s3 < temp_s5) && (var_s4 < temp_s6)) {
                    sp98 += 0x280;
                    var_v1_3 = sp9C + 0x280;
block_220:
                    sp9C = var_v1_3;
block_221:
                    var_s2_3 = (func_8001CFEC((s16) sp98, (s16) sp9C) << 8) / 360;
                    var_v0_11 = spD8 < 0xB;
                    goto block_222;
                }
                goto block_230;
            }
            break;
        case 6:
            if (func_80078EAC(var_s3, var_s4, D_800E527C->yPos.w, spE0, 3) != 0) {
                temp_s0_5 = temp_s5 - var_s3;
                temp_s1_3 = temp_s6 - var_s4;
                if ((abs(temp_s0_5) < var_s7) && (abs(temp_s1_3) < var_s7)) {
                    var_s0 = 0xC0;
                    if ((u32) ((var_s2_3 - 0x60) & 0xFFFF) >= 0x80U) {
                        var_s0 = 0;
                    }
                } else {
                    temp_v0_10 = (s32) (spE0 << 0xF) >> 0x10;
                    temp_v0_11 = var_s2_3 - 0x60;
                    if ((temp_s0_5 + temp_v0_10 + (temp_s1_3 + temp_v0_10)) >= spE4) {
                        var_a0_4 = var_s3 - temp_s5;
                        if ((u32) (temp_v0_11 & 0xFFFF) >= 0x80U) {
                            goto block_169;
                        }
                        goto block_248;
                    }
                    var_a0_4 = var_s3 - temp_s5;
                    if ((u32) (temp_v0_11 & 0xFFFF) < 0x80U) {
block_173:
                        var_s0 = 0x4C8;
                        if (temp_s6 >= (var_s4 - var_s7)) {
                            var_s0 = 0xC0;
                            goto block_235;
                        }
                    } else {
                        goto block_248;
                    }
                }
            } else {
                if ((temp_s5 < var_s3) && (var_s4 < temp_s6)) {
                    sp98 -= 0x280;
                    var_v1_3 = sp9C + 0x280;
                    goto block_220;
                }
                goto block_171;
            }
            break;
        case 8:
            var_v0_16 = var_s2_3 - 0x60;
            if ((func_80078EAC(var_s3, var_s4, D_800E527C->yPos.w, spE0, 2) != 0) || (var_v0_16 = var_s2_3 - 0x60, (func_80078EAC(var_s3, var_s4, D_800E527C->yPos.w, spE0, 1) != 0))) {
                var_v0_17 = var_s2_3 - 0x40;
                if ((u32) (var_v0_16 & 0xFFFF) >= 0x40U) {
                    var_v0_15 = var_s2_3 < 0x80;
                    goto block_228;
                }
block_225:
                if ((u32) (var_v0_17 & 0xFFFF) < 0x80U) {
                    var_a0_3 = var_s3 - temp_s5;
                    var_a1_4 = (var_s4 - (spE0 >> 1)) - temp_s6;
                    goto block_250;
                }
                goto block_179;
            }
            if ((temp_s6 < var_s4) || ((u32) ((var_s2_3 - 0x40) & 0xFFFF) < 0x80U)) {
                sp9C -= 0x280;
                goto block_221;
            }
            var_s0 = 0x468;
            break;
        case 9:
            if (func_80078EAC(var_s3, var_s4, D_800E527C->yPos.w, spE0, 1) != 0) {
                temp_s0_6 = temp_s5 - var_s3;
                temp_s1_4 = temp_s6 - var_s4;
                if ((abs(temp_s0_6) < var_s7) && (abs(temp_s1_4) < var_s7)) {
                    var_s0 = 0x80;
                    if ((u32) ((var_s2_3 - 0x60) & 0xFFFF) >= 0x80U) {
                        var_s0 = 0x40;
                    }
                } else {
                    temp_v0_12 = (s32) (spE0 << 0xF) >> 0x10;
                    temp_v0_13 = var_s2_3 - 0x60;
                    if ((temp_s0_6 + temp_v0_12 + (temp_s1_4 + temp_v0_12)) >= spE4) {
                        if ((u32) (temp_v0_13 & 0xFFFF) < 0x80U) {
                            var_a0_5 = (var_s3 - temp_s5) << 0x10;
                            goto block_249;
                        }
                        goto block_157;
                    }
                    if ((u32) (temp_v0_13 & 0xFFFF) < 0x80U) {
                        var_s0 = 0x448;
                        if (temp_s5 >= (var_s3 - var_s7)) {
                            var_s0 = 0x80;
                            var_v0_10 = (var_s3 + var_s7) < temp_s5;
                            goto block_236;
                        }
                    } else {
block_247:
                        var_a0_4 = var_s3 - temp_s5;
                        goto block_248;
                    }
                }
            } else {
                if ((var_s3 < temp_s5) && (temp_s6 < var_s4)) {
                    var_v0_18 = sp98 + 0x280;
block_219:
                    sp98 = var_v0_18;
                    var_v1_3 = sp9C - 0x280;
                    goto block_220;
                }
                goto block_232;
            }
            break;
        case 10:
            if (func_80078EAC(var_s3, var_s4, D_800E527C->yPos.w, spE0, 2) != 0) {
                temp_s0_7 = temp_s5 - var_s3;
                temp_s1_5 = temp_s6 - var_s4;
                if ((abs(temp_s0_7) < var_s7) && (abs(temp_s1_5) < var_s7)) {
                    var_s0 = 0x80;
                    if ((u32) ((var_s2_3 - 0x20) & 0xFFFF) >= 0x80U) {
                        var_s0 = 0xC0;
                    }
                } else {
                    temp_v1_14 = (s32) (spE0 << 0xF) >> 0x10;
                    temp_v0_14 = var_s2_3 - 0x20;
                    if (((spE4 - (temp_s0_7 + temp_v1_14)) + (temp_s1_5 + temp_v1_14)) >= spE4) {
                        if ((u32) (temp_v0_14 & 0xFFFF) < 0x80U) {
                            var_a0_5 = (var_s3 - temp_s5) << 0x10;
                            goto block_249;
                        }
                        goto block_173;
                    }
                    if ((u32) (temp_v0_14 & 0xFFFF) < 0x80U) {
                        var_s0 = 0x448;
                        if (temp_s5 >= (var_s3 - var_s7)) {
                            var_s0 = 0x80;
                            var_v0_10 = (var_s3 + var_s7) < temp_s5;
                            goto block_236;
                        }
                    } else {
                        goto block_247;
                    }
                }
            } else {
                if ((temp_s5 < var_s3) && (temp_s6 < var_s4)) {
                    var_v0_18 = sp98 - 0x280;
                    goto block_219;
                }
                goto block_237;
            }
            break;
        case 11:
            var_v0_17 = var_s2_3 - 0x40;
            goto block_225;
        case 12:
            var_v0_15 = var_s2_3 < 0x80;
            goto block_228;
        case 13:
            var_v0_8 = var_s2_3 < 0x80;
            goto block_239;
        case 14:
            var_v0_13 = var_s2_3 < 0x80;
            goto block_242;
        case 15:
            var_a0_4 = var_s3 - temp_s5;
            if (abs(temp_s5 - var_s3) < var_s7) {
                if (abs(temp_s6 - var_s4) < var_s7) {
                    goto block_246;
                }
                goto block_247;
            }
            goto block_248;
        }
    }

    if ((var_s0 >= 0) && (spD8 > 0)) {
        if (var_s0 >= 0x3E8) {
            var_s0 -= 0x3E8;
            if (spD8 < 0xB) {
                spD8 = 0xA;
            }
        }
        var_s2_3 = var_s0;
        if (func_80062618(D_800E527C->unk2C, var_s0) >= 6) {
            spD8 = -1;
        }
    }
    if (D_800E73A8.animals[gCurrentAnimalIndex].unk0->unk90 == 0x14) {
        temp_v0_15 = abs(D_800E73A8.animals[gCurrentAnimalIndex].animal->xPos.h[1] - D_800E527C->xPos.h[1]);
        if (temp_v0_15 < 0x280) {
            var_a2_6 = abs(D_800E73A8.animals[gCurrentAnimalIndex].animal->zPos.h[1] - D_800E527C->zPos.h[1]);
            if (var_a2_6 < 0x280) {
                if (var_a2_6 < temp_v0_15) {
                    var_a2_6 = temp_v0_15;
                }
                temp_v0_16 = abs(D_800E73A8.animals[gCurrentAnimalIndex].animal->yPos.h[1] - D_800E527C->yPos.h[1]);
                var_a0_6 = temp_v0_16;
                if (temp_v0_16 < 0x280) {
                    if (var_a0_6 < var_a2_6) {
                        var_a0_6 = var_a2_6;
                    }
                    temp_v1_15 = 0x80 - ((var_a0_6 << 7) / 640);
                    if (D_800E5264 & 0x40) {
                        var_v0_19 = var_s2_3 + temp_v1_15;
                    } else {
                        var_v0_19 = var_s2_3 - temp_v1_15;
                    }
                    var_s2_3 = var_v0_19;
                }
            }
        }
    }
    var_a3_2 = D_800E527C->unk2C;
    var_a1_5 = ((u16) D_800E527C->unk2C - (s16) (var_s2_3 + ((s32) (((s32) (D_800E52A8->unk368 << 0x10) >> 0x12) * ((s32) (*(((D_800E5264 * 8) & 0x1F8) + D_800CA604) << 0x10) >> 0x17)) >> 0xA))) & 0xFF;
    if (var_a1_5 != 0) {
        temp_a2_5 = D_800D7B34[D_800E529C->unk90];
        if (var_a1_5 >= 0x80) {
            var_a1_5 = 0x100 - var_a1_5;
            var_v0_20 = var_a3_2 + var_a1_5;
            if (var_a1_5 >= (s32) temp_a2_5) {
                var_v0_20 = var_a3_2 + temp_a2_5;
            }
        } else {
            var_v0_20 = var_a3_2 - var_a1_5;
            if (var_a1_5 >= (s32) temp_a2_5) {
                var_v0_20 = var_a3_2 - temp_a2_5;
            }
        }
        var_a3_2 = var_v0_20;
    }
    temp_a3 = var_a3_2 & 0xFF;
    if (spD8 > 0) {
        temp_a2_6 = (u16) D_800E5274->unk292;
        if (temp_a2_6 & 0xC0) {
            var_v1_4 = 7;
            if (temp_a2_6 & 0x40) {
                var_v1_4 = 6;
            }
            if (temp_a2_6 & 0x80) {
                var_v1_4 -= 1;
            }
            temp_v0_17 = spD8 - ((s32) (spD8 * var_a1_5) >> var_v1_4);
            spD8 = (s32) temp_v0_17;
            if (temp_v0_17 <= 0) {
                spD8 = -1;
            }
        }
    }
    if ((u32) ((spD8 - 1) & 0xFFFF) < 3U) {
        spD8 = 4;
    }
    func_8003F628(temp_a3 & 0xFF, (s8) spD8, spDC, temp_a3);
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_716900", func_8007A280);
#endif

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_716900", func_8007BD9C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_716900", func_8007BE84);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_716900", func_8007BF20);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_716900", func_8007C038);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_716900", func_8007C164);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_716900", func_8007C1E0);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_716900", func_8007C240);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_716900", func_8007C398);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_716900", func_8007C444);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_716900", func_8007C4B0);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_716900", func_8007C508);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_716900", func_8007CE7C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_716900", animal_jump);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_716900", func_8007CFAC);
