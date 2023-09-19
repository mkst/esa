#ifndef STRUCTS_H
#define STRUCTS_H


typedef struct struct000 struct000;
typedef struct struct006 struct006;
typedef struct struct004 struct004;
typedef struct struct043 struct043;
typedef struct struct065 struct065;
typedef struct Animal Animal;

typedef union {
    /* 0x00  */ s32 w;
    /* 0x00  */ s16 h[2];
} Position;

typedef struct {
    /* 0x0  */ u8  pad0[0x10];
    /* 0x10 */ s32 unk10;
    /* 0x14 */ u8  pad14[0x60];
    /* 0x74 */ s32 unk74;
    /* 0x78 */ u8  pad78[0x60];
} Camera; // size 0xD8

struct struct000 {
    /* 0x0   */ u16 state;
    /* 0x4   */ Position xPos;
    /* 0x8   */ Position zPos;
    /* 0xC   */ Position yPos;
    /* 0x10  */ u8  pad10[0xC];
    /* 0x1C */  union {
                    s32 w;
                    s16 h[2];
                } xVelocity;
    /* 0x20 */  union {
                    s32 w;
                    s16 h[2];
                } zVelocity;
    /* 0x24 */  union {
                    s32 w;
                    s16 h[2];
                } yVelocity;
    /* 0x28  */ u8  pad28[0x4];
    /* 0x2C  */ s16 unk2C;
    /* 0x2E  */ s16 unk2E;
    /* 0x30  */ s16 unk30;
    /* 0x32  */ u8  pad32[0xC];
    /* 0x3E  */ s16 unk3E;
    /* 0x40  */ u16 unk40;
    /* 0x42  */ u16 unk42;
    /* 0x44  */ s16 unk44;
    /* 0x46  */ u16 unk46;
    /* 0x48  */ u8  pad48[0x2];
    /* 0x4A  */ s8  unk4A;
    /* 0x4B  */ u8  pad4B;
    /* 0x4C  */ struct {
                    u8 pad0  : 8;
                    u8 pad8  : 8;
                    u8 pad10 : 8;
                    u8 pad18 : 1; // 0x01000000
                    u8 unk19 : 1; // 0x02000000
                    u8 unk1A : 1; // 0x04000000
                    u8 unk1B : 1; // 0x08000000
                    u8 unk1C : 1; // 0x10000000
                    u8 unk1D : 1; // 0x20000000 // was 27
                    u8 unk1E : 1; // 0x40000000
                    u8 unk1F : 1; // 0x80000000
                } unk4C;
    /* 0x4E  */ u8  unk50[0xFC];
    /* 0x14C */ s16 unk14C; // health?
    /* 0x14E */ u8  pad14E[0xA];
    /* 0x158 */ s32 unk158;
    /* 0x15C */ u8  unk15C;
    /* 0x15D */ u8  pad15D;
    /* 0x15E */ s16 unk15E;
    /* 0x160 */ u8  pad160[0x3];
    /* 0x163 */ u8  unk163;
    /* 0x164 */ u8  pad164[0x8];
    /* 0x16C */ struct006 *unk16C; // tbd
    /* 0x170 */ u8  pad170[0x1C];
    /* 0x18C */ s16 unk18C;
    /* 0x18D */ u8  unk18D[3];
    /* 0x191 */ u8  pad191[0x3B];
    /* 0x1CC */ s8  unk1CC;
    /* 0x1CD */ u8  pad1CD[0x33];
    /* 0x200 */ s32 unk200[3];
    /* 0x20C */ u8  pad20C[0x44];
    /* 0x250 */ s32 unk250;
    /* 0x254 */ u8  pad254[0x3C];
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
    /* 0x2F0 */ u8  pad2F0[0x10];
    /* 0x300 */ u16 unk300;
    /* 0x302 */ u8  pad302[0x2];
    /* 0x304 */ u16 unk304;
    /* 0x308 */ u8  pad306[0x1C];
    /* 0x322 */ s16 unk322;
    /* 0x324 */ u8  pad324[0x1C];
    /* 0x340 */ s32 unk340;
    /* 0x344 */ u8  pad344[0x42];
    /* 0x386 */ u8  unk386;
}; // 0x3F4 big?

