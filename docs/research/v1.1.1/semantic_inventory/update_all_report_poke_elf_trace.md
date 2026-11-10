# PLA 1.1.1 - Pokédex report update ARM64 trace

Original ELF byte evidence only; no fresh Ghidra analysis and no runtime assertions.

- Source Run: 42774682950
- Source SHA-256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
- Ghidra VA minus ELF VA: 0x100000
- Independent address translation anchors: [{'site': '0x0112f2b8', 'callee': '0x013f7198'}, {'site': '0x0112f2dc', 'callee': '0x01130984'}, {'site': '0x0112f308', 'callee': '0x01130984'}, {'site': '0x0112f334', 'callee': '0x01130984'}, {'site': '0x0112f360', 'callee': '0x01130984'}, {'site': '0x0112f38c', 'callee': '0x01130984'}, {'site': '0x0112f3b8', 'callee': '0x01130984'}, {'site': '0x0112f3e4', 'callee': '0x01130984'}, {'site': '0x0112f414', 'callee': '0x01130984'}, {'site': '0x0112ef58', 'callee': '0x0112eff0'}, {'site': '0x0112efd0', 'callee': '0x0112eff0'}]

## Instructions and direct callers

### UpdateAllReportPoke - 0x0112f4f8

Direct BL callers: []

