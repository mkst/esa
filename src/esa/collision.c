#include "common.h"

s32 play_sound_effect_at_location(s32, s32, s32);

void func_80063D34(Animal *, Animal *, s16, s16, s16, s16, s16, s16);

u8 func_80071CBC(Animal *arg0, Animal *arg1, Position **arg2, Position **arg3, Pos arg4, Pos arg5, Pos arg6, Pos arg7, Pos arg8, Pos arg9); /* extern */
u8 func_800724D4(Animal *arg0, Animal *arg1, Position **arg2, Position **arg3, Pos arg4, Pos arg5, Pos arg6, Pos arg7, Pos arg8, Pos arg9); /* extern */
u8 func_800726C8(Animal *arg0, Animal *arg1, Position **arg2, Position **arg3, Pos arg4, Pos arg5, Pos arg6, Pos arg7, Pos arg8, Pos arg9); /* extern */
u8 func_80072B88(Animal *arg0, Animal *arg1, Position **arg2, Position **arg3, Pos arg4, Pos arg5, Pos arg6, Pos arg7, Pos arg8, Pos arg9); /* extern */
u8 func_800730AC(Animal *arg0, Animal *arg1, Position **arg2, Position **arg3, Pos arg4, Pos arg5, Pos arg6, Pos arg7, Pos arg8, Pos arg9); /* extern */
u8 func_80071AC0(Animal *arg0, Animal *arg1, s32 (**collision_func)(Animal *, Animal *, Pos, Pos, Pos, Pos, Pos, Pos), s8 *arg3);
s32 func_80072FF4(Animal *arg0, Animal *arg1, Pos **arg2, Pos **arg3, Pos arg4, Pos arg5, Pos arg6, Pos arg7, Pos arg8, Pos arg9);

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} struct038; // Position?

extern u16 D_800CD820[];
extern u16 D_800D6330[];
extern s32 D_800E4F5C;
extern s32 D_800E5018;
extern s16 D_800E52B4;

u16 D_800E53D8;
struct038 *D_800E53DC;
u8 D_800E53E0;
s32 (*D_800E53E4)(Animal *, Animal *, s32 *, void **, s32, s32, s32, s32, s32, s32);
s32 D_800E53E8;
u8 D_800E53EC;


