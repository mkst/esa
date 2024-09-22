#include "common.h"

// sssv:func_802C7C80_6D9330
#if 0

typedef struct {
    /* 0x00 */ s16 unk0;
    /* 0x02 */ s16 unk2;
    /* 0x04 */ s16 unk4;
    /* 0x06 */ s16 unk6;
    /* 0x08 */ s16 unk8;
    /* 0x0A */ u8  unkA;
    /* 0x0B */ u8  unkB;
    /* 0x0C */ s16 unkC;
    /* 0x0E */ s16 unkE;
    /* 0x10 */ s16 unk10;
    /* 0x12 */ s16 unk12;
    /* 0x14 */ s16 unk14;
    /* 0x16 */ s16 unk16;
    /* 0x18 */ s16 unk18;
    /* 0x1A */ s16 unk1A;
    /* 0x1C */ s16 unk1C;
    /* 0x1E */ s16 unk1E;
    /* 0x20 */ s16 unk20;
    /* 0x22 */ s16 unk22;
    /* 0x24 */ s16 unk24;
    /* 0x26 */ s16 unk26;
    /* 0x28 */ s16 unk28;
    /* 0x2A */ s16 unk2A;
    /* 0x2C */ u8  unk2C;
    /* 0x2D */ u8  unk2D;
    /* 0x2E */ s16 unk2E;
    /* 0x30 */ s16 unk30;
    /* 0x32 */ s16 unk32;
    /* 0x34 */ s16 unk34;
    /* 0x36 */ s16 unk36;
    /* 0x38 */ s16 unk38;
    /* 0x3A */ s16 unk3A;
    /* 0x3C */ s16 unk3C;
    /* 0x3E */ s16 unk3E;
    /* 0x40 */ s16 unk40;
    /* 0x42 */ s16 unk42;
    /* 0x44 */ s16 unk44;
    /* 0x46 */ s16 unk46;
    /* 0x48 */ s16 unk48;
    /* 0x4A */ s16 unk4A;
    /* 0x4C */ s16 unk4C;
    /* 0x4F */ u8  unk4F;
    /* 0x50 */ u8  unk50;
    /* 0x51 */ u8  unk51;
} struct039; // size 0x52 // "raw file data"

extern struct039 D_800D6528[];

