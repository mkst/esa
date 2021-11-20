#include "common.h"

extern u16 D_800E52C0;

INCLUDE_ASM(s32, "534B0", func_80062EB0);

INCLUDE_ASM(s32, "534B0", func_80062EF4);

// func_802DB940_6ECFF0
void func_80062F98(s16 *arg0, s16 arg1, u16 arg2) {
    if (*arg0 != arg1) {
        s16 tmp = arg1 - *arg0;
        if (tmp < 0) {
            tmp += 256;
        }
        if (tmp < 128) {
            *arg0 += arg2;
            if ((tmp - arg2) < 0) {
                *arg0 = arg1;
            }
            if (*arg0 >= 256) {
                *arg0 -= 256;
            }
        } else {
            *arg0 -= arg2;
            if ((tmp + arg2) > 256) {
                *arg0 = arg1;
            }
            if (*arg0 < 0) {
                *arg0 += 256;
            }
        }
    }
}

// func_802DB9E8_6ED098
void func_8006303C(s16 *arg0, s16 arg1, u16 arg2) {
    if (*arg0 != arg1) {
        if (*arg0 < arg1) {
            *arg0 += arg2;
            if (arg1 < *arg0) {
                *arg0 = arg1;
            }
        } else {
            *arg0 -= arg2;
            if (*arg0 < arg1) {
                *arg0 = arg1;
            }
        }
    }
}

// func_802DBA58_6ED108
INCLUDE_ASM(s32, "534B0", func_8006309C);

// func_802DBB64_6ED214
// matches with -O1
INCLUDE_ASM(s32, "534B0", func_80063164);
// void func_80063164(u8 *arg0, u16 *arg1, u16 arg2) {
//     *arg0 = arg2;
//     do {
//         *arg1 = D_800E52C0;
//     } while (0);
// }