struct struct006 {
    /* 0x0  */ u16  unk0;
    /* 0x2  */ u8   unk2;
    /* 0x4  */ u8   pad3[0x12];
    /* 0x15 */ u8   unk15;
    /* 0x16 */ u8   pad16[0x66];
    /* 0x7C */ s16  unk7C;
    /* 0x7E */ u8   pad7E[0x2];
    /* 0x80 */ s32  unk80;
    /* 0x84 */ u8   pad84[0xC];
    /* 0x90 */ u16  unk90; // animalId;
    /* 0x92 */ u16  unk92;
    /* 0x94 */ s16  unk94;
    /* 0x96 */ u8   pad96[0x2];
    /* 0x98 */ u16  unk98;
    /* 0x92 */ u8   pad9A[0x12];
    /* 0xAE */ u16  unkAC;
    /* 0xAE */ u16  unkAE;
    /* 0xB0 */ u8   padB0[0x2];
    /* 0xB2 */ u16  unkB2;
    /* 0xB4 */ u8   padB4[0x1A];
    /* 0xCE */ s16  unkCE[2][3];
    /* 0xDA */ s8   unkDA;
    /* 0xDB */ u8   padDB[0x2];
    /* 0xDD */ s8  unkDD;
    /* 0xDE */ s8  unkDE;
};  // struct035 in sssv, size 0xE0

typedef struct {
  u8 pad0[0x90];
  s32 unk90;
} struct008;

typedef struct {
    struct008 *unk0;
    struct000 *animal;
} struct002;

typedef struct {
    u8 pad0[0x3F4]; // animal state?
} struct010;

typedef struct {
    /* 0x0 */    struct006 unk0[68];
    /* 0x3B80 */ struct002 animals[30];
    /* 0x3C70 */ struct010 state[30]; // 50 * Animal struct
    /* 0xB308 */ s16 unkB308;
    /* 0xB30A */ u8  padB30A[0x8];
    /* 0xB312 */ u16 unkB312;
    /* 0xB314 */ u8  unkB314[0x2];
    /* 0xB316 */ u16 unkB316;
    /* 0xB318 */ u16 unkB318;
    /* 0xB31C */ u8  padB31A[0x2];
    /* 0xB31C */ u16 unkB31C;
    /* 0xB31E */ u8  padB31E[0x1C];
    /* 0xB33A */ s16 unkB33A;
    /* 0xB33C */ s16 unkB33C;
    /* 0xB33E */ u16 unkB33E;
} struct001;

typedef struct {
  /* 0x0 */ struct002 animals[30];
  /* 0xF0 */ struct010 state[30]; // 50 * Animal struct
  /* 0xB308 */ s16 unkB308;
  /* 0xB30A */ u8  padB30A[0x8];
  /* 0xB312 */ u16 unkB312;
  /* 0xB314 */ u8  unkB314[0x4];
  /* 0xB318 */ u16 unkB318;
} struct012;

struct Animal {
    /* 0x0   */ u8  pad0[0x60];
    /* 0x60  */ struct000 *unk60;
    /* 0x64  */ u8  pad64[0x1F0];
    /* 0x248 */ struct000 *unk254[1]; // tbd
    /* 0x24C */ u8  pad258[0x3C];
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
    /* 0x2CA */ u8  pad2CA[2];
    /* 0x2CC */ s32 unk2CC;
} ;

struct struct043 {
    union {
      s32 w;
      s16 h[2];
    } xPos;
    union {
      s32 w;
      s16 h[2];
    } zPos;
    union {
      s32 w;
      s16 h[2];
    } yPos;
    s32 unkC; // unkD0
} ; // size 0x10


