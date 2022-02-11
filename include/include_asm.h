#ifndef INCLUDE_ASM_H
#define INCLUDE_ASM_H

#ifndef _REAL_PSYQ

#ifndef PERMUTER

#ifndef INCLUDE_ASM

#ifdef TARGET_ESA
#define TARGET esa
#else
#define TARGET pt
#endif

#define INCLUDE_ASM(FOLDER, NAME) \
__asm__( \
    ".section .text\n" \
    "\t.align\t2\n" \
    "\t.globl\t"#NAME"\n" \
    "\t.ent\t"#NAME"\n" \
    #NAME ":\n" \
    ".include \""FOLDER"/"#NAME".s\"\n" \
    "\t.set reorder\n" \
    "\t.set at\n" \
    "\t.end\t"#NAME \
);
#endif

// omit .global
__asm__(".include \"include/include_asm.inc\"\n");

#else
#define INCLUDE_ASM(FOLDER, NAME)
#endif

#endif


#endif
