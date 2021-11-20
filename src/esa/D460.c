#include "common.h"

// force break 7 to be 0x0, 7
__asm__(
  ".macro break a,b\n"
  ".word 0x000001cd\n"
  ".endm"
);

INCLUDE_ASM(s32, "D460", func_8001CE60);

INCLUDE_ASM(s32, "D460", func_8001CE8C);

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

INCLUDE_ASM(s32, "D460", func_8001D140);

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
