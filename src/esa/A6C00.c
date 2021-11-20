#include "common.h"

INCLUDE_ASM(s32, "A6C00", func_800B6600);

INCLUDE_ASM(s32, "A6C00", func_800B66DC);

INCLUDE_ASM(s32, "A6C00", func_800B6774);

INCLUDE_ASM(s32, "A6C00", func_800B688C);

INCLUDE_ASM(s32, "A6C00", func_800B698C);

INCLUDE_ASM(s32, "A6C00", func_800B6B88);

INCLUDE_ASM(s32, "A6C00", func_800B6BE8);

INCLUDE_ASM(s32, "A6C00", func_800B6C48);

INCLUDE_ASM(s32, "A6C00", func_800B6D0C);

INCLUDE_ASM(s32, "A6C00", func_800B6DA0);

INCLUDE_ASM(s32, "A6C00", func_800B6DC0);

INCLUDE_ASM(s32, "A6C00", func_800B6E1C);

INCLUDE_ASM(s32, "A6C00", func_800B6E94);

INCLUDE_ASM(s32, "A6C00", RotMatrixZYX_gte);

INCLUDE_ASM(s32, "A6C00", start);

INCLUDE_ASM(s32, "A6C00", func_800B717C);
// void func_800B717C(void) {
//     s32 pad[1];
//     if (D_800DE2B8 == 0) {
//         D_800DE2B8 = 1;
//         func_800C1DD4(&D_800E4F1C, &D_800E4F1C);
//     }
// }

s8 *memset(s8 *s, s8 c, s32 len) {
    s8 *p;
    if ((s == NULL) || (len <= 0)) {
        p = NULL;
    } else {
        p = s;
        while (len > 0) {
            *s++ = c;
            len--;
        }
    }
    return p;
}

INCLUDE_ASM(s32, "A6C00", func_800B7204);

INCLUDE_ASM(s32, "A6C00", func_800B7294);

INCLUDE_ASM(s32, "A6C00", func_800B7CD0);

INCLUDE_ASM(s32, "A6C00", func_800B7CFC);

INCLUDE_ASM(s32, "A6C00", func_800B7DB8);

INCLUDE_ASM(s32, "A6C00", func_800B7E7C);

INCLUDE_ASM(s32, "A6C00", func_800B7ED4);

INCLUDE_ASM(s32, "A6C00", func_800B82E4);

INCLUDE_ASM(s32, "A6C00", func_800B83A4);

INCLUDE_ASM(s32, "A6C00", func_800B8400);

INCLUDE_ASM(s32, "A6C00", func_800B851C);

INCLUDE_ASM(s32, "A6C00", func_800B8544);

INCLUDE_ASM(s32, "A6C00", func_800B8584);

INCLUDE_ASM(s32, "A6C00", func_800B8678);

INCLUDE_ASM(s32, "A6C00", AddPrim);
