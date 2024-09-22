#include "common.h"

// sssv:camera/func_8033C9CC_74E07C
#if 0
s16 func_8001D8F4(s16 arg0, s16 arg1, s16 arg2, u8 arg3, s16 arg4, s16 arg5, s16 arg6, u8 arg7, u8 arg8, u8 arg9) {
    // s32 sp18;
    // s32 arg1;
    // s32 arg3;
    // s32 arg4;
    // s32 arg5;
    // s32 arg6;
    // s32 arg8;
    // s32 arg9;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 var_s1;
    s16 var_s4;
    s16 var_s5;
    s16 var_v0_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_s2;
    s32 var_a1;
    s32 var_fp;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s6;
    s32 var_v0;
    s32 var_v0_3;
    u32 var_s3;
    // u8 arg7;

    // arg7 = arg7;

    if (arg7 == 0x7F) {
        if (((u32) (arg4 & 0xFFFF) < 0x1201U) && (arg5 >= 0) && ((arg5 < 0x2001) || ((arg9 != 0) && ((u32) (arg4 - 4) >= 0x40U)))) {
            if (arg6 < (func_800373B0(arg4, arg5) >> 0x10)) {
                if ((arg8 == 0) || ((D_800E53A4[(arg4 >> 6)][(arg5 >> 6)].unk4 & 0x40) == 0)) {
                    var_v0 = 1;
                    if (arg9 != 0) {
                        var_v0 = 1;
                        if ((u32) (arg4 - 4) >= 0x40U) {
                            goto block_11;
                        }
                    }
                } else {
                    goto block_12;
                }
            } else {
block_11:
block_12:
                arg7 = 0;
                if ((D_800E53A4[(arg4 >> 6)][(arg5 >> 6)].unk3) != 0) {
                    arg7 = 1;
                    if ((func_800370FC(arg4, arg5) >> 0x10) < arg6) {
                        arg7 = 2;
                    }
                }
                goto block_16;
            }
        } else {
            arg7 = 0;
block_16:
            goto block_17;
        }
    } else {
block_17:
        temp_s2 = arg0 - 0x41;
        if (arg3 == 0x7F) {
            if (((u32) (temp_s2 & 0xFFFF) < 0x117FU) && (arg1 >= 0x41) && (arg1 < 0x1FC0)) {
                if (arg2 < (func_800373B0(arg0, arg1) >> 0x10)) {
                    if ((arg8 == 0) || !((D_800E53A4[(arg0 >> 6)][(arg1 >> 6)].unk4) & 0x40)) {
                        var_v0 = 1;
                        if (arg9 != 0) {
                            var_v0 = 1;
                            if ((u32) (arg4 - 4) >= 0x40U) {
                                goto block_26;
                            }
                        }
                    } else {
                        goto block_26;
                    }
                } else {
block_26:
                    if ((D_800E53A4[(arg0 >> 6)][(arg1 >> 6)].unk3) != 0) {
                        arg3 = 1;
                        if ((func_800370FC(arg0, arg1) >> 0x10) < arg2) {
                            arg3 = 2;
                        }
                    } else {
                        arg3 = 0;
                        goto block_31;
                    }
                    goto block_31;
                }
            } else {
                arg3 = 0;
                goto block_31;
            }
        } else {
block_31:

            var_s1 = arg2 + 4;
            if ((arg0 > (1*64)) && (arg0 < (71*64)) &&
                (arg1 > (1*64)) && (arg1 < (127*64))) {
                var_s1 = MAX((func_800373B0(arg0, arg1) >> 0x10) + 4, var_s1);
            }

            var_s5 = arg0 - arg4;
            var_s4 = arg1 - arg5;

            sp38 = (s32) (s16) (var_s1 - arg6);
            if (var_s5 == 0) {
                var_s5 = 1;
            }
            if (var_s4 == 0) {
                var_s4 = 1;
            }
            var_s3 = (u32) var_s4 >> 0x1F;
            if (var_s5 < 0) {
                var_s3 = 3;
                if (var_s4 >= 0) {
                    var_s3 = 2;
                }
            }

            switch (var_s3) {                       /* irregular */
            case 0:
                var_fp = ((0x40 - (arg4 & 0x3F)) << 0xE) / var_s5;
                sp3C = 0x100000 / var_s5;
                var_s6 = ((0x40 - (arg5 & 0x3F)) << 0xE) / var_s4;
                sp40 = 0x100000 / var_s4;
                break;
            case 1:
                var_fp = ((0x40 - (arg4 & 0x3F)) << 0xE) / var_s5;
                sp3C = 0x100000 / var_s5;
                var_s6 = ((arg5 & 0x3F) << 0xE) / -var_s4;
                sp40 = 0x100000 / -var_s4;
                break;
            case 2:
                var_fp = ((arg4 & 0x3F) << 0xE) / -var_s5;
                sp3C = 0x100000 / -var_s5;
                var_s6 = ((0x40 - (arg5 & 0x3F)) << 0xE) / var_s4;
                sp40 = 0x100000 / var_s4;
                break;
            case 3:
                var_fp = ((arg4 & 0x3F) << 0xE) / -var_s5;
                sp3C = 0x100000 / -var_s5;
                var_s6 = ((arg5 & 0x3F) << 0xE) / -var_s4;
                sp40 = 0x100000 / -var_s4;
                break;
            }

            var_s1_2 = arg4 >> 6;
            var_s2 = arg5 >> 6;

loop_92:
            // var_v0_3 = var_fp < var_s6;
            if ((var_s6 >= 0x4000) && (((var_fp < 0x4000) == 0))) {
                if (((arg7 == 2) && (arg3 == 1)) || ((var_v0 = 0, (arg7 == 1)) && (arg3 == 2))) {
                    var_v0 = 2;
                    if (arg8 != 0) {
                        if (!(D_800E53A4[(arg0 >> 6)][(arg1 >> 6)].unk4 & 0x80)) {
                            var_v0 = 2;
                        } else {
                            var_v0 = 0;
                        }
                    }
                }
            } else if ((var_fp < var_s6) == 0) {
                switch (var_s3) {                   /* switch 1; irregular */
                case 2:                             /* switch 1 */
                case 0:                             /* switch 1 */
                    if (arg7 == 3) {
                        arg7 = 0;
                    }
                    temp_a1 = var_s2;
                    var_s2 = (s32) (s16) (temp_a1 + 1);
                    arg7 = func_80038B04(
                        (s16) var_s1_2,
                        (s16) temp_a1,
                        (s16) ((arg4 + ((s32) (var_s6 * var_s5) >> 0xE)) - (var_s1_2 << 6)),
                        (s16) (arg6 + ((s32) (var_s6 * sp38) >> 0xE)),
                        (s32) (s8) arg7, arg8) & 0xFF;
block_74:
                    if (arg7 == 3) {
                        if (arg9 != 0) {
                            var_v0 = 2;
                            if ((u32) (var_s1_2 - 4) >= 0x40U) {
                                goto block_77;
                            }
                        } else {
                            // goto block_100;
                            var_v0 = 2;
                        }
                    } else {
                    default:                        /* switch 1 */
block_77:
                        var_s6 += sp40;
                        goto loop_92;
                    }
                    break;
                case 1:                             /* switch 1 */
                case 3:                             /* switch 1 */
                    if (arg7 == 3) {
                        arg7 = 0;
                    }
                    temp_a1_2 = var_s2;
                    var_s2 = (s32) (s16) (temp_a1_2 - 1);
                    arg7 = func_800387A0((s16) var_s1_2, (s16) temp_a1_2, (s16) ((arg4 + ((s32) (var_s6 * var_s5) >> 0xE)) - (var_s1_2 << 6)), (s16) (arg6 + ((s32) (var_s6 * sp38) >> 0xE)), (s32) (s8) arg7, arg8) & 0xFF;
                    goto block_74;
                }
            } else if ((s32) var_s3 >= 0) {
                if ((s32) var_s3 >= 2) {
                    if ((s32) var_s3 < 4) {
                        if (arg7 == 3) {
                            arg7 = 0;
                        }
                        temp_a0 = var_s1_2;
                        var_s1_2 = (s32) (s16) (temp_a0 - 1);
                        arg7 = func_800380B8((s16) temp_a0, (s16) var_s2, (s16) ((arg5 + ((s32) (var_fp * var_s4) >> 0xE)) - (var_s2 << 6)), (s16) (arg6 + ((s32) (var_fp * sp38) >> 0xE)), (s32) (s8) arg7, arg8) & 0xFF;
                        goto block_88;
                    }
                    var_fp += sp3C;
                    goto loop_92;
                }
                if (arg7 == 3) {
                    arg7 = 0;
                }
                temp_a0_2 = var_s1_2;
                var_s1_2 = (s32) (s16) (temp_a0_2 + 1);
                arg7 = func_80038430((s16) temp_a0_2, (s16) var_s2, (s16) ((arg5 + ((s32) (var_fp * var_s4) >> 0xE)) - (var_s2 << 6)), (s16) (arg6 + ((s32) (var_fp * sp38) >> 0xE)), (s32) (s8) arg7, arg8) & 0xFF;
block_88:
                if (arg7 == 3) {
                    if (arg9 != 0) {
                        var_v0 = 2;
                        if ((u32) (var_s1_2 - 4) >= 0x40U) {
                        var_fp += sp3C;
                        goto loop_92;
                        }
                    } else {
                        var_v0 = 2;
                    }
                } else {
                    var_fp += sp3C;
                    goto loop_92;
                }
            } else {
// block_91:
                var_fp += sp3C;
                goto loop_92;
            }
        }
    }

    return var_v0;
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/DEF4", func_8001D8F4);
#endif
