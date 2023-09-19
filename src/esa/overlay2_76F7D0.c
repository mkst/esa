#include "common.h"


#if 0

s16 D_800E5480;
s16 D_800E5482;
// sssv:func_8035E200_76F8B0
void func_800818D8(void) {
    D_800E5274->skillAEnergy[0].unk0 = MIN(D_800E5274->skillAEnergy[0].unk0 + D_800E529C->unkCE[0][1], 0x400);
    if ((D_800E5274->skillAEnergy[0].unk2 != 0x7FFF) && (D_800E5274->skillAEnergy[0].unk2 != 0x7FFE)) {
        D_800E5274->skillAEnergy[0].unk2 = MAX(D_800E5274->skillAEnergy[0].unk2 - 1, 0);
    }

    D_800E5274->skillAEnergy[1].unk0 = MIN(D_800E5274->skillAEnergy[1].unk0 + D_800E529C->unkCE[1][1], 0x400);
    if ((D_800E5274->skillAEnergy[1].unk2 != 0x7FFF) && (D_800E5274->skillAEnergy[1].unk2 != 0x7FFE)) {
        D_800E5274->skillAEnergy[1].unk2 = MAX(D_800E5274->skillAEnergy[1].unk2 - 1, 0);
    }

    D_800E5480 = D_800E5482 = 0;
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_76F7D0", func_800818D8);
#endif

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_76F7D0", func_800819B0);

void recharge_skill(s16 arg0) {
    D_800E5274->skillAEnergy[arg0].unk0 += D_800E529C->unkCE[arg0][0];
}
