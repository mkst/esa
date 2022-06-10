#ifndef STRUCTS_H
#define STRUCTS_H

typedef struct struct000 struct000;

struct struct000 {
    /* 0x0   */ u8  pad0;
    /* 0x1   */ u8  unk1[5];
    /* 0x6   */ s16 unk6;
    /* 0x8   */ u8  pad8[0x2];
    /* 0xA   */ s16 unkA;
    /* 0xC   */ u8  padC[0x2];
    /* 0xE   */ s16 unkE;
    /* 0x10  */ u8  pad10[0x32];
    /* 0x42  */ u16 unk42;
    /* 0x44  */ u8  unk44[0x24C];
    /* 0x290 */ s8  unk290;
    /* 0x291 */ u8  pad291[0x3];
    /* 0x294 */ s8  unk294;
    /* 0x295 */ s8  unk295;
    /* 0x296 */ u8  unk296[0x2];
    /* 0x298 */ s16 unk298;
    /* 0x29A */ s16 unk29A;
    /* 0x29C */ s16 unk29C;
    /* 0x29E */ u8  pad29E[0xE];
    /* 0x2AC */ s16 unk2AC;
    /* 0x2AE */ u8  unk2AE[0x2];
    /* 0x2B0 */ s16 unk2B0;
    /* no padding required */
    /* 0x2B4 */ struct000 *unk2B4; // pointer
    /* 0x2B8 */ s16 unk2B8;
    /* 0x2BA */ s8  unk2BA;
    /* 0x2BB */ u8  pad2BB[0x5];
    /* 0x2C0 */ s8  unk2C0;
    /* 0x2C1 */ u8  unk2C1;
    /* 0x2C2 */ u8  pad2C2[0x6];
    /* 0x2C8 */ s16 unk2C8;
    /* 0x2CA */ s16 pad2CA;
    /* 0x2CC */ struct000 *unk2CC;
    /* 0x2D0 */ s8  unk2D0;
    /* 0x2D1 */ u8  pad2D1[0x1B];
    /* 0x2EC */ s32 unk2EC;
    /* 0x2F0 */ u8  pad2F0[0x50];
    /* 0x340 */ s32 unk340;
};

typedef struct {
    void *unk0;
    struct000 *animal;
} struct002;

typedef struct {
    /* 0x0 */ u8 pad0[0x3B80];
    /* 0x3B80 */ struct002 animals[68];
} struct001;

typedef struct {
    /* 0x0   */ u8  pad0[0x294];
    /* 0x294 */ u8  unk294;
    /* 0x295 */ u8  unk295;
    /* 0x296 */ s16 unk296;
    /* 0x298 */ u8  pad298[0x4];
    /* 0x29C */ s16 unk29C;
    /* 0x2A0 */ u8  pad29E[0xE];
    /* 0x2AC */ s16 unk2AC;
    /* 0x2AE */ u8  unk2AE[0x6];
    /* 0x2B4 */ s16 unk2B4;     // is this a union with struct000?
    /* 0x2B6 */ u8  pad2B6[0xA];
    /* 0x2C0 */ u8  unk2C0;
    /* 0x2C1 */ u8  unk2C1;
    /* 0x2C2 */ u8  pad2C2[0x6];
    /* 0x2C8 */ s16 unk2C8;
    /* 0x2CC */ s32 unk2CC;
} Animal;

typedef struct {
    /* 0x0   */ u16 state;
    /* 0x02  */ u8  unk2[0x4];
    /* 0x06  */ s16 xPos;
    /* 0x08  */ u8  pad8[0x2];
    /* 0x0A  */ s16 zPos;
    /* 0x0C  */ u8  padC[0x2];
    /* 0x0E  */ s16 yPos;
    /* 0x10  */ u8  pad10[0xC];
    /* 0x1C  */ s32 xVel;
    /* 0x20  */ s32 zVel;
    /* 0x24  */ s32 yVel;
    /* 0x28  */ u8  pad28[0x1A];
    /* 0x42 */  u16 unk42;
    /* 0x44 */  u8  pad44[0x6];
    /* 0x4A */  s8  unk4A;
    /* 0x4B */  u8  pad4B[0x127];
    /* 0x172 */ s16 unk172;
    /* 0x174 */ u8  pad174[0x4];
    /* 0x178 */ s16 unk178;
    /* 0x17A */ s16 unk17A;
    /* 0x17C */ s16 unk17C;
    /* 0x17E */ s16 unk17E;
    /* 0x180 */ s16 unk180;
    /* 0x182 */ s16 unk182;
    /* 0x184 */ s16 unk184;
} struct004;

typedef struct {
    /* 0x0 */ u8 pad0[0x154];
    /* 0x154 */ u8 unk154;
} Object; // struct071? assume size == 0x270

typedef struct {
    /* 0x00  */ u8  pad0[0x6];
    /* 0x06  */ s16 xPos;
    /* 0x08  */ u8  pad8[0x2];
    /* 0x0A  */ s16 zPos;
    /* 0x0C  */ u8  padC[0x2];
    /* 0x0E  */ s16 yPos;
    /* 0x10  */ u8  pad10[0xC];
    /* 0x1C  */ s16 xVel;
    /* 0x1E  */ u8  pad1E[0x2];
    /* 0x20  */ s16 zVel;
    /* 0x22  */ u8  pad22[0x2];
    /* 0x24  */ s16 yVel;
    /* 0x26  */ u8  pad26[0x1C];
    /* 0x42  */ u16 unk42;
    /* 0x44  */ u8  pad44[0x234];
    /* 0x278 */ s16 unk278;
    /* 0x27A */ s16 unk27A;
    /* 0x27C */ s16 unk27C;
    /* 0x27E */ u8  pad27E[0x2];
    /* 0x280 */ s16 unk280;
    /* 0x282 */ s16 unk282;
    /* 0x284 */ s16 unk284;
    /* 0x286 */ u8  pad286[0x4];
    /* 0x28A */ s16 unk28A;
    /* 0x28C */ u8  pad28C[0x80];
    /* 0x30C */ s16 unk30C;
    /* 0x30E */ u8  pad30E[0x14];
    /* 0x322 */ s16 unk322;
    /* 0x324 */ u8  unk324[0x26];
    /* 0x34A */ u16 unk34A;
    /* 0x34C */ u8  pad34C[0x39];
    /* 0x385 */ u8  unk385;
    /* 0x386 */ u8  unk386;
    /* 0x387 */ u8  pad387[0x7];
    /* 0x38E */ s8  unk38E;
} struct005;

typedef struct {
    /* 0x0 */ u8  pad0[0x90];
    /* 0x90 */ u16 unk90; // animalId;
    /* 0x92 */ u8  pad92[0x1C];
    /* 0xAE */ u16  unkAE;
} struct006;  // struct035 in sssv

#endif
