#include "common.h"

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_78E970", func_80076864);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_78E970", func_80076D60);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_78E970", func_80076D94);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_78E970", func_80076DC4);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_78E970", func_800775B8);

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
    s16 var_v0_3;
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
