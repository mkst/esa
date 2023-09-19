#include "common.h"

#if 0

typedef struct {
  s16 unk0;
  s16 unk2;
  s16 unk4;
  u8  pad6[0x2];
} struct025; // size 0x8

s32 func_800B628C(s32);                               /* extern */
s32 rcos(s32);                                 /* extern */
s32 rsin(s32);                                 /* extern */
extern struct025 *D_800E4FBC;
extern struct025 *D_800E4FC4;
extern s32 D_800E4FC8;

void func_8001E2DC(void) {
    s32 temp_s0;
    s32 temp_s1;
    s32 var_s2;
    s32 i;

    // var_s2 = saved_reg_s2;
    D_800E4FC8 = 0;
    D_800E4FC4 = func_800B628C(0x2018); // 8216 => 1027 * 8
    D_800E4FBC = func_800B628C(0x2018);

    for (i = 0; i < 1024; i++) {
        var_s2 += rand();
        temp_s0 = rsin(i * 2);
        D_800E4FC4[D_800E4FC8].unk0 = (rcos(var_s2) * temp_s0) >> 0xE;
        D_800E4FC4[D_800E4FC8].unk4 = (rsin(var_s2) * temp_s0) >> 0xE;
        D_800E4FC4[D_800E4FC8].unk2 = rcos(i * 2) >> 2;
        D_800E4FC8++;
    }
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/E8DC", func_8001E2DC);
#endif
