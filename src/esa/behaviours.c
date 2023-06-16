#include "common.h"

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_80064DC4);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_80064E6C);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_80064F18);

#if 0
// v0/v1 regswap
void perform_behavior_lion(void) {
    switch (D_800E5274->unk2D4.state) {                              /* irregular */
    case 0:
        func_80061B80(D_800E527C, D_800E5274->unk2EC, -1, 0x10);
        D_800E5274->unk2D4.state = 1;
    case 1:
        if ((D_800E5274->unk2F0 < 0x64) && (D_800E5274->unk2E0 == 0)) {
            D_800E5274->unk2E0 = 1;
            func_80061D44((struct000 *) D_800E527C, D_800E5274->unk2EC);
        } else if ((D_800E5274->unk2F0 >= 0x6F) && (D_800E5274->unk2E0 != 0)) {
            D_800E5274->unk2E0 = 0;
            func_80061B80(D_800E527C, D_800E5274->unk2EC, 0, 0x10);
        }
        if ((D_800E5274->unk2E4 <= 0) && (D_800E5274->unk2F0 < 0x65) && (func_80064DC4(5) != 0)) {
            lion_roar();
            D_800E5274->unk2E4 = ((func_8001CEB4() % 40)) + 0x32;
        } else if (D_800E5274->unk2E4 <= 0) {
            func_80061D9C(D_800E527C, 0, D_800E5274->unk2EC);
            D_800E5274->unk2D4.state = 2;
            D_800E5274->unk2D8 = 0;
        }
        break;
    case 2:
        if ((D_800E5274->unk2F0 >= 0xC8) || (D_800E5274->unk2D8++ >= 0x3D)) {
            D_800E5274->unk2D4.state = 1;
            D_800E5274->unk2E0 = 0;
            func_80061B80(D_800E527C, D_800E5274->unk2EC, 0, 0x10);
        }
        break;
    }
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/behaviours", perform_behavior_lion);
#endif

#if 0
// v0/v1 regswap
void perform_behavior_hippo(void) {
    switch (D_800E5274->unk2D4.state) {                              /* irregular */
    case 0:
        func_80061B80(D_800E527C, D_800E5274->unk2EC, -1, 0x10);
        D_800E5274->unk2E0 = 0;
        D_800E5274->unk2D4.state = 1;
        /* fallthrough */
    case 1:
        if ((D_800E5274->unk2F0 < 0x64) && (D_800E5274->unk2E0 == 0)) {
            func_80061D44((struct000 *) D_800E527C, D_800E5274->unk2EC);
            D_800E5274->unk2E0 = 1;
        } else if ((D_800E5274->unk2F0 >= 0x79) && (D_800E5274->unk2E0 == 1)) {
            func_80061B80(D_800E527C, D_800E5274->unk2EC, -1, 0x10);
            D_800E5274->unk2E0 = 0;
        }
        if ((func_80064DC4(5) != 0) && (D_800E5274->unk2F0 < 0x15E) && (D_800E5274->unk2E4 <= 0)) {
            if (D_800E5274->unk2D8 >= 2) {
                func_80061D9C(D_800E527C, 0, D_800E5274->unk2EC);
                D_800E5274->unk2D8 = 0;
                D_800E5274->unk2D4.state = 2;
            } else {
                hippo_spit(0, 0, 0);
                D_800E5274->unk2E4 = (rand() % 5) + 30;
                D_800E5274->unk2D8++;
            }
        }
        break;
    case 2:
        if ((func_80064DC4(0x50) == 0) && (D_800E5274->unk2E4 <= 0)) {
            drop_sticky_mine();
            D_800E5274->unk2E4 = 0x3C;
        }
        if ((D_800E5274->unk2F0 >= 0x191) || (D_800E5274->unk2D8++ >= 0x3C)) {
            func_80061B80(D_800E527C, D_800E5274->unk2EC, -1, 0x10);
            D_800E5274->unk2D8 = 0;
            D_800E5274->unk2E0 = 0;
            D_800E5274->unk2D4.state = 1;
        }
        break;
    }
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/behaviours", perform_behavior_hippo);
#endif

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_8006550C);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_80065514);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_800657B0);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_80065BAC);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_80065DE4);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_80065FA4);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_800661FC);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_80066470);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_80066690);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_80066698);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_8006680C);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_80066814);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_8006681C);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_80066A60);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_80066A68);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_80066A70);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_80066C70);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_80066C78);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_80066C80);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_80066F10);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_80067208);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_80067244);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_8006747C);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", perform_behavior_king_rat);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", perform_behavior_rat);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", perform_behavior_sheep);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_80067FB0);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_80068204);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_8006820C);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", perform_behavior_penguin);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_8006864C);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_80068838);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_80068A80);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_80068C48);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_80068C50);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_80068EE8);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_80069184);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_80069404);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_8006966C);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_80069930);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_80069B90);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_80069DEC);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_8006A054);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_8006A2FC);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_8006A66C);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_8006A880);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_8006AB08);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_8006ACB0);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_8006AF54);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_8006B1C8);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_8006B1D0);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_8006B1D8);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_8006B364);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_8006B36C);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_8006B374);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_8006B37C);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", perform_behavior_seagull);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_8006B5DC);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_8006B5E4);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_8006B82C);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_8006B834);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_8006B83C);

INCLUDE_ASM("asm/esa/nonmatchings/behaviours", func_8006B844);
