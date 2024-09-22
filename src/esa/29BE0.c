#include "common.h"

s32 D_800E521C; // sbss?

void func_800395E0(char *path) {

    D_800E521C = func_800B3634(path);
    if (D_800E521C == 0) {
        printf("Oh dear, were has the wad %s gone\n", path);
    }
}

#if 1
void func_8003961C(void *buf, s32 offset, s32 length, s32 value) {
    s32 pad[2];

    pad[0] = 0;
    pad[1] = 0;

    func_800B36F4(D_800E521C, offset, length, buf);

    while (func_800B3564() != 0);
}

#else
INCLUDE_ASM("asm/esa/nonmatchings/29BE0", func_8003961C);
#endif
