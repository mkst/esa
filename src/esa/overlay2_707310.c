#include "common.h"

void func_8004EE24(s16 x, s16 z, s16 y, s16 yRotation, s16 zRotation, s16* result);
Object *func_8004F3C0(s16 x, s16 z, s16 y, u8 id, s16 arg4, s16 arg5, s16 arg6, s16 arg7, s16 arg8, s16 arg9, s32 scale);
u8   func_80050EA4(Object *arg0, Object *arg1, s16 arg2, s16 arg3, s16 *arg4);
s16  func_80050BF0(Object *arg0, Object *arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, u8 arg7, f32 arg8);

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

        arg0->xVel.w = 0;
        arg0->zVel.w = 0;
        if (arg0->unk4C.unk1D == 0) {
            arg0->yVel.w = 0;
        }
    } else if (arg0->state == 0) {
        arg0->xVel.w = 0;
        arg0->zVel.w = 0;
        if (arg0->unk4C.unk1D == 0) {
            arg0->yVel.w = 0;
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

        arg0->xVel.w = xVel - arg0->xPos.w;
        arg0->zVel.w = zVel - arg0->zPos.w;

        if ((arg0->unk4C.unk1D) == 0) {
            arg0->yVel.w = yVel - arg0->yPos.w;
        }
    }
}

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_8004FA08);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_8004FB78);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_8004FD48);

// sssv:func_802F6DEC_70849C
#if 0
void func_80050148(struct000 *arg0, s16 arg1) {
    s16 sp18[3];
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    s32 temp_v0_2;

    func_8004EE24(
        0,
        (arg1 << 8),
        0,
        arg0->unk2E,
        arg0->unk2C,
        &sp18);

    sp58 = (sp18[0] << 8) - arg0->xVelocity.w;
    sp5C = (sp18[1] << 8) - arg0->zVelocity.w;
    sp60 = (sp18[2] << 8) - arg0->yVelocity.w;

    temp_v0_2 = SquareRoot0((sp58 * sp58) + (sp5C * sp5C) + (sp60 * sp60));
    temp_v0_2 = (s16)temp_v0_2;
    if (temp_v0_2 < (s16)FTOFIX32(5.0)) {
        arg0->xVelocity.w += sp58;
        arg0->zVelocity.w += sp5C;
        arg0->yVelocity.w += sp60;
    } else {
        arg0->xVelocity.w += (sp58 * FTOFIX32(5.0)) / temp_v0_2;
        arg0->zVelocity.w += (sp5C * FTOFIX32(5.0)) / temp_v0_2;
        arg0->yVelocity.w += (sp60 * FTOFIX32(5.0)) / temp_v0_2;
    }
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80050148);
#endif

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_800502E8);

// sssv:func_802F7940_708FF0
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_800502F0);

// sssv:func_802F804C_7096FC
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_800509BC);

// sssv:func_802F8160_709810
#if 0
s16 func_80050BF0(Object *arg0, Object *arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, u8 arg7, f32 arg8) {
    s16 var_a0;
    s16 var_a0_3;
    s16 var_s1;
    s16 var_s4;
    s16 var_v0;
    s16 var_v1;
    s32 temp_a0;
    s32 yDist;
    s32 xzDist;
    s32 temp_v1;
    u8 var_s2;
    u8 tmp;

    temp_v1 = arg0->unk6 - arg1->unk6;
    temp_a0 = arg0->unkA - arg1->unkA;

    xzDist = SquareRoot0((temp_v1 * temp_v1) + (temp_a0 * temp_a0)) - arg2;

    if (xzDist < 0) {
      return -1;
    }

    yDist = (arg1->unkE - arg0->unkE) - arg3;
    if (arg7 == 3) {
        tmp = 0;
        if (yDist < 33) {
            if (xzDist > 256) {
                if ((func_8001CE60() & 3) == 1) {
                    tmp = 1;
                }
            } else {
                tmp = 0;
            }
        } else {
            tmp = 1;
        }
        var_s2 = tmp;
    } else if (arg7 == 4) {
        var_s2 = 0;
    } else {
        var_s2 = arg7;
    }

    var_s1 = func_800509BC(var_s2, xzDist, arg4, yDist, arg8);
    if (var_s1 == 9999) {
        return -1;
    }

    if (arg5 < var_s1) {
        var_s4 = abs(var_s1 - arg5);
        var_s1 = arg5;
        goto block_14;
    }
    if (var_s1 < arg6) {
        var_s4 = abs(abs(var_s1) - abs(arg6));
        var_s1 = arg6;
block_14:
        if ((arg7 == 4) && (xzDist < 0x46)) {
            if (var_s1 < 0) {
                var_s1 += 0x168;
            }
            return var_s1;
        }

        var_a0 = func_800509BC(!var_s2, xzDist, arg4, yDist, arg8);
        if (var_a0 == 9999) {
            return -1;
        }
        if (arg5 < var_a0) {
            var_v1 = abs(var_a0 - arg5);
            var_a0_3 = arg5;
            goto block_28;
        }
        if (var_a0 < arg6) {
            var_v1 = abs(abs(var_a0) - abs(arg6));
            var_a0_3 = arg6;
block_28:
            if (((var_s4 < var_v1) && (var_v0 = var_s1, ((var_s4 < 5) != 0))) || (var_v0 = var_a0_3, ((var_v1 < 5) != 0))) {
                if (var_v0 < 0) {
                    var_v0 += 0x168;
                }
                /* Duplicate return node #33. Try simplifying control flow for better match */
                return var_v0;
            }
            return -1;
        }
        if (var_a0 < 0) {
            var_a0 += 0x168;
        }
        return var_a0;
    }
    if (var_s1 < 0) {
        var_s1 += 0x168;
    }
    return var_s1;

}
#else
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80050BF0);
#endif

