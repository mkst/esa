#ifndef FUNCTIONS_H
#define FUNCTIONS_H

s32  abs(s32 arg0);
s32  rand(void);
s8  *memset(s8 *s, s8 c, s32 len);
void memclr(s32 *src, s32 cnt);

void recharge_skill(s16);

void func_8006309C(u8 arg0, struct005 *animal);
void load_animal(s16 id);
void func_80076D94(void);
s32  create_particle_effect(s32 x, s32 z, s32 y, s16 id, s32, s32, s32, s32, u16 color1, u16 color2, s32); // TBD
s32  func_800ABBB0(s32, s32, s32);
void func_80076D60(s8 arg0);

// TODO:
// void func_8001B714(struct004 *arg0, u32 arg1, s32 arg2, void *arg3, s32 arg4, s16 arg5, s16 arg6, s16 arg7);
void func_8001B3FC(void);
u16  func_8001CEB4(void);
s16  func_8001CED4(s16 idx);
s16  func_8001CF24(s16 arg0);
s8   func_8001CF7C(u8 idx);
s16  func_8001CF98(s16 arg0);
s16  func_8001CFEC(s16 arg0, s16 arg1);
s16  func_8001D294(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

void func_8002E6A0(s32);

void func_8003AF20(void);
void func_8003AEF0(s16, s8);
void func_8003E5EC(void);

s32  func_8004596C(void);
struct000 *func_80047108(Animal *arg0, s16 arg1, u16 arg2);
void func_8004F828(struct004 *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4);
void func_80046850(struct004* arg0);

s32  func_800509BC(u8 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4);
void func_80051544(Object *arg0);
void func_80051A94(Object *arg0);
void func_80051CD0(Object *arg0);
void func_8005F8F8(void);

void *spawn_animal(s16 arg0, s16 arg1, s16 arg2, s16 rotation, s16 health, s16 id, s8 arg6);


void func_80061670(struct000 *arg0);
void func_80061688(struct000 *arg0, struct000 *arg1, u16 arg2);
void func_80061700(Animal *arg0, s16 arg1);
void func_8006173C(struct000 *arg0, struct000 *arg1);
void func_80061764(struct000 *arg0, void *arg1, s16 arg2);
void func_8006179C(struct000 *arg0);
void func_80061AF0(struct000 *arg0, s16 arg1, s16 arg2, s16 arg3, s8 arg4, u8 arg5);
void func_80061B68(struct000 *arg0);
void func_80061C60(struct000 *arg0, struct000 *arg1, s16 arg2, s16 arg3);
void func_80061D44(struct000 *arg0, struct000 *arg1);
void func_80061E74(Animal *arg0, u16 arg1, s16 arg2, s16 arg3);

void func_80062F98(s16 *arg0, s16 arg1, u16 arg2);
void func_8006303C(s16 *arg0, s16 arg1, u16 arg2);
s32  func_80064DC4(u16 arg0);

void func_8006BC30(s16, s16, s16, s16, void*, s16, s16, s16, s32, s32, s32, s16, s16);

void func_8006F408(struct021 *arg0, struct021 *arg1, struct021 *arg2, s16 arg3, s16 *arg4, s16 *arg5, s16 arg6);

void func_80078890(struct079 *arg0);

void func_800775B8(void);
void func_80078550(void);
void func_8007C444(struct000 *);
struct003 *func_80077CD8(void);
void func_8007F278(void);
void func_8007DFC4(u16);
void func_8007DA18(struct000*, s16);
s32  func_80082D94(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, u8 arg7);
void func_800849B8(s32 arg0);

void func_80082294(s32, s32, s32);

// camel
void func_800999CC(void);
void func_80099C2C(u16 arg0);

void func_800A0ADC(void);
void func_800A0F8C(void);
void func_800A1294(void);
void func_800A2344(s32);
void func_800A3A38(s32);

// TBD
// void func_800A2698(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4);
void func_800A350C(s32); // tbd

void func_800B39F4(struct013 *arg0, struct013 *arg1);
void func_800B3A20(struct013 *arg0);

void func_800C1DD4(s32*, s32*);

void func_800C1148(s32, s16);
s32  func_800C1F00(s32 arg0, s32 arg1);


#endif
