#include "common.h"

extern Animal *D_800E53BC; // defined in overlay2_716530

#if 0
void func_8001E5B4(void) {
    s32 temp_s0;
    s32 temp_s1;
    u8 temp_a1;
    Animal *var_s2;

    for (var_s2 = D_800E53BC; var_s2 != NULL; var_s2 = var_s2->unk198) {
        if ((var_s2->unk220 == 0x7A) && ((rand() & 7) == 4)) {
            s16 a, b;
            temp_s1 = (var_s2->xPos.h[1] - var_s2->unk212);
            temp_s0 = (var_s2->zPos.h[1] - var_s2->unk213);
            temp_s1 += (rand() & 0x3F);
            temp_s0 += (rand() & 0x3F);

            create_particle_effect(
                temp_s1,
                temp_s0,
                0,
                13,
                (s16)(((D_800E53A4[(temp_s1 >> 6)][temp_s0 >> 6].unk7 >> 4) & 7) * (1 - ((D_800E53A4[(temp_s1 >> 6)][temp_s0 >> 6].unk7 >> 6) & 2))) << 0x10,
                (s16)((D_800E53A4[(temp_s1 >> 6)][temp_s0 >> 6].unk7 & 7) * (1 - ((D_800E53A4[(temp_s1 >> 6)][temp_s0 >> 6].unk7 >> 2) & 2))) << 0x10,
                0,
                (func_8001CEB4() & 3) | 4,
                0,
                0,
                0);
        }
    }
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/EBB4", func_8001E5B4);
#endif
