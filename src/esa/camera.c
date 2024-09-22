#include "common.h"

s16 D_800E5120;
s8  D_800E514C;

s32 D_800E5158; // defined in camera
s32 D_800E515C; // defined in camera

// tbd
s16 func_8001D8F4(s16, s16, s16, s16, s16, s16, s16, u8, u8, u8);


// sssv:func_8032F950_741000
INCLUDE_ASM("asm/esa/nonmatchings/camera", func_80021154);

// sssv:func_8032FD0C_7413BC
INCLUDE_ASM("asm/esa/nonmatchings/camera", func_800214CC);

// sssv:func_8032FF94_741644 ???
INCLUDE_ASM("asm/esa/nonmatchings/camera", func_80021750);

// sssv:func_80334470_745B20
INCLUDE_ASM("asm/esa/nonmatchings/camera", func_80023020);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_800247F8);

// sssv:func_8033641C_747ACC
INCLUDE_ASM("asm/esa/nonmatchings/camera", func_80025ECC);

// sssv:func_803378BC_748F6C
INCLUDE_ASM("asm/esa/nonmatchings/camera", func_80026E0C);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_80027320);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_80027E30);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_8002816C);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_800281B0);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_800281F4);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_80028238);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_80028338);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_800287B4);

// sssv:func_8033AAC8_74C178
INCLUDE_ASM("asm/esa/nonmatchings/camera", func_800292B8);

#if 0
typedef struct {
    u8 length;
    u8 unk1;
    u8 unk2;
    u8 unk3;
} WaypointData;

void func_80029438(s32 *arg0, s32 *arg1, s32 *arg2, WaypointData *arg3, s16 arg4) {
    s16 temp_v0;
    s16 var_v0;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_ret;
    f32 temp_s1;
    s32 temp_t0;
    s32 temp_t3;
    s32 temp_t6;
    s32 temp_t7;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 var_v0_2;
    WaypointData *temp_a3_2;
    WaypointData *temp_t1;
    WaypointData *temp_t2;
    WaypointData *temp_t4;

    s16 sp4E;
    s16 sp4C;
    s16 sp4A;
    s16 sp48;

    // if (arg4 < 0) {
    //     var_v0 = arg4 + 0x1F;
    // } else {
    //     var_v0 = arg4;
    // }

    temp_a2 = arg4 / 32; // var_v0 >> 5;
    temp_v0 = arg4 - (temp_a2 << 5);
    if ((temp_a2 - 1) < 0) {

    }
    if ((arg3->length - 1) < (temp_a2 + 1)) {

    }
    if ((arg3->length - 1) < (temp_a2 + 2)) {

    }

    // var_v0_2 = temp_v0 << 0xC;
    // if (temp_v0 & 0x80000) {
    //     var_v0_2 += 0x1F;
    // }
    temp_s1 = temp_v0 / 32; // >> 5;

    temp_v0_2 = temp_s1 * temp_s1; // func_80017428(temp_s1, temp_s1);
    temp_v0_3 = temp_s1 * temp_v0_2; //func_80017428(temp_s1, temp_v0_2);
    // temp_v0_3 = temp_ret;
    temp_a3 = temp_v0_2 * 3;
    temp_a2_2 = temp_s1 * 3;
    temp_v1 = temp_v0_3 * 3;
    // temp_t4 = (subroutine_arg4 * 3) + arg3;
    temp_t0 = (((temp_a3 - temp_v0_3) - temp_a2_2) + 0x1000) / 6;
    // temp_t2 = (subroutine_arg4 * 3) + arg3;
    temp_t7 = ((temp_v1 - (temp_v0_2 * 6)) + 0x4000) / 6;
    // temp_t1 = (subroutine_arg5 * 3) + arg3;
    temp_t6 = ((temp_a3 - temp_v1) + temp_a2_2 + 0x1000) / 6;
    // temp_a3_2 = (subroutine_arg5 * 3) + arg3;
    temp_t3 = temp_v0_3 / 6;
    *arg0 = ((temp_t0 * temp_t4->unk1) + (temp_t7 * temp_t2->unk1) + (temp_t6 * temp_t1->unk1) + (temp_t3 * temp_a3_2->unk1)) << 6;
    *arg1 = ((temp_t0 * temp_t4->unk2) + (temp_t7 * temp_t2->unk2) + (temp_t6 * temp_t1->unk2) + (temp_t3 * temp_a3_2->unk2)) << 6;
    *arg2 = ((temp_t0 * temp_t4->unk3) + (temp_t7 * temp_t2->unk3) + (temp_t6 * temp_t1->unk3) + (temp_t3 * temp_a3_2->unk3)) << 6;
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/camera", func_80029438);
#endif

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_800296E8);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_80029934);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_800299F0);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_80029CD8);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_8002A224);

// sssv:func_8033C320_74D9D0
void func_8002A3C0(void) {
    D_800E514C = 1;
}

