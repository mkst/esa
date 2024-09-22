#include "common.h"


s32 func_80030AA8(void);
void func_800345D0();
void func_80034930();
s32 func_80034C5C(void);
s32 func_80034D7C(void);
s32 func_80035DE8(void);
s32 func_800360AC(void);
s32 func_80036FB4(s16, s16);
void func_80038E68();
void func_800390D4();
void func_80039340();
void func_80039658();
s16 D_800E51B4;
s16 D_800E51B8;
s32 D_800E51BC;
s32 D_800E51C0;
s32 D_800E51C4;
s32 D_800E51C8;
s32 D_800E51CC;
s16 D_800E51D0;
Animal *D_800E51D8;
s16 D_800E51DC;
s16 D_800E51E0;
s16 D_800E51E4;
s16 D_800E51E8;
s16 D_800E51EC;
s16 D_800E51F0;
s16 D_800E51F4;
u8  D_800E51FC;
s16 D_800E5204;
s16 D_800E5208;
s16 D_800E520C;


// sssv:func_8030AA90_71C140
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_71C140", func_8003030C);

// sssv:func_8030AAE0_71C190
s32 func_80030364(Animal *arg0) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s4;
    u8 var_s0;
    u8 var_s6;
    s32 var_v0;

    func_80039658(arg0);
    D_800E51D8 = arg0;
    D_800E51E0 = arg0->xPos.h[1];
    D_800E51E8 = arg0->zPos.h[1];

    if (arg0->unk162 & 0x10) {
        D_800E51BC = arg0->xPos.w;
        D_800E51C0 = arg0->zPos.w;
        D_800E51C4 = arg0->yPos.w;
        D_800E51DC = D_800E51E0;
        D_800E51E4 = D_800E51E8;
    } else {
        D_800E51BC = arg0->xPos.w + arg0->unk1C.w;
        D_800E51C0 = arg0->zPos.w + arg0->unk20.w;
        D_800E51C4 = arg0->yPos.w + arg0->unk24.w;
        D_800E51DC = D_800E51BC >> 0x10;
        D_800E51E4 = D_800E51C0 >> 0x10;
    }

    D_800E51EC = D_800E51E0 >> 6;
    D_800E520C = D_800E51E8 >> 6;
    D_800E51D0 = D_800E51DC >> 6;
    D_800E51F0 = D_800E51E4 >> 6;

    D_800E51B4 = D_800E51E0 & 0x3F;
    D_800E51B8 = D_800E51E8 & 0x3F;
    D_800E5204 = D_800E51DC & 0x3F;
    D_800E5208 = D_800E51E4 & 0x3F;

    D_800E51C8 = D_800E51D8->unk1C.w;
    D_800E51CC = D_800E51D8->unk20.w;

    var_v0 = func_80036FB4(D_800E51EC, D_800E520C); // , temp_a2_2, temp_a3
    D_800E51FC = D_800E51D8->unk160;

    temp_s0 = func_80030AA8();
    temp_s1 = func_80035DE8();
    temp_s2 = func_80034C5C();
    temp_s3 = func_80034D7C();
    temp_s4 = func_800360AC();

    var_s6 = 0;
    if ((var_v0 == 0) || (func_80036FB4(D_800E51D0, D_800E51F0) != 0)) {
        var_s6 = 1;
    }

    if ((temp_s0 == 0) &&
        (temp_s1 == 0) &&
        (temp_s2 == 0) &&
        (temp_s3 == 0) &&
        (temp_s4 == 0) &&
        (var_s6 != 0)) {
        func_800345D0();
        return D_800E51F4;
    }

    if ((temp_s0 != 1) &&
        (temp_s1 != 1) &&
        (temp_s2 != 1) &&
        (temp_s3 != 1) &&
        (temp_s4 != 1) &&
        (temp_s0 != 2) &&
        (temp_s1 != 2) &&
        (temp_s2 != 2) &&
        (temp_s3 != 2) &&
        (temp_s4 != 2)) {

        D_800E51BC = D_800E51D8->xPos.w + D_800E51D8->unk1C.w;
        D_800E51C0 = D_800E51D8->zPos.w;
        D_800E51C8 = D_800E51D8->unk1C.w;
        D_800E51CC = 0;

        D_800E51DC = D_800E51BC >> 0x10;
        D_800E51E4 = D_800E51C0 >> 0x10;

        D_800E51FC = D_800E51D8->unk160;

        D_800E51D0 = D_800E51DC >> 6;
        D_800E51F0 = D_800E51E4 >> 6;

        D_800E5204 = D_800E51DC & 0x3F;
        D_800E5208 = D_800E51E4 & 0x3F;

        var_s0 = 0;
        if ((var_v0 == 0) || (func_80036FB4(D_800E51D0, D_800E51F0) != 0)) {
            var_s0 = 1;
        }

        if ((func_80030AA8() == 0) &&
            ((temp_s1 == 0) || (func_80035DE8() == 0)) &&
            ((temp_s2 == 0) || (func_80034C5C() == 0)) &&
            ((temp_s3 == 0) || (func_80034D7C() == 0)) &&
            ((temp_s4 == 0) || (func_800360AC() == 0)) &&
            (var_s0 != 0)) {
            D_800E51C0 = D_800E51D8->zPos.w;
            func_800345D0();
            func_800390D4();
            return D_800E51F4;
        }

        D_800E51BC = D_800E51D8->xPos.w;
        D_800E51C0 = D_800E51D8->zPos.w + D_800E51D8->unk20.w;
        D_800E51C8 = 0;
        D_800E51CC = D_800E51D8->unk20.w;

        D_800E51DC = D_800E51BC >> 0x10;
        D_800E51E4 = D_800E51C0 >> 0x10;
        D_800E51FC = D_800E51D8->unk160;
        D_800E51D0 = D_800E51DC >> 6;
        D_800E51F0 = D_800E51E4 >> 6;

        D_800E5204 = D_800E51DC & 0x3F;
        D_800E5208 = D_800E51E4 & 0x3F;
        var_s0 = 0;
        if ((var_v0 == 0) || (func_80036FB4(D_800E51D0, D_800E51F0) != 0)) {
            var_s0 = 1;
        }

        if ((func_80030AA8() == 0) &&
            ((temp_s1 == 0) || (func_80035DE8() == 0)) &&
            ((temp_s2 == 0) || (func_80034C5C() == 0)) &&
            ((temp_s3 == 0) || (func_80034D7C() == 0)) &&
            ((temp_s4 == 0) || (func_800360AC() == 0)) &&
            (var_s0 != 0)) {
            D_800E51BC = D_800E51D8->xPos.w;
            func_800345D0();
            func_80038E68();
            return D_800E51F4;
        }
        func_80034930();
        func_80039340();
        return D_800E51F4;
    }

    if ((temp_s0 != 1) &&
        (temp_s1 != 1) &&
        (temp_s2 != 1) &&
        (temp_s3 != 1) &&
        (temp_s4 != 1)) {

        D_800E51BC = D_800E51D8->xPos.w + D_800E51D8->unk1C.w;
        D_800E51C0 = D_800E51D8->zPos.w;
        D_800E51C8 = D_800E51D8->unk1C.w;
        D_800E51CC = 0;

        D_800E51DC = D_800E51BC >> 0x10;
        D_800E51E4 = D_800E51C0 >> 0x10;

        D_800E51FC = D_800E51D8->unk160;

        D_800E51D0 = D_800E51DC >> 6;
        D_800E51F0 = D_800E51E4 >> 6;

        D_800E5204 = D_800E51DC & 0x3F;
        D_800E5208 = D_800E51E4 & 0x3F;

        var_s0 = 0;
        if ((var_v0 == 0) || (func_80036FB4(D_800E51D0, D_800E51F0) != 0)) {
            var_s0 = 1;
        }
        if ((func_80030AA8() == 0) &&
            ((temp_s1 == 0) || (func_80035DE8() == 0)) &&
            ((temp_s2 == 0) || (func_80034C5C() == 0)) &&
            ((temp_s3 == 0) || (func_80034D7C() == 0)) &&
            ((temp_s4 == 0) || (func_800360AC() == 0)) &&
            (var_s0 != 0)) {
            D_800E51C0 = D_800E51D8->zPos.w;
            func_800345D0();
            func_800390D4();
            return D_800E51F4;
        }

        func_80034930();
        func_80039340();
        return D_800E51F4;
    }

    if ((temp_s0 != 2) &&
        (temp_s1 != 2) &&
        (temp_s2 != 2) &&
        (temp_s3 != 2) &&
        (temp_s4 != 2)) {
        D_800E51BC = D_800E51D8->xPos.w;
        D_800E51C0 = D_800E51D8->zPos.w + D_800E51D8->unk20.w;
        D_800E51C8 = 0;
        D_800E51CC = D_800E51D8->unk20.w;

        D_800E51DC = D_800E51BC >> 0x10;
        D_800E51E4 = D_800E51C0 >> 0x10;

        D_800E51FC = D_800E51D8->unk160;

        D_800E51D0 =  D_800E51DC >> 6;
        D_800E51F0 = D_800E51E4 >> 6;

        D_800E5204 = D_800E51DC & 0x3F;
        D_800E5208 = D_800E51E4 & 0x3F;
        var_s0 = 0;
        if ((var_v0 == 0) || (func_80036FB4(D_800E51D0, D_800E51F0) != 0)) {
            var_s0 = 1;
        }
        if ((func_80030AA8() == 0) &&
            ((temp_s1 == 0) || (func_80035DE8() == 0)) &&
            ((temp_s2 == 0) || (func_80034C5C() == 0)) &&
            ((temp_s3 == 0) || (func_80034D7C() == 0)) &&
            ((temp_s4 == 0) || (func_800360AC() == 0)) &&
            (var_s0 != 0)) {
            D_800E51BC = D_800E51D8->xPos.w;
            func_800345D0();
            func_80038E68();
            return D_800E51F4;
        }
        func_80034930();
        func_80039340();
        return D_800E51F4;
    }

    func_80034930();
    func_80039340();
    return D_800E51F4;
}


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

