#include "common.h"

typedef struct {
    struct {
        u8  pad0[3]; // tbd
        u8  unk3;
        u8  r;
        u8  g;
        u8  b;
        u8  a;
    } unk3; // 8 bytes
    u8  unk8;
    s16 unkA;
    u8  unkC;
    u8  unkD;
    u8  unkE;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    s16 unk16;
} Primitive2; // size 0x14 ?

extern struct036 *D_800E4F28;

extern Primitive2 D_800E4BD8;

extern s32 D_800E40D0;
s32 D_800E4BD0;
s32 D_800E5410;
s32 D_800E541C;
u16 D_800E5440;
s16 D_800E5448;
u8  D_800E5414;
extern Primitive2 *D_800E4F7C;

#if 0
void func_8007D024(s32 arg0) {
    Primitive2 sp18;
    // ? sp1B;
    // ? sp1F;
    void *temp_a3;
    void *temp_v0;
    s16 temp_a0_2;
    s16 temp_a0_3;
    s16 temp_a1;
    s16 temp_a1_2;
    s16 temp_a2;
    s16 temp_a2_2;
    s16 temp_a2_3;
    s16 temp_a2_4;
    s16 temp_a2_5;
    s16 temp_a2_6;
    s16 health;
    s16 temp_s0_3;
    s16 temp_s1;
    s16 temp_v0_10;
    s16 temp_v0_3;
    s16 temp_v0_6;
    s16 temp_v0_8;
    s16 var_t0;
    s16 var_v0;
    s16 var_v0_2;
    s16 var_v0_3;
    s16 var_v0_4;
    s32 temp_a0;
    s32 temp_s0_2;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_7;
    s32 temp_v0_9;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s8 var_v0_5;
    struct000 *temp_a1_3;
    Animal *temp_v1;

    // struct copy???
    // sp1B = (unaligned s32) D_800E4BD8.unk3;
    // sp1F = (unaligned s32) D_800E4BD8.unk7;

    sp18.unk3 = D_800E4BD8.unk3;

    D_800E5410 = (D_800E5410 + 1) & 0xF;

    D_800E541C = 0x60;
    D_800E5440 = arg0 * 4;

    if (D_800E40D0 != 0x1F) {
        D_800E4F7C->unk3.unk3 = 4;
        D_800E4F7C->unk3.r = 0x80;
        D_800E4F7C->unk3.g = 0x80;
        D_800E4F7C->unk3.b = 0x80;
        D_800E4F7C->unk3.a = 0x64;
        D_800E4F7C->unk8 = 0x30;
        D_800E4F7C->unkA = ((s16)(D_800E5440) >> 0x2) - 0x10;
        D_800E4F7C->unkC = 0;
        D_800E4F7C->unk10 = 0xC0;
        D_800E4F7C->unk12 = 0x20;
        D_800E4F7C->unkD = 0;
        D_800E4F7C->unkE = GetClut(0x200, 0x1F1); //, D_800E4F7C, &D_800E4BD8);
        AddPrim(D_800E4F28->unk74 + 4, D_800E4F7C); //, D_800E4F7C);

        D_800E4F7C += 0x14; // help

        SetDrawMode(D_800E4F7C, 0, 0, GetTPage(0, 1, 0x80, 0x100), &sp18);
        AddPrim(D_800E4F28->unk74 + 4, D_800E4F7C);
        temp_a3 = D_800E4F7C;
        D_800E4F7C = temp_a3 + 0xC;

        if (((s16)(D_800E5440) >> 0x2) < D_800E4BD0) {
            temp_a1 = D_800E73A8.animals[gCurrentAnimalIndex].animal->unk300; // energy 1?
            temp_a2 = D_800E73A8.animals[gCurrentAnimalIndex].animal->unk304; // energy 2 ?

            var_v0_3 = ((temp_a1  / 16) * 12) / 16;
            var_t0 = ((temp_a2  / 16) * 12) / 16;

            // temp_a3->unkF = 4;
            // temp_a3->unk13 = 0x64;
            D_800E4F7C->unk3.r = 0x80;
            D_800E4F7C->unk3.g = 0x80;
            D_800E4F7C->unk3.b = 0x80;
            D_800E4F7C->unk8 = (s16) ((s32) (D_800E541C + 0x14) >> 1);
            D_800E4F7C->unk10 = (s16) ((s32) (var_t0 << 0xC) >> 0x11);
            D_800E4F7C->unkC = 0;
            D_800E4F7C->unkA = (s16) ((s32) ((s16) D_800E5440 - 0x34) >> 2);
            D_800E4F7C->unk12 = 0xF;
            D_800E4F7C->unkD = (s8) 0x20;
            D_800E4F7C->unkE = GetClut(0x200, 0x1F0); //, D_800E4F7C, temp_a3);
            AddPrim(D_800E4F28->unk74, D_800E4F7C, D_800E4F7C);
            // temp_v0 = D_800E4F7C;
            D_800E4F7C = temp_v0 + 0x14;
            // D_800E4F7C->unk17 = 4;
            // D_800E4F7C->unk1B = 0x64;
            D_800E4F7C->unk3.r = 0x80;
            D_800E4F7C->unk3.g = 0x80;
            D_800E4F7C->unk3.b = 0x80;
            D_800E4F7C->unk8 = (s16) ((s32) (D_800E541C + 0x44) >> 1);
            D_800E4F7C->unkC = (s8) 0x20;
            D_800E4F7C->unkA = (s16) ((s32) (D_800E5440 << 0x10) >> 0x12);
            D_800E4F7C->unk10 = (s16) ((s32) ((var_v0_3 >> 4) << 0x10) >> 0x11);
            D_800E4F7C->unk12 = 0xF;
            D_800E4F7C->unkD = (s8) 0x20;
            D_800E4F7C->unkE = GetClut(0x200, 0x1EF); //, D_800E4F7C);
            AddPrim(D_800E4F28->unk74, D_800E4F7C, D_800E4F7C);
            D_800E4F7C += 0x14; // cast?
            SetDrawMode(D_800E4F7C, 0, 0, GetTPage(1, 1, 0x80, 0x100), &sp18);
            AddPrim(D_800E4F28->unk74, D_800E4F7C);
            D_800E4F7C += 0xC; // ???

            health = D_800E73A8.animals[gCurrentAnimalIndex].animal->unk14C;
            if (D_800E4FB0 == 0) {
                if (health < D_800E5448) {
                    if ((health + 1) >= D_800E5448) {
                        D_800E5448 -= 1; //(u16) D_800E5448 - 1;
                    } else {
                        D_800E5448 -= 2; //(u16) D_800E5448 - 2;
                    }
                }
                if (D_800E5448 < D_800E73A8.animals[gCurrentAnimalIndex].animal->unk14C) {
                    if (D_800E5414 != 0) {
                        play_sound_effect_at_location(0x72, -1, -1, 0x14);
                    }
                    D_800E5448++; // = (u16) D_800E5448 + 1;
                } else {
                    D_800E5414 = 1;
                }
            }
            temp_s1 = (u16) D_800E73A8.animals[gCurrentAnimalIndex].animal->unk14C << 1;
            if (health >= 0x11) {
                D_800E4F7C->unk3.r = 0x23;
                D_800E4F7C->unk3.g = 0xDC;
                D_800E4F7C->unk3.b = 0;
            } else
            if (D_800E5410 < 8) {
                D_800E4F7C->unk3.r = 0xEB;
                D_800E4F7C->unk3.g = 0;
                D_800E4F7C->unk3.b = 0;
            } else {
                D_800E4F7C->unk3.r = 0x23;
                D_800E4F7C->unk3.g = 0xFA;
                D_800E4F7C->unk3.b = 0;
            }
            temp_a1_3 = D_800E73A8.animals[gCurrentAnimalIndex].animal;
            if (temp_a1_3->unk14C < D_800E5448) {
                temp_s0_2 = ((u16) D_800E5448 - (u16) temp_a1_3->unk14C) << 0x11;
                if (temp_s1 > 0) {
                    temp_v1_2 = (s32) (D_800E541C + 0x58) >> 1;
                    temp_v0_2 = (s32) ((s16) D_800E5440 - 0x20) >> 2;
                    temp_a2_3 = temp_v1_2 + (temp_s1 >> 1);
                    D_800E4F7C->unkA = (s16) temp_v0_2;
                    D_800E4F7C->unkE = (s16) temp_v0_2;
                    temp_v0_3 = temp_v0_2 + 5;
                    D_800E4F7C->unk8 = (s16) temp_v1_2;
                    D_800E4F7C->unkC = temp_a2_3;
                    D_800E4F7C->unk10 = (s16) temp_v1_2;
                    D_800E4F7C->unk12 = temp_v0_3;
                    D_800E4F7C->unk14 = temp_a2_3;
                    D_800E4F7C->unk16 = temp_v0_3;
                    SetPolyF4(D_800E4F7C, D_800E4F7C, temp_a2_3);
                    AddPrim(D_800E4F28->unk74, D_800E4F7C);
                    D_800E4F7C += 0x18;
                }
                temp_v0_4 = (s32) (D_800E541C + temp_s1 + 0x58) >> 1;
                temp_a0 = (s32) ((s16) D_800E5440 - 0x20) >> 2;
                D_800E4F7C->unk3.r = 0x82;
                temp_a2_4 = temp_v0_4 + (temp_s0_2 >> 0x11);
                D_800E4F7C->unkA = (s16) temp_a0;
                D_800E4F7C->unkE = (s16) temp_a0;
                temp_a0_2 = temp_a0 + 5;
                D_800E4F7C->unk8 = (s16) temp_v0_4;
                D_800E4F7C->unkC = temp_a2_4;
                D_800E4F7C->unk10 = (s16) temp_v0_4;
                D_800E4F7C->unk12 = temp_a0_2;
                D_800E4F7C->unk14 = temp_a2_4;
                D_800E4F7C->unk16 = temp_a0_2;
                D_800E4F7C->unk3.g = 0;
                D_800E4F7C->unk3.b = 0;
                SetPolyF4(D_800E4F7C, D_800E4F7C, temp_a2_4, D_800E4F7C);
                AddPrim(D_800E4F28->unk74, D_800E4F7C);
                D_800E4F7C += 0x18;
            }
            if (D_800E5448 < D_800E73A8.animals[gCurrentAnimalIndex].animal->unk14C) {
                temp_s0_3 = (u16) D_800E5448 * 2;
                if (temp_s1 > 0) {
                    temp_v1_3 = (s32) (D_800E541C + 0x58) >> 1;
                    temp_v0_5 = (s32) ((s16) D_800E5440 - 0x20) >> 2;
                    temp_a2_5 = temp_v1_3 + ((s32) ((u16) D_800E5448 << 0x11) >> 0x11);
                    D_800E4F7C->unkA = (s16) temp_v0_5;
                    D_800E4F7C->unkE = (s16) temp_v0_5;
                    temp_v0_6 = temp_v0_5 + 5;
                    D_800E4F7C->unk8 = (s16) temp_v1_3;
                    D_800E4F7C->unkC = temp_a2_5;
                    D_800E4F7C->unk10 = (s16) temp_v1_3;
                    D_800E4F7C->unk12 = temp_v0_6;
                    D_800E4F7C->unk14 = temp_a2_5;
                    D_800E4F7C->unk16 = temp_v0_6;
                    SetPolyF4(D_800E4F7C, D_800E4F7C, temp_a2_5);
                    AddPrim(D_800E4F28->unk74, D_800E4F7C);
                    D_800E4F7C += 0x18;
                }
                temp_v1_4 = (s32) (D_800E541C + temp_s0_3 + 0x58) >> 1;
                temp_a0_3 = temp_v1_4 + ((s32) (temp_s1 - temp_s0_3) >> 1);
                D_800E4F7C->unk8 = (s16) temp_v1_4;
                D_800E4F7C->unk10 = (s16) temp_v1_4;
                D_800E4F7C->unkC = temp_a0_3;
                D_800E4F7C->unk14 = temp_a0_3;
                D_800E4F7C->unk3.r = 8;
                temp_v0_7 = (s32) ((s16) D_800E5440 - 0x20) >> 2;
                D_800E4F7C->unkA = (s16) temp_v0_7;
                D_800E4F7C->unkE = (s16) temp_v0_7;
                D_800E4F7C->unk12 = temp_v0_7 + 5;
                D_800E4F7C->unk16 = temp_v0_7 + 5;
                D_800E4F7C->unk3.g = 0x5F;
                D_800E4F7C->unk3.b = 0;
                SetPolyF4(D_800E4F7C, D_800E4F7C);
                AddPrim(D_800E4F28->unk74, D_800E4F7C);
                D_800E4F7C += 0x18;
            }
            if ((D_800E5448 == D_800E73A8.animals[gCurrentAnimalIndex].animal->unk14C) && (temp_s1 > 0)) {
                temp_v1_5 = (s32) (D_800E541C + 0x58) >> 1;
                temp_v0_9 = (s32) ((s16) D_800E5440 - 0x20) >> 2;
                temp_a2_6 = temp_v1_5 + (temp_s1 >> 1);
                D_800E4F7C->unkA = (s16) temp_v0_9;
                D_800E4F7C->unkE = (s16) temp_v0_9;
                D_800E4F7C->unk8 = (s16) temp_v1_5;
                D_800E4F7C->unkC = temp_a2_6;
                D_800E4F7C->unk10 = (s16) temp_v1_5;
                D_800E4F7C->unk12 = temp_v0_9 + 5;
                D_800E4F7C->unk14 = temp_a2_6;
                D_800E4F7C->unk16 = temp_v0_9 + 5;
                SetPolyF4(D_800E4F7C, D_800E4F7C, temp_a2_6);
                AddPrim(D_800E4F28->unk74, D_800E4F7C);
                D_800E4F7C += 0x18;
            }
            func_8007DB6C();
        }
    }
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/osd", func_8007D024);
#endif

INCLUDE_ASM("asm/esa/nonmatchings/osd", func_8007D9D4);

INCLUDE_ASM("asm/esa/nonmatchings/osd", func_8007DA18);

INCLUDE_ASM("asm/esa/nonmatchings/osd", func_8007DB6C);

INCLUDE_ASM("asm/esa/nonmatchings/osd", func_8007DD7C);

INCLUDE_ASM("asm/esa/nonmatchings/osd", func_8007DDE8);

INCLUDE_ASM("asm/esa/nonmatchings/osd", func_8007DE58);

INCLUDE_ASM("asm/esa/nonmatchings/osd", func_8007DEA4);

INCLUDE_ASM("asm/esa/nonmatchings/osd", func_8007DF54);

INCLUDE_ASM("asm/esa/nonmatchings/osd", func_8007DFC4);

INCLUDE_ASM("asm/esa/nonmatchings/osd", osd_draw_timer);

INCLUDE_ASM("asm/esa/nonmatchings/osd", func_8007E168);

INCLUDE_ASM("asm/esa/nonmatchings/osd", func_8007E1B4);

INCLUDE_ASM("asm/esa/nonmatchings/osd", func_8007E23C);
