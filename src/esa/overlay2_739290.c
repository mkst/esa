#include "common.h"

extern s32 D_800E5320;

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_739290", func_8007F0E0);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_739290", func_8007F278);

#if 0
extern struct006 **D_800E5284;
extern struct019 *D_800E5468[];
extern s16 D_800E546C;
extern s16 D_800E5474;
extern struct018 D_800E5478[];

// sssv:func_80328258_739908
void func_8007F540(s16 arg0) {
    struct006 *temp_a1_2;
    struct006 *temp_v1;
    u16 temp_v0;
    u8 temp_a1;
    u8 temp_s1;
    struct000 **temp_a0_2;
    struct019 *temp_a0;
    struct000 *temp_a2;

    func_8008175C();

    temp_a0 = D_800E5468[D_800E5478[D_800E5474].unk2[arg0]];
    temp_s1 = temp_a0->unk1;

    D_800E5474 = temp_a0->unk0;
    temp_a2 = D_800E73A8.animals[gCurrentAnimalIndex].animal;
    D_800E546C = D_800E5478[D_800E5474].unk0 ;
    temp_v1 = &D_800E73A8.unk0[D_800E546C];
    D_800E529C = temp_v1;
    *D_800E5284 = temp_v1;
    temp_a2->unk16C = temp_v1;

    func_8007F684();
    func_800463C4();
    D_800E527C->unk46 = D_800E527C->unk16C->unk7C;
    func_8004D86C(D_800E73A8.animals[gCurrentAnimalIndex].animal);

    switch (temp_s1) {                              /* irregular */
    case 1:
        func_8006309C(0xFU, D_800E5274);
        break;
    case 2:
        func_8006309C(0xFU, D_800E5274);
        break;
    case 0:
        break;
    }
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_739290", func_8007F540);
#endif

// sssv:func_803283DC_739A8C
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_739290", func_8007F684);

// sssv:func_803284C4_739B74
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_739290", func_8007F78C);

// sssv:func_80328520_739BD0
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_739290", func_8007F7F4);

// sssv:func_80328918_739FC8
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_739290", func_8007FB40);

// sssv:func_80328ACC_73A17C
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_739290", func_8007FD90);

// sssv:func_80329BAC_73B25C
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_739290", func_80080C0C);

// sssv:func_80329F44_73B5F4
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_739290", func_80080EB0);

// sssv:func_8032A164_73B814
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_739290", func_80081044);

// sssv:func_8032A710_73BDC0
#if 0
extern s8         D_800D8F60[];
extern u8         D_800E525C;
extern struct002 *D_800E5284;
extern s32        D_800E52A8;
extern s16        D_800E52C8;
extern s16        D_800E52D8;
extern s16        D_800E546C;
extern s16        D_800E5474;
extern s16        D_800E547C;
extern struct006 *D_800EA9E8;

void func_800813C8(void) {
    s16 temp_a1;
    s16 temp_s1;
    s32 temp_a1_5;
    s32 temp_a2;
    s32 temp_v1_3;
    s16 i;
    s32 var_t0;
    struct000 *temp_v1;
    struct002 *temp_v0_2;
    u16 animal_id;
    u8 temp_a1_6;
    struct002 *temp_t1;
    struct004 *temp_v0;
    struct004 *temp_v0_3;
    struct004 *temp_v1_2;

    temp_s1 = D_800E5274->unk32E;
    D_800E5274->unk340 = NULL;
    func_8008175C();

    temp_t1 = &D_800E73A8.animals[temp_s1].animal; // (temp_s1 * 8) +
    temp_v0 = temp_t1->animal;

    temp_a1 = temp_v0->unk14C;
    temp_v0->unk14C = D_800E73A8.animals[0].animal->unk14C;
    D_800E73A8.animals[0].animal->unk14C = temp_a1;

    temp_a1 = temp_v0->unk300;
    temp_v0->unk300 = D_800E73A8.animals[0].animal->unk300;
    D_800E73A8.animals[0].animal->unk300 = temp_a1;

    temp_a1 = temp_v0->unk304;
    temp_v0->unk304 = D_800E73A8.animals[0].animal->unk304;
    D_800E73A8.animals[0].animal->unk304 = temp_a1;

    D_800E73A8.animals[0].animal->unk4A = 0;
    temp_t1->animal->unk4A = 0;

    D_800E73A8.animals[0].animal->unk4C.unk1A = temp_t1->animal->unk4C.unk1A;
    temp_t1->animal->unk4C.unk1A = D_800E73A8.animals[0].animal->unk4C.unk1A;

    D_800E529C = D_800E73A8.animals[0].unk0;
    D_800E5284 = D_800E73A8.animals;
    D_800E52A8 = D_800E73A8.animals[0].animal;
    D_800E5274 = D_800E73A8.animals[0].animal;
    D_800E527C = D_800E73A8.animals[0].animal;

    if (gCurrentAnimalIndex == 0) {
        D_800E525C = 1;
    } else {
        D_800E525C = 0;
    }

    D_800E5284->unk0 = &D_800E73A8.unk0[62]; // D_800EA9E8; (0x3640 / 0xE0 -> 62)
    temp_v0_2 = &D_800E73A8.animals[temp_s1]; //(temp_s1 * 8) + (&D_800EA9E8 + 0x540);
    temp_v1 = temp_v0_2->animal;
    D_800E52C8 = 0;
    D_800E52D8 = 0;

    gCurrentAnimalIndex = temp_s1;
    D_800E5284 = temp_v0_2;
    D_800E527C->unk16C = (struct006 *) &D_800EA9E8;
    D_800E527C = D_800E5274 = D_800E52A8 = temp_v1;
    D_800E529C = D_800E5284->unk0;

    if (gCurrentAnimalIndex == temp_s1) {
        D_800E525C = 1;
    } else {
        D_800E525C = 0;
    }

    D_800E52C8 = temp_s1;
    D_800E52D8 = 0;
    D_800E5274->unk386 = 1;
    D_800E5274->unk348 = (s16) D_800E52C0;
    D_800E5274->unk38A = 2;
    D_800E527C->unk163 = D_800E73A8.animals[0].animal->unk163;
    D_800E527C->unk18C = D_800E73A8.animals[0].animal->unk18C;

    for (i = 0; i < 4; i++) {
        D_800E527C->unk18D[i] = D_800E73A8.animals[0].animal->unk18D[i];
    }

    D_800E527C->unk18C = D_800E73A8.animals[0].animal->unk18C;
    D_800E546C = D_800E73A8.animals[temp_s1].unk0->unk90;
    D_800E547C = D_800D8F60[D_800E546C*2];
    D_800E5474 = D_800D8F60[D_800E546C*2 + 1];//*(temp_v1_3 + 1 + &D_800D8F60);
    check_and_set_species_encountered(D_800E546C); //, (s8) temp_a1_6, &D_800D8F60, animal_id);
    func_8007F278();
    func_8007F684();
    func_800463C4();
    func_8004D86C(D_800E527C);

    D_800E5284 = D_800E73A8.animals;
    D_800E529C = (struct006 *) D_800E73A8.animals[0].unk0;
    D_800E527C =D_800E5274 = D_800E52A8 = D_800E73A8.animals[0].animal;

    if (gCurrentAnimalIndex == 0) {
        D_800E525C = 1;
    } else {
        D_800E525C = 0;
    }

    D_800E52C8 = 0;
    D_800E52D8 = 0;
    play_sound_effect_at_location(0x28, D_800E527C->xPos.h[1], D_800E527C->zPos.h[1]);
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/overlay2_739290", func_800813C8);
#endif

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_739290", func_8008175C);

INCLUDE_ASM("asm/esa/nonmatchings/overlay2_739290", load_animal);

void check_and_set_species_encountered(s16 animal_id) {
    if ((D_800E5320 & 8) == 0) {
        if (((D_800E4F88->unk68[(s8) (animal_id >> 3)] & (1 << (animal_id & 7))) == 0)) {
            D_800E4F88->unk68[(s8) (animal_id >> 3)] |= (1 << (animal_id & 7));
        }
    }
}
