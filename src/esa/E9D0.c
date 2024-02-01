#include "common.h"


#if 0

s8  D_800E4FB0; // uses $gp, but already defined in B7CC ???

extern s32 D_800E40D0;
SVECTOR_U D_800E415C;
// extern s32 D_800E4160;
extern struct037 D_800E4FBC[];
s32 D_800E4FC0;
extern s32 D_800E4FC4;
 s32 D_800E4FC8;

extern MATRIX D_800E5E9C;

extern struct036 *D_800E4F28;

void *func_8001E3D0(Primitive *arg0) {
    MATRIX *sp10;
    s32 sp24;
    s32 sp28;
    s32 sp2C; //
    s32 i;
    struct037 *svector;
    Primitive *primitive;

    primitive = arg0;

    PushMatrix();
    if (D_800E40D0 == 31) {
        D_800E415C.vz = 0x400;
    }
    RotMatrixZYX_gte(&D_800E415C, &sp10);
    MulMatrix0(&D_800E5E9C, &sp10, &sp10);
#if 0
    // libgte macro...
    sp24 = 0;
    sp28 = 0;
    sp2C = 0;

    M2C_ERROR(/* unknown instruction: ctc2 $t4, $5 */);
    M2C_ERROR(/* unknown instruction: ctc2 $t5, $6 */);
    M2C_ERROR(/* unknown instruction: ctc2 $t6, $7 */);
    M2C_ERROR(/* unknown instruction: ctc2 $t4, $0 */);
    M2C_ERROR(/* unknown instruction: ctc2 $t5, $1 */);
    M2C_ERROR(/* unknown instruction: ctc2 $t4, $2 */);
    M2C_ERROR(/* unknown instruction: ctc2 $t5, $3 */);
    M2C_ERROR(/* unknown instruction: ctc2 $t6, $4 */);
#endif

    func_800B9BF0(D_800E4FC8, D_800E4FC4, D_800E4FBC);
    for (i = 0; i < D_800E4FC8; i++) {

        svector = &D_800E4FBC[i];
        if (!(svector->unk0 & 0xFE00) && !(svector->unk2 & 0xFF00) && (svector->unk4 != 0)) {
            primitive->unk3 = 2;
            primitive->unk7 = 104;
            primitive->unk8 = svector->unk0;
            primitive->unkA = svector->unk2;
            primitive->unk4 = 0xFF; // r ?
            primitive->unk5 = 0xFF; // g ?
            primitive->unk6 = 0xFF; // b ?
            AddPrim(D_800E4F28->unk74 + 0x1FFC, primitive);
            primitive++;
        }
    }
    if (D_800E4FB0 == 0) {
        if (D_800E40D0 != 31) {
            D_800E415C.vy = D_800E415C.vy + 1;
        } else {
            D_800E415C.vy = -(D_800E4FC0 & 0xFFF);
        }
    }

    PopMatrix();
    return primitive;
}
#else
INCLUDE_ASM("asm/esa/nonmatchings/E9D0", func_8001E3D0);
#endif
