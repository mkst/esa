#include "common.h"


void printf(s32 arg0, ...) {
}

void func_800A0720(s32 arg0, ...) {
}

void func_800A0734(void) {
    s32 i;

    for (i = 0; i < 0x18; i++) {
        D_8012433C[i].unk14 = ((i & 0xF) << 5) + 0x200;
        D_8012433C[i].unk16 = ((i >> 4) << 6) + 0x140;
        D_8012433C[i].unk18 = 0x20;
        D_8012433C[i].unk1A = -1;
    }

    for (i = 0; i < 0x40; i++) {
        D_80123C3C[i].unk14 = ((i & 0x1F) << 3) + 0x300;
        D_80123C3C[i].unk16 = ((i >> 5) << 5) + 0x180;
        D_80123C3C[i].unk18 = 8;
        D_80123C3C[i].unk1A = -1;
    }

    for (i = 0; i < 0x3C; i++) {
        D_80122EAC[i].unk14 = 0x300;
        D_80122EAC[i].unk16 = 0x1FF - i;
        D_80122EAC[i].unk18 = 0x100;
        D_80122EAC[i].unk1A = -1;
    }

    for (i = 0; i < 0x40; i++) {
        D_8012353C[i].unk14 = ((i & 0xF) << 4) + 0x300;
        D_8012353C[i].unk16 = (i >> 4) + 0x1C0;
        D_8012353C[i].unk18 = 0x10;
        D_8012353C[i].unk1A = -1;
    }
}

#if 0

extern s32 D_800159FC;
extern s32 D_80015A10;
extern s32 D_80015A2C;
extern s32 D_80015A40;
extern s32 D_80015A5C;
extern s32 D_80015A74;
extern s32 D_80015A90;

struct024 *func_800A085C(s16 arg0, s16 arg1) {
    s32 i;

    switch (arg1) {                                 /* irregular */
    case 64:
        for (i = 0; (i < 24) && (D_8012433C[i].unk1A != -1); i++) {}
        if (i != 24) {
            D_8012433C[i].unk1A = arg1;
            func_800A0720(&D_800159FC, i, D_8012433C, D_8012433C);
            return &D_8012433C[i];
        } else {
            func_800A0720(&D_80015A10, i, D_8012433C, D_8012433C);
        }
        break;

    case 32:                                    /* switch 1 */
        for (i = 0; (i < 64) && (D_80123C3C[i].unk1A != -1); i++) {}

        if (i != 64) {
            D_80123C3C[i].unk1A = arg1;
            func_800A0720(&D_80015A2C, i, D_80123C3C, D_80123C3C);
            return &D_80123C3C[i];
        } else {
            func_800A0720(&D_80015A40, i, D_80123C3C, D_80123C3C);
        }
        break;

    case 1:                                 /* switch 1 */
        if (arg0 == 0x100) {
            for (i = 0; (i < 60) && (D_80122EAC[i].unk1A != -1); i++) {}
            if (i != 60) {
                D_80122EAC[i].unk1A = arg1;
                func_800A0720(&D_80015A5C, i, D_80122EAC, D_80122EAC);
                return &D_80122EAC[i];
            } else {
                func_800A0720(&D_80015A74, i, D_80122EAC, D_80122EAC);
            }
        } else {
            for (i = 0; (i < 64) && (D_8012353C[i].unk1A != -1); i++) {}
            if (i != 64) {
                D_8012353C[i].unk1A = arg1;
                func_800A0720(&D_80015A90, i, D_8012353C, D_8012353C);
                return &D_8012353C[i];
            } else {
                func_800A0720(&D_80015A74, i, D_8012353C, D_8012353C);
            }
        }
        break;

    default:                                    /* switch 1 */
        break;
    }
    return D_8012353C;

}
#else
INCLUDE_ASM("asm/esa/nonmatchings/90D0C", func_800A085C);
#endif

void func_800A0AD0(struct024 *arg0) {
    arg0->unk1A = -1;
}
