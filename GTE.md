# GTE

Assembly dump from capstone:
```
/* 8C5FC 8009BFFC 040061C9 */  lwc2       $1, 4($t3)
/* 8C600 8009C000 00000000 */  nop
/* 8C604 8009C004 00000000 */  nop
/* 8C608 8009C008 0100184A */  .byte      0x01, 0x00, 0x18, 0x4a
/* 8C60C 8009C00C 00002EE9 */  swc2       $14, ($t1)
/* 8C610 8009C010 000053E9 */  swc2       $19, ($t2)
```

`0100184A` as binary:
```
0100101 0000 1 10 00 00 00 0 000 00000001
```

More info @ https://psx-spx.consoledev.net/geometrytransformationenginegte/#gte-opcode-summary.

armips macros: https://github.com/PeterLemon/PSX/blob/master/CPUTest/GTE/AVSZ/LIB/PSX_GTE.INC

```
$ echo "cop2 0x0180001" | mips-linux-gnu-as -EL
$ mips-linux-gnu-objcopy a.out --dump-section .text=b.out
$ xxd b.out
00000000: 0100 184a 0000 0000 0000 0000 0000 0000  ...J............
```
