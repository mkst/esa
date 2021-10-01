#ifndef STRUCTS_H
#define STRUCTS_H

typedef struct struct000 struct000;

struct struct000 {
    /* 0x0   */ u8  pad0[0x290];
    /* 0x290 */ s8  unk290;
    /* 0x294 */ u8  pad291[0x1B];
    /* 0x2AC */ s16 unk2AC;
    /* 0x2AE */ u8  unk2AE[0x2];
    /* 0x2B0 */ s16 unk2B0;
    /* no padding required */
    /* 0x2B4 */ struct000 *unk2B4; // pointer
    /* 0x2B8 */ s16 unk2B8;
    /* 0x2BA */ u8  unk2BA;
    /* 0x2BB */ u8  pad2BB[0x11];
    /* 0x2CC */ s32 unk2CC;
    /* 0x2D0 */ u8  pad2D0[0x1C];
    /* 0x2EC */ s32 unk2EC;
    /* 0x2F0 */ u8  pad2F0[0x50];
    /* 0x340 */ s32 unk340;
};

typedef struct {
    struct000 *unk0;
    s32 pad4;
} struct002;

typedef struct {
    u8 pad0[0x3B84];
    struct002 unk3B84[68];
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
    /* 0x0   */ u8  pad0[0x6];
    /* 0x06  */ s16 xPos;
    /* 0x08  */ u8  pad8[0x2];
    /* 0x0A  */ s16 zPos;
    /* 0x08  */ u8  padC[0x2];
    /* 0x0E  */ s16 yPos;
    /* 0x08  */ u8  pad10[0x162];
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

#endif
