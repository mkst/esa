#include "common.h"

// sssv:func_8030AA90_71C140
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_8003030C);

// sssv:func_8030AAE0_71C190
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_80030364);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_80030AA8);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_80031060);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_80031134);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_800311DC);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_8003421C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_800345D0);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_80034930);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_80034AFC);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_80034C5C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_80034D20);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_80034D7C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_80035DE8);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_800360AC);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_80036FB4);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_80037098);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_800370FC);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_800373B0);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_800376A0);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_80037C10);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_80037C8C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_80037DA4);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_80037EB8);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_800380B8);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_80038430);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_800387A0);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_80038B04);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_80038E68);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_800390D4);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_80039340);

#if 0
s32 func_80030AA8();                        /* extern */
s32 func_80034C5C();                                /* extern */
extern s16 D_800E51B4;
extern s16 D_800E51B8;
extern s32 D_800E51BC;
extern s32 D_800E51C0;
extern s32 D_800E51C4;
extern s32 D_800E51C8;
extern s32 D_800E51CC;
extern s16 D_800E51D0;
extern struct004 *D_800E51D8;
extern s16 D_800E51DC;
extern u16 D_800E51E0;
extern s16 D_800E51E4;
extern u16 D_800E51E8;
extern s16 D_800E51EC;
extern s16 D_800E51F0;
extern u8 D_800E51FC;
extern s16 D_800E5204;
extern s16 D_800E5208;
extern s16 D_800E520C;

// sssv:func_80313448_724AF8
s32 func_800393F8(struct004 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v0;
    s16 temp_a1_3;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_t0;
    s32 temp_t0_2;
    u16 temp_t1;
    u16 temp_t2;

    D_800E51D8 = arg0;

    temp_t1 = arg0->xPos.h[1];
    temp_t2 = arg0->zPos.h[1];

    D_800E51BC = arg0->xPos.w + arg1;
    D_800E51C0 = arg0->zPos.w + arg2;
    D_800E51C4 = arg0->yPos.w + arg3;

    D_800E51E0 = temp_t1;
    D_800E51E8 = temp_t2;

    D_800E51EC = (temp_t1 << 0x10) >> 0x16;
    D_800E51D0 = ((arg0->xPos.w + arg1) >> 0x10) >> 6;
    D_800E51DC = (arg0->xPos.w + arg1) >> 0x10;
    D_800E520C = (temp_t2 << 0x10) >> 0x16;

    D_800E51F0 = ((arg0->zPos.w + arg2) >> 0x10) >> 6;

    D_800E51B4 = temp_t1 & 0x3F;
    D_800E51B8 = temp_t2 & 0x3F;

    D_800E5204 = ((arg0->xPos.w + arg1) >> 0x10) & 0x3F;
    D_800E51E4 = ((arg0->zPos.w + arg2) >> 0x10);
    D_800E5208 = ((arg0->zPos.w + arg2) >> 0x10) & 0x3F;

    D_800E51C8 = D_800E527C->xVel;
    D_800E51CC = D_800E527C->zVel;
    D_800E51FC = arg0->unk160;

    if (func_80030AA8() == 0) {
        if (func_80034C5C() == 0) {
            D_800E51D8->xPos.w = (s32) D_800E51BC;
            D_800E51D8->zPos.w = (s32) D_800E51C0;
            D_800E51D8->yPos.w = (s32) D_800E51C4;
            D_800E51D8->unk160 = (u8) D_800E51FC;
            return 1;
        }
    }
    return 0;
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_800393F8);
#endif

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_8003950C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_80039554);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_800395E0);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_8003961C);
