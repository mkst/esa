#include "common.h"

s32 D_800E4124;

s32 D_800E4F58;
s32 D_800E4F8C;
s32 D_800E4FA0;

#ifdef NON_MATCHING
s32 func_800174B4(u32 arg0) {
    u32 var_a2;
    u32 var_v0;

    var_v0 = 0;
    var_a2 = 0x40000000;
    do {
        s32 diff = (var_v0 + var_a2);
        if (arg0 >= diff) {
            arg0 -= diff;
            var_v0 = diff + var_a2;
        }
        var_v0 >>= 1;
        var_a2 >>= 2;
    } while (var_a2 != 0);

    return var_v0 << 6;
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/7AB4", func_800174B4);
#endif

void func_800174E8(struct034 *arg0) {
    if (D_800E4F8C != 0) {
        arg0->unk4A |= 0x80;
    } else {
        arg0->unk4A = 0;
    }
}

void func_80017514(void) {
    D_800E4F58++;
}

void func_8001752C(void) {
    D_800E4124++;
    D_800E4FA0++;
}

void func_8001754C(void) {

}

INCLUDE_ASM("asm/esa/nonmatchings/7AB4", game_loop);
