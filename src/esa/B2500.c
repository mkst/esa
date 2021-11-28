#include "common.h"


INCLUDE_ASM("asm/esa/nonmatchings/B2500", _err_math);
// s32 _err_math(s32 arg0, s32 arg1) {
//
//     D_800E2C78 = arg0;
//     D_800E2C7C = arg1;
//
//     switch (arg0) {
//     case 33:
//         // fixed point maybe?
//         func_800C1148(0xF4000002, 769);
//         break;
//     case 34:
//         func_800C1148(0xF4000002, 770);
//         break;
//     }
//
//     return 0;
// }
