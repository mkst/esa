#include "common.h"

INCLUDE_ASM(s32, "3F424", func_8004EE24);

INCLUDE_ASM(s32, "3F424", func_8004EF24);

INCLUDE_ASM(s32, "3F424", func_8004F3C0);

INCLUDE_ASM(s32, "3F424", func_8004F6EC);

INCLUDE_ASM(s32, "3F424", func_8004F780);

// this is func_802F657C_707C2C from SSSV
void func_8004F828(struct004 *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    arg0->unk178 = arg1;
    arg0->unk17A = arg2;
    arg0->unk17C = arg3;
    arg0->unk184 = 0;
    arg0->unk172 = arg4;
    arg0->unk17E = arg0->xPos;
    arg0->unk180 = arg0->zPos;
    arg0->unk182 = arg0->yPos;
}
