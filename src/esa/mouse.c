#include "common.h"

extern s8  D_800E52E0;
extern u8  D_800E525C;
extern s32  D_800E54B4;
extern s32  D_800E54BC;
extern s32  D_800E54B8;


INCLUDE_ASM("asm/esa/nonmatchings/mouse", func_8008F7DC);
// void func_8008F7DC(void) {
//     if (D_800E5274->unk386 == 1) {
//         if (D_800E52E0 != 0) {
//             if (D_800E527C->unk4A == 0) {
//                 func_8001B714(
//                     D_800E527C,
//                     100,
//                     ((D_800E52E0 * (1.0 / 60.0)) + 0.7) * 14848.0,
//                     0,
//                     ((D_800E52E0 * (1.0 / 30.0)) + 1.0),
//                     D_800E527C->xPos,
//                     D_800E527C->zPos,
//                     D_800E527C->yPos);
//             }
//         }
//     }
//     if (D_800E525C == 0) {
//         if (D_800E5274->unk38E != 0) {
//             create_particle_effect(
//                 D_800E527C->xPos,
//                 D_800E527C->zPos,
//                 D_800E527C->yPos + (D_800E527C->unk42 >> 2),
//                 (func_8001CEB4() & 1) + 25,
//                 ((func_8001CEB4() & 0x7FFF) * 2) - FTOFIX32(0.6103515625),
//                 ((func_8001CEB4() & 0x7FFF) * 2) - FTOFIX32(0.6103515625),
//                 0,
//                 (func_8001CEB4() & 0xF) + 10,
//                 0x8000,
//                 0x8000,
//                 (func_8001CEB4() & 0xF) + 15);
//             if (D_800E5274->unk30C-- <= 0) {
//                 D_800E5274->unk38E = 0;
//             }
//         }
//     }
//
//     func_8006BC30(D_800E5274->xPos,
//         D_800E5274->zPos,
//         (s16) (D_800E5274->yPos + ((D_800E529C->unkAE * 7) >> 3)),
//         D_800E5274->unk322,
//         0,
//         7,
//         7,
//         0x9B,
//         0,
//         0,
//         0,
//         0,
//         D_800E525C);
//
//     func_800A0ADC();
//     func_800A1294();
//     func_800A0F8C();
//     func_800A350C(0);
//     func_800A2698((D_800E529C->unkAE * 8) / 5, 2, 3, 3, 0);
//
//     D_800E5274->unk278 = D_800E54B4 >> 4;
//     D_800E5274->unk27A = D_800E54BC >> 4;
//     D_800E5274->unk27C = D_800E54B8 >> 4;
//     D_800E5274->unk280 = D_800E54C0 >> 4;
//     D_800E5274->unk28A = 0;
//     D_800E5274->unk282 = D_800E54C8 >> 4;
//     D_800E5274->unk284 = D_800E54C4 >> 4;
// }

INCLUDE_ASM("asm/esa/nonmatchings/mouse", func_8008FB50);

void func_80090018(void) {
    load_animal(MOUSE2);
}

INCLUDE_ASM("asm/esa/nonmatchings/mouse", func_80090038);
// func_8031F8BC_730F6C with some tweaks
// void func_80090038(void) {
//     if (D_800E527C->state == 21) {
//         func_80076D94();
//         // this function is stubbed out
//         func_800ABBB0(
//             D_800E527C->xPos * 2,
//             D_800E527C->yPos * 2,
//             D_800E527C->zPos * 2);
//
//         create_particle_effect(
//             D_800E527C->xPos,
//             D_800E527C->zPos,
//             D_800E527C->yPos + (D_800E527C->unk42 >> 2),
//             (func_8001CEB4() & 1) + 25,
//             ((func_8001CEB4() & 0x7FFF) * 2) - FTOFIX32(0.6103515625),
//             ((func_8001CEB4() & 0x7FFF) * 2) - FTOFIX32(0.6103515625),
//             0,
//             (func_8001CEB4() & 0xF) + 10,
//             GPACK_RGBA5551(0, 0, 0, 1),
//             GPACK_RGBA5551(0, 0, 0, 1),
//             (func_8001CEB4() & 0xF) + 15);
//     } else {
//         func_80076D60(16);
//         func_800ABBB0(
//             D_800E527C->xPos * 2,
//             D_800E527C->yPos * 2,
//             D_800E527C->zPos * 2);
//
//         create_particle_effect(
//             D_800E527C->xPos,
//             D_800E527C->zPos,
//             D_800E527C->yPos + (D_800E527C->unk42 >> 2),
//             (func_8001CEB4() & 1) + 25,
//             ((func_8001CEB4() & 0x7FFF) * 2) - FTOFIX32(0.6103515625),
//             ((func_8001CEB4() & 0x7FFF) * 2) - FTOFIX32(0.6103515625),
//             0,
//             (func_8001CEB4() & 0xF) + 10,
//             GPACK_RGBA5551(0, 0, 0, 1),
//             GPACK_RGBA5551(0, 0, 0, 1),
//             (func_8001CEB4() & 0xF) + 15);
//     }
// }

INCLUDE_ASM("asm/esa/nonmatchings/mouse", func_80090210);
// void func_80090210(void) {
//     func_8006309C(15, D_800E5274);
//     load_animal(HARD_MOUSE);
//     D_800E5274->unk385 = 0x28; // ATTACK_MOUSE_TAIL
//     D_800E5274->unk34A = D_800E52C0;
// }

INCLUDE_ASM("asm/esa/nonmatchings/mouse", func_80090264);
// void func_80090264(void) {
//     if ((D_800E5274->unk385 != 41) && ((D_800E52C0 - D_800E5274->unk34A) >= 8)) {
//         if ((D_800E52C0 - D_800E5274->unk34A) >= 8) {
//             if (D_800E5274->unk385 != 40) {
//                 D_800E5274->unk34A = D_800E52C0;
//             }
//             D_800E5274->unk385 = 41;
//         }
//     }
// }

INCLUDE_ASM("asm/esa/nonmatchings/mouse", func_800902C4);
// void func_800902C4(s16 arg0) {
//     D_800E5274->unk30C = arg0;
//     if (D_800E529C->unk90 == RACING_MOUSE) {
//         load_animal(HARD_MOUSE);
//         D_800E5274->unk385 = 40;
//         D_800E5274->unk34A = D_800E52C0;
//     }
// }

INCLUDE_ASM("asm/esa/nonmatchings/mouse", racing_mouse_turbo);