void func_8005F8F8(void) {
    s16 i;
    s32 sp14;
    s32 temp_v1_4;
    // u16 temp_v1_3;

    memset((s8 *) &D_800E73A8, 0, 0x3B80);

    for (i = 0; i < 0x44; i++) {
        D_800E73A8.unk0[i].unk7E = 0xCC;
        D_800E73A8.unk0[i].unk80 = 2;
        D_800E73A8.unk0[i].unk8A = 0x7F;
        D_800E73A8.unk0[i].unkCC = 0x14;

        D_800E73A8.unk0[i].unk96 = D_800D6528[i].unk4;
        D_800E73A8.unk0[i].unk92 = D_800D6528[i].unk0;
        D_800E73A8.unk0[i].unk94 = D_800D6528[i].unk2;

        D_800E73A8.unk0[i].unkB2 = D_800D6528[i].unk6;
        D_800E73A8.unk0[i].unk72 = D_800D6528[i].unk6;
        D_800E73A8.unk0[i].unk74 = D_800D6528[i].unk6;

        D_800E73A8.unk0[i].unk7C = D_800D6528[i].unk8;
        D_800E73A8.unk0[i].unk8B = D_800D6528[i].unkA;

        D_800E73A8.unk0[i].unk8C = D_800D6528[i].unkB;
        D_800E73A8.unk0[i].unkDF = D_800D6528[i].unk51;

        if ((i != EVO) && (i != EVO_TRANSFER)) {
            D_800E73A8.unk0[i].unk2 = 5;
        } else {
            D_800E73A8.unk0[i].unk2 = 15;
        }

        // sp14 = 0xFFBF0000;
        // temp_v1_3 = D_800D6528[i].unk22;
        // sp14 |= 0xFFFF;

        D_800E73A8.unk0[i].unk98 = D_800D6528[i].unkC;
        D_800E73A8.unk0[i].unk9A = D_800D6528[i].unkE;
        D_800E73A8.unk0[i].unk9C = D_800D6528[i].unk10;
        D_800E73A8.unk0[i].unkA2 = D_800D6528[i].unk16;

        D_800E73A8.unk0[i].unk7A = D_800D6528[i].unk22;
        D_800E73A8.unk0[i].unkAE = D_800D6528[i].unk22;

        D_800E73A8.unk0[i].unk9E = D_800D6528[i].unk12;
        D_800E73A8.unk0[i].unkA0 = D_800D6528[i].unk14;
        D_800E73A8.unk0[i].unkA4 = D_800D6528[i].unk18;
        D_800E73A8.unk0[i].unkA6 = D_800D6528[i].unk1A;
        D_800E73A8.unk0[i].unkA8 = D_800D6528[i].unk1C;
        D_800E73A8.unk0[i].unkAA = D_800D6528[i].unk1E;
        D_800E73A8.unk0[i].unkAC = D_800D6528[i].unk20;
        D_800E73A8.unk0[i].unk76 = (D_800E73A8.unk0[i].unk72 * 7) >> 2;
        D_800E73A8.unk0[i].unk78 = (D_800E73A8.unk0[i].unk7A * 5) >> 3;
        D_800E73A8.unk0[i].unkB0 = D_800D6528[i].unk24;
        D_800E73A8.unk0[i].unkB4 = D_800D6528[i].unk26;
        D_800E73A8.unk0[i].unkB6 = D_800D6528[i].unk28;

        D_800E73A8.unk0[i].unk90 = i;

        D_800E73A8.unk0[i].unkDA = D_800D6528[i].unk2C;
        D_800E73A8.unk0[i].unkDB = D_800D6528[i].unk2D;
        D_800E73A8.unk0[i].unkB8 = D_800D6528[i].unk2A;
        D_800E73A8.unk0[i].unk0 = i + 0x100;
        D_800E73A8.unk0[i].unkBA = D_800D6528[i].unk2E;
        D_800E73A8.unk0[i].unkBC = D_800D6528[i].unk30;
        D_800E73A8.unk0[i].unkBE = D_800D6528[i].unk32;
        D_800E73A8.unk0[i].unkC0 = D_800D6528[i].unk34;
        D_800E73A8.unk0[i].unkC2 = D_800D6528[i].unk36;
        D_800E73A8.unk0[i].unkC4 = D_800D6528[i].unk38;
        D_800E73A8.unk0[i].unkC6 = D_800D6528[i].unk3A;
        D_800E73A8.unk0[i].unkCA = D_800D6528[i].unk40;
        D_800E73A8.unk0[i].unkDC = D_800D6528[i].unk3C;
        D_800E73A8.unk0[i].unkC8 = D_800D6528[i].unk3E;

        D_800E73A8.unk0[i].unkCE[0][0] = D_800D6528[i].unk42;
        D_800E73A8.unk0[i].unkCE[0][1] = D_800D6528[i].unk44;
        D_800E73A8.unk0[i].unkCE[0][2] = D_800D6528[i].unk46;
        D_800E73A8.unk0[i].unkCE[1][0] = D_800D6528[i].unk48;
        D_800E73A8.unk0[i].unkCE[1][1] = D_800D6528[i].unk4A;
        D_800E73A8.unk0[i].unkCE[1][2] = D_800D6528[i].unk4C;

        // fuuuu
        // D_800E73A8.unk0[i].unk82 = (D_800E73A8.unk0[i].unk82 | 0x40000 | 0x80000 | 0x100000 | 0x200000) & sp14;
        D_800E73A8.unk0[i].unk82.unk3 = 1;
        D_800E73A8.unk0[i].unk82.unk4 = 1;
        D_800E73A8.unk0[i].unk82.unk5 = 1;
        D_800E73A8.unk0[i].unk82.unk6 = 0;


        D_800E73A8.unk0[i].unkDD = D_800D6528[i].unk4F;
        D_800E73A8.unk0[i].unkDE = D_800D6528[i].unk50;

        // temp_v1_4 = i & 0xFFFF;
        if ((u16)i == DESERT_FOX_ATTACKING) {
            D_800E73A8.unk0[i].unk8D = 4;
        } else if (i == HARD_MOUSE) {
            D_800E73A8.unk0[i].unk8D = 2;
        }
    }
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6D9330", func_8005F8F8);
#endif

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6D9330", spawn_animal);

// sssv:func_802C83CC_6D9A7C
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6D9330", func_800600E0);

