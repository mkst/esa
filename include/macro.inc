# Assembly Macros

.macro jlabel label
    glabel \label
.endm

.macro glabel label
    .global \label
    .balign 2
    \label:
.endm

.macro move a, b
    addu \a, \b, $zero
.endm

.include "gte.inc"
