#include "common.h"

extern s16 D_800E53C4;
extern s16 D_800E53C8;

#if 0
void func_800646E4(void) {
    s16 xVel, zVel;

    if (D_800E527C->unk160 == 2) {
        func_80037C8C(D_800E527C->xPos.h[1], D_800E527C->zPos.h[1], &D_800E53C4, &D_800E53C8);
    } else {
        func_80037DA4(D_800E527C->xPos.h[1], D_800E527C->zPos.h[1], &D_800E53C4, &D_800E53C8);
    }

    if (D_800E527C->unk161 == 0) {
        xVel = D_800E53C4;
        zVel = D_800E53C8;

        if (xVel > 24) {
            xVel += xVel - 24;
        }
        if (xVel < -24) {
            xVel += xVel + 24;
        }

        if (zVel > 24) {
            zVel += zVel - 24;
        }
        if (zVel < -24) {
            zVel += zVel + 24;
        }

        D_800E527C->xVel += MAX(MIN(xVel, 128), -128) << 12;
        D_800E527C->zVel += MAX(MIN(zVel, 128), -128) << 12;
    }
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5380", func_800646E4);
#endif

void func_80064858(struct004 *arg0, s32 *arg1, s32 *arg2) {
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;

    if (arg0->unk161 == 0) {
        if (D_800E53C4 < -0x17) {
            *arg1 = MIN(*arg1, -0x10000);
        }
        if (D_800E53C4 >= 0x18) {
            *arg1 = MAX(*arg1, 0x10000);
        }
        if (D_800E53C8 < -0x17) {
            *arg2 = MIN(*arg2, -0x10000);
        }
        if (D_800E53C8 > 0x17) {
            *arg2 = MAX(*arg2, 0x10000);
        }
    }
}

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5380", func_80064930);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6B5380", func_80064A14);

void func_80064AC0(void) {
    s16 var_s0;

    if (D_800E529C->unk94 & 0xC00) {
        var_s0 = D_800E529C->unkAE;
    } else {
        var_s0 = D_800E529C->unkAC;
    }
    D_800E527C->yVel = (s32) (D_800E527C->yVel * 7) >> 3;
    D_800E527C->yVel -= ((D_800E527C->yPos.h[1] + var_s0) - func_80020C8C(D_800E527C->xPos.h[1], D_800E527C->zPos.h[1], D_800E527C)) << 0xA;
}

void func_80064B5C(void) {
    s16 temp_v1;

    temp_v1 = (D_800E527C->yPos.h[1] + D_800E529C->unkAE) - func_80020C8C(D_800E527C->xPos.h[1], D_800E527C->zPos.h[1]);
    if (temp_v1 >= 0) {
        D_800E527C->yVel -= D_800E4B9C;
    } else if (temp_v1 >= -0xF) {
        D_800E527C->yVel -= ((temp_v1 + 0x10) * D_800E4B9C) >> 4;
    }
}

void func_80064C08(s32* arg0, s32* arg1, u16 arg2) {
    if (abs(*arg0) > abs(*arg1)) {
        abs(*arg0);
        abs(*arg1);
    } else {
        abs(*arg1);
        abs(*arg0);
    }
    *arg0 = (*arg0 * arg2) >> 8;
    *arg1 = (*arg1 * arg2) >> 8;
}

void func_80064CD0(u16 arg0, u16 arg1, s16 arg2) {
    s32 zVel;
    s32 temp_t6_2;
    s32 temp_t7_2;
    s32 temp_t7_3;
    s32 xVel;

    xVel = D_800E527C->xVel;
    zVel = D_800E527C->zVel;

    temp_t7_2 = D_800CA604[D_800E5274->unk322 & 0xFF] >> 5;
    temp_t6_2 = D_800CA604[(D_800E5274->unk322 + 0x40) & 0xFF] >> 5;
    temp_t7_3 = (((xVel >> 0xA) * temp_t7_2) + ((zVel >> 0xA) * temp_t6_2)) >> 0xA;

    temp_t7_2 = (temp_t7_2 * temp_t7_3);
    temp_t6_2 = (temp_t6_2 * temp_t7_3);

    xVel = xVel - (((((xVel - temp_t7_2) >> arg0) + (xVel >> arg1)) * arg2) >> 4);
    zVel = zVel - (((((zVel - temp_t6_2) >> arg0) + (zVel >> arg1)) * arg2) >> 4);
    D_800E527C->xVel = xVel;
    D_800E527C->zVel = zVel;
}
