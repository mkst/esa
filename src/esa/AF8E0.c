#include "common.h"

// from psxgpu.h ?
void *InterruptCallback(
    int irq,
    void (*func)());

void trapIntrDMA();
void memclr(s32 *src, s32 cnt);
void setIntrDMA();

extern s32 *D_800DE758;
extern s32  D_800DE75C[];

INCLUDE_ASM("asm/esa/nonmatchings/AF8E0", startIntrDMA);
// void *startIntrDMA(void) {
//     memclr(D_800DE75C, 8);
//     *D_800DE758 = 0;
//     InterruptCallback(3 /* DMA */, trapIntrDMA);
//     return setIntrDMA;
// }

INCLUDE_ASM("asm/esa/nonmatchings/AF8E0", trapIntrDMA);

INCLUDE_ASM("asm/esa/nonmatchings/AF8E0", setIntrDMA);

void memclr(s32 *src, s32 cnt) {
    s32 *p = src;
    s32 len = cnt - 1;

    if (cnt == 0)
        return;

    do {
        *p++ = 0;
        len--;
    } while (len != -1);
}
