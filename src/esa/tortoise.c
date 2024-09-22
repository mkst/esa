#include "common.h"




// sssv:func_80352380_763A30
INCLUDE_ASM("asm/esa/nonmatchings/tortoise", func_800951B4);

// sssv:func_80354188_765838
#if 1
void func_800952B0() {
    s32 pad[0x10];
    s16 temp_s0;
    s16 temp_s1;

    s32 var_s2;
    s32 var_v0;
    u16 temp_v1;

    if ((D_800E525C == 0) && (D_800E5274->unk38E != 0)) {
        if (!(D_800E5264 & 1)) {
            create_particle_effect(
                D_800E527C->xPos.h[1],
                D_800E527C->zPos.h[1],
                D_800E527C->yPos.h[1] + (D_800E527C->unk42 >> 2),
                0x15,
                0,
                0,
                (func_8001CEB4() + 0x30000) & 0x7FFF,
                0x1E,
                0x8000,
                0x8000,
                0);
        }
        if (D_800E5274->unk30C-- <= 0) {
            D_800E5274->unk38E = 0;
        }
    }
    var_s2 = 0;
    func_800A3630();
    func_8001B3FC();
    func_800A0ADC();
    func_800A1294();
    func_800A0F8C();

    switch (D_800E527C->state) {                              /* irregular */
    case 24:
    case 22:
        var_v0 = (((D_800E5264 << 3) + 0x80) & 0xFF) << 5;
        if (!((D_800E5264 << 3) & 0xFF)) {
            var_s2 = -5;
        }
        if (var_v0 == 0) {
            var_s2 = 5;
        }
        break;
    case 23:
        var_v0 = (((D_800E5264 << 4) + 0x80) & 0xFF) << 6;
        if (!((D_800E5264 << 4) & 0xFF)) {
            var_s2 = -5;
        }
        if (var_v0 == 0) {
            var_s2 = 5;
        }
        break;
    }

    if (var_s2 != 0) {
        temp_v1 = D_800E5274->unk322;
        temp_s0 = (D_800CA604[((s16) (temp_v1 * -1) + 0x40) & 0xFF]) >> 0x7;
        temp_s1 = (D_800CA604[-temp_v1 & 0xFF]) >> 0x7;
        create_particle_effect(
            D_800E527C->xPos.h[1] + ( ((( temp_s1 * 0xA9E) / 232) + (temp_s0 * var_s2)) >> 8),
            D_800E527C->zPos.h[1] + ( (((-temp_s0 * 0xA9E) / 232) + (temp_s1 * var_s2)) >> 8),
            D_800E527C->yPos.h[1] + 0xC,
            0x15,
            0,
            0,
            (func_8001CEB4() + 0x30000) & 0x7FFF,
            0x19,
            0xB18C,
            0xB18C,
            0);
    }

    func_8006BC30(
        D_800E5274->xPos.h[1],
        D_800E5274->zPos.h[1],
        D_800E5274->yPos.h[1] + (D_800E529C->unkAE >> 1),
        D_800E5274->unk322,
        NULL,
        0x19,
        0x19,
        0x9B,
        0,
        0,
        0,
        0,
        D_800E525C);

    D_800E5274->unk278 = D_800E54B4 >> 4;
    D_800E5274->unk27A = D_800E54BC >> 4;
    D_800E5274->unk27C = D_800E54B8 >> 4;
    D_800E5274->unk280 = D_800E54C0 >> 4;
    D_800E5274->unk282 = D_800E54C8 >> 4;
    D_800E5274->unk284 = D_800E54C4 >> 4;
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/tortoise", func_800952B0);
#endif

INCLUDE_ASM("asm/esa/nonmatchings/tortoise", func_8009568C);

// sssv:func_80355918_766FC8
INCLUDE_ASM("asm/esa/nonmatchings/tortoise", func_8009589C);

// sssv:func_80355EDC_76758C
INCLUDE_ASM("asm/esa/nonmatchings/tortoise", func_80095B60);

// sssv:func_80355EFC_7675AC
INCLUDE_ASM("asm/esa/nonmatchings/tortoise", func_80095B80);

// sssv:func_80355F64_767614
INCLUDE_ASM("asm/esa/nonmatchings/tortoise", func_80095BCC);

// sssv:func_80355FFC_7676AC
INCLUDE_ASM("asm/esa/nonmatchings/tortoise", func_80095C68);

// sssv:func_80356064_767714
INCLUDE_ASM("asm/esa/nonmatchings/tortoise", func_80095CA0);

// sssv:func_803560CC_76777C
INCLUDE_ASM("asm/esa/nonmatchings/tortoise", func_80095CEC);

// sssv:func_80356134_7677E4
INCLUDE_ASM("asm/esa/nonmatchings/tortoise", func_80095D38);

// sssv:func_803562C8_767978
INCLUDE_ASM("asm/esa/nonmatchings/tortoise", func_80095E8C);

// sssv:func_80356348_7679F8
INCLUDE_ASM("asm/esa/nonmatchings/tortoise", func_80095EEC);

INCLUDE_ASM("asm/esa/nonmatchings/tortoise", racing_tortoise_turbo);
