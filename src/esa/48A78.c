#include "common.h"

s32 D_800E5394;
u16 D_800E5398;

extern s32 D_801121B8[];

INCLUDE_ASM("asm/esa/nonmatchings/48A78", func_80058478);

void func_80058500(s32 offset, s32 length, s32 arg2, s32 arg3) {
    s16 *buffer;
    s16 i;

    // malloc?
    buffer = func_800B628C(length);

    // debug_print
    func_800A0720("BUFFER: %x - OFFSET: %d - LENGTH: %d\n", buffer, offset, length);
    // memset ?
    func_8003961C(buffer, offset, length, 0);

    switch (arg3) {                                 /* irregular */
    case 1:
        for (i = 0; i < length / 2; i++) {
            if (buffer[i] != 0) {
                buffer[i] |= ~0x7FFF;
            }
        }
        break;

    case 2:
        for (i = 0; i < length / 2; i++) {
            buffer[i] |= ~0x7FFF;
        }
        break;
    }
    func_800B0994(arg2, buffer);
    func_800B0780(0);
    func_800B63A8(buffer);
}

void func_8005865C(struct033 *arg0, s32 arg1, s32 arg2) {
    if (D_800E4FB0 == 0) {
        func_80016F68(arg2, &D_800EB298[arg0->unk18]);
    }
}

// "loaded object type:- %d\n"
INCLUDE_RODATA("asm/esa/nonmatchings/48A78", D_80014DDC);

// "loading map \n"
INCLUDE_RODATA("asm/esa/nonmatchings/48A78", D_80014DF8);

// "loading object type %d\n"
INCLUDE_RODATA("asm/esa/nonmatchings/48A78", D_80014E08);

// "OB_TYPE_HEAVY_CRATE texture = %d\n"
INCLUDE_RODATA("asm/esa/nonmatchings/48A78", D_80014E20);

#if 0

extern struct000 *D_80111DB8[];

typedef struct {
    s16 unk0;
    s16 tPage1;
    s16 clutID;
    s16 tPage2;
    s8  unk8;
    s8  unk9;
    u8  unkA;
    u8  unkB;
    s8  unkC;
    s8  unkD;
    s8  unkE;
} Texture; // size 0x10

extern Texture *D_800E557C;

void func_800586AC(s32 arg0) {
    s16 clut_id;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s2;
    s32 i;
    s32 var_a1_2;

    for (i = 0; i < 256; i++) {
        if (arg0 == D_801121B8[i]) {
            break;
        }
    }


    if (i != 0x100) {

        temp_s2 = ((D_80111DB8[i]->unk3E & 0xC0) != 0) << 5;

        switch (D_80111DB8[i]->unk16C->unk3) {
        case 2:
        case 6:
        case 8:
        case 15:
        case 17:
            temp_s1 = D_80111DB8[i]->unk3E & 0x3F;
            if (D_80111DB8[i]->unk16C->unk0 == 142) { // OBJECT_RED_TV
                temp_s1_2 = D_800E5264 & 7;
                D_800E557C->tPage1 = GetTPage(1, 0, 0x380, 0x100);
                D_800E557C->tPage2 = GetTPage(1, 1, 0x380, 0x100);
                D_800E557C->clutID = GetClut(0x200, 0x1F8);
                D_800E557C->unkA = (s8) (temp_s1_2 << 5);
                D_800E557C->unkB = 0;
                D_800E557C->unkC = 0x20;
                D_800E557C->unkD = 0x20;
                D_800E557C->unk9 = (s8) (temp_s2 | 4);
                func_800B7CD0(); //0, 1, D_800E557C, 0x20);
            } else {
                temp_s0 = ((temp_s1 << 5) & 0x80) + 0x100;
                D_800E557C->tPage1 = GetTPage(1, 0, temp_s0, 0x100);
                D_800E557C->tPage2 = GetTPage(1, 1, temp_s0, 0x100);
                D_800E557C->clutID = GetClut(0x300, temp_s1 + 0x120);
                D_800E557C->unkA = (temp_s1 << 6);
                D_800E557C->unkB = ((temp_s1 >> 3) << 6);
                D_800E557C->unk9 = (temp_s2 | 4);
                D_800E557C->unkC = 0x40;
                D_800E557C->unkD = 0x40;
                func_800B7CD0(); //0, 1, (? *) 0x40);
            }
            break;
        case 7:
            // FIXME
            if ((*(i + ((s32*)&D_80111DB8 + (0x1DB8/4))) == 1) && (D_800E4FB0 == 0)) {
                D_800E5398 = (D_800E5398 + 1) % 6;
            } else {
                D_800E5398 = 0;
            }

            D_800E557C->tPage1 = GetTPage(1, 0, 0x40, 0x100);
            D_800E557C->tPage2 = GetTPage(1, 1, 0x40, 0x100);
            D_800E557C->clutID = GetClut(0x200, 0x1E9 - ((s16) D_800E5398 / 2), D_800E557C);
            D_800E557C->unkA = (s8) (((s32) ((s16) D_800E5398 + ((u32) (D_800E5398 << 0x10) >> 0x1F)) >> 1) << 6);
            D_800E557C->unkB = 0xC0;
            D_800E557C->unkC = 0x40;
            D_800E557C->unkD = 0x40;
            D_800E557C->unk9 = (s8) (temp_s2 | 4);
            break;
        case 4:
            D_800E557C->tPage1 = GetTPage(1, 0, 0, 0x100);
            D_800E557C->tPage2 = GetTPage(1, 1, 0, 0x100);
            D_800E557C->clutID = GetClut(0x100, 0x1FF);
            D_800E557C->unkA = 0x40;
            D_800E557C->unkB = 0;
            D_800E557C->unkC = 0x40;
            D_800E557C->unkD = 0x40;
            D_800E557C->unk9 = (s8) (temp_s2 | 4);
            break;
        case 19:
            if ((*(i + (s32*)&D_80111DB8 + (0x1DB8/4))) == 1) {
                var_a1_2 = 0x1BF;
            } else {
                var_a1_2 = 0x1BE;
            }

            D_800E557C->clutID = GetClut(0x200, var_a1_2, &D_80111DB8);
            /* fallthrough */
        default:
            D_800E557C->unkC = 0x40;
            D_800E557C->unkD = 0x40;
            break;
        }
    }
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/48A78", func_800586AC);
#endif

s32 func_80058B68(void) {
    s32 i;
    s32 res;

    for (i = 0; (i < 0x100) && (D_801121B8[i] != 0); i++) {}

    if (i != 0x100) {
        D_800E5394 = i;
        res = 1;
    } else {
        res = 0;
    }
    return res;
}

INCLUDE_ASM("asm/esa/nonmatchings/48A78", func_80058BC4);

INCLUDE_ASM("asm/esa/nonmatchings/48A78", func_8005BE44);

// big ol' function
INCLUDE_ASM("asm/esa/nonmatchings/48A78", func_8005C01C);
