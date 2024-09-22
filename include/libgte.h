#ifndef LIBGTE_H
#define LIBGTE_H

#define gte_SetRotMatrix(r0)                                                   \
    __asm__ volatile(                                                          \
        "lw	$12, 0( %0 );"                                                     \
        "lw	$13, 4( %0 );"                                                     \
        "ctc2	$12, $0;"                                                        \
        "ctc2	$13, $1;"                                                        \
        "lw	$12, 8( %0 );"                                                     \
        "lw	$13, 12( %0 );"                                                    \
        "lw	$14, 16( %0 );"                                                    \
        "ctc2	$12, $2;"                                                        \
        "ctc2	$13, $3;"                                                        \
        "ctc2	$14, $4"                                                         \
        :                                                                      \
        : "r"(r0)                                                              \
        : "$12", "$13", "$14")

#define gte_SetTransMatrix(r0)                                                 \
    __asm__ volatile(                                                          \
        "lw	$12, 20( %0 );"                                                    \
        "lw	$13, 24( %0 );"                                                    \
        "ctc2	$12, $5;"                                                        \
        "lw	$14, 28( %0 );"                                                    \
        "ctc2	$13, $6;"                                                        \
        "ctc2	$14, $7"                                                         \
        :                                                                      \
        : "r"(r0)                                                              \
        : "$12", "$13", "$14")

#endif