struct struct004 {
    /* 0x0   */ u16 state;
    /* 0x02  */ u8  unk2[0x2];
                Position xPos;
                Position zPos;
                Position yPos;
    /* 0x10  */ u8  pad10[0xC];
    /* 0x1C  */ Position xVel;
    /* 0x20  */ Position zVel;
    /* 0x24  */ Position yVel;
    /* 0x28  */ s16 unk28;
    /* 0x2A  */ u8  pad2A;
    /* 0x2C  */ s16 unk2C;
    /* 0x30  */ u8  pad2E[0x12];
    /* 0x40 */  u16 unk40;
    /* 0x42 */  u16 unk42;
    /* 0x44 */  u16 unk44;
    /* 0x46 */  s16 unk46;
                u8  pad48[0x2];
    /* 0x4A */  s8  unk4A;
    /* 0x4A */  u8  unk4B;
                struct {
                    u8 pad0  : 8;
                    u8 pad8  : 8;
                    u8 pad10 : 8;
                    u8 pad18 : 1; // 0x01000000
                    u8 unk19 : 1; // 0x02000000
                    u8 unk1A : 1; // 0x04000000
                    u8 unk1B : 1; // 0x08000000
                    u8 unk1C : 1; // 0x10000000
                    u8 unk1D : 1; // 0x20000000 // was 27
                    u8 unk1E : 1; // 0x40000000
                    u8 unk1F : 1; // 0x80000000
                } unk4C;
                u8 pad50[0x7];
    /* 0x57 */  u8 unk57;
    /* 0x58 */  u8 pad58[0xD];
    /* 0x65 */  u8 unk65;
    /* 0x66 */  u8 pad66[0x2];
    /* 0x68 */  void *unk68;
    /* 0x6C */  struct004 *unk6C;
    /* 0x70 */  struct004 *unk70;
    /* 0x74 */  u8  pad74[0x50];
    /* 0xC4 */  struct043 unkC4[5];
    /* 0x114 */ u8  pad114[0x38];
    /* 0x14C */ s16 unk14C;
    /* 0x14E */ s16 unk14E;
    /* 0x150 */ s16 unk150;
    /* 0x152 */ s16 unk152;
    /* 0x154 */ u8  pad154[0xC];
    /* 0x160 */ u8  unk160;
    /* 0x161 */ u8  unk161;
    /* 0x162 */ u8  unk162;
    /* 0x163 */ u8  unk163;
    /* 0x164 */ u8  pad164[0x8];
    /* 0x16C */ struct006 *unk16C;
    /* 0x170 */ s8  unk170;
    /* 0x172 */ s16 unk172;
    /* 0x174 */ u8  pad174[0x4];
    /* 0x178 */ s16 unk178;
    /* 0x17A */ s16 unk17A;
    /* 0x17C */ s16 unk17C;
    /* 0x17E */ s16 unk17E;
    /* 0x180 */ s16 unk180;
    /* 0x182 */ s16 unk182;
    /* 0x184 */ s16 unk184;
    /* 0x186 */ u8  unk186[0x6];
    /* 0x18C */ u8  unk18C;
    /* 0x18D */ u8  unk18D[4];
    /* 0x191 */ u8  pad191[0x16F];
    /* 0x300 */ s32 unk300;
    /* 0x304 */ s32 unk304;
    /* 0x308 */ u8  pad308[0x3];
    /* 0x30B */ u8  unk30B;
    /* 0x30C */ u8  unk30C[0x16];
    /* 0x322 */ s16 unk322;
    /* 0x324 */ s32 unk324;
    /* 0x328 */ u8  pad328[0x40];
    /* 0x368 */ s16 unk368;
    /* 0x36A */ u16 unk36A;
    /* 0x36C */ u8  pad36C[0x1A];
    /* 0x386 */ u8  unk386;
};

typedef struct {
    u16 unk0;
    u8  pad2[0x4];
    s16 unk6;
    u8  pad8[0x2];
    s16 unkA;
    u8  padC[0x2];
    s16 unkE;
    u8  pad10[0x1C];
    s16 unk2C;
    s16 unk2E;
    u8  pad30[0x10];
    u16 unk40;
    u8  pad42[0x10C];
    s16 unk14E;
    s16 unk150;
    s16 unk152;
    /* 0x154 */ u8 unk154;
    u8  pad155[0x3];
    u16 unk158;
    u8  pad15C[0x2C];
    struct004 *unk188;
} Object; // struct071? assume size == 0x270

typedef struct {
    u8  pad0[0x10];
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    u8  pad28[0x40];
    s32 unk68;
    u8  pad6C[0x4];
    s32 unk70;
    u8  pad74[0xF4];
    s32 unk168;
    /* 0x16C */ struct006 *unk16C;
    u8  pad170[0x104];
    u8  unk274;
} struct007;

typedef struct {
    s16 unk0;
    s16 unk2;
} Energy; // size 0x4

