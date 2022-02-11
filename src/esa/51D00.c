#include "common.h"

void func_80061700(Animal *arg0, s16 arg1) {
    arg0->unk2AC = 6;
    arg0->unk2B4 = arg1;
    func_80061E74(arg0, arg1, -0x80, -1);
}

void func_8006173C(struct000 *arg0, struct000 *arg1) {
    arg0->unk2AC = 7;
    arg0->unk2B4 = arg1;
    func_80061D44(arg0, arg1);
}

void func_80061764(struct000 *arg0, void *arg1, s16 arg2) {
    arg0->unk2AC = 5;
    arg0->unk2B4 = arg1;
    arg0->unk2B8 = arg2;
    func_80061C60(arg0, arg1, -1, arg2);
}

void func_8006179C(struct000 *arg0) {
    arg0->unk2AC = 0;
    arg0->unk2EC = NULL;
    func_80061B68(arg0);
}

INCLUDE_ASM("asm/esa/nonmatchings/51D00", func_800617C0);

INCLUDE_ASM("asm/esa/nonmatchings/51D00", func_800618C0);

INCLUDE_ASM("asm/esa/nonmatchings/51D00", func_800619FC);
// void func_800619FC(struct000 *arg0, s32 arg1) {
//     arg0->unk2AC = 3;
//     arg0->unk2B4 = arg1; // union?
//     func_80061AF0(arg0, arg0->unk6, arg0->unkA, -1, 0xA, 0x20);
//     arg0->unk2B0 = (s16) (rand() & 3);
// }

INCLUDE_ASM("asm/esa/nonmatchings/51D00", func_80061A58);

INCLUDE_ASM("asm/esa/nonmatchings/51D00", func_80061AB8);

INCLUDE_ASM("asm/esa/nonmatchings/51D00", func_80061AF0);

void func_80061B68(struct000 *arg0) {
    arg0->unk2C0 = 0;
    arg0->unk2C1 = 0;
    arg0->unk2CC = 0;
    arg0->unk294 = 0;
    arg0->unk295 = 0;
}

// func_80363CE0_775390
INCLUDE_ASM("asm/esa/nonmatchings/51D00", func_80061B80);

// func_80363DB4_775464
INCLUDE_ASM("asm/esa/nonmatchings/51D00", func_80061C60);

// func_80363E88_775538
void func_80061D44(struct000 *arg0, struct000 *arg1) {
    arg0->unk2C0 = 3;
    arg0->unk2D0 = D_800E73A8.animals[D_800E52A4].animal == arg1;
    arg0->unk2CC = arg1;
    arg0->unk298 = arg1->unk6;
    arg0->unk29A = arg1->unkA;
    arg0->unk294 = 2;
    arg0->unk295 = -1;
}

s32 func_80060DE0(void*);
s32 func_80060DC8(void*);
INCLUDE_ASM("asm/esa/nonmatchings/51D00", func_80061D9C);
// void func_80061D9C(struct000 *arg0, s16 arg1, struct000 *arg2) {
//     arg0->unk2C0 = 4;
//     arg0->unk2C8 = arg1;
//     arg0->unk2C1 = 16;
//     arg0->unk2D0 = D_800E73A8.animals[D_800E52A4].animal == arg2;
//     arg0->unk2CC = arg2;
//     arg0->unk298 = arg2->unk6;
//     arg0->unk29A = arg2->unkA;
//
//     arg0->unk294 = 3;
//
//     arg0->unk295 = 16;
//     if ((func_80060DE0(arg2)) || (func_80060DC8(arg2))) {
//         arg0->unk29C = (arg2->unkE + (arg2->unk42 >> 1)) + arg1;
//     } else {
//         arg0->unk29C = arg1;
//     }
// }

// func_80363FB8_775668
void func_80061E74(Animal *arg0, u16 arg1, s16 arg2, s16 arg3) {
    arg0->unk2C8 = arg2;
    arg0->unk2C1 = arg3;
    arg0->unk2C0 = 5;
    arg0->unk2CC = 0;
    arg0->unk296 = arg1;
    arg0->unk29C = arg2;
    arg0->unk295 = arg3;
    arg0->unk294 = 1;
}

INCLUDE_ASM("asm/esa/nonmatchings/51D00", func_80061EB0);

// skill a/b handler
INCLUDE_ASM("asm/esa/nonmatchings/51D00", func_8006202C);