INCLUDE_ASM("asm/esa/nonmatchings/camera", reset_camera);

// sssv:func_8033C814_74DEC4
s16 func_8002A8D4(s16 arg0, s16 arg1, s16 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, u8 arg8) {
    s32 sp28;
    s32 sp2C;
    s32 sp30;

    func_8002B6A8(arg3, arg4, arg5 + FROM_FLOAT(10.0), &sp28, &sp2C, &sp30);
    sp28 += arg6;
    sp2C += arg7;
    return func_8001D8F4(arg0, arg1, arg2, 0x7F, TO_FLOAT(sp28), TO_FLOAT(sp2C), TO_FLOAT(sp30), 0x7F, 1, arg8);
}

// sssv:func_8033C8EC_74DF9C
s16 func_8002A9D0(s16 arg0, s16 arg1, s16 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 sp28;
    s32 sp2C;
    s32 sp30;

    func_8002B6A8(arg3, arg4, arg5 + FROM_FLOAT(10.0), &sp28, &sp2C, &sp30);
    sp28 = sp28 + arg6;
    sp2C = sp2C + arg7;
    return func_8001D8F4(arg0, arg1, arg2, 0x7F, TO_FLOAT(sp28), TO_FLOAT(sp2C), ((TO_FLOAT(sp30)) + 34), 0x7F, 1, 0);
}