typedef struct {
  /* 0x0 */  u8  pad0[0xE];
  /* 0xE */  s16 unkE;
  /* 0x10 */ u8  pad10[0x32];
  /* 0x42 */ u16 unk42;
} struct003;

typedef struct {
  /* 0x0 */ u8  pad0[0x6];
  /* 0x6 */ s16 unk6;
  /* 0x8 */ u8  pad8[0x2];
  /* 0xA */ s16 unkA;
} struct009;

typedef struct {
    /* 0x00  */ u8  pad0[0x4];
    /* 0x04  */ union {
                  s32 w;
                  s16 h[2];
                } xPos;
    /* 0x08  */ union {
                  s32 w;
                  s16 h[2];
                } zPos;
    /* 0x0C  */ union {
                  s32 w;
                  s16 h[2];
                } yPos;
    /* 0x10  */ u8  pad10[0xA];
    /* 0x1A  */ s16 unk1A;
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
    /* 0x28C */ u8  pad28C[0x6];
    /* 0x292 */ s16 unk292;
    /* 0x28C */ u8  pad294[0x38];
    /* 0x2CC */ s32 unk2CC;
    /* 0x2D0 */ u8  pad2D0[0x4];
    /* 0x2D4 */ struct {
                    u8  state : 4; // 0xFF0F => 0
                    u8  unk4  : 3; // 0xFFF1 => 0
                    u8  unk7  : 1;
                    s8  unk8  : 8;
                    // u32 pad10 : 16;
                } unk2D4;
    /* 0x2D8 */ s32 unk2D8;
    /* 0x2DC */ u8  pad2DC[0x4];
    /* 0x2E0 */ s32 unk2E0;
    /* 0x2E4 */ s32 unk2E4;
    /* 0x2E8 */ u8  unk2E8[0x4];
    /* 0x2EC */ s32 unk2EC;
    /* 0x2F0 */ s16 unk2F0;
    /* 0x2F4 */ u8  pad2F2[0xE];
    /* 0x300 */ Energy skillAEnergy[2];
    /* 0x304 */ u8  pad308[0x4];
    /* 0x30C */ s16 unk30C;
    /* 0x30E */ u16 unk30E;
    /* 0x310 */ u8  pad310[0x2];
    /* 0x312 */ s16 unk312;
    /* 0x312 */ s16 unk314;
    /* 0x312 */ u8  pad316[0xC];
    /* 0x322 */ s16 unk322;
    /* 0x324 */ s16 unk324;
    /* 0x326 */ u8  pad326[0x2];
    /* 0x328 */ s16 unk328;
    /* 0x32A */ s16 unk32A;
    /* 0x32C */ s16 unk32C;
    /* 0x32E */ s16 unk32E;
    /* 0x330 */ s16 unk330;
    /* 0x332 */ u8  pad332[0x6];
    /* 0x338 */ s16 unk338;
    /* 0x33A */ s16 unk33A;
    /* 0x33C */ u8  pad33C[0x4];
    /* 0x340 */ struct007 *unk340;
    /* 0x344 */ u8  pad344[0x4];
    /* 0x348 */ s16 unk348;
    /* 0x34A */ u16 unk34A;
    /* 0x34C */ u8  pad34C[0x4];
    /* 0x350 */ struct003* unk350;
    /* 0x354 */ u16 unk354;
    /* 0x358 */ s32 unk358;
    /* 0x35A */ u8  pad35C[0xC];
    /* 0x368 */ s16 unk368;
    /* 0x36A */ s16 unk36A;
    /* 0x36C */ u8  unk36C[0xC];
    /* 0x378 */ s16 unk378;
    /* 0x37A */ u8  pad37A[0x6];
    /* 0x380 */ s8  unk380;
    /* 0x381 */ u8  pad381[0x2];
    /* 0x383 */ u8  unk383;
    /* 0x384 */ u8  unk384;
    /* 0x385 */ u8  unk385;
    /* 0x386 */ u8  unk386;
    /* 0x387 */ u8  pad387;
    /* 0x388 */ u8  unk388;
    /* 0x389 */ u8  unk389;
    /* 0x38A */ u8  unk38A;
    /* 0x38B */ s8  unk38B;
    /* 0x38C */ u8  pad38C;
    /* 0x38D */ u8  unk38D;
    /* 0x38E */ s8  unk38E;
} struct005;

