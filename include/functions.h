#ifndef FUNCTIONS_H
#define FUNCTIONS_H

s16  abs(s16 arg0);
s32  rand(void);
s8  *memset(s8 *s, s8 c, s32 len);
void memclr(s32 *src, s32 cnt);

void func_8006309C(u8 arg0, struct005 *animal);
void load_animal(s16 id);
void func_80076D94(void);
s32  create_particle_effect(s32 x, s32 z, s32 y, s16 id, s32, s32, s32, s32, u16 color1, u16 color2, s32); // TBD
void func_800ABBB0(s32, s32, s32);
void func_80076D60(s8 arg0);

u16  func_8001CEB4(void);
s16  func_8001CED4(s16 idx);
s16  func_8001CF24(s16 arg0);
s8   func_8001CF7C(u8 idx);
s16  func_8001CF98(s16 arg0);
s16  func_8001CFEC(s16 arg0, s16 arg1);
s16  func_8001D294(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

void func_8004F828(struct004 *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4);

void func_80051A94(Object *arg0);

void func_80061670(struct000 *arg0);
void func_80061700(Animal *arg0, s16 arg1);
void func_8006173C(struct000 *arg0, struct000 *arg1);
void func_80061764(struct000 *arg0, void *arg1, s16 arg2);
void func_8006179C(struct000 *arg0);
void func_80061B68();
void func_80061C60(struct000 *arg0, struct000 *arg1, s16 arg2, s16 arg3);
void func_80061D44(struct000 *arg0, struct000 *arg1);
void func_80061E74(Animal *arg0, u16 arg1, s16 arg2, s16 arg3);

void func_80062F98(s16 *arg0, s16 arg1, u16 arg2);
void func_8006303C(s16 *arg0, s16 arg1, u16 arg2);


void func_800C1DD4(s32*, s32*);

void func_800C1148(s32, s16);
s32  func_800C1F00(s32 arg0, s32 arg1);


#endif
