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

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_716900", func_8007A280);

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