typedef struct {
  u8  pad0[0x1A];
  u16 unk1A;
  u8  pad1C[0x32];
  s16 unk4E;
} struct011;

typedef struct struct013 struct013;
typedef struct struct014 struct014;

struct struct013 {
  /* 0x0 */  struct013* next;
  /* 0x4 */  struct013* prev;
  /* 0x8 */  struct013* unk8;
  /* 0xC */  struct013* unkC;
  /* 0x10 */ struct013* unk10;
  /* 0x14 */ struct013* unk14;
  /* 0x18 */ u16 unk18; // id?
  /* 0x1A */ u8  unk1A;
  /* 0x1B */ u8  unk1B;
  /* 0x1C */ u8  pad1C[0x24];
  /* 0x40 */ s32 unk40;
  /* 0x44 */ s32 unk44;
  /* 0x48 */ u8  pad48[0x38];
};

struct struct014 {
  s32 unk0; // unknown size
};

typedef struct {
    u8 unk0; // terrain height?
    u8 unk1; // terrain height?
    u8 unk2; // terrain type?
    u8 unk3; // e.g. bridges? fences?
    u8 unk4; // flags
    u8 unk5; // also flags
    u8 unk6; // water?
    u8 unk7;
} struct015; // size 0x8, struct063 in sssv

typedef struct {
  u8 unk0;
  u8 unk1;
  u8 unk2;
  u8 unk3;
  u8 unk4;
  u8 unk5;
  u8 unk6;
  u8 unk7;
  u8 unk8;
  u8 unk9;
  u8 unkA;
  s8 unkB;
} struct016; // size 0xC, struct064 in sssv

typedef struct {
    s32 unk0;
    s32 unk4;
} struct017;

typedef struct {
    s16 unk0;
    u8  unk2[6];
} struct018;

typedef struct {
    u8 unk0;
    u8 unk1;
} struct019;

typedef struct {
    u8  pad0[0x2D0];
    u16  unk2D0[90];
    u16  unk384[90];
} struct020;

typedef struct {
  s16 unk0;  // vtx x
  s16 unk2;  // vtx y
  s16 unk4;  // tc0
  s16 unk6;  // tc1
} struct021; // size 0x8

typedef struct {
  u16 unk0;
  u16 unk2;
  u16 unk4;
  u8  alignment[0x2]; //?
} struct023; // psx vtx structure?

typedef struct {
    s32 pad[5];
    // u8  pad[0x14];
    /* 0x14 */ s16 unk14;
    /* 0x16 */ s16 unk16;
    /* 0x18 */ s16 unk18;
    /* 0x1A */ s16 unk1A;
} struct024; // size 0x1C

typedef struct {
    u8 pad0[0x88];
    s32 unk88;
    s32 unk8C;
} struct025;

typedef struct {
    u8 pad[0x90];
} struct026;

typedef struct {
    struct026 unk0[1];
} struct027;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} struct028; // size 0x18

typedef struct {
    s32 pad0;
    s32 unk4;
    s32 pad8[0x3];
    s16 unk14;
    s16 unk16;
    u8  pad18[0x18];
    s8  unk30;
    u8  pad31[0x4];
    s8  unk35;
    u8  pad36[0x2];
} struct029; // size 0x38

struct struct065 {
    /* 0x0 */ struct065 *next;
    /* 0x4 */ struct065 *prev;
    /* 0x8 */ Animal *animal;
}; // size 0xC

typedef struct {
    /* 0x0 */  u16 used;
    /* 0x2 */  // padding not required
    /* 0x4 */  s32 distance[3];
    /* 0x10 */ struct000 *animal[3];
} struct079_inner; // size 0x1C

typedef struct {
    /* 0x0 */  struct079_inner unk0;
    /* 0x1C */ struct079_inner unk1C;
    /* 0x38 */ struct079_inner unk38;
    /* 0x54 */ s32 unk54;
    /* 0x58 */ Animal *unk58; // Animal? or Object?
    /* 0x5C */ s32 unk5C;
    /* 0x60 */ Animal *unk60;
    /* 0x64 */ u8  unk64;
} struct079; // size 0x65 ?


#endif
