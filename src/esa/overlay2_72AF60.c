#include "common.h"

// sssv:func_803198B0_72AF60
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_72AF60", func_8004C944);

// sssv:func_80319AA0_72B150
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_72AF60", func_8004CAEC);

// sssv:func_80319AC4_72B174
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_72AF60", func_8004CB10);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_72AF60", get_closest_waypoint_index);

// sssv:func_80319C38_72B2E8
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_72AF60", func_8004CCCC);

// sssv:func_80319E1C_72B4CC
u8 func_8004CE44(u8 arg0, u8 arg1, u8 arg2, u8 idx, u8 arg4) {
    u8 ret = 0;

    if ((arg0 >= D_801114EC[idx].unk0) && (D_801114EC[idx].unk3 >= arg0) &&
        (arg1 >= D_801114EC[idx].unk1) && (D_801114EC[idx].unk4 >= arg1)) {

        switch (D_801114EC[idx].unk2) {
        case 240:
            ret = 1;
            break;
        case 241:
            if (arg4 == 2) {
                ret = 1;
            }
            break;
        case 242:
            if (arg4 == 1) {
                ret = 1;
            }
            break;
        case 243:
            if ((arg4 == 2) || (arg4 == 0)) {
                ret = 1;
            }
            break;
        case 244:
            if ((arg4 == 1) || (arg4 == 0)) {
                ret = 1;
            }
            break;
        default:
            if ((arg2 >= D_801114EC[idx].unk2) && (D_801114EC[idx].unk5 >= arg2)) {
                ret = 1;
            }
            break;
        }
    }
    return ret;
}

// sssv:func_80319F58_72B608
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_72AF60", func_8004CF6C);
