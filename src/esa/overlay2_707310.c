#include "common.h"

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_8004E918);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_8004EE24);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_8004EF24);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_8004F3C0);

// sssv:func_802F63F8_707AA8
s16 func_8004F6EC(s16 arg0, s16 arg1, s16 arg2) {
    s16 temp_v0;

    temp_v0 = arg1 - arg0;
    if (temp_v0 < 0) {
        temp_v0 += 360;
    }
    if (temp_v0 == 0) {
        return 0;
    }
    if (temp_v0 >= 180) {
        if ((temp_v0 + arg2) >= 360) {
            return 360 - temp_v0;
        }
        return arg2;
    }
    if ((temp_v0 - arg2) < 0) {
        return -temp_v0;
    }
    return -arg2;
}

// sssv:func_802F649C_707B4C
s16 func_8004F780(s16 arg0, s16 arg1, s16 arg2) {
    s16 diff;

    diff = arg1 - arg0;
    if (diff < 0) {
        diff += 360;
    }

    if (diff != 0) {
        if (diff >= 180) {
            if ((diff + arg2) >= 360) {
                arg1 = (arg1 - (diff - 360));
            } else {
                arg1 = (arg1 + arg2);
            }
            if (arg1 >= 360) {
                arg1 = (arg1 - 360);
            }
        } else {
            if ((diff - arg2) < 0) {
                arg1 = (arg1 - diff);
            } else {
                arg1 = (arg1 - arg2);
            }
            if (arg1 < 0) {
                arg1 = (arg1 + 360);
            }
        }
    }
    return arg1;
}

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_8004F828);

void func_8004F85C(struct004* arg0) {
    s32 var_t0;
    s32 temp_a2;
    s32 temp_t1;
    s32 temp_t2;
    s32 xVel;
    s32 zVel;
    s32 yVel;

    if (arg0->unk184 >= 0x100) {
        arg0->unk170 = 0;

        arg0->xVel = 0;
        arg0->zVel = 0;
        if (arg0->unk4C.unk29 == 0) {
            arg0->yVel = 0;
        }
    } else if (arg0->state == 0) {
        arg0->xVel = 0;
        arg0->zVel = 0;
        if (arg0->unk4C.unk29 == 0) {
            arg0->yVel = 0;
        }
    } else {
        arg0->unk184 += arg0->unk172;

        temp_a2 = (arg0->unk178 - arg0->unk17E) >> 1;
        temp_t1 = (arg0->unk17A - arg0->unk180) >> 1;
        temp_t2 = (arg0->unk17C - arg0->unk182) >> 1;

        var_t0 = -0x8000;
        if (arg0->unk184 >= 0x100) {
            var_t0 = -0x8000;
        } else if (arg0->unk184 == 0) {
            var_t0 = 0x8000;
        } else {
            var_t0 = D_800CA604[((arg0->unk184 >> 1) + 0x40) & 0xFF];
        }

        if (arg0->unk184 & 1) {
            var_t0 = ((var_t0 + D_800CA604[((arg0->unk184 >> 1) + 0x41) & 0xFF]) >> 1);
        }

        xVel = (((arg0->unk17E + temp_a2) << 0x10) - (temp_a2 * (var_t0 * 2)));
        zVel = (((arg0->unk180 + temp_t1) << 0x10) - (temp_t1 * (var_t0 * 2)));
        yVel = (((arg0->unk182 + temp_t2) << 0x10) - (temp_t2 * (var_t0 * 2)));

        arg0->xVel = xVel - arg0->xPos.w;
        arg0->zVel = zVel - arg0->zPos.w;

        if ((arg0->unk4C.unk29) == 0) {
            arg0->yVel = yVel - arg0->yPos.w;
        }
    }
}

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_8004FA08);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_8004FB78);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_8004FD48);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80050148);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_800502E8);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_800502F0);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_800509BC);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80050BF0);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80050EA4);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80051334);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_800513C0);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80051544);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_800517C8);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80051A8C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80051A94);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80051AB0);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80051B1C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80051B8C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80051CD0);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80051EF8);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80051F00);

void func_80051F98(struct004* arg0) {
    if (arg0->unk150 == 0) {
        arg0->unk150 = (s16) arg0->unk40;
        arg0->unk152 = (u16) (func_8001CE60() & 0xFF);
        // func_800A0720(&D_80014D14, arg0->unk150);
        func_800A0720("psMoveObj->Info.Counter2 - %d\n", arg0->unk150);
    }

    if (arg0->state == 1) {
        if (arg0->unk14E < 0x100) {
            arg0->unk14E += 8;
            if (arg0->unk14E > 0x100) {
                arg0->unk14E = 0x100;
            }
        }
    } else if (arg0->unk14E > 0) {
        arg0->unk14E-= 8;
        if (arg0->unk14E < 0) {
            arg0->unk14E = 0;
        }
    }

    if (arg0->unk14E > 0) {
        arg0->unk152 += 4;
        arg0->unk152 &= 0xFF;
        arg0->unk40 = arg0->unk150 + ((((D_800CA604[(arg0->unk152 + 0x40) & 0xFF]) >> 0x7) * 2) / 3);
        func_8004D86C(arg0);
    }
}

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_800520C4);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80052250);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80052324);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_800523EC);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_800524A4);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80052548);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80052C74);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80052E6C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80052EA4);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80053494);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_800537C4);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80053A0C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80053A30);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80053D34);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80054084);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_800543AC);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_8005471C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80054A0C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80054CFC);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80054FEC);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_800552DC);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80055430);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_8005558C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80055814);

void func_80055A9C(struct004* arg0) {
    s16 i;
    s32 temp_s4;

    temp_s4 = (arg0->unk40 * 18) >> 0xB;

    for (i = 0; i < 10; i++) {
        create_particle_effect(
            arg0->xPos.h[1],
            arg0->zPos.h[1],
            arg0->yPos.h[1] + (arg0->unk42 >> 1),
            0x17,
            D_800D64E0[i].unk0 * arg0->unk40 >> 0xB,
            D_800D64E0[i].unk4 * arg0->unk40 >> 0xB,
            0,
            temp_s4,
            0x5AD6,
            0x5AD6,
            0);
    }
}

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", run_commands);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80055C04);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", set_floor_level);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", set_water_level);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80056474);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_800564F4);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_8005655C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_800565BC);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80056640);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_800566C4);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_8005676C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80056774);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80056A24);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80056A2C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", fire_homing_missile);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", spawn_temporary_object);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80056F70);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80057028);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_8005764C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_800578EC);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_8005793C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80057D0C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80058040);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80058048);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_800581DC);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80058218);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80058248);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_800582A0);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_800582C0);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_800582C8);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80058368);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80058404);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80058414);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80058454);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80058478);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80058500);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_8005865C);

INCLUDE_RODATA("asm/esa/nonmatchings/overlay2_707310", D_80014DDC);

INCLUDE_RODATA("asm/esa/nonmatchings/overlay2_707310", D_80014DF8);

INCLUDE_RODATA("asm/esa/nonmatchings/overlay2_707310", D_80014E08);

INCLUDE_RODATA("asm/esa/nonmatchings/overlay2_707310", D_80014E20);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_800586AC);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80058B68);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80058BC4);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_8005BE44);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_8005C01C);
