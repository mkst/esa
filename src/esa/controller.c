#include "common.h"

// .sdata
s32 D_800E4154 = 174823885; //0x0a6b99cd

#if 0
// v0/v1 swapped
void func_8001CE60(void) {
    u32 temp_3 = D_800E4154 << 2;
    D_800E4154 = ((temp_3 + 2) * (temp_3 + 3)) >> 2;
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/controller", func_8001CE60);
#endif

void func_8001CE8C(s32 arg0) {
    if (arg0 == 0) {
        arg0 = rand();
    }
    D_800E4154 = arg0;
}

u16 func_8001CEB4(void) {
    return rand();
}

s16 func_8001CED4(s16 idx) {
    if (idx >= 0) {
        return D_800C99CC[idx];
    } else {
        return -D_800C99CC[-idx];
    }
}


s16 func_8001CF24(s16 arg0) {
    if (arg0 >= 0) {
        return 90 - D_800C99CC[arg0];
    } else {
        return 90 + D_800C99CC[-arg0];
    }
}

s8 func_8001CF7C(u8 idx) {
    return D_800C9BD4[idx];
}

s16 func_8001CF98(s16 arg0) {
    if (arg0 > 2047) {
        return 89;
    } else
    if (arg0 < -2047) {
        return -89;
    } else
    if (arg0 < 0) {
        return -D_800C91CC[-arg0];
    } else {
        return D_800C91CC[arg0];
    }
}

s16 func_8001CFEC(s16 arg0, s16 arg1) {
    s16 res;

    if (abs(arg0) < abs(arg1)) {
        if (arg1 > 0) {
            res = func_8001CF98((arg0 * 64) / arg1);
            if (res < 0) {
                res += 360;
            }
        } else if (arg1 < 0) {
            res = (func_8001CF98(((arg0 * 64) / arg1)) + 180);
        } else if (arg0 >= 0) {
            res = 90;
        } else {
            res = 270;
        }
    } else if (arg0 > 0) {
        res = 90 - func_8001CF98((arg1 * 64) / arg0);
    } else if (arg0 < 0) {
        res = 270 - func_8001CF98((arg1 * 64) / arg0);
    } else {
        if (arg1 >= 0) {
            res = 0;
        } else {
            res = 180;
        }
    }
    return res;
}

s16 func_8001D140(s16 arg0, s16 arg1) {
    s16 ret;

    if (abs(arg0) < abs(arg1)) {
        if (arg1 > 0) {
            ret = func_8001CF98((arg0 * 64) / arg1);
            if (ret < 0) {
                ret += 360;
            }
        } else if (arg1 < 0) {
            ret = func_8001CF98((arg0 * 64) / arg1) + 180;
        } else if (arg0 >= 0) {
            ret = 90;
        } else {
            ret = 270;
        }
    } else {
        if (arg0 > 0) {
            ret = 90 - func_8001CF98((arg1 * 64) / arg0);
        } else if (arg0 < 0) {
            ret = 270 - func_8001CF98((arg1 * 64) / arg0);
        } else if (arg1 >= 0) {
            ret = 0;
        } else {
            ret = 180;
        }
    }
    return ret;
}

s16 func_8001D294(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 phi_v1;
    s16 res;

    phi_v1 = arg3 - arg1;
    temp_v0 = arg2 - arg0;

    if (phi_v1 == 0) {
        phi_v1 = 1;
    }
    if (temp_v0 > 0) {
        if (phi_v1 > 0) {
            res = 180 - func_8001CF98((temp_v0 * 64) / phi_v1);
        } else {
            res = -func_8001CF98((temp_v0 * 64) / phi_v1);
        }
    } else if (phi_v1 > 0) {
        res = 180 - func_8001CF98((temp_v0 * 64) / phi_v1);
    } else {
        res = 360 - func_8001CF98((temp_v0 * 64) / phi_v1);
    }

    if (res < 0) {
        res += 360;
    } else {
        if (res >= 360) {
            res -= 360;
        }
    }
    res = 360 - res;
    return res;
}

s32 func_8001D3C4(s32 arg0, s32 arg1) {
    s32 pad[20]; // what?
    return arg1;
}
