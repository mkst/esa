#include "common.h"


// sssv:load_objects
#if 0

extern s32 D_800CD840; // data?
extern s32 D_80109BB4;

s32 func_8004D0E8(void) {
    s16 var_a1;

    D_800F2708.unk0 = D_800CD840;
    D_800F2708.unk174AC = 0xF7;
    D_80109BB4 = 247;

    for (var_a1 = 0; var_a1 <= D_80109BB4; var_a1++) {
    }

    return 1;
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/objects", func_8004D0E8);
#endif

// sssv:func_802C93E8_6DAA98
INCLUDE_ASM("asm/esa/nonmatchings/objects", func_8004D130);

// sssv:func_802C941C_6DAACC
INCLUDE_ASM("asm/esa/nonmatchings/objects", func_8004D160);

// sssv:func_802C9488_6DAB38
INCLUDE_ASM("asm/esa/nonmatchings/objects", func_8004D1B8);

// sssv:func_802C9500_6DABB0
INCLUDE_ASM("asm/esa/nonmatchings/objects", func_8004D228);

#if 0
// CURRENT (35)
s8 *spawn_object(u8 id, s16 x, s16 z, s16 y, s32 xVel, s32 zVel, s32 yVel, s16 zRotation, s16 yRotation, u16 scale) {
    s32 temp_v1;
    Object *obj;
    u16 temp_a0;
    // s32 var_s5;
    // struct006 *temp_a1;
    RawObject *rawObj;

    // var_s5 = scale;

    obj = func_8004D1B8();
    if (obj == NULL) {
        return NULL;
    }

    memset(obj, 0, 0x278);

    rawObj = &D_800F2708.unk0[id];

    temp_a0 = rawObj->unk70;
    obj->unk16C = (struct006*)rawObj;
    if (temp_a0 != 0) {
        scale = temp_a0;
    }
    obj->unk40 = scale;

    obj->unk4C.unk1C = ((rawObj->unk80 >> 0x14) & 1);
    obj->unk4C.unk1D = ((rawObj->unk80 >> 0x15) & 1);
    obj->unk4C.unk1B = ((rawObj->unk80 >> 0x13) & 1);

    obj->unk14C = rawObj->unk8A;
    obj->unk164 = rawObj->unk89;

    if (rawObj->unk80 & 0x800000) {
        temp_v1 = func_800373B0(x, z) >> 0x10;
        if (y < temp_v1) {
            y = temp_v1;
        }
    }

    temp_v1 = func_800370FC(x, z) >> 0x10;
    if (temp_v1 == 0x4000) {
        obj->unk160 = 0;
    } else if (y >= temp_v1) {
        obj->unk160 = 2;
    } else {
        obj->unk160 = 1;

    }

    obj->unk0 = 1;
    obj->unk17E = x;
    obj->unk180 = z;
    obj->unk182 = y;

    // temp_a1 = obj->unk16C;

    obj->unk1C.w = xVel;
    obj->unk20.w = zVel;
    obj->unk24.w = yVel;
    obj->unk2E = zRotation;
    obj->unk2C = yRotation;

    obj->unk4C.unk19 = 1;

    obj->unk46 = obj->unk16C->unk7C;

    obj->unk114[0] = 0x7FFF;
    obj->unk114[1] = 0x7FFF;
    obj->unk114[2] = 0x7FFF;
    obj->unk114[3] = 0x7FFF;

    func_8004D86C(obj);
    if ((obj->unk16C->unk15 == 4) && (((zRotation >= 225) && (zRotation < 315)) || ((zRotation >= 45) && (zRotation < 135)))) {
        y += obj->unk32 - (obj->unk42 >> 1);
    }
    obj->xPos.h[1] = x;
    obj->zPos.h[1] = z;
    obj->yPos.h[1] = y;
    obj->unk10.w = x << 0x10;
    obj->unk14.w = z << 0x10;
    obj->unk18.w = y << 0x10;

    func_80062D38(obj);
    func_8004E918(obj);

    obj->unk162 = 3;
    return obj;
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/objects", spawn_object);
#endif

// sssv:func_802C9834_6DAEE4 ?
INCLUDE_ASM("asm/esa/nonmatchings/objects", func_8004D530);

// sssv:reset_objects_state
INCLUDE_ASM("asm/esa/nonmatchings/objects", func_8004D558);

// sssv:func_802C9900_6DAFB0
INCLUDE_ASM("asm/esa/nonmatchings/objects", func_8004D5C8);

// sssv:func_802C9918_6DAFC8
INCLUDE_ASM("asm/esa/nonmatchings/objects", func_8004D5DC);

// sssv:func_802C9BA4_6DB254
INCLUDE_ASM("asm/esa/nonmatchings/objects", func_8004D86C);
