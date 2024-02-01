#include "common.h"


INCLUDE_ASM("asm/esa/nonmatchings/dynamic_tail", func_800849B8);

INCLUDE_ASM("asm/esa/nonmatchings/dynamic_tail", func_800849EC);

INCLUDE_ASM("asm/esa/nonmatchings/dynamic_tail", func_80084BE4);

#if 0
void func_80084E58(s16 arg0, s32 arg1, s16 arg2, s16 arg3) {
    s32 sp10;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s16 *sp24;
    s16 *var_t9;
    s16 var_t7;
    struct005 *temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a2;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s2;
    s32 temp_t0;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_t4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_a1;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_fp;
    s32 var_lo;
    s32 var_s1;
    s32 var_s2;
    s32 var_s6;
    s32 var_s7;
    s32 i;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    struct028 *temp_a3;
    struct028 *var_s3;
    struct029 *temp_s4;
    void *var_s5;

    // var_t7 = arg2;
    // sp10 = (s32) arg3;
    if (D_800E4FB0 == 0) {
        temp_s4 = &D_8011E58C[arg0];
        temp_a1 = temp_s4->unk4;
        temp_a3 = &D_8011C96C[temp_s4->unk16];
        if (temp_a1 != 0) {
            temp_s4->unk20 = (s32) (temp_a1->xPos.w + (temp_s4->unkE << 0x10));
            temp_s4->unk24 = (s32) (temp_a1->zPos.w + (temp_s4->unk10 << 0x10));
            temp_s4->unk28 = (s32) (temp_a1->yPos.w + (temp_s4->unk12 << 0x10));
        }

        temp_v1 = temp_s4->unk20;
        temp_a1_2 = temp_s4->unk24;
        temp_a2 = temp_s4->unk28;
        temp_a3->unk0 = temp_v1;
        temp_a3->unk4 = temp_a1_2;
        temp_a3->unk8 = temp_a2;

        i = 1;
        if ((arg3 == 1) && (((((*D_800E53A4 + ((((temp_v1 >> 0x16) * 0x81) + (temp_a1_2 >> 0x16)) * 8))->unk6 * 4) - 0x20) << 0x10) < temp_a2)) {
            // ???
        }

        var_s7 = temp_s4->unk20;
        var_fp = temp_s4->unk24;
        var_s6 = temp_s4->unk28;

        if (temp_s4->unk14 > 1) {
            var_t9 = D_800CA604;
            var_s3 = temp_a3 + 0x18;
            var_s5 = arg1 + 0xC;
            do {
                temp_t4 = (s32) (var_t9[(temp_s4->unk2C + 0x40) & 0xFF]) >> 0x7;
                temp_t0 = (s32) (var_t9[temp_s4->pad18[0x14]]) >> 0x7;

                temp_t1 = var_s3->unk0 + ((var_s3->unkC * arg2) / 256) + ((s32) ((var_s5->unk0 * temp_t4) + (var_s5->unk4 * temp_t0)) >> 8);
                temp_a3_2 = var_s3->unk4 + ((var_s3->unk10 * arg2)  / 256) + ((s32) ((-var_s5->unk0 * temp_t0) + (var_s5->unk4 * temp_t4)) >> 8);
                var_a1 = var_s3->unk8 + ((var_s3->unk14 * arg2) / 256) + var_s5->unk8;

                var_s1 = var_s7 - temp_t1;
                var_s2 = var_fp - temp_a3_2;
                if (arg3 == 1) {
                    if (sp1C < var_a1) {
                        var_a1 = sp1C;
                        // var_s1 = var_s7 - temp_t1;
                        // var_s2 = var_fp - temp_a3_2;
                    }
                // } else {
                    // var_s2 = var_fp - temp_a3_2;
                }

                temp_s0 = var_s6 - var_a1;

                temp_s1 = (var_s1 / 1024);
                temp_s2 = (var_s2 / 1024);
                temp_s0_2 = (temp_s0 / 1024);

                // temp_s1_2 = temp_s1 << 0xA;

                sp1C = M2C_ERROR(/* Read from unset register $t6 */);

                temp_v0 = SquareRoot0((temp_s1 * temp_s1) + (temp_s2 * temp_s2) + (temp_s0_2 * temp_s0_2));
                if (temp_v0 > 1) {
                    var_v0_4 = (s32) temp_s4->unk18 / temp_v0;
                } else {
                    var_v0_4 = 1;
                }
                var_lo = (temp_s1 << 0xA) * var_v0_4;
                var_s7 = var_s7 - (var_lo >> 0xA);
                var_fp = var_fp - ((s32) ((temp_s2 << 0xA) * var_v0_4) >> 0xA);
                var_s6 = var_s6 - ((s32) ((temp_s0_2 << 0xA) * var_v0_4) >> 0xA);

                var_s3->unk10 = var_fp - var_s3->unk4;
                var_s3->unk0 = var_s7;
                var_s3->unk4 = var_fp;
                var_s3->unkC = var_s7 - var_s3->unk0;
                var_s3->unk14 = var_s6 - var_s3->unk8;
                var_s3->unk8 = var_s6;

                i++;
                var_s5 += 0xC;
                var_s3 += 0x18;
            } while (i < temp_s4->unk14);
        }
    }
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/dynamic_tail", func_80084E58);
#endif

INCLUDE_ASM("asm/esa/nonmatchings/dynamic_tail", func_80085274);

INCLUDE_ASM("asm/esa/nonmatchings/dynamic_tail", func_80086120);

INCLUDE_ASM("asm/esa/nonmatchings/dynamic_tail", func_800861AC);

INCLUDE_ASM("asm/esa/nonmatchings/dynamic_tail", func_80086234);

INCLUDE_ASM("asm/esa/nonmatchings/dynamic_tail", func_80086274);

INCLUDE_ASM("asm/esa/nonmatchings/dynamic_tail", func_80086824);

INCLUDE_ASM("asm/esa/nonmatchings/dynamic_tail", func_80087440);

void *func_80087738(struct029 *arg0) {
    Vtx2 *vtx;

    s16 i;

    s32 temp_s3;
    s32 temp_s4;

    s32 var_lo;
    s32 var_t1;
    s32 var_v1;

    s32 sqrt;
    s32 x, y, z;

    temp_s4 = D_800E5158 >> 2;
    temp_s3 = D_800E515C >> 2;

    vtx = &D_80122D8C;

    for (i = 0; i < arg0->unk14; i++) {

        if (i == (arg0->unk14 - 1)) {
            var_t1 =  temp_s3 * (((D_8011C96C[((arg0->unk16 + arg0->unk14) - 1)].unk8) - (D_8011C96C[(arg0->unk16 + arg0->unk14) - 2].unk8)) >> 0x10);
            var_lo = -temp_s4 * (((D_8011C96C[((arg0->unk16 + arg0->unk14) - 1)].unk8) - (D_8011C96C[(arg0->unk16 + arg0->unk14) - 2].unk8)) >> 0x10);
            var_v1 = (temp_s4 * (((D_8011C96C[((arg0->unk16 + arg0->unk14) - 1)].unk4) - (D_8011C96C[(arg0->unk16 + arg0->unk14) - 2].unk4)) >> 0x10)) - ((temp_s3 * (D_8011C96C[arg0->unk16 + 0xF].unk0 - D_8011C96C[(arg0->unk16 + arg0->unk14) - 2].unk0)) >> 0x10);
        } else {
            var_t1 =  temp_s3 * (((D_8011C96C[((arg0->unk16 + i) + 1)].unk8) - (D_8011C96C[(arg0->unk16 + i)].unk8)) >> 0x10);
            var_lo = -temp_s4 * (((D_8011C96C[((arg0->unk16 + i) + 1)].unk8) - (D_8011C96C[(arg0->unk16 + i)].unk8)) >> 0x10);
            var_v1 = (temp_s4 * (((D_8011C96C[((arg0->unk16 + i) + 1)].unk4) - (D_8011C96C[(arg0->unk16 + i)].unk4)) >> 0x10)) - ((temp_s3 * (D_8011C96C[((arg0->unk16 + i) + 1)].unk0 - D_8011C96C[(arg0->unk16 + i)].unk0)) >> 0x10);
        }

        // unused code that is partially optimised out
        sqrt = SquareRoot0((var_t1 * var_t1) + (var_lo * var_lo) + (var_v1 * var_v1));
        if ((sqrt * 2) == 0) {
             sqrt = 2;
        } else {
            sqrt *= 2;
        }

        x = (var_t1 * (arg0->unk18 >> 0xE)) / sqrt;
        y = (var_lo * (arg0->unk18 >> 0xE)) / sqrt;
        z = (var_v1 * (arg0->unk18 >> 0xE)) / sqrt;
        // end of unused code


        vtx[i].vtx1.x = D_8011C96C[arg0->unk16 + i].unk0 >> 0x10;
        vtx[i].vtx1.y = D_8011C96C[arg0->unk16 + i].unk4 >> 0x10;
        vtx[i].vtx1.z = D_8011C96C[arg0->unk16 + i].unk8 >> 0x10;

        vtx[i].vtx2.x = D_8011C96C[arg0->unk16 + i].unk0 >> 0x10;
        vtx[i].vtx2.y = D_8011C96C[arg0->unk16 + i].unk4 >> 0x10;
        vtx[i].vtx2.z = D_8011C96C[arg0->unk16 + i].unk8 >> 0x10;
    }
    return vtx;
}

INCLUDE_ASM("asm/esa/nonmatchings/dynamic_tail", func_80087AD0);

INCLUDE_ASM("asm/esa/nonmatchings/dynamic_tail", func_8008822C);

INCLUDE_ASM("asm/esa/nonmatchings/dynamic_tail", func_80088268);

INCLUDE_ASM("asm/esa/nonmatchings/dynamic_tail", func_800882B0);
