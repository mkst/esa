#include "common.h"

s8  D_800E4FB0;

// nasty loops
INCLUDE_ASM("asm/esa/nonmatchings/B7CC", func_8001B1CC);

// simplified func_8038064C_791CFC?
void func_8001B3FC(void) {
    if (D_800E4FB0 == 0) {
        D_800E5274->unk378 = MAX(0, D_800E5274->unk378 - 1);
        if (D_800E5274->unk378 <= 0) {
            D_800E5274->unk383 = 0;
        }
    }
}