#if 0
// sssv:func_8033D604_74ECB4
s32 func_8002AAC8(s16 arg0, s16 arg1, s16 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s32 var_v0;
    s16 temp_a3;
    s16 temp_a3_2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s16 var_s4;
    s16 var_s5;
    s16 var_t2;
    s16 var_v0_5;
    s16 var_v0_6;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a1;
    s32 var_a2;
    s32 var_lo;
    s32 var_lo_2;
    s32 var_lo_3;
    s32 var_lo_4;
    s32 var_s3;
    s32 var_s7;
    s32 var_t1;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    u32 var_s6;

    // var_s3 = saved_reg_s3;
    // var_s7 = saved_reg_s7;
    sp34 = (s32) arg2;

    if (D_800E5120 == 0) {
        sp58 = (s32) arg0;
        func_8002B6A8(arg3, arg4, arg5, &sp28, &sp2C, &sp30);
        sp28 = sp28 + arg6;
        temp_v1 = (s32) (sp28 * 0x10) >> 0x10;
        sp38 = temp_v1;

        var_s5 = sp38 - arg0;
        temp_a1 = sp2C + arg7;
        sp3C = (s32) (temp_a1 * 0x10) >> 0x10;
        var_s4 = sp3C - arg1;
        sp2C = temp_a1;
        temp_v1_2 = (s32) (sp30 * 0x10) >> 0x10;
        sp40 = temp_v1_2;
        sp44 = (s32) (s16) (temp_v1_2 - sp34);

        if (var_s5 == 0) {
            var_s5 = 1;
        }
        if (var_s4 == 0) {
            var_s4 = 1;
        }
        var_s6 = (u32) var_s4 >> 0x1F;
        if (var_s5 < 0) {
            var_s6 = 3;
            if (var_s4 >= 0) {
                var_s6 = 2;
            }
        }

        var_t1 = sp58;
        var_a2 = sp34;
        var_t2 = arg1;

        switch(var_s6) {
        case 0:
            var_s7 = ((0x400 - (var_t1 & 0x3FF)) << 0xE) / var_s5;
            sp50 = 0x01000000 / var_s5;
            var_s3 = ((0x400 - (var_t2 & 0x3FF)) << 0xE) / var_s4;
            sp54 = 0x01000000 / var_s4;
            break;
        case 1:
            var_s7 = ((0x400 - (var_t1 & 0x3FF)) << 0xE) / var_s5;
            sp50 = 0x01000000 / var_s5;
            var_v1_2 = var_t2 & 0x3FF;
            var_s3 = (var_v1_2 << 0xE) / -var_s4;
            sp54 = 0x01000000 / -var_s4;
            break;
        case 2:
            var_s7 = ((var_t1 & 0x3FF) << 0xE) / -var_s5;
            sp50 = 0x01000000 / -var_s5;
            var_s3 = ((0x400 - (var_t2 & 0x3FF)) << 0xE) / var_s4;
            sp54 = 0x01000000 / var_s4;
            break;
        case 3:
            // temp_v0 = -var_s5;
            var_s7 = ((var_t1 & 0x3FF) << 0xE) / -var_s5;
            sp50 = 0x01000000 / -var_s5;
            var_v1_2 = var_t2 & 0x3FF;
            var_s3 = (var_v1_2 << 0xE) / -var_s4;
            sp54 = 0x01000000 / -var_s4;
            break;

        }


        sp48 = sp58 >> 0xA;
        var_v0_3 = var_s3 < 0x4000;
        sp4C = arg1 >> 0xA;
loop_49:
        var_v0_4 = var_s7 < var_s3;
        if (var_v0_3 == 0) {
            if (var_s7 >= 0x4000) {
                var_v0 = 3;
                if (func_8002B0E4((s16) var_t1, var_t2, (s16) var_a2, (s16) sp38, sp3C, sp40, sp48, sp4C, sp58, (s32) arg1) != 3) {
                    goto block_52;
                }
                /* Duplicate return node #53. Try simplifying control flow for better match */
                return var_v0;
            }
            var_v0_4 = var_s7 < var_s3;
            goto block_24;
        }
block_24:
        if (var_v0_4 == 0) {
            if (var_s6 != 1) {
                if ((s32) var_s6 < 2) {
                    var_lo = var_s3 * var_s5;
                    if (var_s6 != 0) {
                        goto block_38;
                    }
                    goto block_33;
                }
                if (var_s6 != 2) {
                    var_lo_2 = var_s3 * var_s5;
                    if (var_s6 != 3) {
                        goto block_38;
                    }
                    goto block_35;
                }
                var_lo = var_s3 * var_s5;
block_33:
                var_v1_3 = var_lo;
                var_lo_3 = var_s3 * var_s4;
                var_v0_5 = sp4C + 1;
                goto block_36;
            }
            var_lo_2 = var_s3 * var_s5;
block_35:
            var_v1_3 = var_lo_2;
            var_lo_3 = var_s3 * var_s4;
            var_v0_5 = sp4C - 1;
block_36:
            sp4C = (s32) var_v0_5;
            temp_v1_3 = sp58 + (var_v1_3 >> 0xE);
            temp_a3 = arg1 + (var_lo_3 >> 0xE);
            temp_v0_4 = sp34 + ((s32) (var_s3 * sp44) >> 0xE);
            var_t1 = (s32) temp_v1_3;
            if (func_8002B0E4((s16) var_t1, var_t2, (s16) var_a2, temp_v1_3, (s32) temp_a3, (s32) temp_v0_4, sp48, sp4C) != 3) {
                var_t2 = temp_a3;
                var_a2 = (s32) temp_v0_4;
block_38:
                var_s3 += sp54;
                goto block_48;
            }
            goto block_18;
        }
        if ((s32) var_s6 >= 0) {
            if ((s32) var_s6 >= 2) {
                if ((s32) var_s6 < 4) {
                    var_lo_4 = var_s7 * var_s4;
                    var_v0_6 = sp48 - 1;
                    goto block_45;
                }
                goto block_47;
            }
            var_lo_4 = var_s7 * var_s4;
            var_v0_6 = sp48 + 1;
block_45:
            sp48 = (s32) var_v0_6;
            temp_v1_4 = sp58 + ((var_s7 * var_s5) >> 0xE);
            temp_a3_2 = arg1 + (var_lo_4 >> 0xE);
            temp_v0_5 = sp34 + ((s32) (var_s7 * sp44) >> 0xE);
            var_t1 = (s32) temp_v1_4;
            if (func_8002B0E4((s16) var_t1, var_t2, (s16) var_a2, temp_v1_4, (s32) temp_a3_2, (s32) temp_v0_5, sp48, sp4C) != 3) {
                var_t2 = temp_a3_2;
                var_a2 = (s32) temp_v0_5;
                goto block_47;
            }
block_18:
            return 3;
        }
block_47:
        var_s7 += sp50;
block_48:
        var_v0_3 = var_s3 < 0x4000;
        goto loop_49;
    }

block_52:
    var_v0 = 0;
    return var_v0;
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/camera", func_8002AAC8);
#endif

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_8002B0E4);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_8002B460);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_8002B6A8);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_8002B7B4);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_8002BD20);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_8002BF04);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_8002BF58);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_8002BF6C);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_8002BFF4);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_8002D0CC);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_8002D1A8);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_8002DB28);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_8002E6A0);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_8002E6C4);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_8002E78C);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_8002E7EC);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_8002E92C);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_8002F554);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_8002F85C);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_8002FB14);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_8002FB9C);

// sssv:func_80343C44_7552F4
void func_8002FD44(s16 idx, u16* cameraMode , u16* arg2) {
    *cameraMode  = D_800CCF6C[(idx * 2)];
    *arg2 = D_800CCF6C[(idx * 2) + 1];
}

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_8002FD7C);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_8002FE74);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_8002FEE4);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_80030070);

INCLUDE_ASM("asm/esa/nonmatchings/camera", func_8003007C);

// sssv:func_80344158_755808
s32 func_80030264(s16 arg0) {

    switch (arg0) {
    case 3:
    case 5:
    case 6:
    case 7:
    case 17:
    case 28:
        return 1;
    default:
        return 0;
    }
}

// sssv:func_8034419C_75584C
INCLUDE_ASM("asm/esa/nonmatchings/camera", func_800302AC);
