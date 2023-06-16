#include "common.h"

void func_80061E74(Animal *arg0, u16 arg1, s16 arg2, s16 arg3);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_7741B0", func_80060D74);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_7741B0", can_swim);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_7741B0", func_80060DC8);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_7741B0", can_fly);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_7741B0", func_80060DFC);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_7741B0", func_80060EB0);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_7741B0", func_80061318);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_7741B0", func_80061610);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_7741B0", func_80061670);

void func_80061688(struct000 *arg0, struct000 *arg1, u16 arg2) {
    arg0->unk2B8 = arg2;
    arg0->unk2B4 = arg1;
    arg0->unk2BA = D_800E73A8.animals[gCurrentAnimalIndex].animal == arg1;
    arg0->unk2AC = 8;

    func_80061B68(arg0);
    func_8007C444(arg1);

    arg0->unk290 = 1;
}

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

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_7741B0", func_800617C0);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_7741B0", func_800618C0);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_7741B0", func_800619FC);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_7741B0", func_80061A58);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_7741B0", func_80061AB8);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_7741B0", func_80061AF0);

void func_80061B68(struct000 *arg0) {
    arg0->unk2C0 = 0;
    arg0->unk2C1 = 0;
    arg0->unk2CC = 0;
    arg0->unk294 = 0;
    arg0->unk295 = 0;
}

// sssv:func_80363CE0_775390
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_7741B0", func_80061B80);

// sssv:func_80363DB4_775464
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_7741B0", func_80061C60);

void func_80061D44(struct000 *arg0, struct000 *arg1) {
    arg0->unk2C0 = 3;
    arg0->unk2D0 = D_800E73A8.animals[gCurrentAnimalIndex].animal == arg1;
    arg0->unk2CC = arg1;
    arg0->unk298 = arg1->unk6;
    arg0->unk29A = arg1->unkA;
    arg0->unk294 = 2;
    arg0->unk295 = -1;
}

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_7741B0", func_80061D9C);

// sssv:func_80363FB8_775668
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

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_7741B0", func_80061EB0);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_7741B0", func_8006202C);
