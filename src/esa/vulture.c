#include "common.h"

extern s16 D_800E54E8;
extern s16 D_800E54DC;
extern u16 D_800E54F4;
extern u8  D_800E525C;
extern s32 D_800E54B4;
extern s32 D_800E54BC;
extern s32 D_800E54B8;


void func_8009D970(void) {
    s32 pad[16];
    struct007 *temp_4_2;

    func_800A350C(0);
    func_8001B3FC();
    func_800A0ADC();
    if (((D_800E5274->unk386 - 3) < 2U) && ((func_8001CEB4() & 0xFF) == 0x9C)) {
        play_sound_effect_at_location(0x63, D_800E527C->xPos.h[1], D_800E527C->zPos.h[1]);
    }
    if ((D_800E529C->unk90 == 0x13) && (((D_800E5274->unk340 == NULL)) || (D_800E5274->unk340->unk274 != 0))) {
        play_sound_effect_at_location(0x63, D_800E527C->xPos.h[1], D_800E527C->zPos.h[1]);
        D_800E5274->unk340 = NULL;
        D_800E5274->yPos.h[1] += D_800E5274->unk328;
        D_800E5274->unk1A += D_800E5274->unk328;
        load_animal(VULTURE2);
    }

    switch (D_800E5274->unk385) {                               /* irregular */
    case 0:
        break;
    case 1:
        func_800A2344(0x10);
        D_800E54E8 = 3;
        D_800E54DC = D_800E54F4;
        break;
    case 18:
        if ((D_800E52C0 - D_800E5274->unk34A) >= 9) {
            D_800E5274->unk385 = 0;
        }
        break;
    default:
        D_800E5274->unk385 = 0;
        break;
    }
    func_800A1294();
    func_800A0F8C();
    func_800A3A38(0xC8);

    if (D_800E529C->unk90 == VULTURE2) {
        func_800A2698((D_800E529C->unkAE * 4) / 5, 2, 3, 3, 0);
    } else {
        func_800A2698((D_800E529C->unkAE * 12) / 5, 2, 3, 3, 0);
    }
    if (D_800E5274->unk340 != NULL) {
        func_80082294(0, 0, 0);
        temp_4_2 = D_800E5274->unk340;
        temp_4_2->unk68 = D_800E527C->unk68;
        temp_4_2->unk70 = D_800E527C;
    }
    func_8006BC30(D_800E5274->xPos.h[1], D_800E5274->zPos.h[1], D_800E5274->yPos.h[1] + (D_800E529C->unkAE >> 1), D_800E5274->unk322, 0, 0x12, 0x12, 0x9B, 0, 0, 0, 0, D_800E525C);
    if ((D_800E529C->unk90 == 0x13) && ((D_800E5274->unk386 == 2) || (D_800E5274->unk386 == 5))) {
        load_animal(VULTURE2);
    }

    D_800E5274->unk278 = (s16) ((s32) D_800E54B4 >> 4);
    D_800E5274->unk27A = (s16) ((s32) D_800E54BC >> 4);
    D_800E5274->unk27C = (s16) ((s32) D_800E54B8 >> 4);
    D_800E5274->unk280 = (s16) ((s32) D_800E54C0 >> 4);
    D_800E5274->unk282 = (s16) ((s32) D_800E54C8 >> 4);
    D_800E5274->unk284 = (s16) ((s32) D_800E54C4 >> 4);
}

INCLUDE_ASM("asm/esa/nonmatchings/vulture", func_8009DD48);

INCLUDE_ASM("asm/esa/nonmatchings/vulture", func_8009DFF4);

INCLUDE_ASM("asm/esa/nonmatchings/vulture", func_8009E114);