// sssv:func_802F8658_709D08
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80050EA4);

// sssv:func_802F8918_709FC8
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80051334);

// sssv:find_closest_animal
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_800513C0);


void func_80051544(Object *arg0) {
    s16 sp30[32];
    s32 z;
    s32 x;
    s16 angle;
    s16 temp_s0_2;
    s16 temp_v1;
    Object *obj;
    Object *obj2;

    if (arg0->unk150 > 0) {
        arg0->unk150 -= 2;
    }

    if ((arg0->unk0 == 1)) {
        obj = func_800513C0(arg0);
        if ((obj != 0) && (func_80050EA4(arg0, obj, 16, 512, &sp30) != 0)) {
            x = sp30[0] - arg0->xPos.h[1];
            z = sp30[1] - arg0->zPos.h[1];

            SquareRoot0((x * x) + (z * z));

            angle = func_8001CFEC(x, z);
            temp_s0_2 = func_80050BF0(arg0, obj, 0, 0, 16, 89, -4, 4, (f32) D_800E4B9C / (512 * 1024)); // __mulsf3(__floatsisf(D_800E4B9C), 0x36000000)

            temp_v1 = (angle + 180) / 360;
            arg0->unk2C = (angle + 180) % 360;

            if (temp_s0_2 != -1) {
                if (temp_s0_2 <= 90) {
                    arg0->unk2E = 90 - temp_s0_2;
                } else {
                    arg0->unk2E = 90;
                }
            }

            if (arg0->unk14E <= 0) {
                if (arg0->unk152 > 0) {
                    arg0->unk152--;
                    arg0->unk150 = 256;
                    if ((arg0->unk152 & 1) == 1) {
                        play_sound_effect_at_location(0x4A, D_800E527C->xPos.h[1], D_800E527C->zPos.h[1]);

                        obj2 = func_8004F3C0(
                            arg0->xPos.h[1],
                            arg0->zPos.h[1],
                            arg0->yPos.h[1] + ((arg0->unk40 * 6) >> 0xB),
                            0x26,
                            0,
                            (arg0->unk40 * 40) >> 11,
                            0,
                            temp_s0_2,
                            angle,
                            0x10,
                            (arg0->unk40 << 11) >> 11);

                        if (obj2 != NULL) {
                            obj2->unk154 = 200;
                        }
                    }
                } else {
                    arg0->unk14E = ((func_8001CE60() & 0x1F) + (arg0->unk158 + 0x18));
                    arg0->unk152 = 6;
                }
            } else {
                arg0->unk14E--;
            }
        }
    }
}

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_800517C8);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80051A8C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80051A94);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80051AB0);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80051B1C);

s32 func_80051B8C(s32);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_707310", func_80051B8C);

// sssv:func_802F92B0_70A960
void func_80051CD0(Object *arg0) {
    s32 pad[16];
    s32 temp_s0;
    s16 temp_s0_2;
    s32 x_dist;
    s32 temp_s1_2;
    s16 temp_s1_3;
    s32 z_dist;
    s32 var_a3;
    s32 var_s4;
    void *temp_s5;
    struct004 *a;

    temp_s5 = func_80051B8C(arg0);

    if (arg0->unk188 != NULL) {
        a = arg0->unk188;

        x_dist = a->xPos.h[1] - arg0->xPos.h[1];
        z_dist = a->zPos.h[1] - arg0->zPos.h[1];

        temp_s0 = (a->yPos.h[1] - arg0->yPos.h[1]) + (a->unk42 >> 1);
        temp_s1_2 = SquareRoot0((x_dist * x_dist) + (z_dist * z_dist));
        temp_s1_2 = (s16)temp_s1_2;

        temp_s0_2 = func_8001CFEC(x_dist, z_dist);
        temp_s1_3 = func_8001CFEC(temp_s0, temp_s1_2);

        if (arg0->unk150 != 0) {
            var_s4 = arg0->unk150;
        } else {
            var_s4 = 7;
        }

        arg0->unk2C = func_8004F780(temp_s0_2, arg0->unk2C, var_s4);
        arg0->unk2E = func_8004F780(temp_s1_3, arg0->unk2E, MAX((var_s4 * 3) / 4, 1));
    }

    if (arg0->unk152 != 0) {
        var_a3 = arg0->unk152;
    } else {
        var_a3 = 0x12;
    }

    if (temp_s5 != 0) {
        arg0->unk2C = ((s16)(D_800C9CDC[360 + (s16)((arg0->unk14E << 4) % 360)]) >> 5) + arg0->unk2C;
    }

    if (arg0->unk2C < 0x168) {
        if (arg0->unk2C < 0) {
            arg0->unk2C += 0x168;
        }
    } else {
        arg0->unk2C -= 0x168;
    }

    func_80050148(arg0, var_a3);
    func_800ABBB0(arg0->xPos.h[1] * 2, arg0->yPos.h[1] * 2, arg0->zPos.h[1] * 2);
    arg0->unk14E++;
    if (arg0->unk154 == 0) {
        arg0->unk154 = 0xA0;
    }
}

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

// sssv:func_802FC808_70DEB8
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
