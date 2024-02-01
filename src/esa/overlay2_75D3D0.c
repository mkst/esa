#include "common.h"

extern struct023  D_80112FD8[];
extern s32        D_800E40E0;
s32        D_800E4BC8;
extern s32        D_80113058;

void func_80070190(s16 numVtxs, struct021 *vtxs, s32 arg2, s16 arg3, s16 arg4, s32 arg5, s16 arg6, s16 arg7, s16 arg8, s32 arg9, s32 argA, s32 argB, s32 argC);
void func_8006FC24(s16 numVtxs, struct021 *vtxs, s16 arg2, s16 arg3, s16 arg4, s32 arg5, u8 arg6, u8 arg7, s16 red, s16 green, s16 blue, s32 argB, s32 argC, s32 argD, s32 argE);
void func_8006B88C(s16, s32, s32, struct021 *, u8, u8, u8);
void func_800169CC(s16 numVtxs, void*, void*, s32);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_75D3D0", func_8006B88C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_75D3D0", func_8006BC30);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_75D3D0", func_8006C510);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_75D3D0", func_8006C6E8);

#if 0
// sssv:func_8034CE88_75E538
void func_8006C8DC(struct021 *arg0, s16 numVtxs, s16 arg2, s16 arg3, s16 arg4, s16 red, s16 green, s16 blue) {
    struct021 sp40[0x10];  // 0x80 big
    struct021 spC0[0x10];  // 0x80 big
    struct021 sp140[0x10]; // 0x80 big
    struct021 sp190[0x10]; // unk big
    s16 sp200;
    s16 sp202;
    s16 numVtx1; // sp240
    s16 numVtx2; // sp242
    // s32 sp244;
    // s32 sp248;
    // s32 sp24C;
    // s32 sp250;
    // s32 sp254;
    struct021 *sp258;
    struct021 *sp25C;

    s32 sp264;
    s32 sp268;
    s32 sp26C;
    s32 sp270;
    s32 sp274;
    s16 sp278;
    s16 sp27C;
    s16 sp280;
    s32 sp284;
    s32 sp288;
    s16 sp28C;
    s32 sp290;
    s16 var_a0;
    s16 minx;
    s16 maxx;
    s16 var_v0_5;
    s32 temp_a0;
    s32 temp_a0_3;
    s32 temp_a0_6;
    s16 temp_a2_3;
    s16 temp_t0;
    s32 temp_t3;
    s32 temp_v0_3;
    s32 var_a1_2;

    s16 var_s2;
    s16 var_s3;
    s16 var_s4;
    s16 var_s5;
    s16 var_s6;
    s16 var_s7;
    s16 i;
    s32 var_t2;
    s16 var_v0;
    s32 var_v0_6;
    s16 var_v1;
    s16 var_v1_2;
    s32 var_v1_4;
    s32 var_v1_5;
    struct021 *tmp;
    s32 temp_a0_4;

    minx = maxx = arg0->unk2;

    for (i = 0; i < numVtxs; i++) {
        s16 tmp = arg0[i].unk2;
        if (maxx < tmp) {
            maxx = tmp;
        }

        tmp = arg0[i].unk2;
        if (tmp > minx) {
            minx = tmp;
        }
    }

    sp258 = arg0;
    sp25C = &sp40;
    numVtx2 = numVtxs;

    var_s3 = maxx >> 6;
    temp_t0 = minx >> 6;

    sp278 = 0;

    while (var_s3 <= temp_t0) {
        if (D_800E53A4[arg4+0][var_s3+0].unk3 == 0) {
            sp27C = 1;
            var_s6 = D_800E53A4[arg4 + 0][var_s3 + 0].unk0 << 3;
            var_s5 = D_800E53A4[arg4 + 1][var_s3 + 0].unk0 << 3;
            var_s4 = D_800E53A4[arg4 + 0][var_s3 + 1].unk0 << 3;
            var_s7 = D_800E53A4[arg4 + 1][var_s3 + 1].unk0 << 3;

            sp280 = D_800E53A4[arg4 + 0][var_s3 + 0].unk4 & 1;
        } else {
            var_v1_2 = MIN(D_800E53A4[arg4 + 0][var_s3 + 0].unk1, D_800E53A4[arg4 + 1][var_s3 + 1].unk1) * 8;

            if ((arg2 - 0x10) < (var_v1_2)) {
                sp27C = 1;
                var_s6 = D_800E53A4[arg4 + 0][var_s3 + 0].unk0 << 3;
                var_s5 = D_800E53A4[arg4 + 1][var_s3 + 0].unk0 << 3;
                var_s4 = D_800E53A4[arg4 + 0][var_s3 + 1].unk0 << 3;
                var_s7 = D_800E53A4[arg4 + 1][var_s3 + 1].unk0 << 3;

                sp280 = D_800E53A4[arg4 + 0][var_s3 + 0].unk4 & 1;
            } else {
                sp27C = 2;
                var_s6 = D_800E53A4[arg4 + 0][var_s3 + 0].unk1 << 3;
                var_s5 = D_800E53A4[arg4 + 1][var_s3 + 0].unk1 << 3;
                var_s4 = D_800E53A4[arg4 + 0][var_s3 + 1].unk1 << 3;
                var_s7 = D_800E53A4[arg4 + 1][var_s3 + 1].unk1 << 3;

                sp280 = D_800E53A4[arg4 + 0][var_s3 + 0].unk4 & 2;
            }

        }

        if (var_s7 != ((var_s5 + var_s4) - var_s6)) {
            var_s2 = 1;
            sp290 = 0;
        } else {
            var_s2 = 0;
            sp290 = 1;
        }

        var_a1_2 = MIN(MIN(var_s6, var_s7), MIN(var_s5, var_s4));

        if (arg2 < (var_a1_2 - 0x20)) {
            sp27C = 3;
            var_s2 = 1;
        } else {
            sp288 = MIN(0xFF, ((arg2 + 0x20) - var_a1_2) * 0x10);
        }

        if (abs((D_8010CC50[D_800E5144].unk10 >> 0xC) - var_a1_2)) {

        }

        temp_t3 = D_800E53A4[arg4 + 0][var_s3 + 0].unk6 << 2;
        var_t2 = D_800E53A4[arg4 + 1][var_s3 + 0].unk6 << 2;
        temp_a0_6 = D_800E53A4[arg4 + 0][var_s3 + 1].unk6 << 2;
        var_v1_5 = D_800E53A4[arg4 + 1][var_s3 + 1].unk6 << 2;

        temp_a2_3 = MAX(MAX(var_t2, temp_t3), MAX(var_v1_5, temp_a0_6));

        if ((temp_a2_3 < arg2) && ((var_s6 < temp_t3) || (var_s5 < var_t2) || (var_s4 < temp_a0_6) || (var_s7 < (var_v1_5)))) {
            sp284 = 1;
            var_s2 = 1;
            sp28C = MIN(0xFF, (arg2 - temp_a2_3) << 4);
        } else {
            sp284 = 0;
        }

        if (var_s2 != 0) {
            if (sp278 != 0) {
                func_8006F408(sp258, &spC0, sp25C, numVtx2, &numVtx1, &numVtx2, (var_s3 << 6));
                tmp = sp258;
                sp258 = sp25C;
                sp25C = tmp;
                sp278 = 0;
                func_80070190(numVtx1, &spC0, (s16) ((sp288 * arg3) >> 8), arg4, sp274, sp278, red, green, blue, sp264, sp268, sp26C, sp270);
            }
            func_8006F408(sp258, &spC0, sp25C, numVtx2, &numVtx1, &numVtx2, ((var_s3 + 1) << 6));
            tmp = sp258;
            sp258 = sp25C;
            sp25C = tmp;

            if (sp27C != 3) {
                if (sp290 != 0) {
                    if (numVtx1 >= 3) {
                        func_80070190(numVtx1, &spC0, (s16) ((sp288 * arg3) >> 8), arg4, var_s3, sp278, red, green, blue, var_s6, var_s4, var_s5, var_s7);
                        if (sp284 != 0) {
                            func_800704EC(numVtx1, &spC0, (s16) ((sp28C * arg3) >> 8), arg4, var_s3, red, green, blue);
                        }
                    }
                } else {
                    if (sp284 != 0) {
                        if (numVtx1 >= 3) {
                            func_800704EC(numVtx1, &spC0, (s16) ((sp28C * arg3) >> 8), arg4, var_s3, red, green, blue);
                        }
                    }
                    func_8006D384(&spC0, &sp140, &sp190, numVtx1, &sp200, &sp202, arg4, var_s3, sp27C, sp280);
                    if (sp200 >= 3) {
                        func_8006FC24(sp200, &sp140, (s16) ((sp288 * arg3) >> 8), arg4, var_s3, sp27C, sp280, 0, red, green, blue, var_s6, var_s4, var_s5, var_s7);
                    }
                    if (sp202 >= 3) {
                        func_8006FC24(sp202, &sp190, (s16) ((sp288 * arg3) >> 8), arg4, var_s3, sp27C, sp280, 1, red, green, blue, var_s6, var_s4, var_s5, var_s7);
                    }
                }
            }
        } else if (sp278 == 0) {
            sp264 = var_s6; // store previous?
            sp26C = var_s5; // store previous?
            sp268 = var_s4; // store previous?
            sp270 = var_s7; // store previous?
            sp274 = var_s3; // store previous?
            sp278 = sp27C;  // store previous?
        } else if ((sp278 != sp27C) || (((sp26C - sp264) != (var_s5 - var_s6))) || ( ((sp268 - sp264) != (var_s4 - var_s6)))) {
            func_8006F408(sp258, &spC0, sp25C, numVtx2, &numVtx1, &numVtx2,  (var_s3 << 0x6));
            sp264 = var_s6;
            sp26C = var_s5;
            sp268 = var_s4;
            sp270 = var_s7;
            sp274 = var_s3;
            sp278 = sp27C;
            func_80070190(numVtx1, &spC0, ((sp288 * arg3)) >> 8, arg4, sp274, sp278, red, green, blue, sp264, sp268, sp26C, sp270);
            tmp = sp258;
            sp258 = sp25C;
            sp25C = tmp;
        }
        var_s3++;
    }

    if (sp278 != 0) {
        func_80070190(numVtx2, sp258, ((sp288 * arg3)) << 8, arg4, sp274, sp278, red, green, blue, sp264, sp268, sp26C, sp270);
    }
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_75D3D0", func_8006C8DC);
#endif

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_75D3D0", func_8006D384);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_75D3D0", func_8006EBD0);

