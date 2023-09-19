#include "common.h"

INCLUDE_ASM("asm/esa/nonmatchings/488C8", func_800582C8);

INCLUDE_ASM("asm/esa/nonmatchings/488C8", func_80058368);

INCLUDE_ASM("asm/esa/nonmatchings/488C8", func_80058404);

INCLUDE_ASM("asm/esa/nonmatchings/488C8", func_80058414);

INCLUDE_ASM("asm/esa/nonmatchings/488C8", func_80058454);

INCLUDE_ASM("asm/esa/nonmatchings/488C8", func_80058478);

INCLUDE_ASM("asm/esa/nonmatchings/488C8", func_80058500);

INCLUDE_ASM("asm/esa/nonmatchings/488C8", func_8005865C);

INCLUDE_RODATA("asm/esa/nonmatchings/488C8", D_80014DDC);

INCLUDE_RODATA("asm/esa/nonmatchings/488C8", D_80014DF8);

INCLUDE_RODATA("asm/esa/nonmatchings/488C8", D_80014E08);

INCLUDE_RODATA("asm/esa/nonmatchings/488C8", D_80014E20);

INCLUDE_ASM("asm/esa/nonmatchings/488C8", func_800586AC);

#if 1
extern s32 D_800E5394;
extern s32 D_801121B8[];

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
#else
INCLUDE_ASM("asm/esa/nonmatchings/488C8", func_80058B68);
#endif

INCLUDE_ASM("asm/esa/nonmatchings/488C8", func_80058BC4);

INCLUDE_ASM("asm/esa/nonmatchings/488C8", func_8005BE44);

INCLUDE_ASM("asm/esa/nonmatchings/488C8", func_8005C01C);
