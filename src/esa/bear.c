#include "common.h"

INCLUDE_ASM("asm/esa/nonmatchings/bear", func_8008CF98);

INCLUDE_ASM("asm/esa/nonmatchings/bear", func_8008D3FC);

INCLUDE_ASM("asm/esa/nonmatchings/bear", func_8008D62C);

INCLUDE_ASM("asm/esa/nonmatchings/bear", func_8008D654);

// sssv:func_8032786C_738F1C
INCLUDE_ASM("asm/esa/nonmatchings/bear", func_8008D708);

void func_8008D77C(void) {
    if (D_800E5274->unk32E <= 0) {
        load_animal(0x16);
    }
}

void func_8008D7B4(void) {
    s16 sp18;
    s8 sp1A;

    if ((D_800E527C->state != 0xDD) && (D_800E5274->unk340 == NULL)) {
        if (func_80087AD0(D_800E527C->xPos.h[1], D_800E527C->zPos.h[1], D_800E527C->yPos.h[1], &sp18, &sp1A) != 0) {
            func_8003AEF0(sp18, sp1A);
            D_800E5274->unk385 = 0;
        }
    } else if ((D_800E527C->state == 0xDD) && (D_800E73A8.unkB318 == 0) && (D_800E73A8.unkB312 != 0)) {
          func_8003AF20();
    }
}

// sssv:func_803279BC_73906C
void func_8008D888(void) {
    if (D_800E527C->state == 0x15) {
        func_80076D94();
        create_particle_effect(
          D_800E527C->xPos.h[1],
          D_800E527C->zPos.h[1],
          D_800E527C->yPos.h[1] + (D_800E527C->unk42 >> 2),
          SSSV_RAND(2) + 25,
          (SSSV_RAND(FTOFIX32(0.5)) * 2) - FTOFIX32(0.6103515625),
          (SSSV_RAND(FTOFIX32(0.5)) * 2) - FTOFIX32(0.6103515625),
          0,
          SSSV_RAND(16) + 0xF,
          GPACK_RGBA5551(0, 0, 0, 1),
          GPACK_RGBA5551(0, 0, 0, 1),
          SSSV_RAND(32) + 0xF);
    } else {
      func_80076D60(16);
      create_particle_effect(
        D_800E527C->xPos.h[1],
        D_800E527C->zPos.h[1],
        D_800E527C->yPos.h[1] + (D_800E527C->unk42 >> 2),
        SSSV_RAND(2) + 25,
        (SSSV_RAND(FTOFIX32(0.5)) * 2) - FTOFIX32(0.6103515625),
        (SSSV_RAND(FTOFIX32(0.5)) * 2) - FTOFIX32(0.6103515625),
        0,
        SSSV_RAND(16) + 0xF,
        GPACK_RGBA5551(0, 0, 0, 1),
        GPACK_RGBA5551(0, 0, 0, 1),
        SSSV_RAND(32) + 0xF);
      }
}

// sssv:func_80327B94_739244
void func_8008DA10(s16 arg0) {
    D_800E5274->unk30C = arg0;
    if (D_800E529C->unk90 == BEAR) {
        load_animal(CRAZY_BEAR);
    }
}
