#include "common.h"

INCLUDE_ASM("asm/esa/nonmatchings/parrot", func_800A0324);

// sssv:func_803144F8_725BA8
void func_800A05EC(void) {
    if ((D_800E527C->unk162 != 1) && (func_80082D94(0, 0, 0, 0, 32, 0, 0, 11) == 0) && (func_8004596C() >= 49)) {
        load_animal(PARROT_ATTACKING);
        D_800E5274->unk30E = 0;
    }
}
// sssv:func_80314590_725C40
void func_800A0678(void) {
    func_8006309C(15, D_800E5274);
    load_animal(PARROT);
    play_sound_effect_at_location(141, D_800E527C->xPos.h[1], D_800E527C->zPos.h[1]);
}

void parrot_fly(void) {
    if (D_800E527C->unk162 != 1) {
        load_animal(PARROT_ATTACKING);
        D_800E5274->unk30E = 0;
    }
}
