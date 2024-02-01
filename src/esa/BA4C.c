#include "common.h"

extern s16 D_800E4F30;
s8 *D_800E4FA8;
s64 D_800E4FD8;

extern s8 D_800E525C;
extern struct002 *D_800E5284;
extern struct005 *D_800E52A8;
extern s16 D_800E52C8;
extern s16 D_800E52D8;

#if 0

typedef struct {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 pad3[0x2];
    u8 unk5;
    s16 unk6;
    u16 unk8;
    s16 unkA;
    s16 unkC;
    s16 unkE;
} struct038;

void func_8001EE3C(s8);
void func_8001ED2C(s8, s8, s8, s32);

void func_8001B44C(Animal *arg0, s16 arg2) {
    s16 temp_a0_2;
    s16 temp_a1;
    s16 var_a2;
    s32 temp_s0;
    s32 var_a3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s8 temp_a1_2;
    u16 temp_v0_2;
    u8 temp_a0;
    u8 temp_v0;
    u8 temp_v1;
    struct038 *temp_s1;

    // var_a2 = arg2;
    var_a3 = 0x64;
    temp_s1 = (u8*)arg0 + 0x23C;

    if (arg0->unk241 & 4) {
        if (arg0->unk241 & 1) {
            temp_s0 = abs(arg0->xPos.h[1] - D_800E527C->xPos.h[1]);
            var_v1 = abs(arg0->zPos.h[1] - D_800E527C->zPos.h[1]);
            var_v0 = temp_s0;
            if (var_v1 >= temp_s0) {
                var_v0 = var_v1;
                var_v1 = temp_s0;
            }

            var_a3 = 0x64 - ((s32) ((var_v0 * 2) + var_v1) >> 4);
            if (var_a3 < 0) {
                var_a3 = 0;
            }
            if (var_a3 > 0x64) {
                var_a3 = 0x64;
            }
            if (temp_s1->unk6 != 0) {
                var_a3 = ((var_a3 * temp_s1->unk1) + ( ((temp_s1->unk2 - temp_s1->unk1) * temp_s1->unk8) / temp_s1->unk6)) >> 8;
            }
        } else {
            if (arg0->unk242 != 0) {
                var_a3 = (arg0->unk23D + (( ((arg0->unk23E - arg0->unk23D) * arg0->unk244) / arg0->unk242) * 0x64)) >> 8;
            }
        }
        if (arg0->unk274 == (u8) 1) {
            if (temp_s1->unkE != 0) {
                func_8001EE3C(temp_s1->unkC);
                temp_s1->unkE = 0;
            }
        } else if (temp_s1->unkE == 0) {
            if (var_a3 != 0) {
                if ( D_800E4FA8[temp_s1->unk0] != -1) {
                    temp_s1->unkC = func_8001EA40(D_800E4F30, D_800E4FA8[temp_s1->unk0] - 1, D_800E4FD8, (s8) var_a3, (s32) (s8) var_a3, 0x400, 1, 0xFF);
                    temp_s1->unkE = 1;
                    goto block_22;
                }
            } else {
                goto block_22;
            }
        } else {
            if (var_a3 == 0) {
                temp_s1->unkE = 0;
                func_8001EE3C(temp_s1->unkC); //, var_a3 << 0x18, var_a2, (s8) var_a3);
            } else {
                func_8001ED2C(temp_s1->unkC, (s8) var_a3, (s8) var_a3, 0x400);
            }
block_22:
            if (temp_s1->unk6 != -1) {
                temp_s1->unk8++;
                if (temp_s1->unk8 >= temp_s1->unk6) {
                    if (temp_s1->unkE != 0) {
                        func_8001EE3C(temp_s1->unkC);
                    }
                    temp_s1->unk8 = 0;
                    temp_s1->unkE = 0;
                    temp_s1->unk5 = 0;
                }
            }
        }
    }
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/BA4C", func_8001B44C);
#endif

INCLUDE_ASM("asm/esa/nonmatchings/BA4C", func_8001B714);


s32 play_sound_effect_at_location(s32 id, s32 xPos, s32 zPos, s16 vol) {
    s16 prevIndex;
    s32 xDist;
    s32 zDist;
    s32 bigDist;
    s32 smallDist;
    s32 volume;

    if (D_800E4FA8[id] != -1) {
        if ((xPos == -1) && (zPos == -1)) {
            return func_8001EA40(
                D_800E4F30,
                D_800E4FA8[id] - 1,
                D_800E4FD8,
                vol,
                vol,
                0x3A0,
                1,
                0xFF);
        }

        prevIndex = D_800E52C8;

        D_800E525C = 1;
        D_800E52D8 = 0;

        D_800E5284 = &D_800EAF28.animals[gCurrentAnimalIndex];
        D_800E529C = D_800E5284->unk0;
        D_800E527C = D_800E5274 = D_800E52A8 = D_800E5284->animal;

        D_800E52C8 = gCurrentAnimalIndex; // ???

        xDist = abs(xPos - D_800E527C->xPos.h[1]);
        zDist = abs(zPos - D_800E527C->zPos.h[1]);

        D_800E5284 = &D_800EAF28.animals[prevIndex];
        D_800E529C = D_800E5284->unk0;
        D_800E527C = D_800E5274 = D_800E52A8 = D_800E5284->animal;

        if (prevIndex == gCurrentAnimalIndex) {
            D_800E525C = 1;
        } else {
            D_800E525C = 0;
        }

        D_800E52C8 = prevIndex;
        D_800E52D8 = 0; // why set again?

        if (zDist < xDist) {
            bigDist = xDist;
            smallDist = zDist;
        } else {
            bigDist = zDist;
            smallDist = xDist;
        }

        volume = 100 - (((bigDist * 2) + smallDist) >> 4);
        if (volume < 0) {
            volume = 0;
        }
        if (volume > 100) {
            volume = 100;
        }

        if (volume != 0) {
            return func_8001EA40(D_800E4F30, D_800E4FA8[id] - 1, D_800E4FD8, volume, volume, 0x3A0, 1, 0xFF);
        }
    }

    return -1;
}
