#include "common.h"


INCLUDE_ASM("asm/esa/nonmatchings/sheep", func_8008BFE8);

INCLUDE_ASM("asm/esa/nonmatchings/sheep", func_8008C3F8);

// sssv:func_80362618_773CC8
#if 0
extern s32 D_800E4B9C;
extern u16 D_800E5264;

s32 func_80037098(s16 x, s16 z, u8 arg2);
void func_8008CB14(void) {
    s16 var_v0;

    if (D_800E5274->unk38D == 7) {
        play_sound_effect_at_location(0x75, D_800E527C->xPos.h[1], D_800E527C->zPos.h[1]);
    }
    if ((D_800E5274->skillAEnergy[0].unk0 < 0xF)) {
        if (D_800E5274->unk385 != 0x2D) {
            var_v0 = D_800E527C->yPos.h[1] - MAX(func_80037098(D_800E527C->xPos.h[1], D_800E527C->zPos.h[1], D_800E527C->unk160) >> 0x10, D_800E53A4[D_800E527C->xPos.h[1] >> 16][D_800E527C->zPos.h[1] >> 16].unk6 << 2);
            if (var_v0 >= 2) {
                D_800E5274->unk385 = 0x2D;
                D_800E5274->unk34A = D_800E52C0;
                play_sound_effect_at_location(0x6B, D_800E527C->xPos.h[1], D_800E527C->zPos.h[1]);
            }
        }
    }
    if (D_800E527C->unk162 == 3) {
        if (D_800E5274->unk32E < 0) {
            D_800E5274->unk32E = D_800E5264;
        }
        if (D_800E527C->unk162 != 1) {
            if ((D_800E5274->unk38D == 0) || (D_800E5274->unk38D > 7)) {
                D_800E527C->yVel = (((D_800E527C->yVel + 0x30000) * 3) >> 2) - 0x30000;
            } else {
                D_800E527C->yVel = (((D_800E527C->yVel + 0x30000) * 0xF) >> 4) - 0x30000;
            }
            if (D_800E527C->yVel < 0) {
                D_800E527C->yVel += (D_800E4B9C * 0xF) >> 4;
            } else {
                D_800E527C->yVel += D_800E4B9C >> 2;
            }
            D_800E527C->yVel += (D_800CA604[((s16) ((D_800E5264 - D_800E5274->unk32E) << 2) + 0x40) & 0xFF] >> 0x7) << 8;
            D_800E527C->xVel += (D_800CA604[((s16) (D_800E5264 << 3) & 0xf8)] >> 7) << 8;
            D_800E527C->zVel += (D_800CA604[((s16) (D_800E5264 << 2) + 0x40) & 0xFF] >> 0x7) << 8;
        }
    } else {
        recharge_skill(0);
    }
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/sheep", func_8008CB14);
#endif

// sssv:func_80362964_774014
void func_8008CE58(void) {
    if (D_800E527C->unk162 == 1) {
        D_800E5274->unk32E = -1;
    } else {
        D_800E5274->unk32E = (D_800E5274->unk32E + 1) & 0xFF;
    }
}

// sssv:func_803629B0_774060
void func_8008CEA8(void) {
    if ((D_800E527C->unk162 == 1) || (D_800E527C->unk162 == 5)) {
        func_80078550();
    } else {
        recharge_skill(1);
    }
}

void func_8008CEF8(void) {
}

// sssv:func_80362A10_7740C0
void ram_headbutt(void) {
    D_800E5274->unk34A = D_800E52C0;
    D_800E5274->unk385 = 3; // ATTACK_SHEEP_HEADBUTT
    play_sound_effect_at_location(0x39, D_800E527C->xPos.h[1], D_800E527C->zPos.h[1]);
}

void func_8008CF4C(void) {
    D_800E5274->unk34A = D_800E52C0;
    D_800E5274->unk385 = 3; // ATTACK_SHEEP_HEADBUTT
    play_sound_effect_at_location(0x39, D_800E527C->xPos.h[1], D_800E527C->zPos.h[1]);
}
