#include "common.h"

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_76F7D0", func_800819B0);

void recharge_skill(s16 arg0) {
    D_800E5274->skillAEnergy[arg0].unk0 += D_800E529C->unkCE[arg0][0];
}
