#include "common.h"


struct000 *func_80047DC4(s16, s16);

void func_800470F0(void) {
    s16 i;

    for (i = 0; i < 32; i++) {
        // removed
    }
}

// used byte func_80048F84
INCLUDE_RODATA("asm/esa/nonmatchings/overlay2_725D10", D_80014828);
INCLUDE_RODATA("asm/esa/nonmatchings/overlay2_725D10", D_8001483C);
INCLUDE_RODATA("asm/esa/nonmatchings/overlay2_725D10", D_80014858);

// sssv:func_803146A8_725D58
struct000 *func_80047108(Animal *arg0, s16 arg1, u16 arg2) {
    struct000 *ret;

    switch (arg1) {
    case 0:
        ret = (struct000*)arg0;
        break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        ret = arg0->unk254[arg1-1];
        break;
    case 8:
        ret = (struct000*)arg0->unk60;
        break;
    case 9:
        ret = D_800E73A8.animals[gCurrentAnimalIndex].animal;
        break;
    case 10:
        ret = func_80047DC4(arg2, 1);
        break;
    case 11:
        ret = func_80047DC4(arg2, 0);
        break;
    case 12:
        ret = arg0->unk254[-1];
        break;
    }
    return ret;
}

// sssv:func_80314788_725E38
#if 0
void func_800471D8(void) {
    memset(&D_80111164, 0, 0x80);
    memset(&D_8010D050, 0, 0x4114);
    D_800E52FC = 0;
    D_800E5318 = 0;
    D_800E52E8 = 0;
    D_800E5314 = 0;
    D_800E531C = 0;
    func_8007DD7C();
    D_800E4B9C = 0x20000;
    D_800E52F4 = 0x10;
    D_800E4BA0 = 0x40000;

    D_800E5310 = 0x800;
    D_800E5304 = 0x800;
    D_800E52EC = 0;
    D_800E5320 = 0;
    D_800E5300 = 0;
    D_800E52F0 = 1;
    D_800E52F8 = 1;
    D_800E5308 = D_800E4F88->unk88;
    D_800E530C = D_800E4F88->unk8C | 1;
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_725D10", func_800471D8);
#endif

#if 0
extern struct006 D_800D93A8[];
extern s8 D_800E525C;
extern struct002 *D_800E5284;
extern s16 D_800E5290;
extern struct005 *D_800E52A8;
extern s16 D_800E52C8;
extern s16 D_800E52D8;
extern s16 D_800E542C;
extern s16 D_800E5454;
extern s32 D_800E738C;
extern struct027 D_800F2708; // object equivalent of struct035
extern s32 D_80111D54;

void set_game_state(struct000 *arg0, s16 arg1, s32 arg2) {
    s16 temp_s0;
    s16 temp_v0;
    s16 temp_v0_2;
    // s32 temp_s1;
    s32 temp_v1;
    s16 var_a1;
    s32 var_a2;
    s16 i;
    s32 var_v0_4;
    s32 var_v1;
    struct000 **var_a0;
    struct000 *temp_a0;
    struct002 *var_t0;
    struct006 *temp_a1;
    struct008 *temp_v0_3;
    u8 var_v0;
    u8 var_v0_2;
    u8 var_v0_3;

    switch (arg1) {
    case 0+0x7F7F:
    case 1+0x7F7F:
    case 2+0x7F7F:
        arg0->unk200[arg1 - 0x7F7F] = arg2;
        break;
    case 3+0x7F7F:
        arg0->unk158 = arg2;
        arg0->unk15E = arg2;
        break;
    case 4+0x7F7F:
        if (!(arg0->unk4C & 0x04000000) || (arg0->unk14C < arg2)) {
            if ((arg0->unk16C->unk0 >= OB_TYPE_ANIMAL_OFFSET) && (arg2 < arg0->unk14C)) {
                func_8007DA18(arg0, arg0->unk14C - arg2);
            }

            arg0->unk14C = MIN(0x7F, MAX(0, arg2));
            break;
        }
        break;
    case 5+0x7F7F:
        func_8001CE8C(arg2);
        break;
    case 6+0x7F7F:
        arg0->xPos.w = arg2 << 0x10;
        func_8003950C(arg0);
        break;
    case 7+0x7F7F:
        arg0->zPos.w = arg2 << 0x10;
        func_8003950C(arg0);
        break;
    case 8+0x7F7F:
        arg0->yPos.w = arg2 << 0x10;
        func_8003950C(arg0);
        break;
    case 9+0x7F7F:
        arg0->unk40 = arg2;
        func_8004D86C(arg0);
        break;
    case 10+0x7F7F:
        func_8007DFC4(arg2);
        break;
    case 11+0x7F7F:
        arg0->xVelocity.w = arg2 << 5;
        break;
    case 12+0x7F7F:
        arg0->zVelocity.w = arg2 << 5;
        break;
    case 13+0x7F7F:
        arg0->yVelocity.w = arg2 << 5;
        break;
    case 14+0x7F7F:
        if (arg0->unk16C->unk0 >= OB_TYPE_ANIMAL_OFFSET) {
            arg0->unk2E =  ((arg2 << 8) / 360) & 0xFF;
        } else {
            func_8004D5DC(arg0, (s16) ((arg2 + 0x708) % 360), arg0->unk2C);
        }
        break;
    case 15+0x7F7F:
        if (arg0->unk16C->unk0 >= OB_TYPE_ANIMAL_OFFSET) {
            temp_v0_2 = ((arg2 << 8) / 360) & 0xFF;
            arg0->unk2C = temp_v0_2;
            arg0->unk322 = temp_v0_2;
        } else {
            func_8004D5DC(arg0, arg0->unk2E, (s16) ((arg2 + 0x708) % 360));
        }
        break;
    case 16+0x7F7F:
        arg0->unk250 = func_80047108(arg0, arg2 % 100, arg2 / 100);
        arg0->unk1CC = arg2 % 100;
        break;
    case 17+0x7F7F:
        if (arg2 & 1) {
            arg0->unk163 &= ~0x8;
        } else {
            arg0->unk163 |= 0x8;
        }
        if (arg2 & 2) {
            arg0->unk163 |= 0x10;
        } else {
            arg0->unk163 &= ~0x10;
        }
        if (arg2 & 4) {
            arg0->unk163 |= 0x40;
        } else {
            arg0->unk163 &= ~0x40;
        }
        if (arg2 & 8) {
            arg0->unk163 |= 0x80;
        } else {
            arg0->unk163 &= ~0x80;
        }
        break;
    case 18+0x7F7F:
        arg0->unk46 = arg2;
        arg0->unk44 = (arg0->unk46 * arg0->unk40) >> 0xB;
        break;
    case 19+0x7F7F:
        // set score
        D_800E738C = arg2;
        break;
    case 20+0x7F7F:
        arg0->unk3E = arg2;
        break;
    case 21+0x7F7F:
        arg0->state = arg2;
        break;
    case 22+0x7F7F:
        D_800E5454 = abs(arg2);
        if (arg2 < 0) {
            D_800E542C = -1;
        } else {
            D_800E542C = 1;
        }
        break;
    case 23+0x7F7F:
        D_800E4B9C = arg2 << 6;
        D_800E4BA0 = D_800E4B9C << 1;
        break;

    case 24+0x7F7F:
    case 25+0x7F7F:
    case 26+0x7F7F:
    case 27+0x7F7F:
        break;

    case 28+0x7F7F:
        D_800E52EC = arg2;
        break;
    case 29+0x7F7F:
        D_80111D54 = arg2 / 100;
        break;
    case 30+0x7F7F:
        D_800E52F4 = arg2;
        break;
    case 31+0x7F7F:
        D_800E5308 = arg2;
        D_800E4F88->unk88 = arg2;
        break;
    case 32+0x7F7F:
        if (arg2 < OB_TYPE_ANIMAL_OFFSET) {
            arg0->unk16C = &D_800F2708.unk0[arg2];
            func_8004D86C(arg0); //, arg0->unk16C);
            break;
        }

        var_t0 = NULL;
        for (i = 0; i < D_800E5290; i++) {
            if ((D_800E73A8.animals[i].animal == arg0) && (D_800E73A8.animals[i].animal->unk386 != 6)) {
              var_t0 = &D_800E73A8.animals[i];
              break;
            }
        }

        if (var_t0 != NULL) {
            // temp_a0 = var_t0->animal;
            // temp_v0_3 = &D_800D93A8[arg2]; // ( * 0xE0) +
            // var_t0->unk0 = temp_v0_3;
            arg0->unk16C = var_t0->unk0 = &D_800E73A8.animals[arg2 - 256];
            D_800E5284 = var_t0;
            D_800E529C = var_t0->unk0;
            D_800E52A8 = var_t0->animal;
            D_800E5274 = D_800E52A8;
            D_800E527C = D_800E52A8;
            if (i == gCurrentAnimalIndex) {
                D_800E525C = 1;
            } else {
                D_800E525C = 0;
            }
            D_800E52C8 = i;
            D_800E52D8 = 0;
            func_800463C4(); //(struct005 *) temp_a0, gCurrentAnimalIndex, (s16) var_a2, (s16) i);
            func_8004D86C(arg0);
            break;
        }
        break;
    case 33+0x7F7F:
        D_800E5310 = arg2;
        break;
    case 34+0x7F7F:
        D_800E5304 = MAX(arg2, 0);
        break;
    case 35+0x7F7F:
        D_800E4F88->unk8C = D_800E530C = arg2;
        break;
    case 36+0x7F7F:
        D_800E5320 = arg2;
        break;
    default:
        D_80111164[arg1 - 0x7FBF] = arg2;
        break;
    }
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_725D10", set_game_state);
#endif

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_725D10", get_game_state);

// sssv:do_maths_op
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_725D10", func_80047C7C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_725D10", copy_command_struct);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_725D10", load_commands_into_object);

// sssv:func_8031540C_726ABC
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_725D10", func_80047DC4);

// sssv:func_80315658_726D08
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_725D10", func_80048040);

// sssv:func_80315870_726F20
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_725D10", func_8004826C);

// sssv:func_80315880_726F30
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_725D10", func_80048274);

// sssv:is_object_type_helper
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_725D10", func_800482A4);

// sssv:is_object_type
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_725D10", func_800482C0);

// sssv:is_animal_helper
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_725D10", func_800482F4);

// sssv:is_animal
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_725D10", func_80048310);

// sssv:is_object_helper
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_725D10", func_80048340);

// sssv:is_object
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_725D10", func_80048354);

// sssv:run_single_command ?
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_725D10", func_80048384);

// sssv:func_80316408_727AB8 ?
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_725D10", func_80048F84);

// sssv:func_803190FC_72A7AC
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_725D10", func_8004C7B4);

// sssv:func_803191B0_72A860
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_725D10", func_8004C87C);