#if 0
// sssv:func_802B4D20_6C63D0
void func_80070A6C(void) {
    Position sp28; // should this be 4?
    u8       sp38[0x30];
    Position sp68;
    u8       sp98[0x30];
    Position spA8;
    u8       spB8[0x30];
    Position spE8;
    u8       spF8[0x30];
    s16 i; // sp128

    s32 sp12C;
    s32 sp130;
    s32 sp134;
    s32 sp138;
    s32 sp13C;
    s32 sp140;

    Animal *animal;
    Animal *other;
    s32 sp128; // guess
    s32 temp_lo_3;
    s32 mode;
    struct000 *temp_v1_12;
    s32 var_s4;
    s32 var_t3;
    s32 var_v0;
    struct065 *var_s5;
    struct065 *var_s7;
    u16 state;
    s32 var_s2;
    s32 var_s3;


    for (i = 0; i < 40; i++) {
        for (var_s7 = D_80112DF8[i].next; var_s7 != NULL; var_s7 = var_s7->next) {
            for (var_s5 = var_s7->next; var_s5 != NULL; var_s5 = var_s5->next) {

                animal = var_s7->animal;
                other = var_s5->animal;

                if (((animal->unk114 == i) && (other->unk114 == i)) ||
                    ((animal->unk114 == i) && (other->unk114 < i)) ||
                    ((other->unk114 == i) && (animal->unk114 < i))) {

                    if (((D_800D6330[animal->unk16C->unk2] >> other->unk16C->unk2) & 1) &&
                            (abs(animal->unk10.h[1] - other->unk10.h[1]) < (animal->unk34 + other->unk34)) &&
                            (abs(animal->unk14.h[1] - other->unk14.h[1]) < (animal->unk34 + other->unk34)) &&
                            (abs(((animal->unk18.h[1] + (animal->unk42 >> 1)) - other->unk18.h[1]) - (other->unk42 >> 1)) < (animal->unk36 + other->unk36)) &&

                            ((animal->unk68 != other) || !(((D_800CD820[(animal->unk16C->unk2)]) >> other->unk16C->unk2) & 1)) &&
                            ((other->unk68 != animal) || !(((D_800CD820[(other->unk16C->unk2)]) >> animal->unk16C->unk2) & 1)) &&
                            ((animal->unk70 != other) || (other->unk16C->unk15 != 4) || (animal->unk16C->unk2 != 5)) &&
                            ((other->unk70 != animal) || (animal->unk16C->unk15 != 4) || (other->unk16C->unk2 != 5))) {

                        if ((animal->state != 0x1E) && (other->state != 0x1E) &&
                            (animal->state != 0x1F) && (other->state != 0x1F) &&
                            ((animal->unk15C == 0) || (animal->unk168 != other)) &&
                            ((other->unk15C == 0) || (other->unk168 != animal))) {

                            mode = func_80071AC0(animal, other, &D_800E53E4, &D_800E53E0);

                            if ((D_800E53E0 != 0) && (D_800E53E4(other, animal, &D_800E53E8, &D_800E53DC, other->unk10.w, other->unk14.w, other->unk18.w, animal->unk10.w, animal->unk14.w, animal->unk18.w) != 0) ||
                                (D_800E53E0 == 0) && (D_800E53E4(animal, other, &D_800E53E8, &D_800E53DC, animal->unk10.w, animal->unk14.w, animal->unk18.w, other->unk10.w, other->unk14.w, other->unk18.w) != 0)) {

                                animal->unk4C = animal->unk4C | 0x02000000;
                                other->unk4C = other->unk4C | 0x02000000;

                                if ((animal == D_800E73A8.animals[gCurrentAnimalIndex].animal) && (other->unk16C->objectType == 0xF2)) { // OBJECT_TV_SCREEN
                                    D_800E5018 = !D_800E5018;
                                    if (D_800E5018 != 0) {
                                        D_800E4F5C = play_sound_effect_at_location(0x86, -1, -1);
                                    } else {
                                        func_8001EE3C(D_800E4F5C);
                                    }
                                }
                                if ((other == D_800E73A8.animals[gCurrentAnimalIndex].animal) && (animal->unk16C->objectType == 0xF2)) { // OBJECT_TV_SCREEN
                                    D_800E5018 = !D_800E5018;
                                    if (D_800E5018 != 0) {
                                        D_800E4F5C = play_sound_effect_at_location(0x86, -1, -1);
                                    } else {
                                        func_8001EE3C(D_800E4F5C);
                                    }
                                }
                                func_80056774(other, animal);

                                sp128 = animal->unk1C.w;
                                sp130 = animal->unk20.w;
                                sp138 = animal->unk24.w;

                                sp12C = other->unk1C.w;
                                sp134 = other->unk20.w;
                                sp13C = other->unk24.w;

                                if ((animal->unk16C->unk2 == 9) || ((other->unk16C->unk2 == 9)) ||
                                    (animal->unk16C->unk2 == 8) || ((other->unk16C->unk2 == 8))) {
                                    func_80063D34(animal, other, sp128 >> 0x10, sp130 >> 0x10, sp138 >> 0x10, sp12C >> 0x10, sp134 >> 0x10, sp13C >> 0x10);
                                } else {
                                    var_t3 = 0x4000; //4 ?
                                    sp28.xPos.w = animal->xPos.w >> 2;
                                    sp28.zPos.w = animal->zPos.w >> 2;
                                    sp28.yPos.w = ((animal->yPos.w >> 16) + (animal->unk42 >> 1)) << 14;

                                    sp68.xPos.w = animal->unk1C.w >> 2;
                                    sp68.zPos.w = animal->unk20.w >> 2;
                                    sp68.yPos.w = animal->unk24.w >> 2;

                                    spA8.xPos.w = other->xPos.w >> 2;
                                    spA8.zPos.w = other->zPos.w >> 2;
                                    spA8.yPos.w = ((other->yPos.w >> 16) + (other->unk42 >> 1)) << 14;

                                    spE8.xPos.w = other->unk1C.w >> 2;
                                    spE8.zPos.w = other->unk20.w >> 2;
                                    spE8.yPos.w = other->unk24.w >> 2;
#if 0
// not this...
                                    if ((((mode == 5) || (mode == 4)) && (D_800E53EC == 1) && ((animal->unk16C->unk80 & 0x40000) || (other->unk16C->unk80 & 0x40000))) ||
                                         ((mode == 1) || (mode == 2)) && (D_800E53DC->unk8 == 0) &&
                                         ((animal->unk16C->unk80 & 0x40000) && (other->yPos.h[1] < (animal->yPos.h[1] + (animal->unk42 >> 1))) && ((animal->yPos.h[1] + (animal->unk42 >> 1)) < (other->yPos.h[1] + other->unk42))) ||
                                         ((other->unk16C->unk80 & 0x40000) &&  (animal->yPos.h[1] < (other->yPos.h[1] + (other->unk42 >> 1))) && ((other->yPos.h[1] + (other->unk42 >> 1)) < (animal->yPos.h[1] + animal->unk42)))
                                        ) {
                                            var_s4 = 1;
                                            var_t3 = 0x800;
                                        } else {
                                            var_s4 = 0;
                                        }

#else

                                    if (((u32) ((mode - 4) & 0xFFFF) < 2U) && (D_800E53EC == 1) && (!(animal->unk16C->unk80 & 0x40000)) && ((other->unk16C->unk80 & 0x40000))) {
                                        var_s4 = 1;
                                        var_t3 = 0x800;
                                    } else {
                                        var_s4 = 0;
                                        if (((u32) ((mode - 1) & 0xFFFF) < 2U) && (D_800E53DC->unk8 == 0)) {
                                            if (!(animal->unk16C->unk80 & 0x40000) || (((other->yPos.h[1] < (animal->yPos.h[1] + (animal->unk42 >> 1))) == 0)) || ((animal->yPos.h[1] + (animal->unk42 >> 1)) >= (other->yPos.h[1] + other->unk42))) {
                                                if ((other->unk16C->unk80 & 0x40000) && ((animal->yPos.h[1] < (other->yPos.h[1] + (other->unk42 >> 1))) && ((other->yPos.h[1] + (other->unk42 >> 1)) < (animal->yPos.h[1] + animal->unk42)))) {
                                                    var_s4 = 1;
                                                    var_t3 = 0x800;
                                                } else {
                                                    var_s4 = 0;
                                                }
                                            } else {
                                                var_s4 = 1;
                                                var_t3 = 0x800;
                                            }
                                        }
                                    }
#endif

                                    if (((animal->unk16C->unk80 & 0x40000) && (D_800E53E8 == &animal->unkC4) && (((animal->unk162 == 1)) || (animal->unk162 == 6)) && ((other->unk162 == 1) || (other->unk162 == 6)) && (other->unk4C & 0x08000000) && !(other->unk16C->unk80 & 0x20000)) ||
                                        ((other->unk16C->unk80 & 0x40000) && (D_800E53E8 == &other->unkC4) && (((animal->unk162 == 1)) || (animal->unk162 == 6)) && ((other->unk162 == 1) || (other->unk162 == 6)) && (animal->unk4C & 0x08000000) && !(animal->unk16C->unk80 & 0x20000))) {

                                        var_s2 = animal->unk44;
                                        var_s3 = other->unk44;
                                        if (animal->unk16C->objectType == (OB_TYPE_ANIMAL_OFFSET+EVO_MICROCHIP)) {
                                            var_s2 = 0;
                                        } else if (other->unk16C->objectType == (OB_TYPE_ANIMAL_OFFSET+EVO_MICROCHIP)) {
                                            var_s3 = 0;
                                        }

                                        if ((animal->unk16C->unk80 & 0x40000) && (other->unk16C->unk80 & 0x40000)) {
                                            if ((animal->unk16C->objectType == (OB_TYPE_ANIMAL_OFFSET+HARD_MOUSE)) || (animal->unk16C->objectType == (OB_TYPE_ANIMAL_OFFSET+RACING_TORTOISE_DEFENDING))) {
                                                var_s2 *= 3;
                                                play_sound_effect_at_location(0x4F, D_800E527C->xPos.h[1], D_800E527C->zPos.h[1]); // , animal->unk16C
                                            }
                                            if ((other->unk16C->objectType == (OB_TYPE_ANIMAL_OFFSET+HARD_MOUSE)) || (other->unk16C->objectType == (OB_TYPE_ANIMAL_OFFSET+RACING_TORTOISE_DEFENDING))) {
                                                var_s3 *= 3;
                                                play_sound_effect_at_location(0x4F, D_800E527C->xPos.h[1], D_800E527C->zPos.h[1]);
                                            }
                                        } else {
                                            if ((var_s3 * 3) < var_s2) {
                                                var_s3 = 0;
                                            } else if ((var_s2 * 3) < var_s3) {
                                                var_s2 = 0;
                                            }
                                        }

                                        // sssv debug stub about TotalMass removed

                                        animal->unk1C.w = other->unk1C.w = ((var_s2 * animal->unk1C.w) + (var_s3 * other->unk1C.w)) / (var_s2 + var_s3);
                                        animal->unk20.w = other->unk20.w = ((var_s2 * animal->unk20.w) + (var_s3 * other->unk20.w)) / (var_s2 + var_s3);
                                        if (var_s4 == 0) {
                                            temp_lo_3 = ((var_s2 * animal->unk24.w) + (var_s3 * other->unk24.w)) / (var_s2 + var_s3);
                                            if ((animal->unk4C & 0x08000000) && !(animal->unk16C->unk80 & 0x20000)) {
                                                animal->unk24.w = temp_lo_3;
                                            }
                                            if ((other->unk4C & 0x08000000) && !(other->unk16C->unk80 & 0x20000)) {
                                                other->unk24.w = temp_lo_3;
                                            }
                                        }
                                    } else {
                                        if (var_s4 != 0) {
                                            // ignore y?
                                            sp68.yPos.w = 0;
                                            spE8.yPos.w = 0;
                                            sp28.yPos.w = 0;
                                            spA8.yPos.w = 0;
                                        }
                                        // help!
                                        // ((u32) (var_t3 * 0x2666) >> 0xE) | ((var_t3 / 436924) << 0x12)
                                        // ((u32) (var_t3 * 0x3333) >> 0xE) | ((var_t3 / 327685) << 0x12)
                                        func_800747E0(
                                            animal,
                                            &sp28,
                                            &sp68,
                                            other,
                                            &spA8,
                                            &spE8,
                                            (var_t3 * 3 / 5),
                                            (var_t3 * 4 / 5)
                                        );

                                        if ((animal->unk4C & 0x08000000) && !(animal->unk16C->unk80 & 0x20000)) {
                                            animal->unk1C.w = sp68.xPos.w << 2;
                                            animal->unk20.w = sp68.zPos.w << 2;
                                            if (var_s4 == 0) {
                                                animal->unk24.w = sp68.yPos.w << 2;
                                            }
                                            if (animal->unk16C->unk2 == 5) {
                                                func_80073D48(animal, other);
                                            }
                                        }
                                        if ((other->unk4C & 0x08000000) && !(other->unk16C->unk80 & 0x20000)) {
                                            other->unk1C.w = spE8.xPos.w << 2;
                                            other->unk20.w = spE8.zPos.w << 2;
                                            if (var_s4 == 0) {
                                                other->unk24.w = spE8.yPos.w << 2;
                                            }
                                            if (other->unk16C->unk2 == 5) {
                                                func_80073D48(other, animal);
                                            }
                                        }
                                    }
                                    if ((animal->unk16C->unk80 & 0x40000) && (D_800E53E8 == &animal->unkC4) && ((other->unk16C->unk80 & 0x20000) || ((other->unk16C->collision != NULL) && (other->unk40 > 0x1000))) &&
                                            ((animal->unk16C->unk90 == HYENA) || (animal->unk16C->unk90 == HYENA_BIKER) || (animal->unk16C->unk90 == DOG) || (animal->unk16C->unk90 == RACING_DOG)) && (animal->unk3E0 != 0x10)) {
                                        animal->unk3E0 = 16;
                                        animal->unk3E2 = 0;
                                    }
                                    if ((other->unk16C->unk80 & 0x40000) && (D_800E53DC == &other->unkC4) && ((animal->unk16C->unk80 & 0x20000) &&
                                            (((other->unk16C->unk90 == HYENA) || (other->unk16C->unk90 == HYENA_BIKER) || (other->unk16C->unk90 == DOG) || (other->unk16C->unk90 == RACING_DOG)) && (other->unk3E0 != 0x10)) )) {
                                        other->unk3E0 = 16;
                                        other->unk3E2 = 0;
                                    }

                                    temp_v1_12 = D_800E73A8.animals[gCurrentAnimalIndex].animal;
                                    animal->unk48 = other->unk48 = D_800E52C0;
                                    if (((animal == temp_v1_12) || (other == temp_v1_12))) {
                                        if ((D_800E52C0 - D_800E53D8) >= 5) {
                                            D_800E52B4 = MAX(2, D_800E52B4);
                                            D_800E53D8 = D_800E52C0;
                                        }
                                    }

                                    func_80063D34(animal, other, sp128 >> 0x10, sp130 >> 0x10, sp138 >> 0x10, sp12C >> 0x10, sp134 >> 0x10, sp13C >> 0x10);

                                    animal->unk10.w = animal->xPos.w + animal->unk1C.w;
                                    animal->unk14.w = animal->zPos.w + animal->unk20.w;
                                    animal->unk18.w = animal->yPos.w + animal->unk24.w;

                                    other->unk10.w = other->xPos.w + other->unk1C.w;
                                    other->unk14.w = other->zPos.w + other->unk20.w;
                                    other->unk18.w = other->yPos.w + other->unk24.w;

                                    if (((D_800E53E0 != 0) && (D_800E53E4(other, animal, &D_800E53E8, &D_800E53DC, other->xPos.w, other->zPos.w, other->yPos.w, animal->xPos.w, animal->zPos.w, animal->yPos.w))) ||
                                        ((D_800E53E0 == 0) && (D_800E53E4(animal, other, &D_800E53E8, &D_800E53DC, animal->xPos.w, animal->zPos.w, animal->yPos.w, other->xPos.w, other->zPos.w, other->yPos.w)))
                                    ) {
                                        func_8007374C(animal, other);
                                    }

                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/collision", func_80070A6C);
#endif

// sssv:func_802B5E48_6C74F8
u8 func_80071AC0(Animal *arg0, Animal *arg1, s32 (**collision_func)(Animal *, Animal *, Pos, Pos, Pos, Pos, Pos, Pos), s8 *arg3) {
    u8 res;
    struct006 *a;
    struct006 *o;

    res = 0;

    a = arg0->unk16C;

    *collision_func = NULL;

    if (a->unk15 == 4) {
        o = arg1->unk16C;
        if (o->unk15 == 4) {
            res = 6;
            *collision_func = func_80072FF4;
            *arg3 = 0;
        } else if (o->collision != 0) {
            if (arg1->unkC4[0].size != 0) {
                res = 7;
                *collision_func = func_80072B88;
                *arg3 = 0;
            } else {
                res = 7;
                *collision_func = func_80072B88;
                *arg3 = 0;
            }
        } else if (arg1->unkC4[0].size != 0) {
            res = 5;
            *collision_func = func_800726C8;
            *arg3 = 1;
        }
    } else if (a->collision != 0) {
        o = arg1->unk16C;
        if (o->unk15 == 4) {
            if (arg1->unkC4[0].size != 0) {
                res = 7;
                *collision_func = func_80072B88;
                *arg3 = 1;
            } else {
                res = 8;
                *collision_func = func_80072B88;
                *arg3 = 1;
            }

        } else if (o->collision != 0) {
            if ((arg0->unkC4[0].size != 0) && (arg1->unkC4[0].size != 0)) {
                res = 1;
                *collision_func = func_80071CBC;
                if ((u32) arg0 < (u32) arg1) {
                    *arg3 = 0;
                } else {
                    *arg3 = 1;
                }
            } else if ((arg0->unkC4[0].size != 0)) {
                res = 1;
                *collision_func = func_80071CBC;
                *arg3 = 0;
            } else {
                res = 9;
                *collision_func = func_800730AC;
                *arg3 = 0;
            }
        } else if (arg1->unkC4[0].size != 0) {
            res = 2;
            *collision_func = func_80071CBC;
            *arg3 = 1;
        }
    } else if (arg0->unkC4[0].size != 0) {
        o = arg1->unk16C;
        if (arg1->unk16C->unk15 == 4) {
            res = 4;
            *collision_func = func_800726C8;
            *arg3 = 0;
        } else if (o->collision != 0) {
            res = 1;
            *collision_func = func_80071CBC;
            *arg3 = 0;
        } else if (arg1->unkC4[0].size != 0) {
            res = 3;
            *collision_func = func_800724D4;
            *arg3 = 0;
        }
    }

    if (res == 0) {
        *collision_func = func_800724D4;
        *arg3 = 0;
    }

    return res;
}


INCLUDE_ASM("asm/esa/nonmatchings/collision", func_80071CBC);

INCLUDE_ASM("asm/esa/nonmatchings/collision", func_800724D4);

// sssv:func_802B6B5C_6C820C
u8 func_800726C8(Animal *arg0, Animal *arg1, Position **p1, Position **arg3, Pos xPos1, Pos zPos1, Pos yPos1, Pos xPos2, Pos zPos2, Pos yPos2) {

    s32 tmp1;
    s32 tmp2;

    u8 flags;
    u8 changed;
    s32 i;

    *p1 = NULL;

    D_800E53EC = 0;

    for (changed = 0, i = 0; (changed == 0) && (i < 5) && arg0->unkC4[i].size != 0; i++) {

        tmp1 = arg1->unk30 + arg0->unkC4[i].size;
        tmp2 = arg1->unk32 + arg0->unkC4[i].size;

        if (changed = (
            ((xPos1.h[1] + arg0->unkC4[i].xPos.h[1]) > (xPos2.h[1] - tmp1)) &&
            ((xPos1.h[1] + arg0->unkC4[i].xPos.h[1]) < (xPos2.h[1] + tmp1)) &&
            ((zPos1.h[1] + arg0->unkC4[i].zPos.h[1]) > (zPos2.h[1] - tmp2)) &&
            ((zPos1.h[1] + arg0->unkC4[i].zPos.h[1]) < (zPos2.h[1] + tmp2)) &&
            ((yPos1.h[1] + arg0->unkC4[i].yPos.h[1]) > (yPos2.h[1] - arg0->unkC4[i].size)) &&
            ((yPos1.h[1] + arg0->unkC4[i].yPos.h[1]) < (yPos2.h[1] + arg1->unk42 + arg0->unkC4[i].size))
        )) {
            *p1 = &arg0->unkC4[i];

            flags = 0;
            if ((xPos1.h[1] + arg0->unkC4[i].xPos.h[1]) < (xPos2.h[1] - arg1->unk30)) {
                flags = (0x4 | 0x8);
            } else if ((xPos1.h[1] + arg0->unkC4[i].xPos.h[1]) > (xPos2.h[1] + arg1->unk30)) {
                flags = 0x8;
            }

            if ((zPos1.h[1] + arg0->unkC4[i].zPos.h[1]) < (zPos2.h[1] - arg1->unk32)) {
                flags |= (0x1 | 0x2);
            } else if ((zPos1.h[1] + arg0->unkC4[i].zPos.h[1]) > (zPos2.h[1] + arg1->unk32)) {
                flags |= 0x2;
            }

            switch (flags) {
            case (0x1 | 0x2 | 0x4 | 0x8):
                if (SQ(arg0->unkC4[i].size) < (SQ(((xPos2.h[1] - arg1->unk30) - xPos1.h[1]) + arg0->unkC4[i].xPos.h[1]) + SQ(((zPos2.h[1] - arg1->unk32) - zPos1.h[1]) + arg0->unkC4[i].zPos.h[1]))) {
                    changed = 0;
                }
                break;
            case (0x2 | 0x4 | 0x8):
                if (SQ(arg0->unkC4[i].size) < (SQ(((xPos2.h[1] - arg1->unk30) - xPos1.h[1]) + arg0->unkC4[i].xPos.h[1]) + SQ(((zPos2.h[1] + arg1->unk32) - zPos1.h[1]) + arg0->unkC4[i].zPos.h[1]))) {
                    changed = 0;
                }
                break;
            case (0x1 | 0x2 | 0x8): // 0xB
                if (SQ(arg0->unkC4[i].size) < (SQ(((xPos2.h[1] + arg1->unk30) - xPos1.h[1]) + arg0->unkC4[i].xPos.h[1]) + SQ(((zPos2.h[1] - arg1->unk32) - zPos1.h[1]) + arg0->unkC4[i].zPos.h[1]))) {
                    changed = 0;
                }
                break;
            case (0x2 | 0x8):
                if (SQ(arg0->unkC4[i].size) < (SQ(((xPos2.h[1] + arg1->unk30) - xPos1.h[1]) + arg0->unkC4[i].xPos.h[1]) + SQ(((zPos2.h[1] + arg1->unk32) - zPos1.h[1]) + arg0->unkC4[i].zPos.h[1]))) {
                    changed = 0;
                }
                break;
            }

            if (changed != 0) {
                if ((abs((yPos1.h[1] + arg0->unkC4[i].yPos.h[1]) - (yPos2.h[1] + (arg1->unk42 >> 1))) - (arg1->unk42 >> 1)) < MAX(
                        (abs((xPos1.h[1] + arg0->unkC4[i].xPos.h[1]) - xPos2.h[1]) - arg1->unk30),
                        (abs((zPos1.h[1] + arg0->unkC4[i].zPos.h[1]) - zPos2.h[1]) - arg1->unk32)
                        ) ) {
                    D_800E53EC = 1;
                } else {
                    D_800E53EC = 0;
                }

            }
        }
    }
    return changed;
}

INCLUDE_ASM("asm/esa/nonmatchings/collision", func_80072B88);

s32 func_80072FF4(Animal *arg0, Animal *arg1, Pos **arg2, Pos **arg3, Pos arg4, Pos arg5, Pos arg6, Pos arg7, Pos arg8, Pos arg9) {
    s32 velocity0;
    s32 velocity1;

    u8 check1;
    u8 check0;

    velocity0 = arg0->unk30 + arg1->unk30;
    velocity1 = arg0->unk32 + arg1->unk32;

    check0 = ((arg7.h[1] > (arg4.h[1] - velocity0)) && (arg7.h[1] < (arg4.h[1] + velocity0)) &&
              (arg8.h[1] > (arg5.h[1] - velocity1)) && (arg8.h[1] < (arg5.h[1] + velocity1)));

    check1 = ((arg6.h[1] > (arg9.h[1] - arg0->unk42)) && (arg9.h[1] > (arg6.h[1] - arg1->unk42)));

    return check0 && check1;
}

// sssv:func_802B75B4_6C8C64
u8 func_800730AC(Animal *arg0, Animal *arg1, Position **arg2, Position **arg3, Pos arg4, Pos arg5, Pos arg6, Pos arg7, Pos arg8, Pos arg9) {
    return 0;
}

// sssv:func_802B75CC_6C8C7C
s32 func_800730B4(Animal *arg0, Animal *arg1, Pos arg2, Pos arg3, Pos arg4, u8 *arg5, u16 arg6) {

    Animal *other;
    s32 temp_s3;
    struct065 *var_s2;

    // this check is only present in SSSV 1.1
    if (arg0->unk114 == 0x7FFF) {
        return 0;
    }

    for (var_s2 = D_80112DF8[arg0->unk114].next; var_s2 != NULL; var_s2 = var_s2->next) {
        if ((arg0 != var_s2->animal) && (arg0 != arg1) && ((D_800D6330[(var_s2->animal->unk16C->unk2)] >> arg0->unk16C->unk2) & 1)) {
            if (abs(var_s2->animal->xPos.h[1] - arg2.h[1]) < (var_s2->animal->unk34 + arg0->unk34)) {
                if (abs(var_s2->animal->zPos.h[1] - arg3.h[1]) < (var_s2->animal->unk34 + arg0->unk34)) {

                    temp_s3 = arg4.w; // why here ?!!

                    if ((abs(((var_s2->animal->yPos.h[1] + (var_s2->animal->unk42 >> 1)) - arg4.h[1]) - (arg0->unk42 >> 1)) < (var_s2->animal->unk36 + arg0->unk36))) {

                        other = var_s2->animal;

                        if ((other->unk68 != arg0) && (arg0->unk68 != other) && ((other->unk70 != arg0) || (arg0->unk16C->unk15 != 4)) && ((arg0->unk70 != other) || (other->unk16C->unk15 != 4))) {
                            if ((other->state != 0x1E) && (arg0->state != 0x1E) && (other->state != 0x1F) && (arg0->state != 0x1F) && ((other->unk15C == 0) || (other->unk168 != arg0)) && ((arg0->unk15C == 0) || (arg0->unk168 != other)) && ((arg6 == 0) || (other->unk16C->objectType < 0x100))) {
                                s32 tmp1, tmp2;


                                tmp1 = &D_800E53E8;
                                tmp2 = &D_800E53DC;
                                func_80071AC0(other, arg0, &D_800E53E4, &D_800E53E0);

                                if (((D_800E53E0 != 0) && (D_800E53E4(arg0, other, tmp1, tmp2, arg2.w, arg3.w, arg4.w, other->xPos.w, other->zPos.w, other->yPos.w) != 0)) ||
                                    ((D_800E53E0 == 0) && (D_800E53E4(other, arg0, tmp1, tmp2, other->xPos.w, other->zPos.w, other->yPos.w, arg2.w, arg3.w, arg4.w) != 0))
                                    ) {

                                    if ((arg0->unk16C->unk2 != 9) && (other->unk16C->unk2 != 9) && (arg0->unk16C->unk2 != 8) && (other->unk16C->unk2 != 8)) {

                                        // keep trying higher?
                                        temp_s3 += D_800E4BA0;
                                        if (((D_800E53E0 != 0) && (D_800E53E4(arg0, other, tmp1, tmp2, arg2.w, arg3.w, temp_s3, other->xPos.w, other->zPos.w, other->yPos.w) != 0)) ||
                                            ((D_800E53E0 == 0) && (D_800E53E4(other, arg0, tmp1, tmp2, other->xPos.w, other->zPos.w, other->yPos.w, arg2.w, arg3.w, temp_s3) != 0))) {
                                            *arg5 = 1;

                                            // D_800E73A8.animals[gCurrentAnimalIndex].animal is D_800EAF2C
                                            if ((arg0 == D_800E73A8.animals[gCurrentAnimalIndex].animal) && (other->unk16C->objectType == 0xF2)) { // OBJECT_TV_SCREEN
                                                D_800E5018 = !D_800E5018;
                                                if (D_800E5018 != 0) {
                                                    D_800E4F5C = play_sound_effect_at_location(0x86, -1, -1);
                                                } else {
                                                    func_8001EE3C(D_800E4F5C);
                                                }
                                            }
                                            if ((other == D_800E73A8.animals[gCurrentAnimalIndex].animal) && (arg0->unk16C->objectType == 0xF2)) { // OBJECT_TV_SCREEN
                                                D_800E5018 = !D_800E5018;
                                                if (D_800E5018 != 0) {
                                                    D_800E4F5C = play_sound_effect_at_location(0x86, -1, -1);
                                                } else {
                                                    func_8001EE3C(D_800E4F5C);
                                                }
                                            }
                                            func_80056774(arg0, other);
                                            return 1;
                                        } else {
                                            *arg5 = 0;
                                            if (((arg0 == D_800E73A8.animals[gCurrentAnimalIndex].animal) && (other->unk16C->objectType == 0xF2))) { // OBJECT_TV_SCREEN
                                                D_800E5018 = !D_800E5018;
                                                if (D_800E5018 != 0) {
                                                    D_800E4F5C = play_sound_effect_at_location(0x86, -1, -1);
                                                } else {
                                                    func_8001EE3C(D_800E4F5C);
                                                }
                                            }
                                            if ((other == D_800E73A8.animals[gCurrentAnimalIndex].animal) && (arg0->unk16C->objectType == 0xF2)) { // OBJECT_TV_SCREEN
                                                D_800E5018 = !D_800E5018;
                                                if (D_800E5018 != 0) {
                                                    D_800E4F5C = play_sound_effect_at_location(0x86, -1, -1);
                                                } else {
                                                    func_8001EE3C(D_800E4F5C);
                                                }
                                            }
                                            func_80056774(arg0, other);
                                            return 1;
                                        }
                                    }
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}

#if 0
// CURRENT (975)
// sssv:func_802B7BC8_6C9278
s32 func_8007374C(Animal *arg0, Animal *arg1) {
    Vector sp28;
    u8     sp3C[0x30];
    Vector sp68;
    u8     sp3Ca[0x30];
    Vector spA8;
    u8     sp3Cb[0x30];
    Vector spE8;

    u8     spF4[0x30];

    s32 sp128;
    s16 sp12C; // i
    s32 sp130; // check animal 1
    s32 sp134; // check animal 2

    s32 var_a2;

    Pos var_fp;
    Pos var_s3;
    Pos var_s4;

    Pos var_s5;
    Pos var_s6;
    Pos var_s7;

    s32 var_t4;

    if (D_800E53E4 == &func_80071CBC) {
        if (D_800E53E0 != 0) {
            var_s5.w = D_800E53DC->unk0;
            var_s4.w = D_800E53DC->unk4;
            var_s3.w = D_800E53DC->unk8;
            var_fp.w = -D_800E53DC->unk0;
            var_s7.w = -D_800E53DC->unk4;
            var_s6.w = -D_800E53DC->unk8;
        } else {
            var_s5.w = -D_800E53DC->unk0;
            var_s4.w = -D_800E53DC->unk4;
            var_s3.w = -D_800E53DC->unk8;
            var_fp.w = D_800E53DC->unk0;
            var_s7.w = D_800E53DC->unk4;
            var_s6.w = D_800E53DC->unk8;
        }
    } else {
        sp68.x = arg0->xPos.w >> 2;
        sp68.y = arg0->zPos.w >> 2;
        sp68.z = (arg0->yPos.w + (arg0->unk42 << 0xF)) >> 2;

        spA8.x = arg1->xPos.w >> 2;
        spA8.y = arg1->zPos.w >> 2;
        spA8.z = (arg1->yPos.w + (arg1->unk42 << 0xF)) >> 2;

        vector_subtract(&spA8, &sp68, &spE8);
        normalize_vector(&spE8, &sp28);
        vector_multiply_by(&sp28, FROM_FLOAT(8.0f), &spE8); // 2.0f in SSSV ????

        var_fp.w = spE8.x << 2;
        var_s7.w = spE8.y << 2;
        var_s6.w = spE8.z << 2;

        var_s5.w = -var_fp.w;
        var_s4.w = -var_s7.w;
        var_s3.w = -var_s6.w;
    }

    if ((arg0->unk16C->unk80 & 0x20000) || !(arg0->unk4C & 0x08000000) || (arg0->unk4A != 0) || ((var_s5.w == 0) && (var_s4.w == 0) && (var_s3.w == 0))) {
        sp130 = 0;
    } else {
        sp130 = 1;
    }
    if ((arg1->unk16C->unk80 & 0x20000) || !(arg1->unk4C & 0x08000000) || (arg1->unk4A != 0) || ((var_fp.w == 0) && (var_s7.w == 0) && (var_s6.w == 0))) {
        sp134 = 0;
    } else {
        sp134 = 1;
    }

    // no collision for microchip?
    if (arg0->unk16C->objectType == OB_TYPE_ANIMAL_OFFSET+EVO_MICROCHIP) {
        sp134 = 0;
    }
    if (arg1->unk16C->objectType == OB_TYPE_ANIMAL_OFFSET+EVO_MICROCHIP) {
        sp130 = 0;
    }

    if ((arg0->unk44 * 3) < arg1->unk44) {
        if (sp130 == 1) {
            sp134 = 0;
        }
    } else if ((arg1->unk44 * 3) < arg0->unk44) {
        if (sp134 == 1) {
            sp130 = 0;
        }
    } else if ((arg0->unk44 * 2) < arg1->unk44) {
        var_fp.w = var_fp.w >> 1;
        var_s7.w = var_s7.w >> 1;
        var_s6.w = var_s6.w >> 1;
    } else if ((arg1->unk44 * 2) < arg0->unk44) {
        var_s5.w = var_s5.w >> 1;
        var_s4.w = var_s4.w >> 1;
        var_s3.w = var_s3.w >> 1;
    }

    for (sp12C = 0, var_a2 = 1; ((sp130 != 0) || (sp134 != 0)) && (var_a2 != 0) && (sp12C < 0x10); sp12C++) {
        if (sp130 != 0) {
            if ((func_800730B4(arg0, arg1, var_s5, var_s4, var_s3, &sp128, 0) == 0) &&
                (func_800393F8(arg0, var_s5, var_s4, var_s3) != 0)) {
                s16 xPos = arg0->xPos.h[1]; // urgh
                arg0->yPos.w = MAX(arg0->yPos.w, func_80037098(xPos, arg0->zPos.h[1], arg0->unk160));
            } else {
                sp130 = 0;
            }
        }

        if (sp134 != 0) {
            if ((func_800730B4(arg1, arg0, var_fp, var_s7, var_s6, &sp128, 0) == 0) &&
                (func_800393F8(arg1, var_fp, var_s7, var_s6) != 0)) {
                arg1->yPos.w = MAX(arg1->yPos.w, func_80037098(arg1->xPos.h[1], arg1->zPos.h[1], arg1->unk160));
            } else {
                sp134 = 0;
            }
        }

        if (D_800E53E0 != 0) {
            var_a2 = D_800E53E4(arg1, arg0, &D_800E53E8, &D_800E53DC, arg1->xPos.w, arg1->zPos.w, arg1->yPos.w, arg0->xPos.w, arg0->zPos.w, arg0->yPos.w);
        } else {
            var_a2 = D_800E53E4(arg0, arg1, &D_800E53E8, &D_800E53DC, arg0->xPos.w, arg0->zPos.w, arg0->yPos.w, arg1->xPos.w, arg1->zPos.w, arg1->yPos.w);
        }


        if ((D_800E53E4 == &func_80071CBC) && (var_a2 != 0)) {
            if (D_800E53E0 != 0) {
                var_s5.w = D_800E53DC->unk0;
                var_s4.w = D_800E53DC->unk4;
                var_s3.w = D_800E53DC->unk8;
                var_fp.w = -D_800E53DC->unk0;
                var_s7.w = -D_800E53DC->unk4;
                var_s6.w = -D_800E53DC->unk8;
            } else {
                var_s5.w = -D_800E53DC->unk0;
                var_s4.w = -D_800E53DC->unk4;
                var_s3.w = -D_800E53DC->unk8;
                var_fp.w = D_800E53DC->unk0;
                var_s7.w = D_800E53DC->unk4;
                var_s6.w = D_800E53DC->unk8;
            }
        }
    }

    arg0->unk10.w = arg0->xPos.w + arg0->unk1C.w;
    arg0->unk18.w = arg0->yPos.w + arg0->unk24.w;
    arg0->unk14.w = arg0->zPos.w + arg0->unk20.w;

    arg1->unk10.w = arg1->xPos.w + arg1->unk1C.w;
    arg1->unk14.w = arg1->zPos.w + arg1->unk20.w;
    arg1->unk18.w = arg1->yPos.w + arg1->unk24.w;

    return var_a2 == 0;
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/collision", func_8007374C);
#endif

// sssv:func_802B8304_6C99B4
INCLUDE_ASM("asm/esa/nonmatchings/collision", func_80073D48);