Raw bytes and instructions (an exclamation mark marks a possible store):

    0x0112f3f8: f7008052     mov      w23, #7
    0x0112f3fc: e00314aa     mov      x0, x20
    0x0112f400: e103132a     mov      w1, w19
    0x0112f404: e203172a     mov      w2, w23
    0x0112f408: e3031faa     mov      x3, xzr
    0x0112f40c: e4031faa     mov      x4, xzr
    0x0112f410: e5031faa     mov      x5, xzr
    0x0112f414: 5c050094     bl       #0x1030984
    0x0112f418: e80b40b9     ldr      w8, [sp, #8]
    0x0112f41c: f7060011     add      w23, w23, #1
    0x0112f420: 1600160b     add      w22, w0, w22
    0x0112f424: ff02086b     cmp      w23, w8
    0x0112f428: a3feff54     b.lo     #0x102f3fc
    0x0112f42c: 02000014     b        #0x102f434
    0x0112f430: f6031f2a     mov      w22, wzr
    0x0112f434: f50000b4     cbz      x21, #0x102f450
    0x0112f438: a8420191     add      x8, x21, #0x50
    0x0112f43c: 09fd5f88     ldaxr    w9, [x8]
    0x0112f440: 29050071     subs     w9, w9, #1
    0x0112f444: 09fd0a88     stlxr    w10, w9, [x8]  ! possible store
    0x0112f448: aaffff35     cbnz     w10, #0x102f43c
    0x0112f44c: 80010054     b.eq     #0x102f47c
    0x0112f450: e003162a     mov      w0, w22
    0x0112f454: ff430f91     add      sp, sp, #0x3d0
    0x0112f458: fd7b43a9     ldp      x29, x30, [sp, #0x30]
    0x0112f45c: f44f42a9     ldp      x20, x19, [sp, #0x20]
    0x0112f460: f65741a9     ldp      x22, x21, [sp, #0x10]
    0x0112f464: fc5fc4a8     ldp      x28, x23, [sp], #0x40
    0x0112f468: c0035fd6     ret      
    0x0112f46c: 080040f9     ldr      x8, [x0]
    0x0112f470: 080940f9     ldr      x8, [x8, #0x10]
    0x0112f474: 00013fd6     blr      x8
    0x0112f478: 05ffff17     b        #0x102f08c
    0x0112f47c: a80240f9     ldr      x8, [x21]
    0x0112f480: e00315aa     mov      x0, x21
    0x0112f484: 080940f9     ldr      x8, [x8, #0x10]
    0x0112f488: 00013fd6     blr      x8
    0x0112f48c: f1ffff17     b        #0x102f450
    0x0112f490: f6031f2a     mov      w22, wzr
    0x0112f494: efffff17     b        #0x102f450
    0x0112f498: 409201d0     adrp     x0, #0x4279000
    0x0112f49c: 003c43f9     ldr      x0, [x0, #0x678]
    0x0112f4a0: 58ce8994     bl       #0x32a2e00
    0x0112f4a4: 20dcff34     cbz      w0, #0x102f028
    0x0112f4a8: 409201d0     adrp     x0, #0x4279000
    0x0112f4ac: 419201d0     adrp     x1, #0x4279000
    0x0112f4b0: 000845f9     ldr      x0, [x0, #0xa10]
    0x0112f4b4: 214043f9     ldr      x1, [x1, #0x680]
    0x0112f4b8: 427f01f0     adrp     x2, #0x401a000
    0x0112f4bc: 42000091     add      x2, x2, #0
    0x0112f4c0: 6443bf97     bl       #0x250
    0x0112f4c4: 409201d0     adrp     x0, #0x4279000
    0x0112f4c8: 003c43f9     ldr      x0, [x0, #0x678]
    0x0112f4cc: 51ce8994     bl       #0x32a2e10
    0x0112f4d0: d6feff17     b        #0x102f028
    0x0112f4d4: 08398052     mov      w8, #0x1c8
    0x0112f4d8: 150140f9     ldr      x21, [x8]
    0x0112f4dc: 95ddffb4     cbz      x21, #0x102f08c
    0x0112f4e0: a8420191     add      x8, x21, #0x50
    0x0112f4e4: 09fd5f88     ldaxr    w9, [x8]
    0x0112f4e8: 29050011     add      w9, w9, #1
    0x0112f4ec: 09fd0a88     stlxr    w10, w9, [x8]  ! possible store
    0x0112f4f0: aaffff35     cbnz     w10, #0x102f4e4
    0x0112f4f4: e6feff17     b        #0x102f08c
    0x0112f4f8: ff4301d1     sub      sp, sp, #0x50  <-- TARGET
    0x0112f4fc: fd7b04a9     stp      x29, x30, [sp, #0x40]  ! possible store
    0x0112f500: fd030191     add      x29, sp, #0x40
    0x0112f504: e1230091     add      x1, sp, #8
    0x0112f508: ff3b00b9     str      wzr, [sp, #0x38]  ! possible store
    0x0112f50c: ffff02a9     stp      xzr, xzr, [sp, #0x28]  ! possible store
    0x0112f510: ffff01a9     stp      xzr, xzr, [sp, #0x18]  ! possible store
    0x0112f514: ffff00a9     stp      xzr, xzr, [sp, #8]  ! possible store
    0x0112f518: 04000094     bl       #0x102f528
    0x0112f51c: fd7b44a9     ldp      x29, x30, [sp, #0x40]
    0x0112f520: ff430191     add      sp, sp, #0x50
    0x0112f524: c0035fd6     ret      
    0x0112f528: fc6fbaa9     stp      x28, x27, [sp, #-0x60]!  ! possible store
    0x0112f52c: fa6701a9     stp      x26, x25, [sp, #0x10]  ! possible store
    0x0112f530: f85f02a9     stp      x24, x23, [sp, #0x20]  ! possible store
    0x0112f534: f65703a9     stp      x22, x21, [sp, #0x30]  ! possible store
    0x0112f538: f44f04a9     stp      x20, x19, [sp, #0x40]  ! possible store
    0x0112f53c: fd7b05a9     stp      x29, x30, [sp, #0x50]  ! possible store
    0x0112f540: fd430191     add      x29, sp, #0x50
    0x0112f544: ff8312d1     sub      sp, sp, #0x4a0
    0x0112f548: e10f00f9     str      x1, [sp, #0x18]  ! possible store
    0x0112f54c: 599201d0     adrp     x25, #0x4279000
    0x0112f550: e06300f9     str      x0, [sp, #0xc0]  ! possible store
    0x0112f554: 393f43f9     ldr      x25, [x25, #0x678]
    0x0112f558: 28ffdf08     ldarb    w8, [x25]
    0x0112f55c: a8110036     tbz      w8, #0, #0x102f790
    0x0112f560: 5a9201d0     adrp     x26, #0x4279000
    0x0112f564: 5a4343f9     ldr      x26, [x26, #0x680]
    0x0112f568: 5c9201d0     adrp     x28, #0x4279000
    0x0112f56c: 9c4743f9     ldr      x28, [x28, #0x688]
    0x0112f570: 480340f9     ldr      x8, [x26]
    0x0112f574: 880300f9     str      x8, [x28]  ! possible store
    0x0112f578: 006940f9     ldr      x0, [x8, #0xd0]
    0x0112f57c: 601400b4     cbz      x0, #0x102f808
    0x0112f580: 08400191     add      x8, x0, #0x50
    0x0112f584: 09fd5f88     ldaxr    w9, [x8]
    0x0112f588: 29050011     add      w9, w9, #1
    0x0112f58c: 09fd0a88     stlxr    w10, w9, [x8]  ! possible store
    0x0112f590: aaffff35     cbnz     w10, #0x102f584
    0x0112f594: 13e440f9     ldr      x19, [x0, #0x1c8]
    0x0112f598: d30000b4     cbz      x19, #0x102f5b0
    0x0112f59c: 69420191     add      x9, x19, #0x50
    0x0112f5a0: 2afd5f88     ldaxr    w10, [x9]
    0x0112f5a4: 4a050011     add      w10, w10, #1
    0x0112f5a8: 2afd0b88     stlxr    w11, w10, [x9]  ! possible store
    0x0112f5ac: abffff35     cbnz     w11, #0x102f5a0
    0x0112f5b0: 09fd5f88     ldaxr    w9, [x8]
    0x0112f5b4: 29050071     subs     w9, w9, #1
    0x0112f5b8: 09fd0a88     stlxr    w10, w9, [x8]  ! possible store
    0x0112f5bc: aaffff35     cbnz     w10, #0x102f5b0
    0x0112f5c0: 600d0054     b.eq     #0x102f76c
    0x0112f5c4: 682e40f9     ldr      x8, [x19, #0x58]
    0x0112f5c8: e00313aa     mov      x0, x19
    0x0112f5cc: 080540f9     ldr      x8, [x8, #8]
    0x0112f5d0: e82b00f9     str      x8, [sp, #0x50]  ! possible store
    0x0112f5d4: a2cb0a94     bl       #0x12e245c
    0x0112f5d8: 489201d0     adrp     x8, #0x4279000
    0x0112f5dc: 08ad42f9     ldr      x8, [x8, #0x558]
    0x0112f5e0: 08fddf08     ldarb    w8, [x8]
    0x0112f5e4: f80300aa     mov      x24, x0
    0x0112f5e8: 280f0036     tbz      w8, #0, #0x102f7cc
    0x0112f5ec: 489201d0     adrp     x8, #0x4279000
    0x0112f5f0: 08b142f9     ldr      x8, [x8, #0x560]
    0x0112f5f4: 000140f9     ldr      x0, [x8]
    0x0112f5f8: 489201d0     adrp     x8, #0x4279000
    0x0112f5fc: 08b542f9     ldr      x8, [x8, #0x568]
    0x0112f600: f31700f9     str      x19, [sp, #0x28]  ! possible store
    0x0112f604: 000100f9     str      x0, [x8]  ! possible store
    0x0112f608: e00a00b4     cbz      x0, #0x102f764
    0x0112f60c: e8230391     add      x8, sp, #0xc8
    0x0112f610: 22650094     bl       #0x1048a98
    0x0112f614: e06740f9     ldr      x0, [sp, #0xc8]
    0x0112f618: 600a00b4     cbz      x0, #0x102f764
    0x0112f61c: 49658cd2     mov      x9, #0x632a
    0x0112f620: c91faaf2     movk     x9, #0x50fe, lsl #16
    0x0112f624: e84001b0     adrp     x8, #0x384c000
    0x0112f628: 08010f91     add      x8, x8, #0x3c0
    0x0112f62c: 49ecdef2     movk     x9, #0xf762, lsl #32
    0x0112f630: 495beaf2     movk     x9, #0x52da, lsl #48
    0x0112f634: e9230da9     stp      x9, x8, [sp, #0xd0]  ! possible store
    0x0112f638: 68018052     mov      w8, #0xb
    0x0112f63c: e1430391     add      x1, sp, #0xd0
    0x0112f640: e87f0ea9     stp      x8, xzr, [sp, #0xe0]  ! possible store
    0x0112f644: 8d18ff97     bl       #0xff5878
    0x0112f648: f503002a     mov      w21, w0
    0x0112f64c: e07740f9     ldr      x0, [sp, #0xe8]
    0x0112f650: 800000b4     cbz      x0, #0x102f660
    0x0112f654: 080040f9     ldr      x8, [x0]
    0x0112f658: 081140f9     ldr      x8, [x8, #0x20]
    0x0112f65c: 00013fd6     blr      x8
    0x0112f660: e06740f9     ldr      x0, [sp, #0xc8]
    0x0112f664: 000100b4     cbz      x0, #0x102f684
    0x0112f668: 082c40f9     ldr      x8, [x0, #0x58]
    0x0112f66c: 09310091     add      x9, x8, #0xc
    0x0112f670: 2afd5f88     ldaxr    w10, [x9]
    0x0112f674: 4a050071     subs     w10, w10, #1
    0x0112f678: 2afd0b88     stlxr    w11, w10, [x9]  ! possible store
    0x0112f67c: abffff35     cbnz     w11, #0x102f670
    0x0112f680: e0070054     b.eq     #0x102f77c
    0x0112f684: f46340f9     ldr      x20, [sp, #0xc0]
    0x0112f688: b6c884d2     mov      x22, #0x2645
    0x0112f68c: 5684b0f2     movk     x22, #0x8422, lsl #16
    0x0112f690: e00318aa     mov      x0, x24
    0x0112f694: e103152a     mov      w1, w21
    0x0112f698: 9bb20191     add      x27, x20, #0x6c
    0x0112f69c: 969cd3f2     movk     x22, #0x9ce4, lsl #32
    0x0112f6a0: 567ef9f2     movk     x22, #0xcbf2, lsl #48
    0x0112f6a4: 711d0b94     bl       #0x12f6c68
    0x0112f6a8: e00f00b9     str      w0, [sp, #0xc]  ! possible store
    0x0112f6ac: a1060011     add      w1, w21, #1
    0x0112f6b0: e00318aa     mov      x0, x24
    0x0112f6b4: f51700b9     str      w21, [sp, #0x14]  ! possible store
    0x0112f6b8: 6c1d0b94     bl       #0x12f6c68
    0x0112f6bc: f303002a     mov      w19, w0
    0x0112f6c0: e00314aa     mov      x0, x20
    0x0112f6c4: 83040094     bl       #0x10308d0
    0x0112f6c8: ff7f03a9     stp      xzr, xzr, [sp, #0x30]  ! possible store
    0x0112f6cc: 887a40b9     ldr      w8, [x20, #0x78]
    0x0112f6d0: f7430391     add      x23, sp, #0xd0
    0x0112f6d4: e9e20091     add      x9, x23, #0x38
    0x0112f6d8: 119601f0     adrp     x17, #0x42f2000
    0x0112f6dc: 31820e91     add      x17, x17, #0x3a0
    0x0112f6e0: e95700f9     str      x9, [sp, #0xa8]  ! possible store
    0x0112f6e4: e9620291     add      x9, x23, #0x98
    0x0112f6e8: e95300f9     str      x9, [sp, #0xa0]  ! possible store
    0x0112f6ec: e9e20391     add      x9, x23, #0xf8
    0x0112f6f0: b5008052     mov      w21, #5
    0x0112f6f4: e94f00f9     str      x9, [sp, #0x98]  ! possible store
    0x0112f6f8: e9620591     add      x9, x23, #0x158
    0x0112f6fc: 38008052     mov      w24, #1
    0x0112f700: 1f00086b     cmp      w0, w8
    0x0112f704: 0880881a     csel     w8, w0, w8, hi
    0x0112f708: f3230429     stp      w19, w8, [sp, #0x20]  ! possible store
    0x0112f70c: 6802086b     subs     w8, w19, w8
    0x0112f710: f3620e91     add      x19, x23, #0x398
    0x0112f714: e833881a     csel     w8, wzr, w8, lo
    0x0112f718: e94b00f9     str      x9, [sp, #0x90]  ! possible store
    0x0112f71c: e9e20691     add      x9, x23, #0x1b8
    0x0112f720: e81300b9     str      w8, [sp, #0x10]  ! possible store
    0x0112f724: e8620891     add      x8, x23, #0x218
    0x0112f728: e82708a9     stp      x8, x9, [sp, #0x80]  ! possible store
    0x0112f72c: e8e20991     add      x8, x23, #0x278
    0x0112f730: e83f00f9     str      x8, [sp, #0x78]  ! possible store
    0x0112f734: e8620b91     add      x8, x23, #0x2d8
    0x0112f738: e83b00f9     str      x8, [sp, #0x70]  ! possible store
    0x0112f73c: e8e20c91     add      x8, x23, #0x338
    0x0112f740: e83700f9     str      x8, [sp, #0x68]  ! possible store
    0x0112f744: 880a0591     add      x8, x20, #0x142
    0x0112f748: 54028052     mov      w20, #0x12
    0x0112f74c: e80300f9     str      x8, [sp]  ! possible store
    0x0112f750: e8320191     add      x8, x23, #0x4c
    0x0112f754: ff6700b9     str      wzr, [sp, #0x64]  ! possible store
    0x0112f758: e82700f9     str      x8, [sp, #0x48]  ! possible store
    0x0112f75c: fb5f00f9     str      x27, [sp, #0xb8]  ! possible store
    0x0112f760: 41000014     b        #0x102f864
    0x0112f764: f5031f2a     mov      w21, wzr
    0x0112f768: c7ffff17     b        #0x102f684
    0x0112f76c: 080040f9     ldr      x8, [x0]
    0x0112f770: 080940f9     ldr      x8, [x8, #0x10]
    0x0112f774: 00013fd6     blr      x8
    0x0112f778: 93ffff17     b        #0x102f5c4
    0x0112f77c: 1f0d00f9     str      xzr, [x8, #0x18]  ! possible store
    0x0112f780: 080040f9     ldr      x8, [x0]
    0x0112f784: 081140f9     ldr      x8, [x8, #0x20]
    0x0112f788: 00013fd6     blr      x8
    0x0112f78c: beffff17     b        #0x102f684
    0x0112f790: 409201d0     adrp     x0, #0x4279000
    0x0112f794: 003c43f9     ldr      x0, [x0, #0x678]
    0x0112f798: 9acd8994     bl       #0x32a2e00
    0x0112f79c: 20eeff34     cbz      w0, #0x102f560
    0x0112f7a0: 409201d0     adrp     x0, #0x4279000
    0x0112f7a4: 419201d0     adrp     x1, #0x4279000
    0x0112f7a8: 000845f9     ldr      x0, [x0, #0xa10]
    0x0112f7ac: 214043f9     ldr      x1, [x1, #0x680]
    0x0112f7b0: 427f01f0     adrp     x2, #0x401a000
    0x0112f7b4: 42000091     add      x2, x2, #0
    0x0112f7b8: a642bf97     bl       #0x250
    0x0112f7bc: 409201d0     adrp     x0, #0x4279000
    0x0112f7c0: 003c43f9     ldr      x0, [x0, #0x678]
    0x0112f7c4: 93cd8994     bl       #0x32a2e10
    0x0112f7c8: 66ffff17     b        #0x102f560
    0x0112f7cc: 409201d0     adrp     x0, #0x4279000
    0x0112f7d0: 00ac42f9     ldr      x0, [x0, #0x558]
    0x0112f7d4: 8bcd8994     bl       #0x32a2e00
    0x0112f7d8: a0f0ff34     cbz      w0, #0x102f5ec
    0x0112f7dc: 409201d0     adrp     x0, #0x4279000
    0x0112f7e0: 419201d0     adrp     x1, #0x4279000
    0x0112f7e4: 008043f9     ldr      x0, [x0, #0x700]
    0x0112f7e8: 21b042f9     ldr      x1, [x1, #0x560]
    0x0112f7ec: 427f01f0     adrp     x2, #0x401a000
    0x0112f7f0: 42000091     add      x2, x2, #0
    0x0112f7f4: 9742bf97     bl       #0x250
    0x0112f7f8: 409201d0     adrp     x0, #0x4279000
    0x0112f7fc: 00ac42f9     ldr      x0, [x0, #0x558]
    0x0112f800: 84cd8994     bl       #0x32a2e10
    0x0112f804: 7affff17     b        #0x102f5ec
    0x0112f808: 08398052     mov      w8, #0x1c8
    0x0112f80c: 080140f9     ldr      x8, [x8]
    0x0112f810: f30308aa     mov      x19, x8
    0x0112f814: c80000b4     cbz      x8, #0x102f82c
    0x0112f818: 68420191     add      x8, x19, #0x50
    0x0112f81c: 09fd5f88     ldaxr    w9, [x8]
    0x0112f820: 29050011     add      w9, w9, #1
    0x0112f824: 09fd0a88     stlxr    w10, w9, [x8]  ! possible store
    0x0112f828: aaffff35     cbnz     w10, #0x102f81c
    0x0112f82c: 599201d0     adrp     x25, #0x4279000
    0x0112f830: 5a9201d0     adrp     x26, #0x4279000
    0x0112f834: 393f43f9     ldr      x25, [x25, #0x678]
    0x0112f838: 5c9201d0     adrp     x28, #0x4279000
    0x0112f83c: 5a4343f9     ldr      x26, [x26, #0x680]
    0x0112f840: 9c4743f9     ldr      x28, [x28, #0x688]
    0x0112f844: 60ffff17     b        #0x102f5c4
    0x0112f848: 0f0b8052     mov      w15, #0x58
    0x0112f84c: 086f0f9b     madd     x8, x24, x15, x27
    0x0112f850: 08f54079     ldrh     w8, [x8, #0x7a]
    0x0112f854: 280c0035     cbnz     w8, #0x102f9d8
    0x0112f858: 18070091     add      x24, x24, #1
    0x0112f85c: 1f2b0ef1     cmp      x24, #0x38a
    0x0112f860: c06e0054     b.eq     #0x1030638
    0x0112f864: 1f270e71     cmp      w24, #0x389
    0x0112f868: ffff0fa9     stp      xzr, xzr, [sp, #0xf8]  ! possible store
    0x0112f86c: ff6b00f9     str      xzr, [sp, #0xd0]  ! possible store
    0x0112f870: ffff0ea9     stp      xzr, xzr, [sp, #0xe8]  ! possible store
    0x0112f874: ffff0da9     stp      xzr, xzr, [sp, #0xd8]  ! possible store
    0x0112f878: 0cffff54     b.gt     #0x102f858
    0x0112f87c: 08eb7bd3     lsl      x8, x24, #5
    0x0112f880: 296a68f8     ldr      x9, [x17, x8]
    0x0112f884: 282540a9     ldp      x8, x9, [x9]
    0x0112f888: 2b0108eb     subs     x11, x9, x8
    0x0112f88c: 60feff54     b.eq     #0x102f858
    0x0112f890: ea031f2a     mov      w10, wzr
    0x0112f894: ec031f2a     mov      w12, wzr
    0x0112f898: e9031faa     mov      x9, xzr
    0x0112f89c: 6bfd4393     asr      x11, x11, #3
    0x0112f8a0: 0d7969f8     ldr      x13, [x8, x9, lsl #3]
    0x0112f8a4: cd0000b5     cbnz     x13, #0x102f8bc
    0x0112f8a8: 29050091     add      x9, x9, #1
    0x0112f8ac: 7f0109eb     cmp      x11, x9
    0x0112f8b0: 09010054     b.ls     #0x102f8d0
    0x0112f8b4: 0d7969f8     ldr      x13, [x8, x9, lsl #3]
    0x0112f8b8: 8dffffb4     cbz      x13, #0x102f8a8
    0x0112f8bc: 8c1d4092     and      x12, x12, #0xff
    0x0112f8c0: 4a050011     add      w10, w10, #1
    0x0112f8c4: e97a2c78     strh     w9, [x23, x12, lsl #1]  ! possible store
    0x0112f8c8: ec030a2a     mov      w12, w10
    0x0112f8cc: f7ffff17     b        #0x102f8a8
    0x0112f8d0: 5f1d0072     tst      w10, #0xff
    0x0112f8d4: 20fcff54     b.eq     #0x102f858
    0x0112f8d8: 099601f0     adrp     x9, #0x42f2000
    0x0112f8dc: 29d141f9     ldr      x9, [x9, #0x3a0]
    0x0112f8e0: 08030032     orr      w8, w24, #1
    0x0112f8e4: 4a1d4092     and      x10, x10, #0xff
    0x0112f8e8: eb430391     add      x11, sp, #0xd0
    0x0112f8ec: 6c014079     ldrh     w12, [x11]
    0x0112f8f0: 1f2d0e71     cmp      w8, #0x38b
    0x0112f8f4: ec038c1a     csel     w12, wzr, w12, eq
    0x0112f8f8: 8d3d0012     and      w13, w12, #0xffff
    0x0112f8fc: bf6d0071     cmp      w13, #0x1b
    0x0112f900: a8010054     b.hi     #0x102f934
    0x0112f904: 1f2d0e71     cmp      w8, #0x38b
    0x0112f908: ed03989a     csel     x13, xzr, x24, eq
    0x0112f90c: ade97bd3     lsl      x13, x13, #5
    0x0112f910: 206a6df8     ldr      x0, [x17, x13]
    0x0112f914: 8f3d4092     and      x15, x12, #0xffff
    0x0112f918: 0d3840a9     ldp      x13, x14, [x0]
    0x0112f91c: ce010dcb     sub      x14, x14, x13
    0x0112f920: cefd4393     asr      x14, x14, #3
    0x0112f924: df010feb     cmp      x14, x15
    0x0112f928: 69000054     b.ls     #0x102f934
    0x0112f92c: af796ff8     ldr      x15, [x13, x15, lsl #3]
    0x0112f930: cf0000b5     cbnz     x15, #0x102f948
    0x0112f934: 2d3940a9     ldp      x13, x14, [x9]
    0x0112f938: ce010dcb     sub      x14, x14, x13
    0x0112f93c: ec031f2a     mov      w12, wzr
    0x0112f940: e00309aa     mov      x0, x9
    0x0112f944: cefd4393     asr      x14, x14, #3
    0x0112f948: 8c3d4092     and      x12, x12, #0xffff
    0x0112f94c: df010ceb     cmp      x14, x12
    0x0112f950: c97b0054     b.ls     #0x10308c8
    0x0112f954: ac796cf8     ldr      x12, [x13, x12, lsl #3]
    0x0112f958: 8d0180b9     ldrsw    x13, [x12]
    0x0112f95c: 8d010dcb     sub      x13, x12, x13
    0x0112f960: ae014079     ldrh     w14, [x13]
    0x0112f964: df9d0171     cmp      w14, #0x67
    0x0112f968: a3000054     b.lo     #0x102f97c
    0x0112f96c: adcd4079     ldrh     w13, [x13, #0x66]
    0x0112f970: 6d0000b4     cbz      x13, #0x102f97c
    0x0112f974: 8c696d78     ldrh     w12, [x12, x13]
    0x0112f978: 8cf6ff35     cbnz     w12, #0x102f848
    0x0112f97c: 4a0500f1     subs     x10, x10, #1
    0x0112f980: 6b090091     add      x11, x11, #2
    0x0112f984: 41fbff54     b.ne     #0x102f8ec
    0x0112f988: b4ffff17     b        #0x102f858
    0x0112f98c: 4a050011     add      w10, w10, #1
    0x0112f990: 6b0d0011     add      w11, w11, #3
    0x0112f994: 1f010a6b     cmp      w8, w10
    0x0112f998: e01a0054     b.eq     #0x102fcf4
    0x0112f99c: 5f250071     cmp      w10, #9
    0x0112f9a0: 68ffff54     b.hi     #0x102f98c
    0x0112f9a4: 2d0140b9     ldr      w13, [x9]
    0x0112f9a8: ec008052     mov      w12, #7
    0x0112f9ac: 8c21cb1a     lsl      w12, w12, w11
    0x0112f9b0: ae010c0a     and      w14, w13, w12
    0x0112f9b4: ce25cb1a     lsr      w14, w14, w11
    0x0112f9b8: df1d0072     tst      w14, #0xff
    0x0112f9bc: 81feff54     b.ne     #0x102f98c
    0x0112f9c0: ac012c0a     bic      w12, w13, w12
    0x0112f9c4: 2d008052     mov      w13, #1
    0x0112f9c8: ad21cb1a     lsl      w13, w13, w11
    0x0112f9cc: 8c010d2a     orr      w12, w12, w13
    0x0112f9d0: 2c0100b9     str      w12, [x9]  ! possible store
    0x0112f9d4: eeffff17     b        #0x102f98c
    0x0112f9d8: 096f0f9b     madd     x9, x24, x15, x27
    0x0112f9dc: 280d47b8     ldr      w8, [x9, #0x70]!
    0x0112f9e0: 1f011f72     tst      w8, #2
    0x0112f9e4: 08011f32     orr      w8, w8, #2
    0x0112f9e8: ea179f1a     cset     w10, eq
    0x0112f9ec: 1f530f71     cmp      w24, #0x3d4
    0x0112f9f0: eab700b9     str      w10, [sp, #0xb4]  ! possible store
    0x0112f9f4: e92300f9     str      x9, [sp, #0x40]  ! possible store
    0x0112f9f8: 280100b9     str      w8, [x9]  ! possible store
    0x0112f9fc: ac180054     b.gt     #0x102fd10
    0x0112fa00: 28ffdf08     ldarb    w8, [x25]
    0x0112fa04: 28700036     tbz      w8, #0, #0x1030808
    0x0112fa08: 480340f9     ldr      x8, [x26]
    0x0112fa0c: 880300f9     str      x8, [x28]  ! possible store
    0x0112fa10: 006940f9     ldr      x0, [x8, #0xd0]
    0x0112fa14: a07200b4     cbz      x0, #0x1030868
    0x0112fa18: 08400191     add      x8, x0, #0x50
    0x0112fa1c: 09fd5f88     ldaxr    w9, [x8]
    0x0112fa20: 29050011     add      w9, w9, #1
    0x0112fa24: 09fd0a88     stlxr    w10, w9, [x8]  ! possible store
    0x0112fa28: aaffff35     cbnz     w10, #0x102fa1c
    0x0112fa2c: 1be440f9     ldr      x27, [x0, #0x1c8]
    0x0112fa30: db0000b4     cbz      x27, #0x102fa48
    0x0112fa34: 69430191     add      x9, x27, #0x50
    0x0112fa38: 2afd5f88     ldaxr    w10, [x9]
    0x0112fa3c: 4a050011     add      w10, w10, #1
    0x0112fa40: 2afd0b88     stlxr    w11, w10, [x9]  ! possible store
    0x0112fa44: abffff35     cbnz     w11, #0x102fa38
    0x0112fa48: 09fd5f88     ldaxr    w9, [x8]
    0x0112fa4c: 29050071     subs     w9, w9, #1
    0x0112fa50: 09fd0a88     stlxr    w10, w9, [x8]  ! possible store
    0x0112fa54: aaffff35     cbnz     w10, #0x102fa48
    0x0112fa58: 40540054     b.eq     #0x10304e0
    0x0112fa5c: 682f40f9     ldr      x8, [x27, #0x58]
    0x0112fa60: 297b9ed2     mov      x9, #0xf3d9
    0x0112fa64: a956b3f2     movk     x9, #0x9ab5, lsl #16
    0x0112fa68: 89eac8f2     movk     x9, #0x4754, lsl #32
    0x0112fa6c: 491df8f2     movk     x9, #0xc0ea, lsl #48
    0x0112fa70: 000540f9     ldr      x0, [x8, #8]
    0x0112fa74: e8b70091     add      x8, sp, #0x2d
    0x0112fa78: ffd300b9     str      wzr, [sp, #0xd0]  ! possible store
    0x0112fa7c: ff6f00f9     str      xzr, [sp, #0xd8]  ! possible store
    0x0112fa80: ffe300b9     str      wzr, [sp, #0xe0]  ! possible store
    0x0112fa84: f4930339     strb     w20, [sp, #0xe4]  ! possible store
    0x0112fa88: f5eb00b9     str      w21, [sp, #0xe8]  ! possible store
    0x0112fa8c: e2430391     add      x2, sp, #0xd0
    0x0112fa90: e103182a     mov      w1, w24
    0x0112fa94: f68300f9     str      x22, [sp, #0x100]  ! possible store
    0x0112fa98: e95b0fa9     stp      x9, x22, [sp, #0xf0]  ! possible store
    0x0112fa9c: 1ff10ff8     stur     xzr, [x8, #0xff]  ! possible store
    0x0112faa0: e85740f9     ldr      x8, [sp, #0xa8]
    0x0112faa4: 1f810039     strb     wzr, [x8, #0x20]  ! possible store
    0x0112faa8: 1f7d00a9     stp      xzr, xzr, [x8]  ! possible store
    0x0112faac: 1f7d01a9     stp      xzr, xzr, [x8, #0x10]  ! possible store
    0x0112fab0: e8430391     add      x8, sp, #0xd0
    0x0112fab4: ff9f00f9     str      xzr, [sp, #0x138]  ! possible store
    0x0112fab8: ff4301b9     str      wzr, [sp, #0x140]  ! possible store
    0x0112fabc: f4130539     strb     w20, [sp, #0x144]  ! possible store
    0x0112fac0: f54b01b9     str      w21, [sp, #0x148]  ! possible store
    0x0112fac4: f6b300f9     str      x22, [sp, #0x160]  ! possible store
    0x0112fac8: e95b15a9     stp      x9, x22, [sp, #0x150]  ! possible store
    0x0112facc: 1fc10bf8     stur     xzr, [x8, #0xbc]  ! possible store
    0x0112fad0: e85340f9     ldr      x8, [sp, #0xa0]
    0x0112fad4: 1f810039     strb     wzr, [x8, #0x20]  ! possible store
    0x0112fad8: 1f7d00a9     stp      xzr, xzr, [x8]  ! possible store
    0x0112fadc: 1f7d01a9     stp      xzr, xzr, [x8, #0x10]  ! possible store
    0x0112fae0: e8720491     add      x8, x23, #0x11c
    0x0112fae4: ffcf00f9     str      xzr, [sp, #0x198]  ! possible store
    0x0112fae8: ffa301b9     str      wzr, [sp, #0x1a0]  ! possible store
    0x0112faec: f4930639     strb     w20, [sp, #0x1a4]  ! possible store
    0x0112faf0: f5ab01b9     str      w21, [sp, #0x1a8]  ! possible store
    0x0112faf4: f6e300f9     str      x22, [sp, #0x1c0]  ! possible store
    0x0112faf8: e95b1ba9     stp      x9, x22, [sp, #0x1b0]  ! possible store
    0x0112fafc: 1f0100f9     str      xzr, [x8]  ! possible store
    0x0112fb00: e84f40f9     ldr      x8, [sp, #0x98]
    0x0112fb04: 1f810039     strb     wzr, [x8, #0x20]  ! possible store
    0x0112fb08: 1f7d00a9     stp      xzr, xzr, [x8]  ! possible store
    0x0112fb0c: 1f7d01a9     stp      xzr, xzr, [x8, #0x10]  ! possible store
    0x0112fb10: e8f20591     add      x8, x23, #0x17c
    0x0112fb14: ffff00f9     str      xzr, [sp, #0x1f8]  ! possible store
    0x0112fb18: ff0302b9     str      wzr, [sp, #0x200]  ! possible store
    0x0112fb1c: f4130839     strb     w20, [sp, #0x204]  ! possible store
    0x0112fb20: f50b02b9     str      w21, [sp, #0x208]  ! possible store
    0x0112fb24: e90b01f9     str      x9, [sp, #0x210]  ! possible store
    0x0112fb28: f61301f9     str      x22, [sp, #0x220]  ! possible store
    0x0112fb2c: f60f01f9     str      x22, [sp, #0x218]  ! possible store
    0x0112fb30: 1f0100f9     str      xzr, [x8]  ! possible store
    0x0112fb34: e84b40f9     ldr      x8, [sp, #0x90]
    0x0112fb38: 1f810039     strb     wzr, [x8, #0x20]  ! possible store
    0x0112fb3c: 1f7d00a9     stp      xzr, xzr, [x8]  ! possible store
    0x0112fb40: 1f7d01a9     stp      xzr, xzr, [x8, #0x10]  ! possible store
    0x0112fb44: e8720791     add      x8, x23, #0x1dc
    0x0112fb48: ff2f01f9     str      xzr, [sp, #0x258]  ! possible store
    0x0112fb4c: ff6302b9     str      wzr, [sp, #0x260]  ! possible store
    0x0112fb50: f4930939     strb     w20, [sp, #0x264]  ! possible store
    0x0112fb54: f56b02b9     str      w21, [sp, #0x268]  ! possible store
    0x0112fb58: e93b01f9     str      x9, [sp, #0x270]  ! possible store
    0x0112fb5c: f64301f9     str      x22, [sp, #0x280]  ! possible store
    0x0112fb60: f63f01f9     str      x22, [sp, #0x278]  ! possible store
    0x0112fb64: 1f0100f9     str      xzr, [x8]  ! possible store
    0x0112fb68: e84740f9     ldr      x8, [sp, #0x88]
    0x0112fb6c: 1f810039     strb     wzr, [x8, #0x20]  ! possible store
    0x0112fb70: 1f7d00a9     stp      xzr, xzr, [x8]  ! possible store
    0x0112fb74: 1f7d01a9     stp      xzr, xzr, [x8, #0x10]  ! possible store
    0x0112fb78: e8f20891     add      x8, x23, #0x23c
    0x0112fb7c: ff5f01f9     str      xzr, [sp, #0x2b8]  ! possible store
    0x0112fb80: ffc302b9     str      wzr, [sp, #0x2c0]  ! possible store
    0x0112fb84: f4130b39     strb     w20, [sp, #0x2c4]  ! possible store
    0x0112fb88: f5cb02b9     str      w21, [sp, #0x2c8]  ! possible store
    0x0112fb8c: e96b01f9     str      x9, [sp, #0x2d0]  ! possible store
    0x0112fb90: f66f01f9     str      x22, [sp, #0x2d8]  ! possible store
    0x0112fb94: f67301f9     str      x22, [sp, #0x2e0]  ! possible store
    0x0112fb98: 1f0100f9     str      xzr, [x8]  ! possible store
    0x0112fb9c: e84340f9     ldr      x8, [sp, #0x80]
    0x0112fba0: 1f810039     strb     wzr, [x8, #0x20]  ! possible store
    0x0112fba4: 1f7d00a9     stp      xzr, xzr, [x8]  ! possible store
    0x0112fba8: 1f7d01a9     stp      xzr, xzr, [x8, #0x10]  ! possible store
    0x0112fbac: e8720a91     add      x8, x23, #0x29c
    0x0112fbb0: ff8f01f9     str      xzr, [sp, #0x318]  ! possible store
    0x0112fbb4: ff2303b9     str      wzr, [sp, #0x320]  ! possible store
    0x0112fbb8: f4930c39     strb     w20, [sp, #0x324]  ! possible store
    0x0112fbbc: f52b03b9     str      w21, [sp, #0x328]  ! possible store
    0x0112fbc0: e99b01f9     str      x9, [sp, #0x330]  ! possible store
    0x0112fbc4: f69f01f9     str      x22, [sp, #0x338]  ! possible store
    0x0112fbc8: f6a301f9     str      x22, [sp, #0x340]  ! possible store
    0x0112fbcc: 1f0100f9     str      xzr, [x8]  ! possible store
    0x0112fbd0: e83f40f9     ldr      x8, [sp, #0x78]
    0x0112fbd4: 1f810039     strb     wzr, [x8, #0x20]  ! possible store
    0x0112fbd8: 1f7d00a9     stp      xzr, xzr, [x8]  ! possible store
    0x0112fbdc: 1f7d01a9     stp      xzr, xzr, [x8, #0x10]  ! possible store
    0x0112fbe0: e8f20b91     add      x8, x23, #0x2fc
    0x0112fbe4: ffbf01f9     str      xzr, [sp, #0x378]  ! possible store
    0x0112fbe8: ff8303b9     str      wzr, [sp, #0x380]  ! possible store
    0x0112fbec: f4130e39     strb     w20, [sp, #0x384]  ! possible store
    0x0112fbf0: f58b03b9     str      w21, [sp, #0x388]  ! possible store
    0x0112fbf4: e9cb01f9     str      x9, [sp, #0x390]  ! possible store
    0x0112fbf8: f6cf01f9     str      x22, [sp, #0x398]  ! possible store
    0x0112fbfc: f6d301f9     str      x22, [sp, #0x3a0]  ! possible store
    0x0112fc00: 1f0100f9     str      xzr, [x8]  ! possible store
    0x0112fc04: e83b40f9     ldr      x8, [sp, #0x70]
    0x0112fc08: 1f810039     strb     wzr, [x8, #0x20]  ! possible store
    0x0112fc0c: 1f7d00a9     stp      xzr, xzr, [x8]  ! possible store
    0x0112fc10: 1f7d01a9     stp      xzr, xzr, [x8, #0x10]  ! possible store
    0x0112fc14: e8720d91     add      x8, x23, #0x35c
    0x0112fc18: ffef01f9     str      xzr, [sp, #0x3d8]  ! possible store
    0x0112fc1c: ffe303b9     str      wzr, [sp, #0x3e0]  ! possible store
    0x0112fc20: f4930f39     strb     w20, [sp, #0x3e4]  ! possible store
    0x0112fc24: f5eb03b9     str      w21, [sp, #0x3e8]  ! possible store
    0x0112fc28: e9fb01f9     str      x9, [sp, #0x3f0]  ! possible store
    0x0112fc2c: f6ff01f9     str      x22, [sp, #0x3f8]  ! possible store
    0x0112fc30: f60302f9     str      x22, [sp, #0x400]  ! possible store
    0x0112fc34: 1f0100f9     str      xzr, [x8]  ! possible store
    0x0112fc38: e83740f9     ldr      x8, [sp, #0x68]
    0x0112fc3c: 1f810039     strb     wzr, [x8, #0x20]  ! possible store
    0x0112fc40: 1f7d00a9     stp      xzr, xzr, [x8]  ! possible store
    0x0112fc44: 1f7d01a9     stp      xzr, xzr, [x8, #0x10]  ! possible store
    0x0112fc48: e8f20e91     add      x8, x23, #0x3bc
    0x0112fc4c: ff1f02f9     str      xzr, [sp, #0x438]  ! possible store
    0x0112fc50: ff4304b9     str      wzr, [sp, #0x440]  ! possible store
    0x0112fc54: f4131139     strb     w20, [sp, #0x444]  ! possible store
    0x0112fc58: f54b04b9     str      w21, [sp, #0x448]  ! possible store
    0x0112fc5c: e92b02f9     str      x9, [sp, #0x450]  ! possible store
    0x0112fc60: f62f02f9     str      x22, [sp, #0x458]  ! possible store
    0x0112fc64: f63302f9     str      x22, [sp, #0x460]  ! possible store
    0x0112fc68: 1f0100f9     str      xzr, [x8]  ! possible store
    0x0112fc6c: 7f820039     strb     wzr, [x19, #0x20]  ! possible store
    0x0112fc70: 7f7e00a9     stp      xzr, xzr, [x19]  ! possible store
    0x0112fc74: 7f7e01a9     stp      xzr, xzr, [x19, #0x10]  ! possible store
    0x0112fc78: 481d0b94     bl       #0x12f7198
    0x0112fc7c: e8d340b9     ldr      w8, [sp, #0xd0]
    0x0112fc80: 0f0b8052     mov      w15, #0x58
    0x0112fc84: 88030034     cbz      w8, #0x102fcf4
    0x0112fc88: e95f40f9     ldr      x9, [sp, #0xb8]
    0x0112fc8c: 09270f9b     madd     x9, x24, x15, x9
    0x0112fc90: 2a4d47b8     ldr      w10, [x9, #0x74]!
    0x0112fc94: 5f090072     tst      w10, #7
    0x0112fc98: 80410054     b.eq     #0x10304c8
    0x0112fc9c: 1f050071     cmp      w8, #1
    0x0112fca0: a0020054     b.eq     #0x102fcf4
    0x0112fca4: 2a0140b9     ldr      w10, [x9]
    0x0112fca8: 5f091d72     tst      w10, #0x38
    0x0112fcac: a0420054     b.eq     #0x1030500
    0x0112fcb0: 1f090071     cmp      w8, #2
    0x0112fcb4: 00020054     b.eq     #0x102fcf4
    0x0112fcb8: 2a0140b9     ldr      w10, [x9]
    0x0112fcbc: 5f091a72     tst      w10, #0x1c0
    0x0112fcc0: c0420054     b.eq     #0x1030518
    0x0112fcc4: 1f0d0071     cmp      w8, #3
    0x0112fcc8: 60010054     b.eq     #0x102fcf4
    0x0112fccc: 2a0140b9     ldr      w10, [x9]
    0x0112fcd0: 5f091772     tst      w10, #0xe00
    0x0112fcd4: 60450054     b.eq     #0x1030580
    0x0112fcd8: 1f110071     cmp      w8, #4
    0x0112fcdc: c0000054     b.eq     #0x102fcf4
    0x0112fce0: 2a0140b9     ldr      w10, [x9]
    0x0112fce4: 5f091472     tst      w10, #0x7000
    0x0112fce8: 00480054     b.eq     #0x10305e8
    0x0112fcec: 1f150071     cmp      w8, #5
    0x0112fcf0: 61480054     b.ne     #0x10305fc
    0x0112fcf4: fb0000b4     cbz      x27, #0x102fd10
    0x0112fcf8: 68430191     add      x8, x27, #0x50
    0x0112fcfc: 09fd5f88     ldaxr    w9, [x8]
    0x0112fd00: 29050071     subs     w9, w9, #1
    0x0112fd04: 09fd0a88     stlxr    w10, w9, [x8]  ! possible store
    0x0112fd08: aaffff35     cbnz     w10, #0x102fcfc
    0x0112fd0c: 20410054     b.eq     #0x1030530
    0x0112fd10: e85f40f9     ldr      x8, [sp, #0xb8]
    0x0112fd14: 19230f9b     madd     x25, x24, x15, x8
    0x0112fd18: 288f4778     ldrh     w8, [x25, #0x78]!
    0x0112fd1c: 1f910171     cmp      w8, #0x64
    0x0112fd20: 423b0054     b.hs     #0x1030488
    0x0112fd24: 297b9ed2     mov      x9, #0xf3d9
    0x0112fd28: a956b3f2     movk     x9, #0x9ab5, lsl #16
    0x0112fd2c: e86300b9     str      w8, [sp, #0x60]  ! possible store
    0x0112fd30: 89eac8f2     movk     x9, #0x4754, lsl #32
    0x0112fd34: 491df8f2     movk     x9, #0xc0ea, lsl #48
    0x0112fd38: ffd300b9     str      wzr, [sp, #0xd0]  ! possible store
    0x0112fd3c: e8b70091     add      x8, sp, #0x2d
    0x0112fd40: ff6f00f9     str      xzr, [sp, #0xd8]  ! possible store
    0x0112fd44: e02b40f9     ldr      x0, [sp, #0x50]
    0x0112fd48: ffe300b9     str      wzr, [sp, #0xe0]  ! possible store
    0x0112fd4c: e2430391     add      x2, sp, #0xd0
    0x0112fd50: e103182a     mov      w1, w24
    0x0112fd54: f4930339     strb     w20, [sp, #0xe4]  ! possible store
    0x0112fd58: f5eb00b9     str      w21, [sp, #0xe8]  ! possible store
    0x0112fd5c: f68300f9     str      x22, [sp, #0x100]  ! possible store
    0x0112fd60: e95b0fa9     stp      x9, x22, [sp, #0xf0]  ! possible store
    0x0112fd64: 1ff10ff8     stur     xzr, [x8, #0xff]  ! possible store
    0x0112fd68: e85740f9     ldr      x8, [sp, #0xa8]
    0x0112fd6c: 1f810039     strb     wzr, [x8, #0x20]  ! possible store
    0x0112fd70: 1f7d00a9     stp      xzr, xzr, [x8]  ! possible store
    0x0112fd74: 1f7d01a9     stp      xzr, xzr, [x8, #0x10]  ! possible store
    0x0112fd78: e8430391     add      x8, sp, #0xd0
    0x0112fd7c: ff9f00f9     str      xzr, [sp, #0x138]  ! possible store
    0x0112fd80: ff4301b9     str      wzr, [sp, #0x140]  ! possible store
    0x0112fd84: f4130539     strb     w20, [sp, #0x144]  ! possible store
    0x0112fd88: f54b01b9     str      w21, [sp, #0x148]  ! possible store
    0x0112fd8c: f6b300f9     str      x22, [sp, #0x160]  ! possible store
    0x0112fd90: e95b15a9     stp      x9, x22, [sp, #0x150]  ! possible store
    0x0112fd94: 1fc10bf8     stur     xzr, [x8, #0xbc]  ! possible store
    0x0112fd98: e85340f9     ldr      x8, [sp, #0xa0]
    0x0112fd9c: 1f810039     strb     wzr, [x8, #0x20]  ! possible store
    0x0112fda0: 1f7d00a9     stp      xzr, xzr, [x8]  ! possible store
    0x0112fda4: 1f7d01a9     stp      xzr, xzr, [x8, #0x10]  ! possible store
    0x0112fda8: e8720491     add      x8, x23, #0x11c
    0x0112fdac: ffcf00f9     str      xzr, [sp, #0x198]  ! possible store
    0x0112fdb0: ffa301b9     str      wzr, [sp, #0x1a0]  ! possible store
    0x0112fdb4: f4930639     strb     w20, [sp, #0x1a4]  ! possible store
    0x0112fdb8: f5ab01b9     str      w21, [sp, #0x1a8]  ! possible store
    0x0112fdbc: f6e300f9     str      x22, [sp, #0x1c0]  ! possible store
    0x0112fdc0: e95b1ba9     stp      x9, x22, [sp, #0x1b0]  ! possible store
    0x0112fdc4: 1f0100f9     str      xzr, [x8]  ! possible store
    0x0112fdc8: e84f40f9     ldr      x8, [sp, #0x98]
    0x0112fdcc: 1f810039     strb     wzr, [x8, #0x20]  ! possible store
    0x0112fdd0: 1f7d00a9     stp      xzr, xzr, [x8]  ! possible store
    0x0112fdd4: 1f7d01a9     stp      xzr, xzr, [x8, #0x10]  ! possible store
    0x0112fdd8: e8f20591     add      x8, x23, #0x17c
    0x0112fddc: ffff00f9     str      xzr, [sp, #0x1f8]  ! possible store
    0x0112fde0: ff0302b9     str      wzr, [sp, #0x200]  ! possible store
    0x0112fde4: f4130839     strb     w20, [sp, #0x204]  ! possible store
    0x0112fde8: f50b02b9     str      w21, [sp, #0x208]  ! possible store
    0x0112fdec: e90b01f9     str      x9, [sp, #0x210]  ! possible store
    0x0112fdf0: f61301f9     str      x22, [sp, #0x220]  ! possible store
    0x0112fdf4: f60f01f9     str      x22, [sp, #0x218]  ! possible store
    0x0112fdf8: 1f0100f9     str      xzr, [x8]  ! possible store
    0x0112fdfc: e84b40f9     ldr      x8, [sp, #0x90]
    0x0112fe00: 1f810039     strb     wzr, [x8, #0x20]  ! possible store
    0x0112fe04: 1f7d00a9     stp      xzr, xzr, [x8]  ! possible store
    0x0112fe08: 1f7d01a9     stp      xzr, xzr, [x8, #0x10]  ! possible store
    0x0112fe0c: e8720791     add      x8, x23, #0x1dc
    0x0112fe10: ff2f01f9     str      xzr, [sp, #0x258]  ! possible store
    0x0112fe14: ff6302b9     str      wzr, [sp, #0x260]  ! possible store
    0x0112fe18: f4930939     strb     w20, [sp, #0x264]  ! possible store
    0x0112fe1c: f56b02b9     str      w21, [sp, #0x268]  ! possible store
    0x0112fe20: e93b01f9     str      x9, [sp, #0x270]  ! possible store
    0x0112fe24: f64301f9     str      x22, [sp, #0x280]  ! possible store
    0x0112fe28: f63f01f9     str      x22, [sp, #0x278]  ! possible store
    0x0112fe2c: 1f0100f9     str      xzr, [x8]  ! possible store
    0x0112fe30: e84740f9     ldr      x8, [sp, #0x88]
    0x0112fe34: 1f810039     strb     wzr, [x8, #0x20]  ! possible store
    0x0112fe38: 1f7d00a9     stp      xzr, xzr, [x8]  ! possible store
    0x0112fe3c: 1f7d01a9     stp      xzr, xzr, [x8, #0x10]  ! possible store
    0x0112fe40: e8f20891     add      x8, x23, #0x23c
    0x0112fe44: ff5f01f9     str      xzr, [sp, #0x2b8]  ! possible store
    0x0112fe48: ffc302b9     str      wzr, [sp, #0x2c0]  ! possible store
    0x0112fe4c: f4130b39     strb     w20, [sp, #0x2c4]  ! possible store
    0x0112fe50: f5cb02b9     str      w21, [sp, #0x2c8]  ! possible store
    0x0112fe54: e96b01f9     str      x9, [sp, #0x2d0]  ! possible store
    0x0112fe58: f66f01f9     str      x22, [sp, #0x2d8]  ! possible store
    0x0112fe5c: f67301f9     str      x22, [sp, #0x2e0]  ! possible store
    0x0112fe60: 1f0100f9     str      xzr, [x8]  ! possible store
    0x0112fe64: e84340f9     ldr      x8, [sp, #0x80]
    0x0112fe68: 1f810039     strb     wzr, [x8, #0x20]  ! possible store
    0x0112fe6c: 1f7d00a9     stp      xzr, xzr, [x8]  ! possible store
    0x0112fe70: 1f7d01a9     stp      xzr, xzr, [x8, #0x10]  ! possible store
    0x0112fe74: e8720a91     add      x8, x23, #0x29c
    0x0112fe78: ff8f01f9     str      xzr, [sp, #0x318]  ! possible store
    0x0112fe7c: ff2303b9     str      wzr, [sp, #0x320]  ! possible store
    0x0112fe80: f4930c39     strb     w20, [sp, #0x324]  ! possible store
    0x0112fe84: f52b03b9     str      w21, [sp, #0x328]  ! possible store
    0x0112fe88: e99b01f9     str      x9, [sp, #0x330]  ! possible store
    0x0112fe8c: f69f01f9     str      x22, [sp, #0x338]  ! possible store
    0x0112fe90: f6a301f9     str      x22, [sp, #0x340]  ! possible store
    0x0112fe94: 1f0100f9     str      xzr, [x8]  ! possible store
    0x0112fe98: e83f40f9     ldr      x8, [sp, #0x78]
    0x0112fe9c: 1f810039     strb     wzr, [x8, #0x20]  ! possible store
    0x0112fea0: 1f7d00a9     stp      xzr, xzr, [x8]  ! possible store
    0x0112fea4: 1f7d01a9     stp      xzr, xzr, [x8, #0x10]  ! possible store
    0x0112fea8: e8f20b91     add      x8, x23, #0x2fc
    0x0112feac: ffbf01f9     str      xzr, [sp, #0x378]  ! possible store
    0x0112feb0: ff8303b9     str      wzr, [sp, #0x380]  ! possible store
    0x0112feb4: f4130e39     strb     w20, [sp, #0x384]  ! possible store
    0x0112feb8: f58b03b9     str      w21, [sp, #0x388]  ! possible store
    0x0112febc: e9cb01f9     str      x9, [sp, #0x390]  ! possible store
    0x0112fec0: f6cf01f9     str      x22, [sp, #0x398]  ! possible store
    0x0112fec4: f6d301f9     str      x22, [sp, #0x3a0]  ! possible store
    0x0112fec8: 1f0100f9     str      xzr, [x8]  ! possible store
    0x0112fecc: e83b40f9     ldr      x8, [sp, #0x70]
    0x0112fed0: 1f810039     strb     wzr, [x8, #0x20]  ! possible store
    0x0112fed4: 1f7d00a9     stp      xzr, xzr, [x8]  ! possible store
    0x0112fed8: 1f7d01a9     stp      xzr, xzr, [x8, #0x10]  ! possible store
    0x0112fedc: e8720d91     add      x8, x23, #0x35c
    0x0112fee0: ffef01f9     str      xzr, [sp, #0x3d8]  ! possible store
    0x0112fee4: ffe303b9     str      wzr, [sp, #0x3e0]  ! possible store
    0x0112fee8: f4930f39     strb     w20, [sp, #0x3e4]  ! possible store
    0x0112feec: f5eb03b9     str      w21, [sp, #0x3e8]  ! possible store
    0x0112fef0: e9fb01f9     str      x9, [sp, #0x3f0]  ! possible store
    0x0112fef4: f6ff01f9     str      x22, [sp, #0x3f8]  ! possible store
    0x0112fef8: f60302f9     str      x22, [sp, #0x400]  ! possible store
    0x0112fefc: 1f0100f9     str      xzr, [x8]  ! possible store
    0x0112ff00: e83740f9     ldr      x8, [sp, #0x68]
    0x0112ff04: 1f810039     strb     wzr, [x8, #0x20]  ! possible store
    0x0112ff08: 1f7d00a9     stp      xzr, xzr, [x8]  ! possible store
    0x0112ff0c: 1f7d01a9     stp      xzr, xzr, [x8, #0x10]  ! possible store
    0x0112ff10: e8f20e91     add      x8, x23, #0x3bc
    0x0112ff14: ff1f02f9     str      xzr, [sp, #0x438]  ! possible store
    0x0112ff18: ff4304b9     str      wzr, [sp, #0x440]  ! possible store
    0x0112ff1c: f4131139     strb     w20, [sp, #0x444]  ! possible store
    0x0112ff20: f54b04b9     str      w21, [sp, #0x448]  ! possible store
    0x0112ff24: e92b02f9     str      x9, [sp, #0x450]  ! possible store
    0x0112ff28: f62f02f9     str      x22, [sp, #0x458]  ! possible store
    0x0112ff2c: f63302f9     str      x22, [sp, #0x460]  ! possible store
    0x0112ff30: 1f0100f9     str      xzr, [x8]  ! possible store
    0x0112ff34: 7f820039     strb     wzr, [x19, #0x20]  ! possible store
    0x0112ff38: 7f7e00a9     stp      xzr, xzr, [x19]  ! possible store
    0x0112ff3c: 7f7e01a9     stp      xzr, xzr, [x19, #0x10]  ! possible store
    0x0112ff40: 961c0b94     bl       #0x12f7198
    0x0112ff44: e8d340b9     ldr      w8, [sp, #0xd0]
    0x0112ff48: 88200034     cbz      w8, #0x1030358
    0x0112ff4c: e86340f9     ldr      x8, [sp, #0xc0]
    0x0112ff50: 0809188b     add      x8, x8, x24, lsl #2
    0x0112ff54: 89999c52     mov      w9, #0xe4cc
    0x0112ff58: 2900a072     movk     w9, #1, lsl #16
    0x0112ff5c: fb031faa     mov      x27, xzr
    0x0112ff60: fa031f2a     mov      w26, wzr
    0x0112ff64: ff5f00b9     str      wzr, [sp, #0x5c]  ! possible store
    0x0112ff68: 1c01098b     add      x28, x8, x9
    0x0112ff6c: e06340f9     ldr      x0, [sp, #0xc0]
    0x0112ff70: e103182a     mov      w1, w24
    0x0112ff74: e2031b2a     mov      w2, w27
    0x0112ff78: e3031faa     mov      x3, xzr
    0x0112ff7c: e4031faa     mov      x4, xzr
    0x0112ff80: e5031faa     mov      x5, xzr
    0x0112ff84: 80020094     bl       #0x1030984
    0x0112ff88: 7f2700f1     cmp      x27, #9
    0x0112ff8c: 88010054     b.hi     #0x102ffbc
    0x0112ff90: 081c0012     and      w8, w0, #0xff
    0x0112ff94: 1f190071     cmp      w8, #6
    0x0112ff98: 28010054     b.hi     #0x102ffbc
    0x0112ff9c: 8b0340b9     ldr      w11, [x28]
    0x0112ffa0: 69071b0b     add      w9, w27, w27, lsl #1
    0x0112ffa4: ea008052     mov      w10, #7
    0x0112ffa8: 4a21c91a     lsl      w10, w10, w9
    0x0112ffac: 6a012a0a     bic      w10, w11, w10
    0x0112ffb0: 0821c91a     lsl      w8, w8, w9
    0x0112ffb4: 4801082a     orr      w8, w10, w8
    0x0112ffb8: 880300b9     str      w8, [x28]  ! possible store
    0x0112ffbc: 801d0035     cbnz     w0, #0x103036c
    0x0112ffc0: 119601f0     adrp     x17, #0x42f2000
    0x0112ffc4: 31820e91     add      x17, x17, #0x3a0
    0x0112ffc8: e8d340b9     ldr      w8, [sp, #0xd0]
    0x0112ffcc: 7b070091     add      x27, x27, #1
    0x0112ffd0: 7f0308eb     cmp      x27, x8
    0x0112ffd4: c3fcff54     b.lo     #0x102ff6c
    0x0112ffd8: 28034079     ldrh     w8, [x25]
    0x0112ffdc: 5a3f0012     and      w26, w26, #0xffff
    0x0112ffe0: 08011a0b     add      w8, w8, w26
    0x0112ffe4: 097d0553     lsr      w9, w8, #5
    0x0112ffe8: 3f4d1d71     cmp      w9, #0x753
    0x0112ffec: 823e0054     b.hs     #0x10307bc
    0x0112fff0: 28030079     strh     w8, [x25]  ! possible store
    0x0112fff4: e96340b9     ldr      w9, [sp, #0x60]
    0x0112fff8: 5c9201d0     adrp     x28, #0x4279000
    0x0112fffc: 9c4743f9     ldr      x28, [x28, #0x688]
    0x01130000: 3f8d0171     cmp      w9, #0x63
    0x01130004: fb5f40f9     ldr      x27, [sp, #0xb8]
    0x01130008: 88000054     b.hi     #0x1030018
    0x0113000c: 083d0012     and      w8, w8, #0xffff
    0x01130010: 1f8d0171     cmp      w8, #0x63
    0x01130014: 68240054     b.hi     #0x10304a0
    0x01130018: e8b740b9     ldr      w8, [sp, #0xb4]
    0x0113001c: 08010012     and      w8, w8, #1
    0x01130020: da200035     cbnz     w26, #0x1030438
    0x01130024: 599201b0     adrp     x25, #0x4279000
    0x01130028: 5a9201b0     adrp     x26, #0x4279000
    0x0113002c: 393f43f9     ldr      x25, [x25, #0x678]
    0x01130030: 5a4343f9     ldr      x26, [x26, #0x680]
    0x01130034: e96740b9     ldr      w9, [sp, #0x64]
    0x01130038: 2901080b     add      w9, w9, w8
    0x0113003c: e8b740b9     ldr      w8, [sp, #0xb4]
    0x01130040: e96700b9     str      w9, [sp, #0x64]  ! possible store
    0x01130044: a8200037     tbnz     w8, #0, #0x1030458
    0x01130048: 1f530f71     cmp      w24, #0x3d4
    0x0113004c: 6cc0ff54     b.gt     #0x102f858
    0x01130050: 28ffdf08     ldarb    w8, [x25]
    0x01130054: 283f0036     tbz      w8, #0, #0x1030838
    0x01130058: 480340f9     ldr      x8, [x26]
    0x0113005c: 880300f9     str      x8, [x28]  ! possible store
    0x01130060: 006940f9     ldr      x0, [x8, #0xd0]
    0x01130064: 404100b4     cbz      x0, #0x103088c
    0x01130068: 08400191     add      x8, x0, #0x50
    0x0113006c: 09fd5f88     ldaxr    w9, [x8]
    0x01130070: 29050011     add      w9, w9, #1
    0x01130074: 09fd0a88     stlxr    w10, w9, [x8]  ! possible store
    0x01130078: aaffff35     cbnz     w10, #0x103006c
    0x0113007c: 1be440f9     ldr      x27, [x0, #0x1c8]
    0x01130080: db0000b4     cbz      x27, #0x1030098
    0x01130084: 69430191     add      x9, x27, #0x50
    0x01130088: 2afd5f88     ldaxr    w10, [x9]
    0x0113008c: 4a050011     add      w10, w10, #1
    0x01130090: 2afd0b88     stlxr    w11, w10, [x9]  ! possible store
    0x01130094: abffff35     cbnz     w11, #0x1030088
    0x01130098: 09fd5f88     ldaxr    w9, [x8]
    0x0113009c: 29050071     subs     w9, w9, #1
    0x011300a0: 09fd0a88     stlxr    w10, w9, [x8]  ! possible store
    0x011300a4: aaffff35     cbnz     w10, #0x1030098
    0x011300a8: 40220054     b.eq     #0x10304f0
    0x011300ac: 682f40f9     ldr      x8, [x27, #0x58]
    0x011300b0: 297b9ed2     mov      x9, #0xf3d9
    0x011300b4: a956b3f2     movk     x9, #0x9ab5, lsl #16
    0x011300b8: 89eac8f2     movk     x9, #0x4754, lsl #32
    0x011300bc: 491df8f2     movk     x9, #0xc0ea, lsl #48
    0x011300c0: 000540f9     ldr      x0, [x8, #8]
    0x011300c4: e8b70091     add      x8, sp, #0x2d
    0x011300c8: ffd300b9     str      wzr, [sp, #0xd0]  ! possible store
    0x011300cc: ff6f00f9     str      xzr, [sp, #0xd8]  ! possible store
    0x011300d0: ffe300b9     str      wzr, [sp, #0xe0]  ! possible store
    0x011300d4: f4930339     strb     w20, [sp, #0xe4]  ! possible store
    0x011300d8: f5eb00b9     str      w21, [sp, #0xe8]  ! possible store
    0x011300dc: e2430391     add      x2, sp, #0xd0
    0x011300e0: e103182a     mov      w1, w24
    0x011300e4: f68300f9     str      x22, [sp, #0x100]  ! possible store
    0x011300e8: e95b0fa9     stp      x9, x22, [sp, #0xf0]  ! possible store
    0x011300ec: 1ff10ff8     stur     xzr, [x8, #0xff]  ! possible store
    0x011300f0: e85740f9     ldr      x8, [sp, #0xa8]
    0x011300f4: 1f810039     strb     wzr, [x8, #0x20]  ! possible store
    0x011300f8: 1f7d00a9     stp      xzr, xzr, [x8]  ! possible store
    0x011300fc: 1f7d01a9     stp      xzr, xzr, [x8, #0x10]  ! possible store
    0x01130100: e8430391     add      x8, sp, #0xd0
    0x01130104: ff9f00f9     str      xzr, [sp, #0x138]  ! possible store
    0x01130108: ff4301b9     str      wzr, [sp, #0x140]  ! possible store
    0x0113010c: f4130539     strb     w20, [sp, #0x144]  ! possible store
    0x01130110: f54b01b9     str      w21, [sp, #0x148]  ! possible store
    0x01130114: f6b300f9     str      x22, [sp, #0x160]  ! possible store
    0x01130118: e95b15a9     stp      x9, x22, [sp, #0x150]  ! possible store
    0x0113011c: 1fc10bf8     stur     xzr, [x8, #0xbc]  ! possible store
    0x01130120: e85340f9     ldr      x8, [sp, #0xa0]
    0x01130124: 1f810039     strb     wzr, [x8, #0x20]  ! possible store
    0x01130128: 1f7d00a9     stp      xzr, xzr, [x8]  ! possible store
    0x0113012c: 1f7d01a9     stp      xzr, xzr, [x8, #0x10]  ! possible store
    0x01130130: e8720491     add      x8, x23, #0x11c
    0x01130134: ffcf00f9     str      xzr, [sp, #0x198]  ! possible store
    0x01130138: ffa301b9     str      wzr, [sp, #0x1a0]  ! possible store
    0x0113013c: f4930639     strb     w20, [sp, #0x1a4]  ! possible store
    0x01130140: f5ab01b9     str      w21, [sp, #0x1a8]  ! possible store
    0x01130144: f6e300f9     str      x22, [sp, #0x1c0]  ! possible store
    0x01130148: e95b1ba9     stp      x9, x22, [sp, #0x1b0]  ! possible store
    0x0113014c: 1f0100f9     str      xzr, [x8]  ! possible store
    0x01130150: e84f40f9     ldr      x8, [sp, #0x98]
    0x01130154: 1f810039     strb     wzr, [x8, #0x20]  ! possible store
    0x01130158: 1f7d00a9     stp      xzr, xzr, [x8]  ! possible store
    0x0113015c: 1f7d01a9     stp      xzr, xzr, [x8, #0x10]  ! possible store
    0x01130160: e8f20591     add      x8, x23, #0x17c
    0x01130164: ffff00f9     str      xzr, [sp, #0x1f8]  ! possible store
    0x01130168: ff0302b9     str      wzr, [sp, #0x200]  ! possible store
    0x0113016c: f4130839     strb     w20, [sp, #0x204]  ! possible store
    0x01130170: f50b02b9     str      w21, [sp, #0x208]  ! possible store
    0x01130174: e90b01f9     str      x9, [sp, #0x210]  ! possible store
    0x01130178: f61301f9     str      x22, [sp, #0x220]  ! possible store
    0x0113017c: f60f01f9     str      x22, [sp, #0x218]  ! possible store
    0x01130180: 1f0100f9     str      xzr, [x8]  ! possible store
    0x01130184: e84b40f9     ldr      x8, [sp, #0x90]
    0x01130188: 1f810039     strb     wzr, [x8, #0x20]  ! possible store
    0x0113018c: 1f7d00a9     stp      xzr, xzr, [x8]  ! possible store
    0x01130190: 1f7d01a9     stp      xzr, xzr, [x8, #0x10]  ! possible store
    0x01130194: e8720791     add      x8, x23, #0x1dc
    0x01130198: ff2f01f9     str      xzr, [sp, #0x258]  ! possible store
    0x0113019c: ff6302b9     str      wzr, [sp, #0x260]  ! possible store
    0x011301a0: f4930939     strb     w20, [sp, #0x264]  ! possible store
    0x011301a4: f56b02b9     str      w21, [sp, #0x268]  ! possible store
    0x011301a8: e93b01f9     str      x9, [sp, #0x270]  ! possible store
    0x011301ac: f64301f9     str      x22, [sp, #0x280]  ! possible store
    0x011301b0: f63f01f9     str      x22, [sp, #0x278]  ! possible store
    0x011301b4: 1f0100f9     str      xzr, [x8]  ! possible store
    0x011301b8: e84740f9     ldr      x8, [sp, #0x88]
    0x011301bc: 1f810039     strb     wzr, [x8, #0x20]  ! possible store
    0x011301c0: 1f7d00a9     stp      xzr, xzr, [x8]  ! possible store
    0x011301c4: 1f7d01a9     stp      xzr, xzr, [x8, #0x10]  ! possible store
    0x011301c8: e8f20891     add      x8, x23, #0x23c
    0x011301cc: ff5f01f9     str      xzr, [sp, #0x2b8]  ! possible store
    0x011301d0: ffc302b9     str      wzr, [sp, #0x2c0]  ! possible store
    0x011301d4: f4130b39     strb     w20, [sp, #0x2c4]  ! possible store
    0x011301d8: f5cb02b9     str      w21, [sp, #0x2c8]  ! possible store
    0x011301dc: e96b01f9     str      x9, [sp, #0x2d0]  ! possible store
    0x011301e0: f66f01f9     str      x22, [sp, #0x2d8]  ! possible store
    0x011301e4: f67301f9     str      x22, [sp, #0x2e0]  ! possible store
    0x011301e8: 1f0100f9     str      xzr, [x8]  ! possible store
    0x011301ec: e84340f9     ldr      x8, [sp, #0x80]
    0x011301f0: 1f810039     strb     wzr, [x8, #0x20]  ! possible store
    0x011301f4: 1f7d00a9     stp      xzr, xzr, [x8]  ! possible store
    0x011301f8: 1f7d01a9     stp      xzr, xzr, [x8, #0x10]  ! possible store
    0x011301fc: e8720a91     add      x8, x23, #0x29c
    0x01130200: ff8f01f9     str      xzr, [sp, #0x318]  ! possible store
    0x01130204: ff2303b9     str      wzr, [sp, #0x320]  ! possible store
    0x01130208: f4930c39     strb     w20, [sp, #0x324]  ! possible store
    0x0113020c: f52b03b9     str      w21, [sp, #0x328]  ! possible store
    0x01130210: e99b01f9     str      x9, [sp, #0x330]  ! possible store
    0x01130214: f69f01f9     str      x22, [sp, #0x338]  ! possible store
    0x01130218: f6a301f9     str      x22, [sp, #0x340]  ! possible store
    0x0113021c: 1f0100f9     str      xzr, [x8]  ! possible store
    0x01130220: e83f40f9     ldr      x8, [sp, #0x78]
    0x01130224: 1f810039     strb     wzr, [x8, #0x20]  ! possible store
    0x01130228: 1f7d00a9     stp      xzr, xzr, [x8]  ! possible store
    0x0113022c: 1f7d01a9     stp      xzr, xzr, [x8, #0x10]  ! possible store
    0x01130230: e8f20b91     add      x8, x23, #0x2fc
    0x01130234: ffbf01f9     str      xzr, [sp, #0x378]  ! possible store
    0x01130238: ff8303b9     str      wzr, [sp, #0x380]  ! possible store
    0x0113023c: f4130e39     strb     w20, [sp, #0x384]  ! possible store
    0x01130240: f58b03b9     str      w21, [sp, #0x388]  ! possible store
    0x01130244: e9cb01f9     str      x9, [sp, #0x390]  ! possible store
    0x01130248: f6cf01f9     str      x22, [sp, #0x398]  ! possible store
    0x0113024c: f6d301f9     str      x22, [sp, #0x3a0]  ! possible store
    0x01130250: 1f0100f9     str      xzr, [x8]  ! possible store
    0x01130254: e83b40f9     ldr      x8, [sp, #0x70]
    0x01130258: 1f810039     strb     wzr, [x8, #0x20]  ! possible store
    0x0113025c: 1f7d00a9     stp      xzr, xzr, [x8]  ! possible store
    0x01130260: 1f7d01a9     stp      xzr, xzr, [x8, #0x10]  ! possible store
    0x01130264: e8720d91     add      x8, x23, #0x35c
    0x01130268: ffef01f9     str      xzr, [sp, #0x3d8]  ! possible store
    0x0113026c: ffe303b9     str      wzr, [sp, #0x3e0]  ! possible store
    0x01130270: f4930f39     strb     w20, [sp, #0x3e4]  ! possible store
    0x01130274: f5eb03b9     str      w21, [sp, #0x3e8]  ! possible store
    0x01130278: e9fb01f9     str      x9, [sp, #0x3f0]  ! possible store
    0x0113027c: f6ff01f9     str      x22, [sp, #0x3f8]  ! possible store
    0x01130280: f60302f9     str      x22, [sp, #0x400]  ! possible store
    0x01130284: 1f0100f9     str      xzr, [x8]  ! possible store
    0x01130288: e83740f9     ldr      x8, [sp, #0x68]
    0x0113028c: 1f810039     strb     wzr, [x8, #0x20]  ! possible store
    0x01130290: 1f7d00a9     stp      xzr, xzr, [x8]  ! possible store
    0x01130294: 1f7d01a9     stp      xzr, xzr, [x8, #0x10]  ! possible store
    0x01130298: e8f20e91     add      x8, x23, #0x3bc
    0x0113029c: ff1f02f9     str      xzr, [sp, #0x438]  ! possible store
    0x011302a0: ff4304b9     str      wzr, [sp, #0x440]  ! possible store
    0x011302a4: f4131139     strb     w20, [sp, #0x444]  ! possible store
    0x011302a8: f54b04b9     str      w21, [sp, #0x448]  ! possible store
    0x011302ac: e92b02f9     str      x9, [sp, #0x450]  ! possible store
    0x011302b0: f62f02f9     str      x22, [sp, #0x458]  ! possible store
    0x011302b4: f63302f9     str      x22, [sp, #0x460]  ! possible store
    0x011302b8: 1f0100f9     str      xzr, [x8]  ! possible store
    0x011302bc: 7f820039     strb     wzr, [x19, #0x20]  ! possible store
    0x011302c0: 7f7e00a9     stp      xzr, xzr, [x19]  ! possible store
    0x011302c4: 7f7e01a9     stp      xzr, xzr, [x19, #0x10]  ! possible store
    0x011302c8: b41b0b94     bl       #0x12f7198
    0x011302cc: ead340b9     ldr      w10, [sp, #0xd0]
    0x011302d0: 119601d0     adrp     x17, #0x42f2000
    0x011302d4: 31820e91     add      x17, x17, #0x3a0
    0x011302d8: ea020034     cbz      w10, #0x1030334
    0x011302dc: e95f40f9     ldr      x9, [sp, #0xb8]
    0x011302e0: 0b0b8052     mov      w11, #0x58
    0x011302e4: 09270b9b     madd     x9, x24, x11, x9
    0x011302e8: 4b050a8b     add      x11, x10, x10, lsl #1
    0x011302ec: 2a008052     mov      w10, #1
    0x011302f0: 297540b9     ldr      w9, [x9, #0x74]
    0x011302f4: ec2740f9     ldr      x12, [sp, #0x48]
    0x011302f8: e8031faa     mov      x8, xzr
    0x011302fc: 1f7900f1     cmp      x8, #0x1e
    0x01130300: 602e0054     b.eq     #0x10308cc
    0x01130304: ee008052     mov      w14, #7
    0x01130308: ce21c81a     lsl      w14, w14, w8
    0x0113030c: ce01090a     and      w14, w14, w9
    0x01130310: 8d0546b8     ldr      w13, [x12], #0x60
    0x01130314: ad050011     add      w13, w13, #1
    0x01130318: ce25c81a     lsr      w14, w14, w8
    0x0113031c: 080d0091     add      x8, x8, #3
    0x01130320: bf012e6b     cmp      w13, w14, uxtb
    0x01130324: ea838a1a     csel     w10, wzr, w10, hi
    0x01130328: 7f0108eb     cmp      x11, x8
    0x0113032c: 81feff54     b.ne     #0x10302fc
    0x01130330: aa240037     tbnz     w10, #0, #0x10307c4
    0x01130334: fb0000b4     cbz      x27, #0x1030350
    0x01130338: 68430191     add      x8, x27, #0x50
    0x0113033c: 09fd5f88     ldaxr    w9, [x8]
    0x01130340: 29050071     subs     w9, w9, #1
    0x01130344: 09fd0a88     stlxr    w10, w9, [x8]  ! possible store
    0x01130348: aaffff35     cbnz     w10, #0x103033c
    0x0113034c: e00f0054     b.eq     #0x1030548
    0x01130350: fb5f40f9     ldr      x27, [sp, #0xb8]
    0x01130354: 41fdff17     b        #0x102f858
    0x01130358: fa031f2a     mov      w26, wzr
    0x0113035c: ff5f00b9     str      wzr, [sp, #0x5c]  ! possible store
    0x01130360: 119601d0     adrp     x17, #0x42f2000
    0x01130364: 31820e91     add      x17, x17, #0x3a0
    0x01130368: 1cffff17     b        #0x102ffd8
    0x0113036c: 7f2700f1     cmp      x27, #9
    0x01130370: 119601d0     adrp     x17, #0x42f2000
    0x01130374: 31820e91     add      x17, x17, #0x3a0
    0x01130378: a82a0054     b.hi     #0x10308cc
    0x0113037c: e85f40f9     ldr      x8, [sp, #0xb8]
    0x01130380: 090b8052     mov      w9, #0x58
    0x01130384: 0823099b     madd     x8, x24, x9, x8
    0x01130388: 0d0c8052     mov      w13, #0x60
    0x0113038c: 6e5f0d9b     madd     x14, x27, x13, x23
    0x01130390: 69071b0b     add      w9, w27, w27, lsl #1
    0x01130394: ea008052     mov      w10, #7
    0x01130398: 4a21c91a     lsl      w10, w10, w9
    0x0113039c: eb032a2a     mvn      w11, w10
    0x011303a0: 0c4d47b8     ldr      w12, [x8, #0x74]!
    0x011303a4: 8f010a0a     and      w15, w12, w10
    0x011303a8: cd394a29     ldp      w13, w14, [x14, #0x50]
    0x011303ac: ef25c91a     lsr      w15, w15, w9
    0x011303b0: f0191f12     and      w16, w15, #0xfe
    0x011303b4: ef050011     add      w15, w15, #1
    0x011303b8: 1f160071     cmp      w16, #5
    0x011303bc: ef1d0012     and      w15, w15, #0xff
    0x011303c0: e299467a     ccmp     w15, #6, #2, ls
    0x011303c4: a8000054     b.hi     #0x10303d8
    0x011303c8: 8c010b0a     and      w12, w12, w11
    0x011303cc: ef21c91a     lsl      w15, w15, w9
    0x011303d0: ec010c2a     orr      w12, w15, w12
    0x011303d4: 0c0100b9     str      w12, [x8]  ! possible store
    0x011303d8: cd010d0b     add      w13, w14, w13
    0x011303dc: 0e040071     subs     w14, w0, #1
    0x011303e0: e0010054     b.eq     #0x103041c
    0x011303e4: 8f010a0a     and      w15, w12, w10
    0x011303e8: ef25c91a     lsr      w15, w15, w9
    0x011303ec: f0191f12     and      w16, w15, #0xfe
    0x011303f0: ef050011     add      w15, w15, #1
    0x011303f4: 1f160071     cmp      w16, #5
    0x011303f8: ef1d0012     and      w15, w15, #0xff
    0x011303fc: e299467a     ccmp     w15, #6, #2, ls
    0x01130400: a8000054     b.hi     #0x1030414
    0x01130404: 8c010b0a     and      w12, w12, w11
    0x01130408: ef21c91a     lsl      w15, w15, w9
    0x0113040c: ec010c2a     orr      w12, w15, w12
    0x01130410: 0c0100b9     str      w12, [x8]  ! possible store
    0x01130414: ce050071     subs     w14, w14, #1
    0x01130418: 61feff54     b.ne     #0x10303e4
    0x0113041c: e85f40b9     ldr      w8, [sp, #0x5c]
    0x01130420: ba69001b     madd     w26, w13, w0, w26
    0x01130424: 0801000b     add      w8, w8, w0
    0x01130428: e85f00b9     str      w8, [sp, #0x5c]  ! possible store
    0x0113042c: 28008052     mov      w8, #1
    0x01130430: e8b700b9     str      w8, [sp, #0xb4]  ! possible store
    0x01130434: e5feff17     b        #0x102ffc8
    0x01130438: e93b40b9     ldr      w9, [sp, #0x38]
    0x0113043c: ea5f40b9     ldr      w10, [sp, #0x5c]
    0x01130440: 29212a0b     add      w9, w9, w10, uxth
    0x01130444: e93b00b9     str      w9, [sp, #0x38]  ! possible store
    0x01130448: e93f40b9     ldr      w9, [sp, #0x3c]
    0x0113044c: 29011a0b     add      w9, w9, w26
    0x01130450: e93f00b9     str      w9, [sp, #0x3c]  ! possible store
    0x01130454: f4feff17     b        #0x1030024
    0x01130458: e86340f9     ldr      x8, [sp, #0xc0]
    0x0113045c: 08e94079     ldrh     w8, [x8, #0x74]
    0x01130460: e93740b9     ldr      w9, [sp, #0x34]
    0x01130464: 09080036     tbz      w9, #0, #0x1030564
    0x01130468: 090b8052     mov      w9, #0x58
    0x0113046c: 096f099b     madd     x9, x24, x9, x27
    0x01130470: 28fd0079     strh     w8, [x9, #0x7e]  ! possible store
    0x01130474: 28008052     mov      w8, #1
    0x01130478: e83700b9     str      w8, [sp, #0x34]  ! possible store
    0x0113047c: 1f530f71     cmp      w24, #0x3d4
    0x01130480: 8ddeff54     b.le     #0x1030050
    0x01130484: f5fcff17     b        #0x102f858
    0x01130488: e06340f9     ldr      x0, [sp, #0xc0]
    0x0113048c: e103182a     mov      w1, w24
    0x01130490: da140094     bl       #0x10357f8
    0x01130494: 880c8052     mov      w8, #0x64
    0x01130498: 60c40737     tbnz     w0, #0, #0x102fd24
    0x0113049c: d9000014     b        #0x1030800
    0x011304a0: e06340f9     ldr      x0, [sp, #0xc0]
    0x011304a4: e103182a     mov      w1, w24
    0x011304a8: d4140094     bl       #0x10357f8
    0x011304ac: e93340b9     ldr      w9, [sp, #0x30]
    0x011304b0: 08000012     and      w8, w0, #1
    0x011304b4: 119601d0     adrp     x17, #0x42f2000
    0x011304b8: 31820e91     add      x17, x17, #0x3a0
    0x011304bc: 2901080b     add      w9, w9, w8
    0x011304c0: e93300b9     str      w9, [sp, #0x30]  ! possible store
    0x011304c4: d5feff17     b        #0x1030018
    0x011304c8: 4a711d12     and      w10, w10, #0xfffffff8
    0x011304cc: 4a010032     orr      w10, w10, #1
    0x011304d0: 2a0100b9     str      w10, [x9]  ! possible store
    0x011304d4: 1f050071     cmp      w8, #1
    0x011304d8: 61beff54     b.ne     #0x102fca4
    0x011304dc: 06feff17     b        #0x102fcf4
    0x011304e0: 080040f9     ldr      x8, [x0]
    0x011304e4: 080940f9     ldr      x8, [x8, #0x10]
    0x011304e8: 00013fd6     blr      x8
    0x011304ec: 5cfdff17     b        #0x102fa5c
    0x011304f0: 080040f9     ldr      x8, [x0]
    0x011304f4: 080940f9     ldr      x8, [x8, #0x10]

### UpdateAllReportPokeAndGetResult - 0x0286bc90

Direct BL callers: []

Raw bytes and instructions (an exclamation mark marks a possible store):

    0x0286bb90: 69722eb9     str      w9, [x19, #0x2e70]  ! possible store
    0x0286bb94: 49028052     mov      w9, #0x12
    0x0286bb98: 09e10039     strb     w9, [x8, #0x38]  ! possible store
    0x0286bb9c: e90300b2     mov      x9, #0x100000001
    0x0286bba0: 693e17f9     str      x9, [x19, #0x2e78]  ! possible store
    0x0286bba4: 1f110139     strb     wzr, [x8, #0x44]  ! possible store
    0x0286bba8: e92f40a9     ldp      x9, x11, [sp]
    0x0286bbac: ea0b40f9     ldr      x10, [sp, #0x10]
    0x0286bbb0: ec5341f8     ldur     x12, [sp, #0x15]
    0x0286bbb4: 28d08552     mov      w8, #0x2e81
    0x0286bbb8: 6802088b     add      x8, x19, x8
    0x0286bbbc: 0c5101f8     stur     x12, [x8, #0x15]  ! possible store
    0x0286bbc0: 090100f9     str      x9, [x8]  ! possible store
    0x0286bbc4: 0ba900a9     stp      x11, x10, [x8, #8]  ! possible store
    0x0286bbc8: 605257f9     ldr      x0, [x19, #0x2ea0]
    0x0286bbcc: 7f5217f9     str      xzr, [x19, #0x2ea0]  ! possible store
    0x0286bbd0: 000100b4     cbz      x0, #0x276bbf0
    0x0286bbd4: 082c40f9     ldr      x8, [x0, #0x58]
    0x0286bbd8: 09310091     add      x9, x8, #0xc
    0x0286bbdc: 2afd5f88     ldaxr    w10, [x9]
    0x0286bbe0: 4a050071     subs     w10, w10, #1
    0x0286bbe4: 2afd0b88     stlxr    w11, w10, [x9]  ! possible store
    0x0286bbe8: abffff35     cbnz     w11, #0x276bbdc
    0x0286bbec: c0000054     b.eq     #0x276bc04
    0x0286bbf0: 7f5217f9     str      xzr, [x19, #0x2ea0]  ! possible store
    0x0286bbf4: fd7b43a9     ldp      x29, x30, [sp, #0x30]
    0x0286bbf8: f31340f9     ldr      x19, [sp, #0x20]
    0x0286bbfc: ff030191     add      sp, sp, #0x40
    0x0286bc00: c0035fd6     ret      
    0x0286bc04: 1f0d00f9     str      xzr, [x8, #0x18]  ! possible store
    0x0286bc08: 080040f9     ldr      x8, [x0]
    0x0286bc0c: 081140f9     ldr      x8, [x8, #0x20]
    0x0286bc10: 00013fd6     blr      x8
    0x0286bc14: f7ffff17     b        #0x276bbf0
    0x0286bc18: 082840f9     ldr      x8, [x0, #0x50]
    0x0286bc1c: 89ba8552     mov      w9, #0x2dd4
    0x0286bc20: 0001098b     add      x0, x8, x9
    0x0286bc24: c0035fd6     ret      
    0x0286bc28: 082840f9     ldr      x8, [x0, #0x50]
    0x0286bc2c: 09bb8552     mov      w9, #0x2dd8
    0x0286bc30: 1fd52db9     str      wzr, [x8, #0x2dd4]  ! possible store
    0x0286bc34: 1f692978     strh     wzr, [x8, x9]  ! possible store
    0x0286bc38: 89bb8552     mov      w9, #0x2ddc
    0x0286bc3c: 1f6929f8     str      xzr, [x8, x9]  ! possible store
    0x0286bc40: 290040b9     ldr      w9, [x1]
    0x0286bc44: 69000035     cbnz     w9, #0x276bc50
    0x0286bc48: 09d52db9     str      w9, [x8, #0x2dd4]  ! possible store
    0x0286bc4c: c0035fd6     ret      
    0x0286bc50: 3f150071     cmp      w9, #5
    0x0286bc54: 61000054     b.ne     #0x276bc60
    0x0286bc58: 29008052     mov      w9, #1
    0x0286bc5c: fbffff17     b        #0x276bc48
    0x0286bc60: 3f190071     cmp      w9, #6
    0x0286bc64: 41ffff54     b.ne     #0x276bc4c
    0x0286bc68: 49008052     mov      w9, #2
    0x0286bc6c: f7ffff17     b        #0x276bc48
    0x0286bc70: 082840f9     ldr      x8, [x0, #0x50]
    0x0286bc74: 09d58552     mov      w9, #0x2ea8
    0x0286bc78: 0001098b     add      x0, x8, x9
    0x0286bc7c: c0035fd6     ret      
    0x0286bc80: 082840f9     ldr      x8, [x0, #0x50]
    0x0286bc84: 09d98552     mov      w9, #0x2ec8
    0x0286bc88: 0001098b     add      x0, x8, x9
    0x0286bc8c: c0035fd6     ret      
    0x0286bc90: f30f1ef8     str      x19, [sp, #-0x20]!  <-- TARGET  ! possible store
    0x0286bc94: fd7b01a9     stp      x29, x30, [sp, #0x10]  ! possible store
    0x0286bc98: fd430091     add      x29, sp, #0x10
    0x0286bc9c: 68d800d0     adrp     x8, #0x4279000
    0x0286bca0: 08ad42f9     ldr      x8, [x8, #0x558]
    0x0286bca4: 08fddf08     ldarb    w8, [x8]
    0x0286bca8: f30300aa     mov      x19, x0
    0x0286bcac: 28040036     tbz      w8, #0, #0x276bd30
    0x0286bcb0: 68d800d0     adrp     x8, #0x4279000
    0x0286bcb4: 08b142f9     ldr      x8, [x8, #0x560]
    0x0286bcb8: 000140f9     ldr      x0, [x8]
    0x0286bcbc: 68d800d0     adrp     x8, #0x4279000
    0x0286bcc0: 08b542f9     ldr      x8, [x8, #0x568]
    0x0286bcc4: 000100f9     str      x0, [x8]  ! possible store
    0x0286bcc8: e8230091     add      x8, sp, #8
    0x0286bccc: 9574a397     bl       #0x1048f20
    0x0286bcd0: 682a40f9     ldr      x8, [x19, #0x50]
    0x0286bcd4: 09de8552     mov      w9, #0x2ef0
    0x0286bcd8: 0101098b     add      x1, x8, x9
    0x0286bcdc: e00740f9     ldr      x0, [sp, #8]
    0x0286bce0: 120ea397     bl       #0x102f528
    0x0286bce4: f303002a     mov      w19, w0
    0x0286bce8: e00740f9     ldr      x0, [sp, #8]
    0x0286bcec: 000100b4     cbz      x0, #0x276bd0c
    0x0286bcf0: 082c40f9     ldr      x8, [x0, #0x58]
    0x0286bcf4: 09310091     add      x9, x8, #0xc
    0x0286bcf8: 2afd5f88     ldaxr    w10, [x9]
    0x0286bcfc: 4a050071     subs     w10, w10, #1
    0x0286bd00: 2afd0b88     stlxr    w11, w10, [x9]  ! possible store
    0x0286bd04: abffff35     cbnz     w11, #0x276bcf8
    0x0286bd08: a0000054     b.eq     #0x276bd1c
    0x0286bd0c: fd7b41a9     ldp      x29, x30, [sp, #0x10]
    0x0286bd10: e003132a     mov      w0, w19
    0x0286bd14: f30742f8     ldr      x19, [sp], #0x20
    0x0286bd18: c0035fd6     ret      
    0x0286bd1c: 1f0d00f9     str      xzr, [x8, #0x18]  ! possible store
    0x0286bd20: 080040f9     ldr      x8, [x0]
    0x0286bd24: 081140f9     ldr      x8, [x8, #0x20]
    0x0286bd28: 00013fd6     blr      x8
    0x0286bd2c: f8ffff17     b        #0x276bd0c
    0x0286bd30: 60d800d0     adrp     x0, #0x4279000
    0x0286bd34: 00ac42f9     ldr      x0, [x0, #0x558]
    0x0286bd38: 32dc2c94     bl       #0x32a2e00
    0x0286bd3c: a0fbff34     cbz      w0, #0x276bcb0
    0x0286bd40: 60d800d0     adrp     x0, #0x4279000
    0x0286bd44: 61d800d0     adrp     x1, #0x4279000
    0x0286bd48: 008043f9     ldr      x0, [x0, #0x700]
    0x0286bd4c: 21b042f9     ldr      x1, [x1, #0x560]
    0x0286bd50: 62c500f0     adrp     x2, #0x401a000
    0x0286bd54: 42000091     add      x2, x2, #0
    0x0286bd58: 3e516297     bl       #0x250
    0x0286bd5c: 60d800d0     adrp     x0, #0x4279000
    0x0286bd60: 00ac42f9     ldr      x0, [x0, #0x558]
    0x0286bd64: 2bdc2c94     bl       #0x32a2e10
    0x0286bd68: d2ffff17     b        #0x276bcb0
    0x0286bd6c: fd7bbfa9     stp      x29, x30, [sp, #-0x10]!  ! possible store
    0x0286bd70: fd030091     mov      x29, sp
    0x0286bd74: c10100b4     cbz      x1, #0x276bdac
    0x0286bd78: 082840f9     ldr      x8, [x0, #0x50]
    0x0286bd7c: 09156fb9     ldr      w9, [x8, #0x2f14]
    0x0286bd80: 290800b9     str      w9, [x1, #8]  ! possible store
    0x0286bd84: 09116fb9     ldr      w9, [x8, #0x2f10]
    0x0286bd88: 290400b9     str      w9, [x1, #4]  ! possible store
    0x0286bd8c: 09096fb9     ldr      w9, [x8, #0x2f08]
    0x0286bd90: 290000b9     str      w9, [x1]  ! possible store
    0x0286bd94: 091d6fb9     ldr      w9, [x8, #0x2f1c]
    0x0286bd98: 290c00b9     str      w9, [x1, #0xc]  ! possible store
    0x0286bd9c: 08f56eb9     ldr      w8, [x8, #0x2ef4]
    0x0286bda0: 281000b9     str      w8, [x1, #0x10]  ! possible store
    0x0286bda4: fd7bc1a8     ldp      x29, x30, [sp], #0x10
    0x0286bda8: c0035fd6     ret      
    0x0286bdac: 408900f0     adrp     x0, #0x3896000
    0x0286bdb0: 00880c91     add      x0, x0, #0x322
    0x0286bdb4: e10300aa     mov      x1, x0
    0x0286bdb8: e20300aa     mov      x2, x0
    0x0286bdbc: e3031f2a     mov      w3, wzr
    0x0286bdc0: 28dd2c94     bl       #0x32a3260
    0x0286bdc4: 082840f9     ldr      x8, [x0, #0x50]
    0x0286bdc8: 09de8552     mov      w9, #0x2ef0
    0x0286bdcc: 0001098b     add      x0, x8, x9
    0x0286bdd0: c0035fd6     ret      
    0x0286bdd4: f30f1ef8     str      x19, [sp, #-0x20]!  ! possible store
    0x0286bdd8: fd7b01a9     stp      x29, x30, [sp, #0x10]  ! possible store
    0x0286bddc: fd430091     add      x29, sp, #0x10
    0x0286bde0: 092840f9     ldr      x9, [x0, #0x50]
    0x0286bde4: 29cd57f9     ldr      x9, [x9, #0x2f98]
    0x0286bde8: 090100f9     str      x9, [x8]  ! possible store
    0x0286bdec: e90100b4     cbz      x9, #0x276be28
    0x0286bdf0: 332d40f9     ldr      x19, [x9, #0x58]
    0x0286bdf4: 600e40f9     ldr      x0, [x19, #0x18]
    0x0286bdf8: e00100b4     cbz      x0, #0x276be34
    0x0286bdfc: 680a40f9     ldr      x8, [x19, #0x10]
    0x0286be00: a80000b5     cbnz     x8, #0x276be14
    0x0286be04: 080040f9     ldr      x8, [x0]
    0x0286be08: 080140f9     ldr      x8, [x8]
    0x0286be0c: 00013fd6     blr      x8
    0x0286be10: 600a00f9     str      x0, [x19, #0x10]  ! possible store
    0x0286be14: 68320091     add      x8, x19, #0xc
    0x0286be18: 09fd5f88     ldaxr    w9, [x8]
    0x0286be1c: 29050011     add      w9, w9, #1
    0x0286be20: 09fd0a88     stlxr    w10, w9, [x8]  ! possible store
    0x0286be24: aaffff35     cbnz     w10, #0x276be18
    0x0286be28: fd7b41a9     ldp      x29, x30, [sp, #0x10]
    0x0286be2c: f30742f8     ldr      x19, [sp], #0x20
    0x0286be30: c0035fd6     ret      
    0x0286be34: 408900f0     adrp     x0, #0x3896000
    0x0286be38: 00880c91     add      x0, x0, #0x322
    0x0286be3c: e10300aa     mov      x1, x0
    0x0286be40: e20300aa     mov      x2, x0
    0x0286be44: e3031f2a     mov      w3, wzr
    0x0286be48: 06dd2c94     bl       #0x32a3260
    0x0286be4c: f30f1ef8     str      x19, [sp, #-0x20]!  ! possible store
    0x0286be50: fd7b01a9     stp      x29, x30, [sp, #0x10]  ! possible store
    0x0286be54: fd430091     add      x29, sp, #0x10
    0x0286be58: 092840f9     ldr      x9, [x0, #0x50]
    0x0286be5c: 296940f9     ldr      x9, [x9, #0xd0]
    0x0286be60: 090100f9     str      x9, [x8]  ! possible store
    0x0286be64: e90100b4     cbz      x9, #0x276bea0
    0x0286be68: 332d40f9     ldr      x19, [x9, #0x58]
    0x0286be6c: 600e40f9     ldr      x0, [x19, #0x18]
    0x0286be70: e00100b4     cbz      x0, #0x276beac
    0x0286be74: 680a40f9     ldr      x8, [x19, #0x10]
    0x0286be78: a80000b5     cbnz     x8, #0x276be8c
    0x0286be7c: 080040f9     ldr      x8, [x0]
    0x0286be80: 080140f9     ldr      x8, [x8]
    0x0286be84: 00013fd6     blr      x8
    0x0286be88: 600a00f9     str      x0, [x19, #0x10]  ! possible store
    0x0286be8c: 68320091     add      x8, x19, #0xc
    0x0286be90: 09fd5f88     ldaxr    w9, [x8]
    0x0286be94: 29050011     add      w9, w9, #1
    0x0286be98: 09fd0a88     stlxr    w10, w9, [x8]  ! possible store
    0x0286be9c: aaffff35     cbnz     w10, #0x276be90
    0x0286bea0: fd7b41a9     ldp      x29, x30, [sp, #0x10]
    0x0286bea4: f30742f8     ldr      x19, [sp], #0x20
    0x0286bea8: c0035fd6     ret      
    0x0286beac: 408900f0     adrp     x0, #0x3896000
    0x0286beb0: 00880c91     add      x0, x0, #0x322
    0x0286beb4: e10300aa     mov      x1, x0
    0x0286beb8: e20300aa     mov      x2, x0
    0x0286bebc: e3031f2a     mov      w3, wzr
    0x0286bec0: e8dc2c94     bl       #0x32a3260
    0x0286bec4: 00000000     udf      #0
    0x0286bec8: 00000000     udf      #0
    0x0286becc: 00000000     udf      #0
    0x0286bed0: 68d800d0     adrp     x8, #0x4279000
    0x0286bed4: 087942f9     ldr      x8, [x8, #0x4f0]
    0x0286bed8: 09014039     ldrb     w9, [x8]
    0x0286bedc: 49010037     tbnz     w9, #0, #0x276bf04
    0x0286bee0: 69d800d0     adrp     x9, #0x4279000
    0x0286bee4: 6ad800d0     adrp     x10, #0x4279000
    0x0286bee8: 297d42f9     ldr      x9, [x9, #0x4f8]
    0x0286beec: 4a8142f9     ldr      x10, [x10, #0x500]
    0x0286bef0: eb8700d0     adrp     x11, #0x3869000
    0x0286bef4: 6b6d3391     add      x11, x11, #0xcdb
    0x0286bef8: 2b2900a9     stp      x11, x10, [x9]  ! possible store
    0x0286befc: 29008052     mov      w9, #1
    0x0286bf00: 090100f9     str      x9, [x8]  ! possible store
    0x0286bf04: c0035fd6     ret      
    0x0286bf08: 1f2003d5     nop      
    0x0286bf0c: 1f2003d5     nop      
    0x0286bf10: 68d800d0     adrp     x8, #0x4279000
    0x0286bf14: 088542f9     ldr      x8, [x8, #0x508]
    0x0286bf18: 09014039     ldrb     w9, [x8]
    0x0286bf1c: a9010037     tbnz     w9, #0, #0x276bf50
    0x0286bf20: 69d800d0     adrp     x9, #0x4279000
    0x0286bf24: eade00f0     adrp     x10, #0x434a000
    0x0286bf28: 298942f9     ldr      x9, [x9, #0x510]
    0x0286bf2c: 6bd800d0     adrp     x11, #0x4279000
    0x0286bf30: 6b8d42f9     ldr      x11, [x11, #0x518]
    0x0286bf34: 4c0546f9     ldr      x12, [x10, #0xc08]
    0x0286bf38: 8cf57e92     and      x12, x12, #0xfffffffffffffffc
    0x0286bf3c: 3f7d01a9     stp      xzr, xzr, [x9, #0x10]  ! possible store
    0x0286bf40: 490506f9     str      x9, [x10, #0xc08]  ! possible store
    0x0286bf44: 2c2d00a9     stp      x12, x11, [x9]  ! possible store
    0x0286bf48: 29008052     mov      w9, #1
    0x0286bf4c: 090100f9     str      x9, [x8]  ! possible store
    0x0286bf50: c0035fd6     ret      
    0x0286bf54: 1f2003d5     nop      
    0x0286bf58: 1f2003d5     nop      
    0x0286bf5c: 1f2003d5     nop      
    0x0286bf60: fd7bbfa9     stp      x29, x30, [sp, #-0x10]!  ! possible store
    0x0286bf64: fd030091     mov      x29, sp
    0x0286bf68: e00f8052     mov      w0, #0x7f
    0x0286bf6c: e1031f2a     mov      w1, wzr
    0x0286bf70: e2031f2a     mov      w2, wzr
    0x0286bf74: 23008052     mov      w3, #1
    0x0286bf78: 96e02c94     bl       #0x32a41d0
    0x0286bf7c: 08dc0090     adrp     x8, #0x42eb000
    0x0286bf80: 00810eb9     str      w0, [x8, #0xe80]  ! possible store
    0x0286bf84: e01f8052     mov      w0, #0xff
    0x0286bf88: e11f8052     mov      w1, #0xff
    0x0286bf8c: e21f8052     mov      w2, #0xff
    0x0286bf90: e31f8052     mov      w3, #0xff
    0x0286bf94: 8fe02c94     bl       #0x32a41d0
    0x0286bf98: 08dc0090     adrp     x8, #0x42eb000
    0x0286bf9c: 00850eb9     str      w0, [x8, #0xe84]  ! possible store
    0x0286bfa0: e0031f2a     mov      w0, wzr
    0x0286bfa4: e1031f2a     mov      w1, wzr
    0x0286bfa8: e2031f2a     mov      w2, wzr
    0x0286bfac: e3031f2a     mov      w3, wzr
    0x0286bfb0: 88e02c94     bl       #0x32a41d0
    0x0286bfb4: 08dc0090     adrp     x8, #0x42eb000
    0x0286bfb8: 09dc0090     adrp     x9, #0x42eb000
    0x0286bfbc: 29413a91     add      x9, x9, #0xe90
    0x0286bfc0: 00890eb9     str      w0, [x8, #0xe88]  ! possible store
    0x0286bfc4: 3f090079     strh     wzr, [x9, #4]  ! possible store
    0x0286bfc8: e8ff9f52     mov      w8, #0xffff
    0x0286bfcc: 3f0100b9     str      wzr, [x9]  ! possible store
    0x0286bfd0: 09dc0090     adrp     x9, #0x42eb000
    0x0286bfd4: 29613a91     add      x9, x9, #0xe98
    0x0286bfd8: 28090079     strh     w8, [x9, #4]  ! possible store
    0x0286bfdc: 08008012     mov      w8, #-1
    0x0286bfe0: 280100b9     str      w8, [x9]  ! possible store
    0x0286bfe4: fd7bc1a8     ldp      x29, x30, [sp], #0x10
    0x0286bfe8: c0035fd6     ret      
    0x0286bfec: 012840f9     ldr      x1, [x0, #0x50]
    0x0286bff0: 28d000b0     adrp     x8, #0x4170000
    0x0286bff4: 08012c91     add      x8, x8, #0xb00
    0x0286bff8: 080000f9     str      x8, [x0]  ! possible store
    0x0286bffc: 08c10091     add      x8, x8, #0x30
    0x0286c000: 08fc04a9     stp      x8, xzr, [x0, #0x48]  ! possible store
    0x0286c004: 410000b5     cbnz     x1, #0x276c00c
    0x0286c008: c0035fd6     ret      
    0x0286c00c: 00600191     add      x0, x0, #0x58
    0x0286c010: a6290014     b        #0x27766a8
    0x0286c014: 012840f9     ldr      x1, [x0, #0x50]
    0x0286c018: 28d00090     adrp     x8, #0x4170000
    0x0286c01c: 08012c91     add      x8, x8, #0xb00
    0x0286c020: 080000f9     str      x8, [x0]  ! possible store
    0x0286c024: 08c10091     add      x8, x8, #0x30
    0x0286c028: 08fc04a9     stp      x8, xzr, [x0, #0x48]  ! possible store
    0x0286c02c: 410000b5     cbnz     x1, #0x276c034
    0x0286c030: c0035fd6     ret      
    0x0286c034: 00600191     add      x0, x0, #0x58
    0x0286c038: 9c290014     b        #0x27766a8
    0x0286c03c: c0035fd6     ret      
    0x0286c040: fd7bbfa9     stp      x29, x30, [sp, #-0x10]!  ! possible store
    0x0286c044: fd030091     mov      x29, sp
    0x0286c048: 68d800b0     adrp     x8, #0x4279000
    0x0286c04c: 084943f9     ldr      x8, [x8, #0x690]
    0x0286c050: 08fddf08     ldarb    w8, [x8]
    0x0286c054: a8000036     tbz      w8, #0, #0x276c068
    0x0286c058: 60d800b0     adrp     x0, #0x4279000
    0x0286c05c: 004c43f9     ldr      x0, [x0, #0x698]
    0x0286c060: fd7bc1a8     ldp      x29, x30, [sp], #0x10
    0x0286c064: f5280014     b        #0x2776438
    0x0286c068: 60d800b0     adrp     x0, #0x4279000
    0x0286c06c: 004843f9     ldr      x0, [x0, #0x690]
    0x0286c070: 64db2c94     bl       #0x32a2e00
    0x0286c074: 20ffff34     cbz      w0, #0x276c058
    0x0286c078: 60d800b0     adrp     x0, #0x4279000
    0x0286c07c: 61d800b0     adrp     x1, #0x4279000
    0x0286c080: 005443f9     ldr      x0, [x0, #0x6a8]
    0x0286c084: 214c43f9     ldr      x1, [x1, #0x698]
    0x0286c088: 62c500d0     adrp     x2, #0x401a000
    0x0286c08c: 42000091     add      x2, x2, #0
    0x0286c090: 70506297     bl       #0x250
    0x0286c094: 60d800b0     adrp     x0, #0x4279000
    0x0286c098: 004843f9     ldr      x0, [x0, #0x690]
    0x0286c09c: 5ddb2c94     bl       #0x32a2e10
    0x0286c0a0: eeffff17     b        #0x276c058
    0x0286c0a4: c0035fd6     ret      
    0x0286c0a8: fd7bbfa9     stp      x29, x30, [sp, #-0x10]!  ! possible store
    0x0286c0ac: fd030091     mov      x29, sp
    0x0286c0b0: 68d800b0     adrp     x8, #0x4279000
    0x0286c0b4: 084943f9     ldr      x8, [x8, #0x690]
    0x0286c0b8: 08fddf08     ldarb    w8, [x8]
    0x0286c0bc: a8000036     tbz      w8, #0, #0x276c0d0
    0x0286c0c0: 60d800b0     adrp     x0, #0x4279000
    0x0286c0c4: 004c43f9     ldr      x0, [x0, #0x698]
    0x0286c0c8: fd7bc1a8     ldp      x29, x30, [sp], #0x10
    0x0286c0cc: db280014     b        #0x2776438
    0x0286c0d0: 60d800b0     adrp     x0, #0x4279000
    0x0286c0d4: 004843f9     ldr      x0, [x0, #0x690]
    0x0286c0d8: 4adb2c94     bl       #0x32a2e00
    0x0286c0dc: 20ffff34     cbz      w0, #0x276c0c0
    0x0286c0e0: 60d800b0     adrp     x0, #0x4279000
    0x0286c0e4: 61d800b0     adrp     x1, #0x4279000
    0x0286c0e8: 005443f9     ldr      x0, [x0, #0x6a8]
    0x0286c0ec: 214c43f9     ldr      x1, [x1, #0x698]
    0x0286c0f0: 62c500d0     adrp     x2, #0x401a000
    0x0286c0f4: 42000091     add      x2, x2, #0
    0x0286c0f8: 56506297     bl       #0x250
    0x0286c0fc: 60d800b0     adrp     x0, #0x4279000
    0x0286c100: 004843f9     ldr      x0, [x0, #0x690]
    0x0286c104: 43db2c94     bl       #0x32a2e10
    0x0286c108: eeffff17     b        #0x276c0c0
    0x0286c10c: 00000000     udf      #0
    0x0286c110: fd7bbfa9     stp      x29, x30, [sp, #-0x10]!  ! possible store
    0x0286c114: fd030091     mov      x29, sp
    0x0286c118: eed82c94     bl       #0x32a24d0
    0x0286c11c: ffc301d1     sub      sp, sp, #0x70
    0x0286c120: fb0b00f9     str      x27, [sp, #0x10]  ! possible store
    0x0286c124: fa6702a9     stp      x26, x25, [sp, #0x20]  ! possible store
    0x0286c128: f85f03a9     stp      x24, x23, [sp, #0x30]  ! possible store
    0x0286c12c: f65704a9     stp      x22, x21, [sp, #0x40]  ! possible store
    0x0286c130: f44f05a9     stp      x20, x19, [sp, #0x50]  ! possible store
    0x0286c134: fd7b06a9     stp      x29, x30, [sp, #0x60]  ! possible store
    0x0286c138: fd830191     add      x29, sp, #0x60
    0x0286c13c: 150040f9     ldr      x21, [x0]
    0x0286c140: f4031faa     mov      x20, xzr
    0x0286c144: 16248052     mov      w22, #0x120
    0x0286c148: 77008052     mov      w23, #3
    0x0286c14c: b8008052     mov      w24, #5
    0x0286c150: f9008052     mov      w25, #7
    0x0286c154: 9a9000d0     adrp     x26, #0x397e000
    0x0286c158: 5ae32291     add      x26, x26, #0x8b8
    0x0286c15c: 09000014     b        #0x276c180
    0x0286c160: 1f0d00f9     str      xzr, [x8, #0x18]  ! possible store
    0x0286c164: 080040f9     ldr      x8, [x0]
    0x0286c168: 081140f9     ldr      x8, [x8, #0x20]
    0x0286c16c: 00013fd6     blr      x8
    0x0286c170: d30b00b5     cbnz     x19, #0x276c2e8
    0x0286c174: 94060091     add      x20, x20, #1
    0x0286c178: 9f9e00f1     cmp      x20, #0x27
    0x0286c17c: 80020054     b.eq     #0x276c1cc
    0x0286c180: 8956169b     madd     x9, x20, x22, x21
    0x0286c184: 280141b9     ldr      w8, [x9, #0x100]
    0x0286c188: 08090051     sub      w8, w8, #2
    0x0286c18c: 1f150071     cmp      w8, #5
    0x0286c190: 28ffff54     b.hi     #0x276c174
    0x0286c194: 33010491     add      x19, x9, #0x100
    0x0286c198: e9feff10     adr      x9, #0x276c174
    0x0286c19c: 4a6b6838     ldrb     w10, [x26, x8]
    0x0286c1a0: 29090a8b     add      x9, x9, x10, lsl #2
    0x0286c1a4: 20011fd6     br       x9
    0x0286c1a8: 8856169b     madd     x8, x20, x22, x21
    0x0286c1ac: 008540f9     ldr      x0, [x8, #0x108]
    0x0286c1b0: 080040f9     ldr      x8, [x0]
    0x0286c1b4: 082540f9     ldr      x8, [x8, #0x48]
    0x0286c1b8: 00013fd6     blr      x8
    0x0286c1bc: 1f040071     cmp      w0, #1
    0x0286c1c0: a1fdff54     b.ne     #0x276c174
    0x0286c1c4: 780200b9     str      w24, [x19]  ! possible store
    0x0286c1c8: ebffff17     b        #0x276c174
    0x0286c1cc: fd7b46a9     ldp      x29, x30, [sp, #0x60]
    0x0286c1d0: fb0b40f9     ldr      x27, [sp, #0x10]
    0x0286c1d4: f44f45a9     ldp      x20, x19, [sp, #0x50]
    0x0286c1d8: f65744a9     ldp      x22, x21, [sp, #0x40]
    0x0286c1dc: f85f43a9     ldp      x24, x23, [sp, #0x30]
    0x0286c1e0: fa6742a9     ldp      x26, x25, [sp, #0x20]
    0x0286c1e4: ffc30191     add      sp, sp, #0x70
    0x0286c1e8: c0035fd6     ret      
    0x0286c1ec: 9b56169b     madd     x27, x20, x22, x21
    0x0286c1f0: 608740f9     ldr      x0, [x27, #0x108]
    0x0286c1f4: 080040f9     ldr      x8, [x0]
    0x0286c1f8: 082140f9     ldr      x8, [x8, #0x40]
    0x0286c1fc: 00013fd6     blr      x8
    0x0286c200: 1f040071     cmp      w0, #1
    0x0286c204: 81fbff54     b.ne     #0x276c174
    0x0286c208: 8856169b     madd     x8, x20, x22, x21
    0x0286c20c: 770200b9     str      w23, [x19]  ! possible store
    0x0286c210: 098940f9     ldr      x9, [x8, #0x110]
    0x0286c214: 09fbffb4     cbz      x9, #0x276c174
    0x0286c218: 6a230491     add      x10, x27, #0x108
    0x0286c21c: 530140f9     ldr      x19, [x10]
    0x0286c220: b30e00b4     cbz      x19, #0x276c3f4
    0x0286c224: 7b2e40f9     ldr      x27, [x19, #0x58]
    0x0286c228: 600f40f9     ldr      x0, [x27, #0x18]
    0x0286c22c: 800e00b4     cbz      x0, #0x276c3fc
    0x0286c230: 6a0b40f9     ldr      x10, [x27, #0x10]
    0x0286c234: ea0000b5     cbnz     x10, #0x276c250
    0x0286c238: 0a0040f9     ldr      x10, [x0]
    0x0286c23c: e80700f9     str      x8, [sp, #8]  ! possible store
    0x0286c240: 4a0140f9     ldr      x10, [x10]
    0x0286c244: 40013fd6     blr      x10
    0x0286c248: e80740f9     ldr      x8, [sp, #8]
    0x0286c24c: 600b00f9     str      x0, [x27, #0x10]  ! possible store
    0x0286c250: 08410491     add      x8, x8, #0x110
    0x0286c254: 69330091     add      x9, x27, #0xc
    0x0286c258: 2afd5f88     ldaxr    w10, [x9]
    0x0286c25c: 4a050011     add      w10, w10, #1
    0x0286c260: 2afd0b88     stlxr    w11, w10, [x9]  ! possible store
    0x0286c264: abffff35     cbnz     w11, #0x276c258
    0x0286c268: f30f00f9     str      x19, [sp, #0x18]  ! possible store
    0x0286c26c: 7b2e40f9     ldr      x27, [x19, #0x58]
    0x0286c270: 600f40f9     ldr      x0, [x27, #0x18]
    0x0286c274: 400c00b4     cbz      x0, #0x276c3fc
    0x0286c278: 690b40f9     ldr      x9, [x27, #0x10]
    0x0286c27c: e90000b5     cbnz     x9, #0x276c298
    0x0286c280: 090040f9     ldr      x9, [x0]
    0x0286c284: e80700f9     str      x8, [sp, #8]  ! possible store
    0x0286c288: 290140f9     ldr      x9, [x9]
    0x0286c28c: 20013fd6     blr      x9
    0x0286c290: e80740f9     ldr      x8, [sp, #8]
    0x0286c294: 600b00f9     str      x0, [x27, #0x10]  ! possible store
    0x0286c298: 69330091     add      x9, x27, #0xc
    0x0286c29c: 2afd5f88     ldaxr    w10, [x9]
    0x0286c2a0: 4a050011     add      w10, w10, #1
    0x0286c2a4: 2afd0b88     stlxr    w11, w10, [x9]  ! possible store
    0x0286c2a8: abffff35     cbnz     w11, #0x276c29c
    0x0286c2ac: 090140f9     ldr      x9, [x8]
    0x0286c2b0: 8856169b     madd     x8, x20, x22, x21
    0x0286c2b4: 00c10491     add      x0, x8, #0x130
    0x0286c2b8: e1630091     add      x1, sp, #0x18
    0x0286c2bc: 20013fd6     blr      x9
    0x0286c2c0: e00f40f9     ldr      x0, [sp, #0x18]
    0x0286c2c4: 000100b4     cbz      x0, #0x276c2e4
    0x0286c2c8: 082c40f9     ldr      x8, [x0, #0x58]
    0x0286c2cc: 09310091     add      x9, x8, #0xc
    0x0286c2d0: 2afd5f88     ldaxr    w10, [x9]
    0x0286c2d4: 4a050071     subs     w10, w10, #1
    0x0286c2d8: 2afd0b88     stlxr    w11, w10, [x9]  ! possible store
    0x0286c2dc: abffff35     cbnz     w11, #0x276c2d0
    0x0286c2e0: 00f4ff54     b.eq     #0x276c160
    0x0286c2e4: 93f4ffb4     cbz      x19, #0x276c174
    0x0286c2e8: 682e40f9     ldr      x8, [x19, #0x58]
    0x0286c2ec: 09310091     add      x9, x8, #0xc
    0x0286c2f0: 2afd5f88     ldaxr    w10, [x9]
    0x0286c2f4: 4a050071     subs     w10, w10, #1
    0x0286c2f8: 2afd0b88     stlxr    w11, w10, [x9]  ! possible store
    0x0286c2fc: abffff35     cbnz     w11, #0x276c2f0
    0x0286c300: a1f3ff54     b.ne     #0x276c174
    0x0286c304: 1f0d00f9     str      xzr, [x8, #0x18]  ! possible store
    0x0286c308: 680240f9     ldr      x8, [x19]
    0x0286c30c: 081140f9     ldr      x8, [x8, #0x20]
    0x0286c310: e00313aa     mov      x0, x19
    0x0286c314: 00013fd6     blr      x8
    0x0286c318: 97ffff17     b        #0x276c174
    0x0286c31c: 8856169b     madd     x8, x20, x22, x21
    0x0286c320: 08414839     ldrb     w8, [x8, #0x210]
    0x0286c324: 28020034     cbz      w8, #0x276c368
    0x0286c328: 8856169b     madd     x8, x20, x22, x21
    0x0286c32c: 08c940f9     ldr      x8, [x8, #0x190]
    0x0286c330: 880100b4     cbz      x8, #0x276c360
    0x0286c334: 8956169b     madd     x9, x20, x22, x21
    0x0286c338: 20c10691     add      x0, x9, #0x1b0
    0x0286c33c: 00013fd6     blr      x8
    0x0286c340: 08000014     b        #0x276c360
    0x0286c344: 8856169b     madd     x8, x20, x22, x21
    0x0286c348: 008540f9     ldr      x0, [x8, #0x108]
    0x0286c34c: 080040f9     ldr      x8, [x0]
    0x0286c350: 083140f9     ldr      x8, [x8, #0x60]
    0x0286c354: 00013fd6     blr      x8
    0x0286c358: 1f040071     cmp      w0, #1
    0x0286c35c: c1f0ff54     b.ne     #0x276c174
    0x0286c360: 770200b9     str      w23, [x19]  ! possible store
    0x0286c364: 84ffff17     b        #0x276c174
    0x0286c368: 8856169b     madd     x8, x20, x22, x21
    0x0286c36c: 008540f9     ldr      x0, [x8, #0x108]
    0x0286c370: 7a369397     bl       #0xc39d58
    0x0286c374: 790200b9     str      w25, [x19]  ! possible store
    0x0286c378: 9b56169b     madd     x27, x20, x22, x21
    0x0286c37c: 608740f9     ldr      x0, [x27, #0x108]
    0x0286c380: 080040f9     ldr      x8, [x0]
    0x0286c384: 083140f9     ldr      x8, [x8, #0x60]
    0x0286c388: 00013fd6     blr      x8
    0x0286c38c: 1f040071     cmp      w0, #1
    0x0286c390: 21efff54     b.ne     #0x276c174
    0x0286c394: 8856169b     madd     x8, x20, x22, x21
    0x0286c398: 08c940f9     ldr      x8, [x8, #0x190]
    0x0286c39c: 7b230491     add      x27, x27, #0x108
    0x0286c3a0: 880000b4     cbz      x8, #0x276c3b0
    0x0286c3a4: 8956169b     madd     x9, x20, x22, x21
    0x0286c3a8: 20c10691     add      x0, x9, #0x1b0
    0x0286c3ac: 00013fd6     blr      x8
    0x0286c3b0: 600340f9     ldr      x0, [x27]
    0x0286c3b4: 7f0300f9     str      xzr, [x27]  ! possible store
    0x0286c3b8: 000100b4     cbz      x0, #0x276c3d8
    0x0286c3bc: 082c40f9     ldr      x8, [x0, #0x58]
    0x0286c3c0: 09310091     add      x9, x8, #0xc
    0x0286c3c4: 2afd5f88     ldaxr    w10, [x9]
    0x0286c3c8: 4a050071     subs     w10, w10, #1
    0x0286c3cc: 2afd0b88     stlxr    w11, w10, [x9]  ! possible store
    0x0286c3d0: abffff35     cbnz     w11, #0x276c3c4
    0x0286c3d4: 60000054     b.eq     #0x276c3e0
    0x0286c3d8: 7f0200b9     str      wzr, [x19]  ! possible store
    0x0286c3dc: 66ffff17     b        #0x276c174
    0x0286c3e0: 1f0d00f9     str      xzr, [x8, #0x18]  ! possible store
    0x0286c3e4: 080040f9     ldr      x8, [x0]
    0x0286c3e8: 081140f9     ldr      x8, [x8, #0x20]
    0x0286c3ec: 00013fd6     blr      x8
    0x0286c3f0: faffff17     b        #0x276c3d8
    0x0286c3f4: ff0f00f9     str      xzr, [sp, #0x18]  ! possible store
    0x0286c3f8: aeffff17     b        #0x276c2b0
    0x0286c3fc: 408900d0     adrp     x0, #0x3896000
    0x0286c400: 00880c91     add      x0, x0, #0x322
    0x0286c404: e10300aa     mov      x1, x0
    0x0286c408: e20300aa     mov      x2, x0
    0x0286c40c: e3031f2a     mov      w3, wzr
    0x0286c410: 94db2c94     bl       #0x32a3260
    0x0286c414: c0035fd6     ret      
    0x0286c418: 080040f9     ldr      x8, [x0]
    0x0286c41c: 280000f9     str      x8, [x1]  ! possible store
    0x0286c420: c0035fd6     ret      
    0x0286c424: 080040f9     ldr      x8, [x0]
    0x0286c428: 280000f9     str      x8, [x1]  ! possible store
    0x0286c42c: c0035fd6     ret      
    0x0286c430: f70f1cf8     str      x23, [sp, #-0x40]!  ! possible store
    0x0286c434: f65701a9     stp      x22, x21, [sp, #0x10]  ! possible store
    0x0286c438: f44f02a9     stp      x20, x19, [sp, #0x20]  ! possible store
    0x0286c43c: fd7b03a9     stp      x29, x30, [sp, #0x30]  ! possible store
    0x0286c440: fdc30091     add      x29, sp, #0x30
    0x0286c444: 280040f9     ldr      x8, [x1]
    0x0286c448: f30300aa     mov      x19, x0
    0x0286c44c: 490040f9     ldr      x9, [x2]
    0x0286c450: 1f0109eb     cmp      x8, x9
    0x0286c454: 20020054     b.eq     #0x276c498
    0x0286c458: 96d80090     adrp     x22, #0x427c000
    0x0286c45c: 97d80090     adrp     x23, #0x427c000
    0x0286c460: d63e43f9     ldr      x22, [x22, #0x678]
    0x0286c464: f74243f9     ldr      x23, [x23, #0x680]
    0x0286c468: f50302aa     mov      x21, x2
    0x0286c46c: f40301aa     mov      x20, x1
    0x0286c470: 000140f9     ldr      x0, [x8]
    0x0286c474: 080c45f8     ldr      x8, [x0, #0x50]!
    0x0286c478: 080140f9     ldr      x8, [x8]
    0x0286c47c: 00013fd6     blr      x8
    0x0286c480: c8fedf08     ldarb    w8, [x22]
    0x0286c484: c8010036     tbz      w8, #0, #0x276c4bc
    0x0286c488: 200300b4     cbz      x0, #0x276c4ec
    0x0286c48c: 1f0017eb     cmp      x0, x23
    0x0286c490: 01010054     b.ne     #0x276c4b0
    0x0286c494: 880240f9     ldr      x8, [x20]
    0x0286c498: 680200f9     str      x8, [x19]  ! possible store
    0x0286c49c: fd7b43a9     ldp      x29, x30, [sp, #0x30]
    0x0286c4a0: f44f42a9     ldp      x20, x19, [sp, #0x20]
    0x0286c4a4: f65741a9     ldp      x22, x21, [sp, #0x10]
    0x0286c4a8: f70744f8     ldr      x23, [sp], #0x40
    0x0286c4ac: c0035fd6     ret      
    0x0286c4b0: 000040f9     ldr      x0, [x0]
    0x0286c4b4: c0feffb5     cbnz     x0, #0x276c48c
    0x0286c4b8: 0d000014     b        #0x276c4ec
    0x0286c4bc: e00700f9     str      x0, [sp, #8]  ! possible store
    0x0286c4c0: e00316aa     mov      x0, x22
    0x0286c4c4: 4fda2c94     bl       #0x32a2e00
    0x0286c4c8: e803002a     mov      w8, w0
    0x0286c4cc: e00740f9     ldr      x0, [sp, #8]
    0x0286c4d0: c8fdff34     cbz      w8, #0x276c488
    0x0286c4d4: 35138397     bl       #0x8311a8
    0x0286c4d8: e00200f9     str      x0, [x23]  ! possible store
    0x0286c4dc: e00316aa     mov      x0, x22
    0x0286c4e0: 4cda2c94     bl       #0x32a2e10
    0x0286c4e4: e00740f9     ldr      x0, [sp, #8]
    0x0286c4e8: 20fdffb5     cbnz     x0, #0x276c48c
    0x0286c4ec: 880240f9     ldr      x8, [x20]
    0x0286c4f0: 08210091     add      x8, x8, #8
    0x0286c4f4: 880200f9     str      x8, [x20]  ! possible store
    0x0286c4f8: a90240f9     ldr      x9, [x21]
    0x0286c4fc: 1f0109eb     cmp      x8, x9
    0x0286c500: 81fbff54     b.ne     #0x276c470
    0x0286c504: e5ffff17     b        #0x276c498
    0x0286c508: f30f1ef8     str      x19, [sp, #-0x20]!  ! possible store
    0x0286c50c: fd7b01a9     stp      x29, x30, [sp, #0x10]  ! possible store
    0x0286c510: fd430091     add      x29, sp, #0x10
    0x0286c514: f30308aa     mov      x19, x8
    0x0286c518: 52000094     bl       #0x276c660
    0x0286c51c: 600200f9     str      x0, [x19]  ! possible store
    0x0286c520: e00100b4     cbz      x0, #0x276c55c
    0x0286c524: 132c40f9     ldr      x19, [x0, #0x58]
    0x0286c528: 600e40f9     ldr      x0, [x19, #0x18]
    0x0286c52c: e00100b4     cbz      x0, #0x276c568
    0x0286c530: 680a40f9     ldr      x8, [x19, #0x10]
    0x0286c534: a80000b5     cbnz     x8, #0x276c548
    0x0286c538: 080040f9     ldr      x8, [x0]
    0x0286c53c: 080140f9     ldr      x8, [x8]
    0x0286c540: 00013fd6     blr      x8
    0x0286c544: 600a00f9     str      x0, [x19, #0x10]  ! possible store
    0x0286c548: 68320091     add      x8, x19, #0xc
    0x0286c54c: 09fd5f88     ldaxr    w9, [x8]
    0x0286c550: 29050011     add      w9, w9, #1
    0x0286c554: 09fd0a88     stlxr    w10, w9, [x8]  ! possible store
    0x0286c558: aaffff35     cbnz     w10, #0x276c54c
    0x0286c55c: fd7b41a9     ldp      x29, x30, [sp, #0x10]
    0x0286c560: f30742f8     ldr      x19, [sp], #0x20
    0x0286c564: c0035fd6     ret      
    0x0286c568: 408900d0     adrp     x0, #0x3896000
    0x0286c56c: 00880c91     add      x0, x0, #0x322
    0x0286c570: e10300aa     mov      x1, x0
    0x0286c574: e20300aa     mov      x2, x0
    0x0286c578: e3031f2a     mov      w3, wzr
    0x0286c57c: 39db2c94     bl       #0x32a3260
    0x0286c580: ffc300d1     sub      sp, sp, #0x30
    0x0286c584: f30b00f9     str      x19, [sp, #0x10]  ! possible store
    0x0286c588: fd7b02a9     stp      x29, x30, [sp, #0x20]  ! possible store
    0x0286c58c: fd830091     add      x29, sp, #0x20
    0x0286c590: f30308aa     mov      x19, x8
    0x0286c594: 080040f9     ldr      x8, [x0]
    0x0286c598: 090940f9     ldr      x9, [x8, #0x10]
    0x0286c59c: e8030091     mov      x8, sp
    0x0286c5a0: 20013fd6     blr      x9
    0x0286c5a4: e1030091     mov      x1, sp
    0x0286c5a8: e00313aa     mov      x0, x19
    0x0286c5ac: 7f7e00a9     stp      xzr, xzr, [x19]  ! possible store
    0x0286c5b0: 75000094     bl       #0x276c784
    0x0286c5b4: f30340f9     ldr      x19, [sp]
    0x0286c5b8: f30200b4     cbz      x19, #0x276c614
    0x0286c5bc: 68220091     add      x8, x19, #8
    0x0286c5c0: 09fd5f88     ldaxr    w9, [x8]
    0x0286c5c4: 29050071     subs     w9, w9, #1
    0x0286c5c8: 09fd0a88     stlxr    w10, w9, [x8]  ! possible store
    0x0286c5cc: aaffff35     cbnz     w10, #0x276c5c0
    0x0286c5d0: 21020054     b.ne     #0x276c614
    0x0286c5d4: 7f0a00f9     str      xzr, [x19, #0x10]  ! possible store
    0x0286c5d8: 68d800b0     adrp     x8, #0x4279000
    0x0286c5dc: 084d42f9     ldr      x8, [x8, #0x498]
    0x0286c5e0: 08fddf08     ldarb    w8, [x8]
    0x0286c5e4: 08020036     tbz      w8, #0, #0x276c624
    0x0286c5e8: 68d800b0     adrp     x8, #0x4279000
    0x0286c5ec: 085142f9     ldr      x8, [x8, #0x4a0]
    0x0286c5f0: 69d800b0     adrp     x9, #0x4279000
    0x0286c5f4: 080140f9     ldr      x8, [x8]
    0x0286c5f8: 295542f9     ldr      x9, [x9, #0x4a8]
    0x0286c5fc: 280100f9     str      x8, [x9]  ! possible store
    0x0286c600: 690240f9     ldr      x9, [x19]
    0x0286c604: 00610391     add      x0, x8, #0xd8
    0x0286c608: a12300d1     sub      x1, x29, #8
    0x0286c60c: a9831ff8     stur     x9, [x29, #-8]  ! possible store
    0x0286c610: 195f0794     bl       #0x2944274
    0x0286c614: fd7b42a9     ldp      x29, x30, [sp, #0x20]
    0x0286c618: f30b40f9     ldr      x19, [sp, #0x10]
    0x0286c61c: ffc30091     add      sp, sp, #0x30
    0x0286c620: c0035fd6     ret      
    0x0286c624: 60d800b0     adrp     x0, #0x4279000
    0x0286c628: 004c42f9     ldr      x0, [x0, #0x498]
    0x0286c62c: f5d92c94     bl       #0x32a2e00
    0x0286c630: c0fdff34     cbz      w0, #0x276c5e8
    0x0286c634: 60d800b0     adrp     x0, #0x4279000
    0x0286c638: 61d800b0     adrp     x1, #0x4279000
    0x0286c63c: 00c842f9     ldr      x0, [x0, #0x590]
    0x0286c640: 215042f9     ldr      x1, [x1, #0x4a0]
    0x0286c644: 62c500d0     adrp     x2, #0x401a000
    0x0286c648: 42000091     add      x2, x2, #0
    0x0286c64c: 014f6297     bl       #0x250
    0x0286c650: 60d800b0     adrp     x0, #0x4279000
    0x0286c654: 004c42f9     ldr      x0, [x0, #0x498]
    0x0286c658: eed92c94     bl       #0x32a2e10
    0x0286c65c: e3ffff17     b        #0x276c5e8
    0x0286c660: f70f1cf8     str      x23, [sp, #-0x40]!  ! possible store
    0x0286c664: f65701a9     stp      x22, x21, [sp, #0x10]  ! possible store
    0x0286c668: f44f02a9     stp      x20, x19, [sp, #0x20]  ! possible store
    0x0286c66c: fd7b03a9     stp      x29, x30, [sp, #0x30]  ! possible store
    0x0286c670: fdc30091     add      x29, sp, #0x30
    0x0286c674: 68d800b0     adrp     x8, #0x4279000
    0x0286c678: 089142f9     ldr      x8, [x8, #0x520]
    0x0286c67c: 08fddf08     ldarb    w8, [x8]
    0x0286c680: f40302aa     mov      x20, x2
    0x0286c684: f50301aa     mov      x21, x1
    0x0286c688: f30300aa     mov      x19, x0
    0x0286c68c: 68050036     tbz      w8, #0, #0x276c738
    0x0286c690: 68d800b0     adrp     x8, #0x4279000
    0x0286c694: 089542f9     ldr      x8, [x8, #0x528]
    0x0286c698: 000140b9     ldr      w0, [x8]
    0x0286c69c: 79dc2c94     bl       #0x32a3880
    0x0286c6a0: 084040f9     ldr      x8, [x0, #0x80]
    0x0286c6a4: 1f4100f1     cmp      x8, #0x10
    0x0286c6a8: c2060054     b.hs     #0x276c780
    0x0286c6ac: 137828f8     str      x19, [x0, x8, lsl #3]  ! possible store
    0x0286c6b0: 084040f9     ldr      x8, [x0, #0x80]
    0x0286c6b4: 08050091     add      x8, x8, #1
    0x0286c6b8: 084000f9     str      x8, [x0, #0x80]  ! possible store
    0x0286c6bc: 680240f9     ldr      x8, [x19]
    0x0286c6c0: 080940f9     ldr      x8, [x8, #0x10]
    0x0286c6c4: f60300aa     mov      x22, x0
    0x0286c6c8: 01e88052     mov      w1, #0x740
    0x0286c6cc: e00313aa     mov      x0, x19
    0x0286c6d0: 02028052     mov      w2, #0x10
    0x0286c6d4: 00013fd6     blr      x8
    0x0286c6d8: f70300aa     mov      x23, x0
    0x0286c6dc: 400200b4     cbz      x0, #0x276c724
    0x0286c6e0: a10240f9     ldr      x1, [x21]
    0x0286c6e4: e00317aa     mov      x0, x23
    0x0286c6e8: 82024039     ldrb     w2, [x20]
    0x0286c6ec: 70d9ae97     bl       #0x1322cac
    0x0286c6f0: 08e88052     mov      w8, #0x740
    0x0286c6f4: 09028052     mov      w9, #0x10
    0x0286c6f8: e00317aa     mov      x0, x23
    0x0286c6fc: f3de00a9     stp      x19, x23, [x23, #8]  ! possible store
    0x0286c700: e8a601a9     stp      x8, x9, [x23, #0x18]  ! possible store
    0x0286c704: c84240f9     ldr      x8, [x22, #0x80]
    0x0286c708: 080500d1     sub      x8, x8, #1
    0x0286c70c: c84200f9     str      x8, [x22, #0x80]  ! possible store
    0x0286c710: fd7b43a9     ldp      x29, x30, [sp, #0x30]
    0x0286c714: f44f42a9     ldp      x20, x19, [sp, #0x20]
    0x0286c718: f65741a9     ldp      x22, x21, [sp, #0x10]
    0x0286c71c: f70744f8     ldr      x23, [sp], #0x40
    0x0286c720: c0035fd6     ret      
    0x0286c724: 680240f9     ldr      x8, [x19]
    0x0286c728: e00313aa     mov      x0, x19
    0x0286c72c: 085d40f9     ldr      x8, [x8, #0xb8]
    0x0286c730: 00013fd6     blr      x8
    0x0286c734: ebffff17     b        #0x276c6e0
    0x0286c738: 60d800b0     adrp     x0, #0x4279000
    0x0286c73c: 009042f9     ldr      x0, [x0, #0x520]
    0x0286c740: b0d92c94     bl       #0x32a2e00
    0x0286c744: 60faff34     cbz      w0, #0x276c690
    0x0286c748: 76d800b0     adrp     x22, #0x4279000
    0x0286c74c: d69642f9     ldr      x22, [x22, #0x528]
    0x0286c750: e00316aa     mov      x0, x22
    0x0286c754: d4e68097     bl       #0x7a62a4
    0x0286c758: 60d800b0     adrp     x0, #0x4279000
    0x0286c75c: 009842f9     ldr      x0, [x0, #0x530]
    0x0286c760: 62c500d0     adrp     x2, #0x401a000
    0x0286c764: 42000091     add      x2, x2, #0
    0x0286c768: e10316aa     mov      x1, x22
    0x0286c76c: b94e6297     bl       #0x250
    0x0286c770: 60d800b0     adrp     x0, #0x4279000
    0x0286c774: 009042f9     ldr      x0, [x0, #0x520]
    0x0286c778: a6d92c94     bl       #0x32a2e10
    0x0286c77c: c5ffff17     b        #0x276c690
    0x0286c780: 54d72c94     bl       #0x32a24d0
    0x0286c784: ff4301d1     sub      sp, sp, #0x50
    0x0286c788: f85f01a9     stp      x24, x23, [sp, #0x10]  ! possible store
    0x0286c78c: f65702a9     stp      x22, x21, [sp, #0x20]  ! possible store
    0x0286c790: f44f03a9     stp      x20, x19, [sp, #0x30]  ! possible store
    0x0286c794: fd7b04a9     stp      x29, x30, [sp, #0x40]  ! possible store
    0x0286c798: fd030191     add      x29, sp, #0x40
    0x0286c79c: f50301aa     mov      x21, x1
    0x0286c7a0: f30300aa     mov      x19, x0
    0x0286c7a4: 28200091     add      x8, x1, #8
    0x0286c7a8: 14fd5fc8     ldaxr    x20, [x8]
    0x0286c7ac: 1ffd09c8     stlxr    w9, xzr, [x8]  ! possible store
    0x0286c7b0: c9ffff35     cbnz     w9, #0x276c7a8
    0x0286c7b4: 76d800b0     adrp     x22, #0x4279000
    0x0286c7b8: d64e42f9     ldr      x22, [x22, #0x498]
    0x0286c7bc: c8fedf08     ldarb    w8, [x22]
    0x0286c7c0: 680c0036     tbz      w8, #0, #0x276c94c
    0x0286c7c4: 77d800b0     adrp     x23, #0x4279000
    0x0286c7c8: f75242f9     ldr      x23, [x23, #0x4a0]
    0x0286c7cc: 78d800b0     adrp     x24, #0x4279000
    0x0286c7d0: e8030091     mov      x8, sp
    0x0286c7d4: e00240f9     ldr      x0, [x23]
    0x0286c7d8: 185742f9     ldr      x24, [x24, #0x4a8]
    0x0286c7dc: e10314aa     mov      x1, x20
    0x0286c7e0: 000300f9     str      x0, [x24]  ! possible store
    0x0286c7e4: 8a610794     bl       #0x2944e0c
    0x0286c7e8: a80240f9     ldr      x8, [x21]
    0x0286c7ec: bf0200f9     str      xzr, [x21]  ! possible store
    0x0286c7f0: 280200b4     cbz      x8, #0x276c834
    0x0286c7f4: 09210091     add      x9, x8, #8
    0x0286c7f8: 2afd5f88     ldaxr    w10, [x9]
    0x0286c7fc: 4a050071     subs     w10, w10, #1
    0x0286c800: 2afd0b88     stlxr    w11, w10, [x9]  ! possible store
    0x0286c804: abffff35     cbnz     w11, #0x276c7f8
    0x0286c808: 61010054     b.ne     #0x276c834
    0x0286c80c: 1f0900f9     str      xzr, [x8, #0x10]  ! possible store
    0x0286c810: c9fedf08     ldarb    w9, [x22]
    0x0286c814: a90b0036     tbz      w9, #0, #0x276c988
    0x0286c818: e90240f9     ldr      x9, [x23]
    0x0286c81c: 090300f9     str      x9, [x24]  ! possible store
    0x0286c820: 080140f9     ldr      x8, [x8]
    0x0286c824: 20610391     add      x0, x9, #0xd8
    0x0286c828: e1230091     add      x1, sp, #8
    0x0286c82c: e80700f9     str      x8, [sp, #8]  ! possible store
    0x0286c830: 915e0794     bl       #0x2944274
    0x0286c834: e80340f9     ldr      x8, [sp]
    0x0286c838: 750240f9     ldr      x21, [x19]
    0x0286c83c: 7f0200f9     str      xzr, [x19]  ! possible store
    0x0286c840: e80500b4     cbz      x8, #0x276c8fc
    0x0286c844: 550200b4     cbz      x21, #0x276c88c
    0x0286c848: a8220091     add      x8, x21, #8
    0x0286c84c: 09fd5f88     ldaxr    w9, [x8]
    0x0286c850: 29050071     subs     w9, w9, #1
    0x0286c854: 09fd0a88     stlxr    w10, w9, [x8]  ! possible store
    0x0286c858: aaffff35     cbnz     w10, #0x276c84c
    0x0286c85c: 61010054     b.ne     #0x276c888
    0x0286c860: bf0a00f9     str      xzr, [x21, #0x10]  ! possible store
    0x0286c864: c8fedf08     ldarb    w8, [x22]
    0x0286c868: 280d0036     tbz      w8, #0, #0x276ca0c
    0x0286c86c: e80240f9     ldr      x8, [x23]
    0x0286c870: 080300f9     str      x8, [x24]  ! possible store
    0x0286c874: a90240f9     ldr      x9, [x21]
    0x0286c878: 00610391     add      x0, x8, #0xd8
    0x0286c87c: e1230091     add      x1, sp, #8
    0x0286c880: e90700f9     str      x9, [sp, #8]  ! possible store
    0x0286c884: 7c5e0794     bl       #0x2944274
    0x0286c888: e80340f9     ldr      x8, [sp]
    0x0286c88c: ff0300f9     str      xzr, [sp]  ! possible store
    0x0286c890: 680200f9     str      x8, [x19]  ! possible store
    0x0286c894: 68220091     add      x8, x19, #8
    0x0286c898: 14fd9fc8     stlr     x20, [x8]  ! possible store
    0x0286c89c: f30340f9     ldr      x19, [sp]
    0x0286c8a0: 330200b4     cbz      x19, #0x276c8e4
    0x0286c8a4: 68220091     add      x8, x19, #8
    0x0286c8a8: 09fd5f88     ldaxr    w9, [x8]
    0x0286c8ac: 29050071     subs     w9, w9, #1
    0x0286c8b0: 09fd0a88     stlxr    w10, w9, [x8]  ! possible store
    0x0286c8b4: aaffff35     cbnz     w10, #0x276c8a8
    0x0286c8b8: 61010054     b.ne     #0x276c8e4
    0x0286c8bc: 7f0a00f9     str      xzr, [x19, #0x10]  ! possible store
    0x0286c8c0: c8fedf08     ldarb    w8, [x22]
    0x0286c8c4: 68080036     tbz      w8, #0, #0x276c9d0
    0x0286c8c8: e80240f9     ldr      x8, [x23]
    0x0286c8cc: 080300f9     str      x8, [x24]  ! possible store
    0x0286c8d0: 690240f9     ldr      x9, [x19]
    0x0286c8d4: 00610391     add      x0, x8, #0xd8
    0x0286c8d8: e1230091     add      x1, sp, #8
    0x0286c8dc: e90700f9     str      x9, [sp, #8]  ! possible store
    0x0286c8e0: 655e0794     bl       #0x2944274
    0x0286c8e4: fd7b44a9     ldp      x29, x30, [sp, #0x40]
    0x0286c8e8: f44f43a9     ldp      x20, x19, [sp, #0x30]
    0x0286c8ec: f65742a9     ldp      x22, x21, [sp, #0x20]
    0x0286c8f0: f85f41a9     ldp      x24, x23, [sp, #0x10]
    0x0286c8f4: ff430191     add      sp, sp, #0x50
    0x0286c8f8: c0035fd6     ret      
    0x0286c8fc: 550200b4     cbz      x21, #0x276c944
    0x0286c900: a8220091     add      x8, x21, #8
    0x0286c904: 09fd5f88     ldaxr    w9, [x8]
    0x0286c908: 2a050051     sub      w10, w9, #1
    0x0286c90c: 0afd0b88     stlxr    w11, w10, [x8]  ! possible store
    0x0286c910: abffff35     cbnz     w11, #0x276c904
    0x0286c914: 3f050071     cmp      w9, #1
    0x0286c918: 61010054     b.ne     #0x276c944
    0x0286c91c: bf0a00f9     str      xzr, [x21, #0x10]  ! possible store
    0x0286c920: c8fedf08     ldarb    w8, [x22]
    0x0286c924: 28090036     tbz      w8, #0, #0x276ca48
    0x0286c928: e80240f9     ldr      x8, [x23]
    0x0286c92c: 080300f9     str      x8, [x24]  ! possible store
    0x0286c930: a90240f9     ldr      x9, [x21]
    0x0286c934: 00610391     add      x0, x8, #0xd8
    0x0286c938: e1230091     add      x1, sp, #8
    0x0286c93c: e90700f9     str      x9, [sp, #8]  ! possible store
    0x0286c940: 4d5e0794     bl       #0x2944274
    0x0286c944: f4031faa     mov      x20, xzr
    0x0286c948: d3ffff17     b        #0x276c894
    0x0286c94c: 60d800b0     adrp     x0, #0x4279000
    0x0286c950: 004c42f9     ldr      x0, [x0, #0x498]
    0x0286c954: 2bd92c94     bl       #0x32a2e00
    0x0286c958: 60f3ff34     cbz      w0, #0x276c7c4
    0x0286c95c: 60d800b0     adrp     x0, #0x4279000
    0x0286c960: 61d800b0     adrp     x1, #0x4279000
    0x0286c964: 00c842f9     ldr      x0, [x0, #0x590]
    0x0286c968: 215042f9     ldr      x1, [x1, #0x4a0]
    0x0286c96c: 62c500d0     adrp     x2, #0x401a000
    0x0286c970: 42000091     add      x2, x2, #0
    0x0286c974: 374e6297     bl       #0x250
    0x0286c978: 60d800b0     adrp     x0, #0x4279000
    0x0286c97c: 004c42f9     ldr      x0, [x0, #0x498]
    0x0286c980: 24d92c94     bl       #0x32a2e10
    0x0286c984: 90ffff17     b        #0x276c7c4
    0x0286c988: 60d800b0     adrp     x0, #0x4279000
    0x0286c98c: 004c42f9     ldr      x0, [x0, #0x498]
    0x0286c990: f50308aa     mov      x21, x8
    0x0286c994: 1bd92c94     bl       #0x32a2e00
    0x0286c998: e80315aa     mov      x8, x21
    0x0286c99c: e0f3ff34     cbz      w0, #0x276c818
    0x0286c9a0: 60d800b0     adrp     x0, #0x4279000
    0x0286c9a4: 61d800b0     adrp     x1, #0x4279000
    0x0286c9a8: 00c842f9     ldr      x0, [x0, #0x590]
    0x0286c9ac: 215042f9     ldr      x1, [x1, #0x4a0]
    0x0286c9b0: 62c500d0     adrp     x2, #0x401a000
    0x0286c9b4: 42000091     add      x2, x2, #0
    0x0286c9b8: 264e6297     bl       #0x250
    0x0286c9bc: 60d800b0     adrp     x0, #0x4279000
    0x0286c9c0: 004c42f9     ldr      x0, [x0, #0x498]
    0x0286c9c4: 13d92c94     bl       #0x32a2e10
    0x0286c9c8: e80315aa     mov      x8, x21
    0x0286c9cc: 93ffff17     b        #0x276c818
    0x0286c9d0: 60d800b0     adrp     x0, #0x4279000
    0x0286c9d4: 004c42f9     ldr      x0, [x0, #0x498]
    0x0286c9d8: 0ad92c94     bl       #0x32a2e00
    0x0286c9dc: 60f7ff34     cbz      w0, #0x276c8c8
    0x0286c9e0: 60d800b0     adrp     x0, #0x4279000
    0x0286c9e4: 61d800b0     adrp     x1, #0x4279000
    0x0286c9e8: 00c842f9     ldr      x0, [x0, #0x590]
    0x0286c9ec: 215042f9     ldr      x1, [x1, #0x4a0]
    0x0286c9f0: 62c500d0     adrp     x2, #0x401a000
    0x0286c9f4: 42000091     add      x2, x2, #0
    0x0286c9f8: 164e6297     bl       #0x250
    0x0286c9fc: 60d800b0     adrp     x0, #0x4279000
    0x0286ca00: 004c42f9     ldr      x0, [x0, #0x498]
    0x0286ca04: 03d92c94     bl       #0x32a2e10
    0x0286ca08: b0ffff17     b        #0x276c8c8
    0x0286ca0c: 60d800b0     adrp     x0, #0x4279000
    0x0286ca10: 004c42f9     ldr      x0, [x0, #0x498]
    0x0286ca14: fbd82c94     bl       #0x32a2e00
    0x0286ca18: a0f2ff34     cbz      w0, #0x276c86c
    0x0286ca1c: 60d800b0     adrp     x0, #0x4279000
    0x0286ca20: 61d800b0     adrp     x1, #0x4279000
    0x0286ca24: 00c842f9     ldr      x0, [x0, #0x590]
    0x0286ca28: 215042f9     ldr      x1, [x1, #0x4a0]
    0x0286ca2c: 62c500d0     adrp     x2, #0x401a000
    0x0286ca30: 42000091     add      x2, x2, #0
    0x0286ca34: 074e6297     bl       #0x250
    0x0286ca38: 60d800b0     adrp     x0, #0x4279000
    0x0286ca3c: 004c42f9     ldr      x0, [x0, #0x498]
    0x0286ca40: f4d82c94     bl       #0x32a2e10
    0x0286ca44: 8affff17     b        #0x276c86c
    0x0286ca48: 60d800b0     adrp     x0, #0x4279000
    0x0286ca4c: 004c42f9     ldr      x0, [x0, #0x498]
    0x0286ca50: ecd82c94     bl       #0x32a2e00
    0x0286ca54: a0f6ff34     cbz      w0, #0x276c928
    0x0286ca58: 60d800b0     adrp     x0, #0x4279000
    0x0286ca5c: 61d800b0     adrp     x1, #0x4279000
    0x0286ca60: 00c842f9     ldr      x0, [x0, #0x590]
    0x0286ca64: 215042f9     ldr      x1, [x1, #0x4a0]
    0x0286ca68: 62c500d0     adrp     x2, #0x401a000
    0x0286ca6c: 42000091     add      x2, x2, #0
    0x0286ca70: f84d6297     bl       #0x250
    0x0286ca74: 60d800b0     adrp     x0, #0x4279000
    0x0286ca78: 004c42f9     ldr      x0, [x0, #0x498]
    0x0286ca7c: e5d82c94     bl       #0x32a2e10
    0x0286ca80: aaffff17     b        #0x276c928
    0x0286ca84: f30f1ef8     str      x19, [sp, #-0x20]!  ! possible store
    0x0286ca88: fd7b01a9     stp      x29, x30, [sp, #0x10]  ! possible store
    0x0286ca8c: fd430091     add      x29, sp, #0x10
    0x0286ca90: f30308aa     mov      x19, x8
    0x0286ca94: 52000094     bl       #0x276cbdc
    0x0286ca98: 600200f9     str      x0, [x19]  ! possible store
    0x0286ca9c: e00100b4     cbz      x0, #0x276cad8
    0x0286caa0: 132c40f9     ldr      x19, [x0, #0x58]
    0x0286caa4: 600e40f9     ldr      x0, [x19, #0x18]
    0x0286caa8: e00100b4     cbz      x0, #0x276cae4
    0x0286caac: 680a40f9     ldr      x8, [x19, #0x10]
    0x0286cab0: a80000b5     cbnz     x8, #0x276cac4
    0x0286cab4: 080040f9     ldr      x8, [x0]
    0x0286cab8: 080140f9     ldr      x8, [x8]
    0x0286cabc: 00013fd6     blr      x8
    0x0286cac0: 600a00f9     str      x0, [x19, #0x10]  ! possible store
    0x0286cac4: 68320091     add      x8, x19, #0xc
    0x0286cac8: 09fd5f88     ldaxr    w9, [x8]
    0x0286cacc: 29050011     add      w9, w9, #1
    0x0286cad0: 09fd0a88     stlxr    w10, w9, [x8]  ! possible store
    0x0286cad4: aaffff35     cbnz     w10, #0x276cac8
    0x0286cad8: fd7b41a9     ldp      x29, x30, [sp, #0x10]
    0x0286cadc: f30742f8     ldr      x19, [sp], #0x20
    0x0286cae0: c0035fd6     ret      
    0x0286cae4: 408900d0     adrp     x0, #0x3896000
    0x0286cae8: 00880c91     add      x0, x0, #0x322
    0x0286caec: e10300aa     mov      x1, x0
    0x0286caf0: e20300aa     mov      x2, x0
    0x0286caf4: e3031f2a     mov      w3, wzr
    0x0286caf8: dad92c94     bl       #0x32a3260
    0x0286cafc: ffc300d1     sub      sp, sp, #0x30
    0x0286cb00: f30b00f9     str      x19, [sp, #0x10]  ! possible store
    0x0286cb04: fd7b02a9     stp      x29, x30, [sp, #0x20]  ! possible store
    0x0286cb08: fd830091     add      x29, sp, #0x20
    0x0286cb0c: f30308aa     mov      x19, x8
    0x0286cb10: 080040f9     ldr      x8, [x0]
    0x0286cb14: 090940f9     ldr      x9, [x8, #0x10]
    0x0286cb18: e8030091     mov      x8, sp
    0x0286cb1c: 20013fd6     blr      x9
    0x0286cb20: e1030091     mov      x1, sp
    0x0286cb24: e00313aa     mov      x0, x19
    0x0286cb28: 7f7e00a9     stp      xzr, xzr, [x19]  ! possible store
    0x0286cb2c: 75000094     bl       #0x276cd00
    0x0286cb30: f30340f9     ldr      x19, [sp]
    0x0286cb34: f30200b4     cbz      x19, #0x276cb90
    0x0286cb38: 68220091     add      x8, x19, #8
    0x0286cb3c: 09fd5f88     ldaxr    w9, [x8]
    0x0286cb40: 29050071     subs     w9, w9, #1
    0x0286cb44: 09fd0a88     stlxr    w10, w9, [x8]  ! possible store
    0x0286cb48: aaffff35     cbnz     w10, #0x276cb3c
    0x0286cb4c: 21020054     b.ne     #0x276cb90
    0x0286cb50: 7f0a00f9     str      xzr, [x19, #0x10]  ! possible store
    0x0286cb54: 68d800b0     adrp     x8, #0x4279000
    0x0286cb58: 084d42f9     ldr      x8, [x8, #0x498]
    0x0286cb5c: 08fddf08     ldarb    w8, [x8]
    0x0286cb60: 08020036     tbz      w8, #0, #0x276cba0
    0x0286cb64: 68d800b0     adrp     x8, #0x4279000
    0x0286cb68: 085142f9     ldr      x8, [x8, #0x4a0]
    0x0286cb6c: 69d800b0     adrp     x9, #0x4279000
    0x0286cb70: 080140f9     ldr      x8, [x8]
    0x0286cb74: 295542f9     ldr      x9, [x9, #0x4a8]
    0x0286cb78: 280100f9     str      x8, [x9]  ! possible store
    0x0286cb7c: 690240f9     ldr      x9, [x19]
    0x0286cb80: 00610391     add      x0, x8, #0xd8
    0x0286cb84: a12300d1     sub      x1, x29, #8
    0x0286cb88: a9831ff8     stur     x9, [x29, #-8]  ! possible store
    0x0286cb8c: ba5d0794     bl       #0x2944274
    0x0286cb90: fd7b42a9     ldp      x29, x30, [sp, #0x20]
    0x0286cb94: f30b40f9     ldr      x19, [sp, #0x10]
    0x0286cb98: ffc30091     add      sp, sp, #0x30
    0x0286cb9c: c0035fd6     ret      
    0x0286cba0: 60d800b0     adrp     x0, #0x4279000
    0x0286cba4: 004c42f9     ldr      x0, [x0, #0x498]
    0x0286cba8: 96d82c94     bl       #0x32a2e00
    0x0286cbac: c0fdff34     cbz      w0, #0x276cb64
    0x0286cbb0: 60d800b0     adrp     x0, #0x4279000
    0x0286cbb4: 61d800b0     adrp     x1, #0x4279000
    0x0286cbb8: 00c842f9     ldr      x0, [x0, #0x590]
    0x0286cbbc: 215042f9     ldr      x1, [x1, #0x4a0]
    0x0286cbc0: 62c500d0     adrp     x2, #0x401a000
    0x0286cbc4: 42000091     add      x2, x2, #0
    0x0286cbc8: a24d6297     bl       #0x250
    0x0286cbcc: 60d800b0     adrp     x0, #0x4279000
    0x0286cbd0: 004c42f9     ldr      x0, [x0, #0x498]
    0x0286cbd4: 8fd82c94     bl       #0x32a2e10
    0x0286cbd8: e3ffff17     b        #0x276cb64
    0x0286cbdc: f70f1cf8     str      x23, [sp, #-0x40]!  ! possible store
    0x0286cbe0: f65701a9     stp      x22, x21, [sp, #0x10]  ! possible store
    0x0286cbe4: f44f02a9     stp      x20, x19, [sp, #0x20]  ! possible store
    0x0286cbe8: fd7b03a9     stp      x29, x30, [sp, #0x30]  ! possible store
    0x0286cbec: fdc30091     add      x29, sp, #0x30
    0x0286cbf0: 68d800b0     adrp     x8, #0x4279000
    0x0286cbf4: 089142f9     ldr      x8, [x8, #0x520]
    0x0286cbf8: 08fddf08     ldarb    w8, [x8]
    0x0286cbfc: f40302aa     mov      x20, x2
    0x0286cc00: f50301aa     mov      x21, x1
    0x0286cc04: f30300aa     mov      x19, x0
    0x0286cc08: 68050036     tbz      w8, #0, #0x276ccb4
    0x0286cc0c: 68d800b0     adrp     x8, #0x4279000
    0x0286cc10: 089542f9     ldr      x8, [x8, #0x528]
    0x0286cc14: 000140b9     ldr      w0, [x8]
    0x0286cc18: 1adb2c94     bl       #0x32a3880
    0x0286cc1c: 084040f9     ldr      x8, [x0, #0x80]
    0x0286cc20: 1f4100f1     cmp      x8, #0x10
    0x0286cc24: c2060054     b.hs     #0x276ccfc
    0x0286cc28: 137828f8     str      x19, [x0, x8, lsl #3]  ! possible store
    0x0286cc2c: 084040f9     ldr      x8, [x0, #0x80]
    0x0286cc30: 08050091     add      x8, x8, #1
    0x0286cc34: 084000f9     str      x8, [x0, #0x80]  ! possible store
    0x0286cc38: 680240f9     ldr      x8, [x19]
    0x0286cc3c: 080940f9     ldr      x8, [x8, #0x10]
    0x0286cc40: f60300aa     mov      x22, x0
    0x0286cc44: e00313aa     mov      x0, x19
    0x0286cc48: 01f08052     mov      w1, #0x780
    0x0286cc4c: 02028052     mov      w2, #0x10
    0x0286cc50: 00013fd6     blr      x8
    0x0286cc54: f70300aa     mov      x23, x0
    0x0286cc58: 400200b4     cbz      x0, #0x276cca0
    0x0286cc5c: a10240f9     ldr      x1, [x21]
    0x0286cc60: e00317aa     mov      x0, x23
    0x0286cc64: 82024039     ldrb     w2, [x20]
    0x0286cc68: 0e5fa497     bl       #0x10848a0
    0x0286cc6c: 08f08052     mov      w8, #0x780
    0x0286cc70: 09028052     mov      w9, #0x10
    0x0286cc74: e00317aa     mov      x0, x23
    0x0286cc78: f3de00a9     stp      x19, x23, [x23, #8]  ! possible store
    0x0286cc7c: e8a601a9     stp      x8, x9, [x23, #0x18]  ! possible store
    0x0286cc80: c84240f9     ldr      x8, [x22, #0x80]
    0x0286cc84: 080500d1     sub      x8, x8, #1
    0x0286cc88: c84200f9     str      x8, [x22, #0x80]  ! possible store
    0x0286cc8c: fd7b43a9     ldp      x29, x30, [sp, #0x30]

### PokedexSaveRegister - 0x00e4faf0

Direct BL callers: ['0x01043564']

Raw bytes and instructions (an exclamation mark marks a possible store):

    0x00e4fab0: 02815fb8     ldur     w2, [x8, #-8]
    0x00e4fab4: 5f080031     cmn      w2, #2
    0x00e4fab8: 60000054     b.eq     #0xd4fac4
    0x00e4fabc: e103152a     mov      w1, w21
    0x00e4fac0: a415cc97     bl       #0x55150
    0x00e4fac4: 7f0216eb     cmp      x19, x22
    0x00e4fac8: e80316aa     mov      x8, x22
    0x00e4facc: e1feff54     b.ne     #0xd4faa8
    0x00e4fad0: 930600f9     str      x19, [x20, #8]  ! possible store
    0x00e4fad4: fd7b42a9     ldp      x29, x30, [sp, #0x20]
    0x00e4fad8: f44f41a9     ldp      x20, x19, [sp, #0x10]
    0x00e4fadc: f657c3a8     ldp      x22, x21, [sp], #0x30
    0x00e4fae0: c0035fd6     ret      
    0x00e4fae4: 00000000     udf      #0
    0x00e4fae8: 00000000     udf      #0
    0x00e4faec: 00000000     udf      #0
    0x00e4faf0: fc6fbaa9     stp      x28, x27, [sp, #-0x60]!  <-- TARGET  ! possible store
    0x00e4faf4: fa6701a9     stp      x26, x25, [sp, #0x10]  ! possible store
    0x00e4faf8: f85f02a9     stp      x24, x23, [sp, #0x20]  ! possible store
    0x00e4fafc: f65703a9     stp      x22, x21, [sp, #0x30]  ! possible store
    0x00e4fb00: f44f04a9     stp      x20, x19, [sp, #0x40]  ! possible store
    0x00e4fb04: fd7b05a9     stp      x29, x30, [sp, #0x50]  ! possible store
    0x00e4fb08: fd430191     add      x29, sp, #0x50
    0x00e4fb0c: ff830fd1     sub      sp, sp, #0x3e0
    0x00e4fb10: c8028052     mov      w8, #0x16
    0x00e4fb14: ffff02a9     stp      xzr, xzr, [sp, #0x28]  ! possible store
    0x00e4fb18: f3a30291     add      x19, sp, #0xa8
    0x00e4fb1c: e8a30039     strb     w8, [sp, #0x28]  ! possible store
    0x00e4fb20: 682a8c52     mov      w8, #0x6153
    0x00e4fb24: c8aeac72     movk     w8, #0x6576, lsl #16
    0x00e4fb28: e83300b9     str      w8, [sp, #0x30]  ! possible store
    0x00e4fb2c: 485a01f0     adrp     x8, #0x389a000
    0x00e4fb30: 08710e91     add      x8, x8, #0x39c
    0x00e4fb34: 080140f9     ldr      x8, [x8]
    0x00e4fb38: e00b00f9     str      x0, [sp, #0x10]  ! possible store
    0x00e4fb3c: ff1f00f9     str      xzr, [sp, #0x38]  ! possible store
    0x00e4fb40: ffd30039     strb     wzr, [sp, #0x34]  ! possible store
    0x00e4fb44: e89302f8     stur     x8, [sp, #0x29]  ! possible store
    0x00e4fb48: 0000a0d2     movz     x0, #0, lsl #16
    0x00e4fb4c: 000480f2     movk     x0, #0x20
    0x00e4fb50: 1f2003d5     nop      
    0x00e4fb54: 1f2003d5     nop      
    0x00e4fb58: 5cd03bd5     mrs      x28, tpidr_el0
    0x00e4fb5c: 886b60f8     ldr      x8, [x28, x0]
    0x00e4fb60: 080100b5     cbnz     x8, #0xd4fb80
    0x00e4fb64: 08ad01d0     adrp     x8, #0x42f1000
    0x00e4fb68: 08cd43f9     ldr      x8, [x8, #0x798]
    0x00e4fb6c: 0000a0d2     movz     x0, #0, lsl #16
    0x00e4fb70: 000480f2     movk     x0, #0x20
    0x00e4fb74: 1f2003d5     nop      
    0x00e4fb78: 1f2003d5     nop      
    0x00e4fb7c: 886b20f8     str      x8, [x28, x0]  ! possible store
    0x00e4fb80: 090140f9     ldr      x9, [x8]
    0x00e4fb84: e00308aa     mov      x0, x8
    0x00e4fb88: 013f8052     mov      w1, #0x1f8
    0x00e4fb8c: 290940f9     ldr      x9, [x9, #0x10]
    0x00e4fb90: 02018052     mov      w2, #8
    0x00e4fb94: 20013fd6     blr      x9
    0x00e4fb98: f50300aa     mov      x21, x0
    0x00e4fb9c: 08f0a752     mov      w8, #0x3f800000
    0x00e4fba0: 1f1000f9     str      xzr, [x0, #0x20]  ! possible store
    0x00e4fba4: bf8e00f8     str      xzr, [x21, #8]!  ! possible store
    0x00e4fba8: 090000f0     adrp     x9, #0xd52000
    0x00e4fbac: 29410591     add      x9, x9, #0x150
    0x00e4fbb0: 082800b9     str      w8, [x0, #0x28]  ! possible store
    0x00e4fbb4: 080000f0     adrp     x8, #0xd52000
    0x00e4fbb8: 08010891     add      x8, x8, #0x200
    0x00e4fbbc: 1f2800f9     str      xzr, [x0, #0x50]  ! possible store
    0x00e4fbc0: 092003a9     stp      x9, x8, [x0, #0x30]  ! possible store
    0x00e4fbc4: 695401f0     adrp     x9, #0x37de000
    0x00e4fbc8: 299d0091     add      x9, x9, #0x27
    0x00e4fbcc: ea1600f0     adrp     x10, #0x102e000
    0x00e4fbd0: 4a612091     add      x10, x10, #0x818
    0x00e4fbd4: 092806a9     stp      x9, x10, [x0, #0x60]  ! possible store
    0x00e4fbd8: ea1600f0     adrp     x10, #0x102e000
    0x00e4fbdc: 4af12091     add      x10, x10, #0x83c
    0x00e4fbe0: eb5201f0     adrp     x11, #0x37ae000
    0x00e4fbe4: 6b890091     add      x11, x11, #0x22
    0x00e4fbe8: 0a7c08a9     stp      x10, xzr, [x0, #0x80]  ! possible store
    0x00e4fbec: ea1600f0     adrp     x10, #0x102e000

### GetReportPokeNum - 0x0112edc4

Direct BL callers: []

Raw bytes and instructions (an exclamation mark marks a possible store):

    0x0112ed84: a86a7878     ldrh     w8, [x21, x24]
    0x0112ed88: 1f910171     cmp      w8, #0x64
    0x0112ed8c: 63feff54     b.lo     #0x102ed58
    0x0112ed90: e00315aa     mov      x0, x21
    0x0112ed94: e103162a     mov      w1, w22
    0x0112ed98: 981a0094     bl       #0x10357f8
    0x0112ed9c: 1f000072     tst      w0, #1
    0x0112eda0: 28139a1a     csel     w8, w25, w26, ne
    0x0112eda4: edffff17     b        #0x102ed58
    0x0112eda8: e003142a     mov      w0, w20
    0x0112edac: fd7b44a9     ldp      x29, x30, [sp, #0x40]
    0x0112edb0: f44f43a9     ldp      x20, x19, [sp, #0x30]
    0x0112edb4: f65742a9     ldp      x22, x21, [sp, #0x20]
    0x0112edb8: f85f41a9     ldp      x24, x23, [sp, #0x10]
    0x0112edbc: fa67c5a8     ldp      x26, x25, [sp], #0x50
    0x0112edc0: c0035fd6     ret      
    0x0112edc4: ff4302d1     sub      sp, sp, #0x90  <-- TARGET
    0x0112edc8: fa6704a9     stp      x26, x25, [sp, #0x40]  ! possible store
    0x0112edcc: f85f05a9     stp      x24, x23, [sp, #0x50]  ! possible store
    0x0112edd0: f65706a9     stp      x22, x21, [sp, #0x60]  ! possible store
    0x0112edd4: f44f07a9     stp      x20, x19, [sp, #0x70]  ! possible store
    0x0112edd8: fd7b08a9     stp      x29, x30, [sp, #0x80]  ! possible store
    0x0112eddc: fd030291     add      x29, sp, #0x80
    0x0112ede0: f40300aa     mov      x20, x0
    0x0112ede4: f3031f2a     mov      w19, wzr
    0x0112ede8: 35008052     mov      w21, #1
    0x0112edec: 16b00191     add      x22, x0, #0x6c
    0x0112edf0: 37960190     adrp     x23, #0x42f2000
    0x0112edf4: 180b8052     mov      w24, #0x58
    0x0112edf8: f9230091     add      x25, sp, #8
    0x0112edfc: 3a960190     adrp     x26, #0x42f2000
    0x0112ee00: 5a830e91     add      x26, x26, #0x3a0
    0x0112ee04: 07000014     b        #0x102ee20
    0x0112ee08: a85a189b     madd     x8, x21, x24, x22
    0x0112ee0c: 08f54079     ldrh     w8, [x8, #0x7a]
    0x0112ee10: a8090035     cbnz     w8, #0x102ef44
    0x0112ee14: b5060091     add      x21, x21, #1
    0x0112ee18: bf2a0ef1     cmp      x21, #0x38a
    0x0112ee1c: 600a0054     b.eq     #0x102ef68
    0x0112ee20: bf260e71     cmp      w21, #0x389
    0x0112ee24: ff7f03a9     stp      xzr, xzr, [sp, #0x30]  ! possible store
    0x0112ee28: ff0700f9     str      xzr, [sp, #8]  ! possible store
    0x0112ee2c: ff7f02a9     stp      xzr, xzr, [sp, #0x20]  ! possible store
    0x0112ee30: ff7f01a9     stp      xzr, xzr, [sp, #0x10]  ! possible store
    0x0112ee34: 0cffff54     b.gt     #0x102ee14
    0x0112ee38: a8ea7bd3     lsl      x8, x21, #5
    0x0112ee3c: 496b68f8     ldr      x9, [x26, x8]
    0x0112ee40: 282540a9     ldp      x8, x9, [x9]
    0x0112ee44: 2b0108eb     subs     x11, x9, x8
    0x0112ee48: 60feff54     b.eq     #0x102ee14
    0x0112ee4c: ea031f2a     mov      w10, wzr
    0x0112ee50: ec031f2a     mov      w12, wzr
    0x0112ee54: e9031faa     mov      x9, xzr
    0x0112ee58: 6bfd4393     asr      x11, x11, #3
    0x0112ee5c: 0d7969f8     ldr      x13, [x8, x9, lsl #3]
    0x0112ee60: cd0000b5     cbnz     x13, #0x102ee78
    0x0112ee64: 29050091     add      x9, x9, #1
    0x0112ee68: 7f0109eb     cmp      x11, x9
    0x0112ee6c: 09010054     b.ls     #0x102ee8c
    0x0112ee70: 0d7969f8     ldr      x13, [x8, x9, lsl #3]
    0x0112ee74: 8dffffb4     cbz      x13, #0x102ee64
    0x0112ee78: 8c1d4092     and      x12, x12, #0xff
    0x0112ee7c: 4a050011     add      w10, w10, #1
    0x0112ee80: 297b2c78     strh     w9, [x25, x12, lsl #1]  ! possible store
    0x0112ee84: ec030a2a     mov      w12, w10
    0x0112ee88: f7ffff17     b        #0x102ee64
    0x0112ee8c: 5f1d0072     tst      w10, #0xff
    0x0112ee90: 20fcff54     b.eq     #0x102ee14
    0x0112ee94: e9d241f9     ldr      x9, [x23, #0x3a0]
    0x0112ee98: a8020032     orr      w8, w21, #1
    0x0112ee9c: 4a1d4092     and      x10, x10, #0xff
    0x0112eea0: eb230091     add      x11, sp, #8
    0x0112eea4: 6c014079     ldrh     w12, [x11]
    0x0112eea8: 1f2d0e71     cmp      w8, #0x38b
    0x0112eeac: ec038c1a     csel     w12, wzr, w12, eq
    0x0112eeb0: 8d3d0012     and      w13, w12, #0xffff
    0x0112eeb4: bf6d0071     cmp      w13, #0x1b
    0x0112eeb8: a8010054     b.hi     #0x102eeec
    0x0112eebc: 1f2d0e71     cmp      w8, #0x38b
    0x0112eec0: ed03959a     csel     x13, xzr, x21, eq

### SumTaskProgress - 0x0112eff0

Direct BL callers: ['0x0112ef58', '0x0112efd0', '0x01404e9c']

Raw bytes and instructions (an exclamation mark marks a possible store):

    0x0112efb0: c8000035     cbnz     w8, #0x102efc8
    0x0112efb4: b50600b1     adds     x21, x21, #1
    0x0112efb8: d6620191     add      x22, x22, #0x58
    0x0112efbc: 02010054     b.hs     #0x102efdc
    0x0112efc0: 886a7678     ldrh     w8, [x20, x22]
    0x0112efc4: 88ffff34     cbz      w8, #0x102efb4
    0x0112efc8: a12a0e11     add      w1, w21, #0x38a
    0x0112efcc: e00314aa     mov      x0, x20
    0x0112efd0: 08000094     bl       #0x102eff0
    0x0112efd4: 1300130b     add      w19, w0, w19
    0x0112efd8: f7ffff17     b        #0x102efb4
    0x0112efdc: e003132a     mov      w0, w19
    0x0112efe0: fd7b42a9     ldp      x29, x30, [sp, #0x20]
    0x0112efe4: f44f41a9     ldp      x20, x19, [sp, #0x10]
    0x0112efe8: f657c3a8     ldp      x22, x21, [sp], #0x30
    0x0112efec: c0035fd6     ret      
    0x0112eff0: fc5fbca9     stp      x28, x23, [sp, #-0x40]!  <-- TARGET  ! possible store
    0x0112eff4: f65701a9     stp      x22, x21, [sp, #0x10]  ! possible store
    0x0112eff8: f44f02a9     stp      x20, x19, [sp, #0x20]  ! possible store
    0x0112effc: fd7b03a9     stp      x29, x30, [sp, #0x30]  ! possible store
    0x0112f000: fdc30091     add      x29, sp, #0x30
    0x0112f004: ff430fd1     sub      sp, sp, #0x3d0
    0x0112f008: 3f500f71     cmp      w1, #0x3d4
    0x0112f00c: 2c240054     b.gt     #0x102f490
    0x0112f010: 489201d0     adrp     x8, #0x4279000
    0x0112f014: 083d43f9     ldr      x8, [x8, #0x678]
    0x0112f018: 08fddf08     ldarb    w8, [x8]
    0x0112f01c: f303012a     mov      w19, w1
    0x0112f020: f40300aa     mov      x20, x0
    0x0112f024: a8230036     tbz      w8, #0, #0x102f498
    0x0112f028: 489201d0     adrp     x8, #0x4279000
    0x0112f02c: 084143f9     ldr      x8, [x8, #0x680]
    0x0112f030: 499201d0     adrp     x9, #0x4279000
    0x0112f034: 294543f9     ldr      x9, [x9, #0x688]
    0x0112f038: 080140f9     ldr      x8, [x8]
    0x0112f03c: 280100f9     str      x8, [x9]  ! possible store
    0x0112f040: 006940f9     ldr      x0, [x8, #0xd0]
    0x0112f044: 802400b4     cbz      x0, #0x102f4d4
    0x0112f048: 08400191     add      x8, x0, #0x50
    0x0112f04c: 09fd5f88     ldaxr    w9, [x8]
    0x0112f050: 29050011     add      w9, w9, #1
    0x0112f054: 09fd0a88     stlxr    w10, w9, [x8]  ! possible store
    0x0112f058: aaffff35     cbnz     w10, #0x102f04c
    0x0112f05c: 15e440f9     ldr      x21, [x0, #0x1c8]
    0x0112f060: d50000b4     cbz      x21, #0x102f078
    0x0112f064: a9420191     add      x9, x21, #0x50
    0x0112f068: 2afd5f88     ldaxr    w10, [x9]
    0x0112f06c: 4a050011     add      w10, w10, #1
    0x0112f070: 2afd0b88     stlxr    w11, w10, [x9]  ! possible store
    0x0112f074: abffff35     cbnz     w11, #0x102f068
    0x0112f078: 09fd5f88     ldaxr    w9, [x8]
    0x0112f07c: 29050071     subs     w9, w9, #1
    0x0112f080: 09fd0a88     stlxr    w10, w9, [x8]  ! possible store
    0x0112f084: aaffff35     cbnz     w10, #0x102f078
    0x0112f088: 201f0054     b.eq     #0x102f46c
    0x0112f08c: a82e40f9     ldr      x8, [x21, #0x58]
    0x0112f090: 2a7b9ed2     mov      x10, #0xf3d9
    0x0112f094: aa56b3f2     movk     x10, #0x9ab5, lsl #16
    0x0112f098: abc884d2     mov      x11, #0x2645
    0x0112f09c: 4b84b0f2     movk     x11, #0x8422, lsl #16
    0x0112f0a0: 000540f9     ldr      x0, [x8, #8]
    0x0112f0a4: ec230091     add      x12, sp, #8
    0x0112f0a8: 48028052     mov      w8, #0x12
    0x0112f0ac: a9008052     mov      w9, #5
    0x0112f0b0: 8aeac8f2     movk     x10, #0x4754, lsl #32
    0x0112f0b4: 4a1df8f2     movk     x10, #0xc0ea, lsl #48
    0x0112f0b8: 8b9cd3f2     movk     x11, #0x9ce4, lsl #32
    0x0112f0bc: 4b7ef9f2     movk     x11, #0xcbf2, lsl #48
    0x0112f0c0: ff0b00b9     str      wzr, [sp, #8]  ! possible store
    0x0112f0c4: ff0b00f9     str      xzr, [sp, #0x10]  ! possible store
    0x0112f0c8: 8d210391     add      x13, x12, #0xc8
    0x0112f0cc: ff1b00b9     str      wzr, [sp, #0x18]  ! possible store
    0x0112f0d0: e8730039     strb     w8, [sp, #0x1c]  ! possible store
    0x0112f0d4: e92300b9     str      w9, [sp, #0x20]  ! possible store
    0x0112f0d8: ebff03a9     stp      x11, xzr, [sp, #0x38]  ! possible store
    0x0112f0dc: eaaf02a9     stp      x10, x11, [sp, #0x28]  ! possible store
    0x0112f0e0: e2230091     add      x2, sp, #8
    0x0112f0e4: e103132a     mov      w1, w19
    0x0112f0e8: ff4306f8     stur     xzr, [sp, #0x64]  ! possible store
    0x0112f0ec: ff2f00f9     str      xzr, [sp, #0x58]  ! possible store

### GetTaskProgress - 0x01130984

Direct BL callers: ['0x0112f2dc', '0x0112f308', '0x0112f334', '0x0112f360', '0x0112f38c', '0x0112f3b8', '0x0112f3e4', '0x0112f414', '0x0112ff84', '0x01135b8c', '0x0140d35c', '0x0140e854']

Raw bytes and instructions (an exclamation mark marks a possible store):

    0x01130944: e103152a     mov      w1, w21
    0x01130948: ac130094     bl       #0x10357f8
    0x0113094c: 1f000072     tst      w0, #1
    0x01130950: 0813991a     csel     w8, w24, w25, ne
    0x01130954: f4ffff17     b        #0x1030924
    0x01130958: e003132a     mov      w0, w19
    0x0113095c: fd7b44a9     ldp      x29, x30, [sp, #0x40]
    0x01130960: f44f43a9     ldp      x20, x19, [sp, #0x30]
    0x01130964: f65742a9     ldp      x22, x21, [sp, #0x20]
    0x01130968: f85f41a9     ldp      x24, x23, [sp, #0x10]
    0x0113096c: fa67c5a8     ldp      x26, x25, [sp], #0x50
    0x01130970: c0035fd6     ret      
    0x01130974: e8031f2a     mov      w8, wzr
    0x01130978: edffff17     b        #0x103092c
    0x0113097c: 007840b9     ldr      w0, [x0, #0x78]
    0x01130980: c0035fd6     ret      
    0x01130984: fc6fbaa9     stp      x28, x27, [sp, #-0x60]!  <-- TARGET  ! possible store
    0x01130988: fa6701a9     stp      x26, x25, [sp, #0x10]  ! possible store
    0x0113098c: f85f02a9     stp      x24, x23, [sp, #0x20]  ! possible store
    0x01130990: f65703a9     stp      x22, x21, [sp, #0x30]  ! possible store
    0x01130994: f44f04a9     stp      x20, x19, [sp, #0x40]  ! possible store
    0x01130998: fd7b05a9     stp      x29, x30, [sp, #0x50]  ! possible store
    0x0113099c: fd430191     add      x29, sp, #0x50
    0x011309a0: ff833fd1     sub      sp, sp, #0xfe0
    0x011309a4: fa0305aa     mov      x26, x5
    0x011309a8: f50304aa     mov      x21, x4
    0x011309ac: f90303aa     mov      x25, x3
    0x011309b0: 3f500f71     cmp      w1, #0x3d4
    0x011309b4: 4c700054     b.gt     #0x10317bc
    0x011309b8: f51700f9     str      x21, [sp, #0x28]  ! possible store
    0x011309bc: 549201b0     adrp     x20, #0x4279000
    0x011309c0: 943e43f9     ldr      x20, [x20, #0x678]
    0x011309c4: 88fedf08     ldarb    w8, [x20]
    0x011309c8: f803012a     mov      w24, w1
    0x011309cc: f703022a     mov      w23, w2
    0x011309d0: f30300aa     mov      x19, x0
    0x011309d4: e87d0036     tbz      w8, #0, #0x1031990
    0x011309d8: 489201b0     adrp     x8, #0x4279000
    0x011309dc: 084143f9     ldr      x8, [x8, #0x680]
    0x011309e0: 499201b0     adrp     x9, #0x4279000
    0x011309e4: 294543f9     ldr      x9, [x9, #0x688]
    0x011309e8: 080140f9     ldr      x8, [x8]
    0x011309ec: 280100f9     str      x8, [x9]  ! possible store
    0x011309f0: 006940f9     ldr      x0, [x8, #0xd0]
    0x011309f4: f94f03a9     stp      x25, x19, [sp, #0x30]  ! possible store
    0x011309f8: 008100b4     cbz      x0, #0x1031a18
    0x011309fc: 08400191     add      x8, x0, #0x50
    0x01130a00: 09fd5f88     ldaxr    w9, [x8]
    0x01130a04: 29050011     add      w9, w9, #1
    0x01130a08: 09fd0a88     stlxr    w10, w9, [x8]  ! possible store
    0x01130a0c: aaffff35     cbnz     w10, #0x1030a00
    0x01130a10: 16e440f9     ldr      x22, [x0, #0x1c8]
    0x01130a14: d60000b4     cbz      x22, #0x1030a2c
    0x01130a18: c9420191     add      x9, x22, #0x50
    0x01130a1c: 2afd5f88     ldaxr    w10, [x9]
    0x01130a20: 4a050011     add      w10, w10, #1
    0x01130a24: 2afd0b88     stlxr    w11, w10, [x9]  ! possible store
    0x01130a28: abffff35     cbnz     w11, #0x1030a1c
    0x01130a2c: 09fd5f88     ldaxr    w9, [x8]
    0x01130a30: 29050071     subs     w9, w9, #1
    0x01130a34: 09fd0a88     stlxr    w10, w9, [x8]  ! possible store
    0x01130a38: aaffff35     cbnz     w10, #0x1030a2c
    0x01130a3c: 80580054     b.eq     #0x103154c
    0x01130a40: c82e40f9     ldr      x8, [x22, #0x58]
    0x01130a44: bbc884d2     mov      x27, #0x2645
    0x01130a48: 5b84b0f2     movk     x27, #0x8422, lsl #16
    0x01130a4c: 3c7b9ed2     mov      x28, #0xf3d9
    0x01130a50: bc56b3f2     movk     x28, #0x9ab5, lsl #16
    0x01130a54: 000540f9     ldr      x0, [x8, #8]
    0x01130a58: e8030191     add      x8, sp, #0x40
    0x01130a5c: 9b9cd3f2     movk     x27, #0x9ce4, lsl #32
    0x01130a60: 5b7ef9f2     movk     x27, #0xcbf2, lsl #48
    0x01130a64: 9ceac8f2     movk     x28, #0x4754, lsl #32
    0x01130a68: 5c1df8f2     movk     x28, #0xc0ea, lsl #48
    0x01130a6c: 59028052     mov      w25, #0x12
    0x01130a70: ff4300b9     str      wzr, [sp, #0x40]  ! possible store
    0x01130a74: ff2700f9     str      xzr, [sp, #0x48]  ! possible store
    0x01130a78: ff5300b9     str      wzr, [sp, #0x50]  ! possible store
    0x01130a7c: b3008052     mov      w19, #5
    0x01130a80: 09210391     add      x9, x8, #0xc8

## Proof boundaries

- Instruction windows are not function-body definitions.
- A store to stack/local memory is not a store to PokedexSave.
- Only direct BL xrefs are complete within executable PT_LOAD segments.
- No Dirty, serializer, persistence or success/failure claim is made.

## Next static review

1. Recover function boundaries and CFG around both local labels.
2. Track the object pointer into each write, not just the STR instruction.
3. Follow relevant callees and returned result consumers.
4. Resolve Dirty producers/consumers, then serializer and save-I/O success/failure.
