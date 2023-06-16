#include "common.h"

INCLUDE_ASM("asm/esa/nonmatchings/scorpion", func_8009B26C);

#if 0
extern s16 D_800DC1F8[];
void func_8009C5D8(s16 arg0, s16 *arg1, s16 *arg2, s16 *arg3, s16 *arg4, struct009 *arg5) {
    s16 yPos;
    s16 temp_2;
    s16 temp_2_2;
    s16 temp_3_2;
    s16 temp_4_3;
    s16 yPos_2;
    s16 temp_5_3;
    s16 zPos_2;
    s16 temp_7_2;
    s32 temp_3;
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_5;
    s32 temp_7;
    s32 temp_8_2;
    s32 temp_8_3;
    s32 temp_9;
    s32 var_10;
    s32 var_2;
    s32 var_2_2;
    s32 var_3;
    u16 xPos;
    u16 zPos;

    temp_5 = ((D_800CA604[(D_800E5274->unk322 + 0x40) & 0xFF] >> 0x7) * 100) / 32;
    temp_4 = ((D_800CA604[D_800E5274->unk322 & 0xFF] >> 0x7) * 100) / 32;

    temp_7 = (temp_5 + temp_4) >> 7;
    temp_4_2 = (temp_5 - temp_4) >> 7;

    xPos = D_800E5274->xPos.h[1];
    zPos = D_800E5274->zPos.h[1];
    yPos = D_800E5274->yPos.h[1];

    temp_3_2 = xPos - temp_7;
    temp_2 = zPos - temp_4_2;
    temp_5_3 = temp_7 + xPos;
    temp_4_3 = temp_4_2 + zPos;

    zPos_2 = arg5->unk6;
    yPos_2 = arg5->unkA;

    temp_2_2 = (u16) D_800E5274->yPos.h[1] + D_800E529C->unkAE;
    temp_7_2 = D_800E5274->unk32C;

    if (arg0 < 5) {
        *arg2 = temp_3_2 + (((temp_5_3 - temp_3_2) * arg0) / 4);
        *arg3 = temp_2 + (((temp_4_3 - temp_2) * arg0) / 4);
        *arg4 = yPos;
    } else {
        temp_8_2 = arg0 - 4;
        if (arg0 < 0xB) {
            *arg2 = temp_5_3 + (((temp_3_2 - temp_5_3) * temp_8_2) / 6);
            *arg3 = temp_4_3 + (((temp_2 - temp_4_3) * temp_8_2) / 6);
            *arg4 = yPos + (((temp_2_2 - yPos) * temp_8_2) / 6);
        } else {
            temp_8_3 = arg0 - 0xA;
            if (arg0 < 0x11) {
                *arg2 = temp_3_2 + (((zPos_2 - temp_3_2) * temp_8_3) / 6);
                *arg3 = temp_2 + (((yPos_2 - temp_2) * temp_8_3) / 6);
                *arg4 = temp_2_2 + (((temp_7_2 - temp_2_2) * temp_8_3) / 6);
            } else {
                *arg2 = zPos_2;
                *arg3 = yPos_2;
                *arg4 = temp_7_2;
            }
        }
    }
    *arg1 = D_800DC1F8[arg0]; //((arg0 * 2) + &D_800DC1F8);
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/scorpion", func_8009C5D8);
#endif

// sssv:func_80379048_78A6F8
void func_8009C8CC(void) {
    D_800E5274->unk34A = D_800E52C0;
    D_800E5274->unk385 = 6;
}

// sssv:func_80379070_78A720
void func_8009C8EC(void) {
    struct003 *temp;
    if (D_800E5274->unk385 == 0) {
        temp = func_80077CD8();
        if (temp == NULL) {
            recharge_skill(1);
            return;
        }
        D_800E5274->unk350 = temp;
        D_800E5274->unk385 = 38;
        D_800E5274->unk34A = D_800E52C0;
        D_800E5274->unk32C = D_800E5274->unk350->unkE + (D_800E5274->unk350->unk42 >> 1);
        return;
    } else {
      recharge_skill(1);
    }
}

// sssv:func_80379148_78A7F8
void func_8009C98C(struct003 *arg0) {
    if ((D_800E5274->unk385 == 0) && (arg0 != NULL)) {
        D_800E5274->unk350 = arg0;
        D_800E5274->unk385 = 38;
        D_800E5274 = D_800E5274;
        D_800E5274->unk34A = D_800E52C0;
        D_800E5274->unk32C = D_800E5274->unk350->unkE + (D_800E5274->unk350->unk42 >> 1);
    }
}

// sssv:func_803791AC_78A85C
void func_8009C9EC(void) {
    D_800E5274->unk34A = D_800E52C0;
    D_800E5274->unk385 = 6;
}
