#include "common.h"

// sssv:func_802C9F60_6DB610
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6DB610", func_80063178);

// sssv:func_802CA8D4_6DBF84
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6DB610", func_80063AE8);

// sssv:func_802CAACC_6DC17C
void func_80063CEC(Animal *arg0, s16 arg1) {
    arg0->unk24.w = (arg0->unk24.w * 7) / 8;
    arg0->unk24.w -= ((arg0->yPos.h[1] + (arg0->unk42 >> 1)) - arg1) << 10;
}

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6DB610", func_80063D34);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6DB610", func_800643F4);
