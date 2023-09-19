#include "common.h"

INCLUDE_ASM("asm/esa/nonmatchings/BA4C", func_8001B44C);

INCLUDE_ASM("asm/esa/nonmatchings/BA4C", func_8001B714);

#if 0
extern s16 D_800E4F30;
extern s8 D_800E4FA8[];
extern s32 D_800E4FD8;
extern s8 D_800E525C;
extern void *D_800E5284;
extern struct005 *D_800E52A8;
extern s16 D_800E52C8;
extern s16 D_800E52D8;

s16 func_8001EA40(s16 arg0, s16 arg1, s32 arg2, s8 arg3, s8 arg4, s32 arg5, s32 arg6, u8 arg7);

s32 play_sound_effect_at_location(s32 id, s32 xPos, s32 zPos, s16 arg3) {
    s16 xDist;
    s16 temp_s2;
    s16 zDist;
    s16 var_v0_2;
    s16 var_v1_2;
    s32 var_v0;
    s32 var_v0_3;
    s32 var_v1;
    struct005 *temp_a0;
    struct005 *temp_v1;
    struct002 *temp_v0;
    struct002 *temp_v1_2;

    if (D_800E4FA8[id] != -1) {
        if ((xPos == -1) && (zPos == -1)) {
            return func_8001EA40(D_800E4F30, D_800E4FA8[id] - 1, D_800E4FD8, arg3, arg3, 0x3A0, 1, 0xFF);
        }

        temp_s2 = D_800E52C8;
        D_800E525C = 1;
        temp_v0 = &D_800EAF28.animals[gCurrentAnimalIndex];
        temp_v1 = temp_v0->animal;
        D_800E52D8 = 0;
        D_800E5284 = temp_v0;
        D_800E52C8 = gCurrentAnimalIndex;
        D_800E529C = temp_v0->unk0;
        D_800E52A8 = temp_v1;
        D_800E5274 = temp_v1;
        D_800E527C = temp_v1;

        xDist = abs(xPos - D_800E527C->xPos.h[1]);
        zDist = abs(zPos - D_800E527C->zPos.h[1]);

        temp_v1_2 = &D_800EAF28.animals[temp_s2];
        temp_a0 = temp_v1_2->animal;
        D_800E5284 = temp_v1_2;
        D_800E52A8 = temp_a0;
        D_800E5274 = temp_a0;
        D_800E527C = temp_a0;
        D_800E529C = temp_v1_2->unk0;

        if (temp_s2 == gCurrentAnimalIndex) {
            D_800E525C = 1;
        } else {
            D_800E525C = 0;
        }

        D_800E52C8 = temp_s2;
        D_800E52D8 = 0;

        if (zDist < xDist) {
            var_v0_2 = xDist;
            var_v1_2 = zDist;
        } else {
            var_v0_2 = zDist;
            var_v1_2 = xDist;
        }

        var_v1 = 0x64 - (((var_v0_2 * 2) + var_v1_2) >> 4);
        if (var_v1 < 0) {
            var_v1 = 0;
        }
        if (var_v1 > 0x64) {
            var_v1 = 0x64;
        }

        if (var_v1 != 0) {
            return func_8001EA40(D_800E4F30, D_800E4FA8[id] - 1, D_800E4FD8, var_v1, var_v1, 0x3A0, 1, 0xFF);
        }
    }

    return -1;
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/BA4C", play_sound_effect_at_location);
#endif
