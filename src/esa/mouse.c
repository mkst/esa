#include "common.h"

extern s8  D_800E52E0;
extern u8  D_800E525C;
extern s32  D_800E54B4;

extern s32  D_800E54BC;
extern s32  D_800E54B8;


void func_8008F7DC(void) {
    s32 pad[16];

    if (D_800E5274->unk386 == 1) {
        if (D_800E52E0 != 0) {
            if (D_800E527C->unk4A == 0) {
                func_8001B714(
                    D_800E527C,
                    100,
                    ((D_800E52E0 * (1 / 60.0)) + 0.7) * 14848.0,
                    0,
                    ((D_800E52E0 * (1 / 30.0)) + 1.0),
                    D_800E527C->xPos.h[1],
                    D_800E527C->zPos.h[1],
                    D_800E527C->yPos.h[1]);
            }
        }
    }
    if (D_800E525C == 0) {
        if (D_800E5274->unk38E != 0) {
            create_particle_effect(
                D_800E527C->xPos.h[1],
                D_800E527C->zPos.h[1],
                D_800E527C->yPos.h[1] + (D_800E527C->unk42 >> 2),
                SSSV_RAND(2) + 25,
                (SSSV_RAND(32768) * 2) - FTOFIX32(0.6103515625),
                (SSSV_RAND(32768) * 2) - FTOFIX32(0.6103515625),
                0,
                SSSV_RAND(16) + 10,
                0x8000,
                0x8000,
                SSSV_RAND(16) + 15);
            if (D_800E5274->unk30C-- <= 0) {
                D_800E5274->unk38E = 0;
            }
        }
    }

    func_8006BC30(D_800E5274->xPos.h[1],
        D_800E5274->zPos.h[1],
        (s16) (D_800E5274->yPos.h[1] + ((D_800E529C->unkAE * 7) >> 3)),
        D_800E5274->unk322,
        0,
        7,
        7,
        0x9B,
        0,
        0,
        0,
        0,
        D_800E525C);

    func_800A0ADC();
    func_800A1294();
    func_800A0F8C();
    func_800A350C(0);
    func_800A2698((D_800E529C->unkAE * 8) / 5, 2, 3, 3, 0);

    D_800E5274->unk278 = D_800E54B4 >> 4;
    D_800E5274->unk27A = D_800E54BC >> 4;
    D_800E5274->unk27C = D_800E54B8 >> 4;
    D_800E5274->unk280 = D_800E54C0 >> 4;
    D_800E5274->unk282 = D_800E54C8 >> 4;
    D_800E5274->unk284 = D_800E54C4 >> 4;
    D_800E5274->unk28A = 0;
}

void func_8008FB50(void) {
    s32 pad[16];
    s16 temp_v1_3;
    s32 temp_v0_3;

    s16 phi_v0_2;
    s32 phi_v1;
    s16 phi_s1;

    if ((D_800E5274->unk385 == 0) && (SSSV_RAND(32) == 12)) {
        D_800E5274->unk385 = 46;
        D_800E5274->unk34A = D_800E52C0;
    }
    func_80082D94(5, 5, 0, 16, 0, 0, 0, 16);

    phi_s1 = 128;
    switch (D_800E5274->unk385) {                              /* irregular */
    case 40:
        temp_v1_3 = D_800E52C0 - D_800E5274->unk34A;
        phi_s1 = temp_v1_3 * 0x15;
        if (temp_v1_3 > 5) {
            D_800E5274->unk385 = 0x2EU;
            D_800E5274->unk34A = (u16) D_800E52C0;
        }
        break;
    case 41:
        temp_v1_3 = D_800E52C0 - D_800E5274->unk34A;
        phi_s1 = phi_s1 - (temp_v1_3 * 0x15);
        if (temp_v1_3 > 5) {
            D_800E5274->unk385 = 0U;
            load_animal(0x12);
        }
        break;
    case 46:
        temp_v1_3 = D_800E52C0 - D_800E5274->unk34A;
        if (temp_v1_3 == 1) {
            play_sound_effect_at_location(0x56, D_800E527C->xPos.h[1], D_800E527C->zPos.h[1]);
        }
        if (temp_v1_3 < 7) {
            if (temp_v1_3 < 4) {
                phi_v0_2 = temp_v1_3 << 3;
            } else {
                phi_v0_2 = (7 - temp_v1_3) << 3;
            }

            create_particle_effect(
                D_800E527C->xPos.h[1] + (((D_800CA604[D_800E5274->unk322 & 0xFF] >> 7) * 3) >> 5),
                D_800E527C->zPos.h[1] + (((D_800CA604[(D_800E5274->unk322 + 0x40) & 0xFF] >> 7) * 3) >> 5),
                D_800E527C->yPos.h[1] + 0xA,
                0x58,
                D_800E527C->xVel.w,
                D_800E527C->zVel.w,
                D_800E527C->yVel.w,
                phi_v0_2,
                0xFFE0,
                0xFFF0,
                0);
        } else {
            D_800E5274->unk385 = 0;
        }
        break;
    }

    func_8006BC30(D_800E5274->xPos.h[1], D_800E5274->zPos.h[1], (s16) (D_800E5274->yPos.h[1] + ((s32) (D_800E529C->unkAE * 7) >> 3)), D_800E5274->unk322, 0, 7, 7, 0x9B, 0, 0, 0, 0, (s32) D_800E525C);
    func_800A0ADC();
    func_800A1294();
    func_800A0F8C();
    func_800A350C(0);
    func_800A2698((D_800E529C->unkAE * 8) / 5, 2, 3, 3, 0);

    D_800E5274->unk27A = D_800E54BC >> 4;
    D_800E5274->unk27C = D_800E54B8 >> 4;
    D_800E5274->unk280 = D_800E54C0 >> 4;
    D_800E5274->unk282 = D_800E54C8 >> 4;
    D_800E5274->unk284 = D_800E54C4 >> 4;

    if (D_800E525C == 0) {
        if (D_800E5274->unk30C <= 0) {
            if (D_800E5274->unk385 != 41) {
                if (D_800E5274->unk385 != 40) {
                    D_800E5274->unk34A = D_800E52C0;
                }
                D_800E5274->unk385 = 0x29;
            }
        } else {
            D_800E5274->unk30C--;
        }
    }

    switch (D_800E5274->unk386) {
        case 2:
        case 5:
        load_animal(0x12);
        break;
    }

    if (D_800E5274->unk386) {}; // fakematch

    temp_v0_3 = (phi_s1 * 3) * 60;
    if (temp_v0_3 < 0) {
        temp_v0_3 += 127;
    }
    D_800E5274->unk28A = (temp_v0_3 >> 7);
}

