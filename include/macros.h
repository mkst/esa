#ifndef MACROS_H
#define MACROS_H

#define    FTOFIX32(x)    (long)((x) * (float)0x00010000)
#define    FIX32TOF(x)    ((float)(x) * (1.0f / (float)0x00010000))

#define    SSSV_RAND(x) (func_8001CEB4() & (x - 1))

#endif
