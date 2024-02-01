#include "common.h"


s32 D_800E4164;
s32 D_800E4168;
s32 D_800E416C;

s32 D_800E4FF4;

INCLUDE_ASM("asm/esa/nonmatchings/F514", func_8001EF14);

INCLUDE_ASM("asm/esa/nonmatchings/F514", func_8001EF94);


void func_8001F088(void) {
    s32 sp10;

    func_8001F180();
    D_800E4164 = 0;
    D_800E416C = 0;
    D_800E4168 = -1;
    func_800BA7BC(0);
    sp10 = 0xA0;
    func_800BA7D0(0xE, &sp10, 0);
    func_800BA7BC(D_800E4FF4);
}

INCLUDE_ASM("asm/esa/nonmatchings/F514", func_8001F0E4);

void func_8001F180(void) {
    s32 pad[0x10];

    if (D_800E4168 != -1) {
        D_800E4168 = -1;
        D_800E416C = 0;
    }
}
