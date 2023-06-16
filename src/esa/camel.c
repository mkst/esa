#include "common.h"

// load_camel
INCLUDE_ASM("asm/esa/nonmatchings/camel", func_80098E70);

// sssv:func_8036F3AC_780A5C
void func_800998D4(void) {
    if (D_800E5274->unk385 != 0x16) {
        D_800E5274->unk34A = D_800E52C0;
        D_800E5274->unk385 = 0x16;
        return;
    } else {
        recharge_skill(1);
    }
}

// sssv:func_8036F404_780AB4
void func_80099920(void) {
    fire_cannonball_2(0x11, 0x3C, 0, 0x3C, 0x16, D_800E5274->unk328, 4, 1, 0x14);
    D_800E5274->unk32A = MIN(0x26, D_800E5274->unk32A + 0x19);
    func_8002E6A0(0x11);
    play_sound_effect_at_location(0x4B, D_800E527C->xPos.h[1], D_800E527C->zPos.h[1]);
}

// sssv:func_8036F4CC_780B7C
void func_800999CC(void) {
    D_800E5274->unk34A = (u16) D_800E52C0;
    D_800E5274->unk385 = 0x17;
    func_8004688C();
}

// sssv:func_8036F50C_780BBC
#if 0
extern s32 D_800E4B9C;
void func_80099A04(void *arg0) {
    s16 temp_v0;
    s16 var_a2;
    s32 var_a0;

    if (D_800E5274->unk385 != 0x16) {

        temp_v0 = func_80050BF0(D_800E527C, arg0, 0x3C, 0x50, D_800E4B9C / 65536);
        if (temp_v0 == -1) {
            var_a2 = 0x20;
        } else {
            var_a2 = (temp_v0 * 256) / 360;
        }
        D_800E5274->unk34A = D_800E52C0;
        D_800E5274->unk385 = 0x16;
        D_800E5274->unk358 = (s32) var_a2;
    }
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/camel", func_80099A04);
#endif

// sssv:func_8036F404_780AB4
INCLUDE_ASM("asm/esa/nonmatchings/camel", func_80099AF0);

// sssv:func_8036F4CC_780B7C
void func_80099C2C(u16 arg0) {
    D_800E5274->unk34A = D_800E52C0;
    D_800E5274->unk385 = 0x17;
    D_800E5274->unk358 = arg0;
    func_80046850(D_800E527C);
}

INCLUDE_ASM("asm/esa/nonmatchings/camel", func_80099C7C);

INCLUDE_ASM("asm/esa/nonmatchings/camel", func_8009A0D4);