void func_80090018(void) {
    load_animal(MOUSE2); // load_animal
}

void func_80090038(void) {
    if (D_800E527C->state == 21) {
        func_80076D94();
        // this function is stubbed out
        func_800ABBB0(
            D_800E527C->xPos.h[1] * 2,
            D_800E527C->yPos.h[1] * 2,
            D_800E527C->zPos.h[1] * 2);

        create_particle_effect(
            D_800E527C->xPos.h[1],
            D_800E527C->zPos.h[1],
            D_800E527C->yPos.h[1] + (D_800E527C->unk42 >> 2),
            SSSV_RAND(2) + 25,
            (SSSV_RAND(32768) * 2) - FTOFIX32(0.6103515625),
            (SSSV_RAND(32768) * 2) - FTOFIX32(0.6103515625),
            0,
            SSSV_RAND(16) + 10,
            GPACK_RGBA5551(0, 0, 0, 1),
            GPACK_RGBA5551(0, 0, 0, 1),
            SSSV_RAND(16) + 15);
    } else {
        func_80076D60(16);
        func_800ABBB0(
            D_800E527C->xPos.h[1] * 2,
            D_800E527C->yPos.h[1] * 2,
            D_800E527C->zPos.h[1] * 2);

        create_particle_effect(
            D_800E527C->xPos.h[1],
            D_800E527C->zPos.h[1],
            D_800E527C->yPos.h[1] + (D_800E527C->unk42 >> 2),
            SSSV_RAND(2) + 25,
            (SSSV_RAND(32768) * 2) - FTOFIX32(0.6103515625),
            (SSSV_RAND(32768) * 2) - FTOFIX32(0.6103515625),
            0,
            SSSV_RAND(16) + 10,
            GPACK_RGBA5551(0, 0, 0, 1),
            GPACK_RGBA5551(0, 0, 0, 1),
            SSSV_RAND(16) + 15);
    }
}

void func_80090210(void) {
    func_8006309C(15, D_800E5274);
    load_animal(HARD_MOUSE);
    D_800E5274->unk385 = 0x28; // ATTACK_MOUSE_TAIL
    D_800E5274->unk34A = D_800E52C0;
}

void func_80090264(void) {
    if ((D_800E5274->unk385 != 41) && ((D_800E52C0 - D_800E5274->unk34A) >= 8)) {
        if ((D_800E52C0 - D_800E5274->unk34A) >= 8) {
            if (D_800E5274->unk385 != 40) {
                D_800E5274->unk34A = D_800E52C0;
            }
            D_800E5274->unk385 = 41;
        }
    }
}

void func_800902C4(s16 arg0) {
    D_800E5274->unk30C = arg0;
    if (D_800E529C->unk90 == RACING_MOUSE) {
        load_animal(HARD_MOUSE);
        D_800E5274->unk385 = 40; // ATTACK_MOUSE_TAIL
        D_800E5274->unk34A = D_800E52C0;
    }
}

void racing_mouse_turbo(s16 arg0) {
    if (arg0 != 0) {
        D_800E5274->unk38E = 16;
        D_800E5274->unk30C = arg0;
    } else {
        D_800E5274->unk38E = 0;
    }
}
