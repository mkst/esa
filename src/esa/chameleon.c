#include "common.h"

INCLUDE_ASM("asm/esa/nonmatchings/chameleon", func_80098450);

// empty
INCLUDE_ASM("asm/esa/nonmatchings/chameleon", func_80098D48);

INCLUDE_ASM("asm/esa/nonmatchings/chameleon", func_80098D50);

INCLUDE_ASM("asm/esa/nonmatchings/chameleon", func_80098D9C);

void func_80098DD8(void) {
    if ((D_800E5274->unk385 != 24) && (D_800E5274->unk385 != 25)) {
        D_800E5274->unk34A = D_800E52C0;
        D_800E5274->unk385 = 0x19;
    }
}

// sssv:func_8035C10C_76D7BC
INCLUDE_ASM("asm/esa/nonmatchings/chameleon", func_80098E14);

// sssv:func_8035C180_76D830
INCLUDE_ASM("asm/esa/nonmatchings/chameleon", func_80098E60);
