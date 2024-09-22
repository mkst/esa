#include "common.h"

typedef struct {
    s8  unk0[8][64];
    s16 unk200; // lod?
    u16 unk202;
    u16 unk204;
    u16 unk206;
    s16 unk208;
    s16 unk20A;
    u8  unk20C;
    u8  unk20D;
    u8  unk20E;
    u8  unk20F;
} struct053; // size 0x210

extern struct053 D_800E717C;

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6A7A80", func_8001FCE8);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6A7A80", func_8001FFF4);

// sssv:func_80298818_6A9EC8
#if 0
s16 func_8002082C(s16 arg0, s16 arg1) {
    s16 phi_v1;
    s16 phi_t3;
    s16 phi_t4;
    s16 phi_a2;

    phi_v1 = (D_800E53A4[(arg0 >> 6) + 0][(arg1 >> 6) + 0].unk6 << 2) + D_800E717C.unk0[(((arg0 >> 6) * (arg1 >> 6)) + 0) & 7][(u16)((D_800E717C.unk204 + ((((arg0 >> 6) * (arg1 >> 6)) + ((arg0 >> 6) * (arg0 >> 6))) * 8)) +  0) & 0x3F];
    phi_t3 = (D_800E53A4[(arg0 >> 6) + 0][(arg1 >> 6) + 1].unk6 << 2) + D_800E717C.unk0[(((arg0 >> 6) * (arg1 >> 6)) + 1) & 7][(u16)((D_800E717C.unk204 + ((((arg0 >> 6) * (arg1 >> 6)) + ((arg0 >> 6) * (arg0 >> 6)) + 1) * 8)) ) & 0x3F];

    phi_t4 = (D_800E53A4[(arg0 >> 6) + 1][(arg1 >> 6) + 1].unk6 << 2) + D_800E717C.unk0[(((arg0 >> 6) + (arg1 >> 6)) + 1) & 7][(u16)((D_800E717C.unk204 + ((((arg0 >> 6) + (arg1 >> 6)) + ((arg0 >> 6) + (arg0 >> 6)) + 2) * 8))) & 0x3F];
    phi_a2 = (D_800E53A4[(arg0 >> 6) + 1][(arg1 >> 6) + 0].unk6 << 2) + D_800E717C.unk0[(((arg0 >> 6) + (arg1 >> 6)) + 0) & 7][(u16)((D_800E717C.unk204 + ((((arg0 >> 6) + (arg1 >> 6)) + ((arg0 >> 6) + (arg0 >> 6)) + 1) * 8))) & 0x3F];

    if (phi_v1 < 16) {
        phi_v1 = MAX(phi_a2, MAX(phi_t3, phi_t4));
    }
    if (phi_t3 < 16) {
        phi_t3 = MAX(phi_v1, MAX(phi_t4, phi_a2));
    }
    if (phi_t4 < 16) {
        phi_t4 = MAX(phi_v1, MAX(phi_t3, phi_a2));
    }
    if (phi_a2 < 16) {
        phi_a2 = MAX(phi_v1, MAX(phi_t3, phi_t4));
    }

    arg0 = arg0 & 0x3F;
    arg1 = arg1 & 0x3F;

    if (arg0 < arg1) {
        return (phi_v1 + ((((phi_t4 - phi_t3) * arg0) + ((phi_t3 - phi_v1) * arg1)) >> 6));
    } else {
        return (phi_v1 + ((((phi_a2 - phi_v1) * arg0) + ((phi_t4 - phi_a2) * arg1)) >> 6));
    }
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6A7A80", func_8002082C);
#endif

// sssv:func_80298E08_6AA4B8
s32 func_80020B38(s16 arg0, s16 arg1) {
    // equivalent to dividing by 64
    arg0 >>= 6;
    arg1 >>= 6;

    if ((arg0 < D_80111C74.unk10) ||
        (arg1 < D_80111C74.unk12) ||
        ((D_80111C74.unk10 + D_80111C74.unk14) < arg0) ||
        ((D_80111C74.unk12 + D_80111C74.unk16) < arg1)) {
        return 0;
    }

    return 1;
}

// sssv:func_80298E98_6AA548
#if 0
s16 func_80020BB4(s16 arg0, s16 arg1) {
    s16 tmp;
    s16 res;

    res = D_800E53A4[(s16)(arg0 >> 6)][(s16)(arg1 >> 6)].unk6 << 2;

    if (func_80020B38(arg0, arg1)) {
        tmp = D_800E717C.unk0[(arg0 * arg1) & 7][((D_800E717C.unk204 & 0xFF) + (((arg0 * arg1) + (arg0 * arg0)) << 3)) & 63];
        return res + tmp;
    } else {
        return res;
    }
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6A7A80", func_80020BB4);
#endif

// sssv:func_80298F78_6AA628
s16 func_80020C8C(s16 arg0, s16 arg1) {
    s16 sp36;
    s16 sp34;
    s16 sp32;
    s16 sp30;
    s16 temp_t4;
    s16 temp_t6;

    func_80020D84(arg0 >> 6, arg1 >> 6, &sp36, &sp34, &sp32, &sp30);
    temp_t4 = arg0 & 0x3F;
    temp_t6 = arg1 & 0x3F;
    if ((temp_t4 + temp_t6) < 64) {
        return sp36 + ((((sp32 - sp36) * temp_t4) + ((sp34 - sp36) * temp_t6)) >> 6);
    } else {
        return sp30 + ((((sp34 - sp30) * (64 - temp_t4)) + ((sp32 - sp30) * (64 - temp_t6))) >> 6);
    }
}

// sssv:func_80299640_6AACF0
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_6A7A80", func_80020D84);
