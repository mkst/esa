#include "common.h"

void func_80061688(struct000 *arg0, struct000 *arg1, u16 arg2) {
    arg0->unk2B8 = arg2;
    arg0->unk2B4 = arg1;
    arg0->unk2BA = D_800E73A8.animals[D_800E52A4].animal == arg1;
    arg0->unk2AC = 8;

    func_80061B68(arg0);
    func_8007C444(arg1);

    arg0->unk290 = 1;
}
