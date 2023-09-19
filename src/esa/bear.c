#include "common.h"

extern u8 D_800E525C;
extern s16 D_800E5264;
extern s32 D_800E54B4;
extern s32 D_800E54B8;
extern s32 D_800E54BC;

INCLUDE_ASM("asm/esa/nonmatchings/bear", func_8008CF98);

void func_8008D3FC(void) {
    s32 temp_v1;
    s16 var_v0;
    s32 pad[0x10];

    if (D_800E5274->unk32E > 0) {
        D_800E5274->unk32E = (u16) D_800E5274->unk32E - 1;
    }

    if (((D_800E5274->unk386 == 1) || (D_800E5274->unk386 == 3) || (D_800E5274->unk386 == 4)) && (D_800E527C->unk4A == 0)) {
        var_v0 = 0;
        temp_v1 = (D_800E5264 << 4) & 0xFF;
        if (temp_v1 == 0) {
            var_v0 = func_80082D94(0x3C, -0x28,  0x28, 0x30, 5, 0, 0, 0xC);
        } else if (temp_v1 == 0x40) {
            var_v0 = func_80082D94(0x3C, -0x28, -0x28, 0x30, 5, 0, 0, 0xC);
        } else if (temp_v1 == 0x80) {
            var_v0 = func_80082D94(0x3C,  0x28,  0x28, 0x30, 5, 0, 0, 0xC);
        } else if (temp_v1 == 0xC0) {
            var_v0 = func_80082D94(0x3C,  0x28, -0x28, 0x30, 5, 0, 0, 0xC);
        }
        if ((var_v0 & 2) != 0) {
            play_sound_effect_at_location(0x48, D_800E527C->xPos.h[1], D_800E527C->zPos.h[1]);
        }
    }
    if (D_800E525C == 0) {
        if (D_800E5274->unk30C <= 0) {
            load_animal(0x16);
        } else {
            D_800E5274->unk30C = (u16) D_800E5274->unk30C - 1;
        }
    }
    if ((D_800E5274->unk386 == 2) || (D_800E5274->unk386 == 5)) {
        load_animal(0x16);
    }

    func_8001B3FC();
    func_800A0ADC();
    func_800A1294();
    func_800A0F8C();

    D_800E5274->unk278 = (s16) ((s32) D_800E54B4 >> 4);
    D_800E5274->unk27A = (s16) ((s32) D_800E54BC >> 4);
    D_800E5274->unk27C = (s16) ((s32) D_800E54B8 >> 4);
    D_800E5274->unk280 = (s16) ((s32) D_800E54C0 >> 4);
    D_800E5274->unk282 = (s16) ((s32) D_800E54C8 >> 4);
    D_800E5274->unk284 = (s16) ((s32) D_800E54C4 >> 4);
}

void func_8008D62C(void) {
    s32 pad[0x10];
    func_800775B8();
    D_800E5274->unk385 = 0;
}

// sssv:func_803277B4_738E64
void func_8008D654(void) {
    struct006 *tmp;

    if ((D_800E5274->unk340 == NULL) && (D_800E5274->unk385 != 0xB)) {
        D_800E5274->unk34A = D_800E52C0;
        D_800E5274->unk385 = 0xB;
    } else if ((D_800E5274->unk340 != NULL) &&
               (D_800E5274->unk385 != 0xE) &&
               (D_800E5274->unk385 != 0xF) &&
               (D_800E5274->unk338 == 0)) {
        tmp = D_800E5274->unk340->unk16C;
        D_800E5274->unk34A = D_800E52C0;
        if ((tmp->unk0 == 2) ||
            (tmp->unk0 == 0x3D)) {
            D_800E5274->unk385 = 0xE;
        } else {
            D_800E5274->unk385 = 0xF;
        }
    }
}

// sssv:func_8032786C_738F1C
void func_8008D708(void) {
    if ((D_800E5274->unk340 == NULL) &&
        (D_800E5274->unk385 == 0) &&
        (D_800E527C->state != 0xDD)) {
        load_animal(CRAZY_BEAR);
        D_800E5274->unk32E = 20;
    }
}

void func_8008D77C(void) {
    if (D_800E5274->unk32E <= 0) {
        load_animal(0x16);
    }
}

// sssv:func_80327908_738FB8
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
