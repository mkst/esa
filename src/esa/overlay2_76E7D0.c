#include "common.h"

extern s16 D_80015AA4[];
extern s16 D_80015AC4[];

extern s8  D_800E4FB0;

extern u16 D_800E5264;

extern u16 D_800E4B80; // externed...

s32 D_800E54B4;
s32 D_800E54B8;
s32 D_800E54BC;
s32 D_800E54C0;
s32 D_800E54C4;
s32 D_800E54C8;
s8  D_800E54CC;
s8  D_800E54D0;
s16 D_800E54D8;
s16 D_800E54DC;
s32 D_800E54E0;
s16 D_800E54E8;
s8  D_800E54EC;
s16 D_800E54F4;
s8  D_800E54F8;

// sssv:func_8035D120_76E7D0
void func_800A0ADC(void) {
    s32 temp_a0;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a2;

    if ((D_800E5274->unk386 == 2) || (D_800E5274->unk386 == 5)) {
        D_800E5274->unk385 = 0;
    }

    D_800E54DC = 0;
    D_800E54D8 = 0;
    D_800E54F4 = 0;

    D_800E54C8 = 0x10000;
    D_800E54C4 = 0x10000;
    D_800E54C0 = 0x10000;
    D_800E54E0 = 0x10000;

    temp_v0 = D_800E527C->unk4B * 0x300;
    D_800E54BC = 0x10000 - temp_v0;
    temp_v0_2 = D_800E527C->unk4B << 0xA;
    D_800E54B8 = temp_v0_2 + 0x10000;
    D_800E54B4 = temp_v0_2 + 0x10000;
    if (D_800E4B80 & 8) {
        D_800E54E0 = 0x30000;
        D_800E54B4 = ((temp_v0_2 + 0x10000) / 3);
        D_800E54B8 = ((temp_v0_2 + 0x10000) / 3);
        D_800E54BC = (0x10000 - temp_v0) / 3;
    }

    D_800E54D0 = 1;
    D_800E54CC = 1;
    D_800E54EC = 0;
    D_800E54F8 = 0;

    if (D_800E5274->unk380 != 0) {
        switch (D_800E5274->unk380) {
        case 3:
            D_800E54BC = (D_800E54BC * 14) >> 4;
            break;
        case 2:
            D_800E54BC = (D_800E54BC * 11) >> 4;
            break;
        case 1:
            D_800E54BC = (D_800E54BC * 8) >> 4;
            break;
        }
    }

    if (D_800E5274->unk38D != 0) {
        var_a2 = D_800E529C->unkDD;
        temp_a3 = ((D_800E5274->unk38D << 4) / var_a2);
        D_800E54B4 = (D_800E54B4 * (((D_80015AC4[temp_a3] * D_800E529C->unkDE) >> 4) + 0x10)) >> 4;
        D_800E54B8 = (D_800E54B8 * (((D_80015AC4[temp_a3] * D_800E529C->unkDE) >> 4) + 0x10)) >> 4;

        if ((D_800E527C->unk70 == NULL) || ((D_800E527C->unk70->yPos.h[1] - D_800E527C->yPos.h[1]) > (D_800E527C->unk42 * 2))) {
            D_800E54BC = (D_800E54BC * ((((D_80015AA4[temp_a3]) * D_800E529C->unkDE) >> 4) + 0x10)) >> 4;
        }

        if ((++D_800E5274->unk38D) >= var_a2) {
            D_800E5274->unk38D = 0;
        }
    }

    switch (D_800E5274->unk384) {
    case 0:
    case 3:
        break;
    case 4:
        if ((D_800E52C0 - D_800E5274->unk354) >= 0xA) {
            D_800E5274->unk384 = 0;
        }
        break;
    case 8:
        func_800A186C(0x18);
        break;
    case 9:
        func_800A1A20(0x18);
        break;
    case 15:
        func_800A1BD4(0x10);
        break;
    case 6:
        func_800A1D78(0xA);
        break;
    case 7:
        func_800A2660(0x10);
        break;
    case 13:
        func_800A1754(0xE);
        func_800A22B0(0x10, 1);
        D_800E54E8 = 2;
        break;
    case 14:
        func_800A1754(0x14);
        func_800A22B0(0x20, 3);
        D_800E54E8 = 2;
        break;
    case 16:
        func_800A23EC(0x12C, 0);
        break;
    case 17:
        func_800A23EC(0x12C, 1);
        break;
    default:
        D_800E5274->unk384 = 0;
        break;
    }

    if (D_800E5274->unk368 != 0) {
        if (D_800E5274->unk36A != 0) {
            D_800E5274->unk36A--;
        } else {
            D_800E5274->unk368--;
        }
    }
    if ((D_800E5264 & 2) && (D_800E5274->lastHpLost > 0)) {
        D_800E54EC = 1;
        D_800E5274->lastHpLost = MAX(0, D_800E5274->lastHpLost - 2);
    }
}

// sssv:func_8035D6A0_76ED50 stubbed
void func_800A0F84(void) {
}

// sssv:func_8035D734_76EDE4
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_76E7D0", func_800A0F8C);

// sssv:func_8035DA60_76F110
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_76E7D0", func_800A1294);

// sssv:func_8035DEC4_76F574
void func_800A15BC(void) {
    if (D_800E5274->unk386 != 5) {
        if (D_800E5274->unk30E < 385) {
            D_800E54C0 += D_800CA604[(s16)((D_800E5274->unk30E & 0xF) << 4) & 0xFF] >> 2;
            D_800E54C4 += D_800CA604[(s16)((D_800E5274->unk30E & 0xF) << 4) & 0xFF] >> 2;
            D_800E54C8 += D_800CA604[(s16)((D_800E5274->unk30E & 0xF) << 4) & 0xFF] >> 2;
        } else {
            D_800E54C0 += D_800CA604[(s16)((D_800E5274->unk30E & 0x1F) << 3) & 0xFF] >> 2;
            D_800E54C4 += D_800CA604[(s16)((D_800E5274->unk30E & 0x1F) << 3) & 0xFF] >> 2;
            D_800E54C8 += D_800CA604[(s16)((D_800E5274->unk30E & 0x1F) << 3) & 0xFF] >> 2;
        }

        if (D_800E4FB0 == 0) {
            D_800E5274->unk30E++;
        }
        if (D_800E527C->state == 0x17) {
            D_800E5274->unk30E %= 64;
        }
        if (D_800E527C->state == 4) {
            D_800E5274->unk30E %= 64;
        }
        if (D_800E527C->state == 0x2A) {
            D_800E5274->unk30E %= 64;
        }
        if (D_800E527C->state == 0x69) {
            D_800E5274->unk30E %= 64;
        }
    }
}
