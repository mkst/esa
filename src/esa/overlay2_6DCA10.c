#include "common.h"

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6DCA10", func_800A3C98);

// sssv:create_particle_effect_2
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6DCA10", func_800A3CC4);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6DCA10", create_particle_effect);

// sssv:func_802D6738_6E7DE8
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6DCA10", func_800A4668);

// ESA/PS1 specific function
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6DCA10", func_800A4F90);

// ESA/PS1 specific function
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6DCA10", func_800A80F8);

// sssv:func_802D7434_6E8AE4
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6DCA10", func_800A88BC);

// sssv:func_802D7AD4_6E9184
void func_800A8A00(s16 x, s16 z, s16 y, s16 arg3) {
    s16 tmp;
    s16 i;

    tmp = (arg3 * 3) + 1;

    for (i = 0; i < tmp; i++) {
        func_800A3CC4(
            x + SSSV_RAND(8),
            z + SSSV_RAND(8),
            y,
            0x1C,
            SSSV_RAND(8) + 1,
            0,
            0,
            0);
    }
}

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6DCA10", func_800A8AF0);

// sssv:func_802D9C64_6EB314
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6DCA10", func_800AAD34);

// sssv:func_802D7BE0_6E9290
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6DCA10", func_800AB0AC);

// sssv:func_802D9FC4_6EB674
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6DCA10", func_800AB3B8);

// file split, but what file?
s32 func_800ABBB0(s32 arg0, s32 arg1, s32 arg2) {
}

void func_800ABBB8(void) {
}

void func_800ABBC0(void) {
}

void func_800ABBC8(void) {
}

void func_800ABBD0(void) {
}