// sssv:func_8034FCFC_7613AC
#if 0
void func_8006F408(struct021 *src, struct021 *arg1, struct021 *arg2, s16 numVtxs, s16 *arg4, s16 *arg5, s16 arg6) {
    s16 i;

    s16 temp_s1;
    s16 temp_v0;
    s16 var_s2;
    s16 var_s3;
    s16 temp_a3;
    s16 var_v0;
    struct021 *tmp;
    s16 new_var;

    i = 1;

    new_var = *arg4; // only needed for SSSV

    var_s2 = src->unk2;

    if (src->unk2 < arg6) {
        arg1->unk0 = src[0].unk0;
        arg1->unk2 = src[0].unk2;
        arg1->unk4 = src[0].unk4;
        arg1->unk6 = src[0].unk6;

        *arg4 = i;
        *arg5 = 0;
    } else {
        arg2->unk0 = src[0].unk0;
        arg2->unk2 = src[0].unk2;
        arg2->unk4 = src[0].unk4;
        arg2->unk6 = src[0].unk6;

        *arg4 = 0;
        *arg5 = i;
    }

    while (i < numVtxs) {
        var_s3 = src[i].unk2;
        do { } while (0);

        if (var_s3 < arg6) {
            if ((var_s2 < arg6)) {
                arg1[*arg4].unk0 = src[i].unk0;
                arg1[*arg4].unk2 = src[i].unk2;
                arg1[*arg4].unk4 = src[i].unk4;
                arg1[*arg4].unk6 = src[i].unk6;
                *arg4 += 1;
            } else {
                temp_s1 = abs(var_s3 - arg6);
                temp_a3 = abs(var_s2 - arg6);
                temp_v0 = temp_s1 + temp_a3;

                arg1[*arg4].unk2 = arg6;
                arg1[*arg4].unk0 = ((temp_a3 * src[i].unk0) + (temp_s1 * src[i-1].unk0)) / temp_v0;
                arg1[*arg4].unk4 = ((temp_a3 * src[i].unk4) + (temp_s1 * src[i-1].unk4)) / temp_v0;
                arg1[*arg4].unk6 = ((temp_a3 * src[i].unk6) + (temp_s1 * src[i-1].unk6)) / temp_v0;

                arg2[*arg5].unk0 = arg1[*arg4].unk0;
                arg2[*arg5].unk2 = arg1[*arg4].unk2;
                arg2[*arg5].unk4 = arg1[*arg4].unk4;
                arg2[*arg5].unk6 = arg1[*arg4].unk6;

                *arg4 += 1;
                *arg5 += 1;

                arg1[*arg4].unk0 = src[i].unk0;
                arg1[*arg4].unk2 = src[i].unk2;
                arg1[*arg4].unk4 = src[i].unk4;
                arg1[*arg4].unk6 = src[i].unk6;
                *arg4 += 1;
            }

        } else if ((var_s2 >= arg6)) {
            arg2[*arg5].unk0 = src[i].unk0;
            arg2[*arg5].unk2 = src[i].unk2;
            arg2[*arg5].unk4 = src[i].unk4;
            arg2[*arg5].unk6 = src[i].unk6;
            *arg5 += 1;
        } else {
            temp_s1 = abs(var_s3 - arg6);
            temp_a3 = abs(var_s2 - arg6);
            temp_v0 = temp_s1 + temp_a3;

            arg1[*arg4].unk2 = arg6;
            arg1[*arg4].unk0 = ((temp_a3 * src[i].unk0) + (temp_s1 * src[i-1].unk0)) / temp_v0;
            arg1[*arg4].unk4 = ((temp_a3 * src[i].unk4) + (temp_s1 * src[i-1].unk4)) / temp_v0;
            arg1[*arg4].unk6 = ((temp_a3 * src[i].unk6) + (temp_s1 * src[i-1].unk6)) / temp_v0;

            arg2[*arg5].unk0 = arg1[*arg4].unk0;
            arg2[*arg5].unk2 = arg1[*arg4].unk2;
            arg2[*arg5].unk4 = arg1[*arg4].unk4;
            arg2[*arg5].unk6 = arg1[*arg4].unk6;

            *arg4 += 1;
            *arg5 += 1;

            arg2[*arg5].unk0 = src[i].unk0;
            arg2[*arg5].unk2 = src[i].unk2;
            arg2[*arg5].unk4 = src[i].unk4;
            arg2[*arg5].unk6 = src[i].unk6;
            *arg5 += 1;
        }
        var_s2 = var_s3;
        i++;
    }

    var_s3 = src->unk2;
    if (((var_s3 < arg6) && (var_s2 >= arg6)) ||
        ((var_s3 >= arg6) && (var_s2 < arg6))) {

        temp_s1 = abs(var_s3 - arg6);
        temp_a3 = abs(var_s2 - arg6);
        temp_v0 = temp_s1 + temp_a3;

        arg1[*arg4].unk2 = arg6;

        // HELP!
        tmp = &src[i];
        arg1[*arg4].unk0 = (((temp_a3 * src->unk0) + (temp_s1 * (tmp - 1)->unk0)) / temp_v0);
        arg1[*arg4].unk4 = (((temp_a3 * src->unk4) + (temp_s1 * (tmp - 1)->unk4)) / temp_v0);
        arg1[*arg4].unk6 = (((temp_a3 * src->unk6) + (temp_s1 * (tmp - 1)->unk6)) / temp_v0);

        arg2[*arg5].unk0 = arg1[*arg4].unk0;
        arg2[*arg5].unk2 = arg1[*arg4].unk2;
        arg2[*arg5].unk4 = arg1[*arg4].unk4;
        arg2[*arg5].unk6 = arg1[*arg4].unk6;

        *arg4 += 1;
        *arg5 += 1;
    }
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_75D3D0", func_8006F408);
#endif


#if 0

typedef struct {
  s16 unk0;
  s16 unk2;
  s16 unk4;
  u8  pad6[0x2];
} struct022;

typedef struct {
  u8  pad0[0x30];
  s32 unk30;
} struct024;


extern struct024 *D_800E40E0;

void func_8006B88C(s32, s32, s32, void*, u8, u8, u8);

void func_8006FC24(s16 numVtxs, struct021 *vtxs, s16 arg3, s16 arg4, u8 arg6, u8 arg7, s16 red, s16 green, s16 blue, s32 argB, s32 argC, s32 argD, s32 argE) {
    s16 temp_v0;
    s16 temp_v1;
    s16 var_s7;
    s32 var_a0;
    s32 var_a1;
    s16 i;
    s32 var_lo;
    s32 var_v0;

    struct021 *var_a2;
    struct021 *var_t0;

    D_800E4BC8 = 0;

    var_s7 = ((abs(((s32) D_8010CC50[D_800E5144].unk10 >> 0xC) - (s16)((argB + argE) >> 1)) + 0x100) * 2) >> 8;
    if (var_s7 > 4) {
        var_s7 = (var_s7 >> 1) + 2;
    }

    if (arg6 != 0) {

        if (arg7 == 0) {
            var_a0 = MAX(MAX(argB, argE), argD) - MIN(MIN(argB, argE), argD);
        } else {
            var_a0 = MAX(MAX(argB, argE), argC) - MIN(MIN(argB, argE), argC);
        }

        if (abs(var_a0) < 0xC1) {
            for (i = 0; i < numVtxs; i++) {
                temp_v0 = vtxs[i].unk0 - (arg3 << 6);
                temp_v1 = vtxs[i].unk2 - (arg4 << 6);

                if (temp_v0 < temp_v1) {
                    var_v0 = ((((argE - argC) * temp_v0) + ((argC - argB) * temp_v1)) >> 6) + (argB);
                } else {
                    var_v0 = ((((argD - argB) * temp_v0) + ((argE - argD) * temp_v1)) >> 6) + (argB);
                }
                D_80112FD8[D_800E4BC8].unk0 = vtxs[i].unk0;
                D_80112FD8[D_800E4BC8].unk4 = vtxs[i].unk2;
                D_80112FD8[D_800E4BC8].unk2 = var_s7 + var_v0;
                D_800E4BC8++;
            }
        } else {
            return;
        }
    } else {
        if (arg7 == 0) {
            var_a0 = MAX(MAX(argD, argB), argC) - MIN(MIN(argD, argB), argC);
        } else {
            var_a0 = MAX(MAX(argD, argE), argC) - MIN(MIN(argD, argE), argC);
        }

        if (abs(var_a0) < 0xC1) {

            for (i = 0; i < numVtxs; i++) {
                temp_v0 = vtxs[i].unk0 - (arg3 << 6);
                temp_v1 = vtxs[i].unk2 - (arg4 << 6);

                if ((temp_v0 + temp_v1) < 0x40) {
                    var_v0 = (((argB << 6) + ((argD - argB) * (       temp_v0))) + ((argC - argB) * (       temp_v1))) >> 6;
                } else {
                    var_v0 = (((argE << 6) + ((argC - argE) * (0x40 - temp_v0))) + ((argD - argE) * (0x40 - temp_v1))) >> 6;
                }
                D_80112FD8[D_800E4BC8].unk0 = vtxs[i].unk0;
                D_80112FD8[D_800E4BC8].unk4 = vtxs[i].unk2;
                D_80112FD8[D_800E4BC8].unk2 = var_s7 + var_v0;
                D_800E4BC8++;
            }
        } else {
            return;
        }
    }

    for (i = 0; i < numVtxs; i++) {
        D_80112FD8[i].unk0 *= 4;
        D_80112FD8[i].unk2 *= 4;
        D_80112FD8[i].unk4 *= 4;
    }
    func_800169CC(numVtxs, &D_80112FD8, &D_80113058, &D_800E40E0->unk30);

    for (i = 2; i < numVtxs; i++) {
        if (i < (numVtxs - 1)) {
            // draw_triangle x2 (quad)
            func_8006B88C(0, i - 1, i    , vtxs, red, green, blue);
            func_8006B88C(0, i    , i + 1, vtxs, red, green, blue);
            i++;
        } else {
            // draw_triangle
            func_8006B88C(0, i - 1, i    , vtxs, red, green, blue);
        }
    }
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_75D3D0", func_8006FC24);
#endif

// sssv:func_80351390_762A40
void func_80070190(s16 numVtxs, struct021 *vtxs, s32 arg2, s16 arg3, s16 arg4, s32 arg5, s16 arg6, s16 arg7, s16 arg8, s32 arg9, s32 argA, s32 argB, s32 argC) {
    s16 temp_v0;
    s16 i;
    s16 tmp1;
    s16 tmp2;
    s32 tmp3;
    s16 tmp4;

    D_800E4BC8 = 0;

    if (numVtxs >= 3) {
        if (abs(MAX(MAX(arg9, argC), MAX(argA, argB)) - MIN(MIN(arg9, argC), MIN(argA, argB))) <= 192) {
            tmp4 = ((arg9 + argC) >> 1);
            temp_v0 = ((abs((D_8010CC50[D_800E5144].unk10 >> 0xC) - tmp4) + 0x100) * 2) >> 8;
            if (temp_v0 > 4) {
                temp_v0 = (temp_v0 >> 0x1) + 2;
            }

            for (i = 0; i < numVtxs; i++) {
                tmp1 = vtxs[i].unk0 - (arg3 << 6);
                tmp2 = vtxs[i].unk2 - (arg4 << 6);

                tmp3 = (arg9 + ((((argB - arg9) * tmp1) + ((argA - arg9) * tmp2)) >> 6));

                D_80112FD8[D_800E4BC8].unk0 = vtxs[i].unk0;
                D_80112FD8[D_800E4BC8].unk4 = vtxs[i].unk2;
                D_80112FD8[D_800E4BC8].unk2 = temp_v0;
                D_80112FD8[D_800E4BC8].unk2 += tmp3;
                D_800E4BC8++;
            }

            for (i = 0; i < numVtxs; i++) {
                D_80112FD8[i].unk0 *= 4;
                D_80112FD8[i].unk2 *= 4;
                D_80112FD8[i].unk4 *= 4;
            }

            func_800169CC(numVtxs, &D_80112FD8, &D_80113058, D_800E40E0 + 0x30);

            for (i = 2; i < numVtxs; i++) {
                if (i < (numVtxs - 1)) {
                    // draw 2 tris
                    func_8006B88C(0, i - 1, i    , vtxs, arg6, arg7, arg8);
                    func_8006B88C(0, i    , i + 1, vtxs, arg6, arg7, arg8);
                    i++;
                } else {
                    // draw 1 tri
                    func_8006B88C(0, i - 1, i    , vtxs, arg6, arg7, arg8);
                }
            }
        }
    }
}

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_75D3D0", func_800704EC);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_75D3D0", func_8007080C);
