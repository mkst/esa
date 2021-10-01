#include "common.h"

INCLUDE_ASM(s32, "51374", func_80060D74);

INCLUDE_ASM(s32, "51374", func_80060DAC);

INCLUDE_ASM(s32, "51374", func_80060DC8);

INCLUDE_ASM(s32, "51374", func_80060DE0);

INCLUDE_ASM(s32, "51374", func_80060DFC);

INCLUDE_ASM(s32, "51374", func_80060EB0);

INCLUDE_ASM(s32, "51374", func_80061318);

INCLUDE_ASM(s32, "51374", func_80061610);

void func_80061670(struct000 *arg0) {
    arg0->unk2AC = 10;
    arg0->unk2B0 = 0;
    arg0->unk2CC = (s32) arg0->unk340;
}

INCLUDE_ASM(s32, "51374", func_80061688);
// CURRENT (80)
// void func_80061688(struct000 *arg0, struct000 *arg1, s16 arg2) {
//     arg0->unk2B8 = arg2;
//     arg0->unk2B4 = arg1;
//     arg0->unk2BA = D_800E73A8.unk3B84[D_800E52A4].unk0 == arg1;
//
//     arg0->unk2AC = 8;
//     func_80061B68(arg0);
//     func_8007C444(arg1);
//
//     arg0->unk290 = 1;
// }

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

INCLUDE_ASM(s32, "51374", func_800617C0);

INCLUDE_ASM(s32, "51374", func_800618C0);

INCLUDE_ASM(s32, "51374", func_800619FC);

INCLUDE_ASM(s32, "51374", func_80061A58);

INCLUDE_ASM(s32, "51374", func_80061AB8);

INCLUDE_ASM(s32, "51374", func_80061AF0);

INCLUDE_ASM(s32, "51374", func_80061B68);

INCLUDE_ASM(s32, "51374", func_80061B80);

INCLUDE_ASM(s32, "51374", func_80061C60);

INCLUDE_ASM(s32, "51374", func_80061D44);

INCLUDE_ASM(s32, "51374", func_80061D9C);

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

INCLUDE_ASM(s32, "51374", func_80061EB0);

// skill a/b handler
INCLUDE_ASM(s32, "51374", func_8006202C);
