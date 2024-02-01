#include "common.h"

void SsSetSerialVol(u8 s_num, s16 voll, s16 volr);

void set_volume(s8 vol) {
    s32 volume;

    volume = (vol * 0x7F) / 100;
    SsSetSerialVol(0, volume, volume);
}

void func_8001F1F8(void) {

}
