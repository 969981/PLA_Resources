# PLA 1.1.1 R6 — pinned ELF constructor and method candidates

Status: STATIC_RAW_ELF_NOT_DYNAMIC_VTABLE_PROOF
ELF SHA-256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794

| Target | Ghidra VA | Direct BL sites | Aligned static data pointers |
| --- | --- | ---: | ---: |
| context_allocator | 0x02888630 | 1 | 0 |
| context_constructor | 0x011458E8 | 2 | 0 |
| slot_factory_wrapper | 0x0114725C | 1 | 0 |
| slot_object_allocator | 0x0114BC50 | 1 | 0 |
| object_initializer_or_error | 0x0112E220 | 3 | 0 |
| zukan_read_method | 0x0112E580 | 1 | 0 |
| zukan_write_method | 0x0112E6F0 | 1 | 0 |
| registered_hashdb_callback | 0x010CD044 | 37 | 0 |
| register_all | 0x01147C34 | 1 | 0 |
| get_pokedex_slot | 0x01148F20 | 30 | 0 |
| zukan_shared_lookup | 0x0113749C | 1 | 0 |
| zukan_shared_writer | 0x011379C4 | 1 | 0 |
| generic_registry_callback40 | 0x010CEEA0 | 1 | 0 |
| generic_registry_callback48 | 0x010CEC54 | 1 | 0 |
| generic_registry_callback58 | 0x010CEB08 | 1 | 0 |

## context_allocator

BL: 0x0287F8B0
Static: none

## context_constructor

BL: 0x028886A8, 0x028886F0
Static: none

## slot_factory_wrapper

BL: 0x01145DA4
Static: none

## slot_object_allocator

BL: 0x0114726C
Static: none

## object_initializer_or_error

BL: 0x00E579E0, 0x0114BCD0, 0x0114BD14
Static: none

## zukan_read_method

BL: 0x0112E4C0
Static: none

## zukan_write_method

BL: 0x0112E660
Static: none

## registered_hashdb_callback

BL: 0x01147CF4, 0x01147D00, 0x01147D0C, 0x01147D18, 0x01147D24, 0x01147D30, 0x01147D3C, 0x01147D48, 0x01147D54, 0x01147D60, 0x01147D6C, 0x01147D78, 0x01147D84, 0x01147D90, 0x01147D9C, 0x01147DA8, 0x01147DB4, 0x01147DC0, 0x01147DCC, 0x01147DD8, 0x01147DE4, 0x01147DF0, 0x01147DFC, 0x01147E08, 0x01147E14, 0x01147E20, 0x01147E2C, 0x01147E38, 0x01147E44, 0x01147E50, 0x01147E5C, 0x01147E68, 0x01147E74, 0x01147E80, 0x01147E8C, 0x01147E98, 0x01147EB0
Static: none

## register_all

BL: 0x0287C9C8
Static: none

## get_pokedex_slot

BL: 0x00C53688, 0x00C53DEC, 0x00C5453C, 0x00C54C9C, 0x00DAAAD0, 0x00DAABB0, 0x00DAAC90, 0x00DAB328, 0x00DABF94, 0x00E93424, 0x00E93F1C, 0x011A3E10, 0x0120E574, 0x0120EAA0, 0x0120EC24, 0x0120EE7C, 0x0125E1A0, 0x0139877C, 0x013F3BB0, 0x013F4258, 0x013F5834, 0x01413238, 0x01456144, 0x0160DD54, 0x01683F9C, 0x01685DB8, 0x01907184, 0x01B72EE0, 0x027DCCD8, 0x0286BCCC
Static: none

## zukan_shared_lookup

BL: 0x0112E590
Static: none

## zukan_shared_writer

BL: 0x0112E7B0
Static: none

## generic_registry_callback40

BL: 0x01148790
Static: none

## generic_registry_callback48

BL: 0x010CEBF0
Static: none

## generic_registry_callback58

BL: 0x0114ECA4
Static: none

## Raw static vtable region primary_vtable

- +0x000: 0x0000000000000000
- +0x008: 0x0000000000000000
- +0x010: 0x0000000000000000
- +0x018: 0x0000000000000000
- +0x020: 0x0000000000000000
- +0x028: 0x0000000000000000
- +0x030: 0x0000000000000000
- +0x038: 0x0000000000000000
- +0x040: 0x0000000000000000
- +0x048: 0x0000000000000000
- +0x050: 0x0000000000000000
- +0x058: 0x0000000000000000
- +0x060: 0xFFFFFFFFFFFFFFB8
- +0x068: 0x0000000000000000
- +0x070: 0x0000000000000000
- +0x078: 0x0000000000000000
- +0x080: 0x0000000000000000
- +0x088: 0x0000000000000000
- +0x090: 0x0000000000000000
- +0x098: 0x0000000000000000
- +0x0A0: 0x0000000000000000
- +0x0A8: 0xFFFFFFFFFFFFFFB0
- +0x0B0: 0x0000000000000000
- +0x0B8: 0x0000000000000000
- +0x0C0: 0x0000000000000000
- +0x0C8: 0x0000000000000000
- +0x0D0: 0x0000000000000000
- +0x0D8: 0x0000000000000000
- +0x0E0: 0x0000000000000000
- +0x0E8: 0x0000000000000000

## Raw static vtable region secondary_vtable_A

- +0x000: 0x0000000000000000
- +0x008: 0x0000000000000000
- +0x010: 0x0000000000000000
- +0x018: 0x0000000000000000
- +0x020: 0x0000000000000000
- +0x028: 0x0000000000000000
- +0x030: 0x0000000000000000
- +0x038: 0xFFFFFFFFFFFFFFB0
- +0x040: 0x0000000000000000
- +0x048: 0x0000000000000000
- +0x050: 0x0000000000000000
- +0x058: 0x0000000000000000
- +0x060: 0x0000000000000000
- +0x068: 0x0000000000000000
- +0x070: 0x0000000000000000
- +0x078: 0x0000000000000000
- +0x080: 0x0000000000000000
- +0x088: 0x0000000000000000
- +0x090: 0x0000000000000000
- +0x098: 0x0000000000000000
- +0x0A0: 0x0000000000000000
- +0x0A8: 0x0000000000000000
- +0x0B0: 0x0000000000000000
- +0x0B8: 0x0000000000000000
- +0x0C0: 0x0000000000000000
- +0x0C8: 0x0000000000000000
- +0x0D0: 0xFFFFFFFFFFFFFFB8
- +0x0D8: 0x0000000000000000
- +0x0E0: 0x0000000000000000
- +0x0E8: 0x0000000000000000

## Raw static vtable region secondary_vtable_B

- +0x000: 0x0000000000000000
- +0x008: 0x0000000000000000
- +0x010: 0x0000000000000000
- +0x018: 0x0000000000000000
- +0x020: 0x0000000000000000
- +0x028: 0x0000000000000000
- +0x030: 0x0000000000000000
- +0x038: 0x0000000000000000
- +0x040: 0x0000000000000000
- +0x048: 0x0000000000000000
- +0x050: 0x0000000000000000
- +0x058: 0x0000000000000000
- +0x060: 0x0000000000000000
- +0x068: 0x0000000000000000
- +0x070: 0x0000000000000000
- +0x078: 0x0000000000000000
- +0x080: 0x0000000000000000
- +0x088: 0xFFFFFFFFFFFFFFB8
- +0x090: 0x0000000000000000
- +0x098: 0x0000000000000000
- +0x0A0: 0x0000000000000000
- +0x0A8: 0x0000000000000000
- +0x0B0: 0x0000000000000000
- +0x0B8: 0x0000000000000000
- +0x0C0: 0x0000000000000000
- +0x0C8: 0x0000000000000000
- +0x0D0: 0xFFFFFFFFFFFFFFB0
- +0x0D8: 0x0000000000000000
- +0x0E0: 0x0000000000000000
- +0x0E8: 0x0000000000000000

## Disassembly context_allocator

    0x02888630 str x21, [sp, #-0x30]!
    0x02888634 stp x20, x19, [sp, #0x10]
    0x02888638 stp x29, x30, [sp, #0x20]
    0x0288863C add x29, sp, #0x20
    0x02888640 adrp x8, #0x4279000
    0x02888644 ldr x8, [x8, #0x520]
    0x02888648 ldarb w8, [x8]
    0x0288864C mov x19, x0
    0x02888650 tbz w8, #0, #0x278871c
    0x02888654 adrp x8, #0x4279000
    0x02888658 ldr x8, [x8, #0x528]
    0x0288865C ldr w0, [x8]
    0x02888660 bl #0x32a3880
    0x02888664 ldr x8, [x0, #0x80]
    0x02888668 cmp x8, #0x10
    0x0288866C b.hs #0x2788764
    0x02888670 str x19, [x0, x8, lsl #3]
    0x02888674 ldr x8, [x0, #0x80]
    0x02888678 add x8, x8, #1
    0x0288867C str x8, [x0, #0x80]
    0x02888680 ldr x8, [x19]
    0x02888684 ldr x8, [x8, #0x10]
    0x02888688 mov x20, x0
    0x0288868C mov w1, #0x350
    0x02888690 mov x0, x19
    0x02888694 mov w2, #0x10
    0x02888698 blr x8
    0x0288869C mov x21, x0
    0x028886A0 cbz x0, #0x27886dc
    0x028886A4 mov x0, x21
    0x028886A8 bl #0x10458e8
    0x028886AC mov w8, #0x350
    0x028886B0 mov w9, #0x10
    0x028886B4 stp x19, x21, [x21, #8]
    0x028886B8 stp x8, x9, [x21, #0x18]
    0x028886BC ldr x8, [x20, #0x80]
    0x028886C0 sub x8, x8, #1
    0x028886C4 str x8, [x20, #0x80]
    0x028886C8 ldp x29, x30, [sp, #0x20]
    0x028886CC mov x0, x21
    0x028886D0 ldp x20, x19, [sp, #0x10]
    0x028886D4 ldr x21, [sp], #0x30
    0x028886D8 ret 
    0x028886DC ldr x8, [x19]
    0x028886E0 mov x0, x19
    0x028886E4 ldr x8, [x8, #0xb8]
    0x028886E8 blr x8
    0x028886EC mov x0, xzr
    0x028886F0 bl #0x10458e8
    0x028886F4 mov w8, #8
    0x028886F8 str x19, [x8]
    0x028886FC mov w8, #0x10
    0x02888700 mov w9, #0x18
    0x02888704 mov w10, #0x350
    0x02888708 str xzr, [x8]
    0x0288870C str x10, [x9]
    0x02888710 mov w9, #0x20
    0x02888714 str x8, [x9]
    0x02888718 b #0x27886bc
    0x0288871C adrp x0, #0x4279000
    0x02888720 ldr x0, [x0, #0x520]
    0x02888724 bl #0x32a2e00
    0x02888728 cbz w0, #0x2788654
    0x0288872C adrp x20, #0x4279000
    0x02888730 ldr x20, [x20, #0x528]
    0x02888734 mov x0, x20
    0x02888738 bl #0x7a62a4
    0x0288873C adrp x0, #0x4279000
    0x02888740 ldr x0, [x0, #0x530]
    0x02888744 adrp x2, #0x401a000
    0x02888748 add x2, x2, #0
    0x0288874C mov x1, x20
    0x02888750 bl #0x250
    0x02888754 adrp x0, #0x4279000
    0x02888758 ldr x0, [x0, #0x520]
    0x0288875C bl #0x32a2e10
    0x02888760 b #0x2788654
    0x02888764 bl #0x32a24d0
    0x02888768 ldrb w0, [x1]
    0x0288876C b #0x2788774
    0x02888770 ret 
    0x02888774 tbz w0, #0, #0x27887b4

## Disassembly slot_factory_wrapper

    0x0114725C str x19, [sp, #-0x20]!
    0x01147260 stp x29, x30, [sp, #0x10]
    0x01147264 add x29, sp, #0x10
    0x01147268 mov x19, x8
    0x0114726C bl #0x104bc50
    0x01147270 str x0, [x19]
    0x01147274 cbz x0, #0x10472b0
    0x01147278 ldr x19, [x0, #0x58]
    0x0114727C ldr x0, [x19, #0x18]
    0x01147280 cbz x0, #0x10472bc
    0x01147284 ldr x8, [x19, #0x10]
    0x01147288 cbnz x8, #0x104729c
    0x0114728C ldr x8, [x0]
    0x01147290 ldr x8, [x8]
    0x01147294 blr x8
    0x01147298 str x0, [x19, #0x10]
    0x0114729C add x8, x19, #0xc
    0x011472A0 ldaxr w9, [x8]
    0x011472A4 add w9, w9, #1
    0x011472A8 stlxr w10, w9, [x8]
    0x011472AC cbnz w10, #0x10472a0
    0x011472B0 ldp x29, x30, [sp, #0x10]
    0x011472B4 ldr x19, [sp], #0x20
    0x011472B8 ret 
    0x011472BC adrp x0, #0x3896000
    0x011472C0 add x0, x0, #0x322
    0x011472C4 mov x1, x0
    0x011472C8 mov x2, x0
    0x011472CC mov w3, wzr
    0x011472D0 bl #0x32a3260

## Disassembly slot_object_allocator

    0x0114BC50 stp x22, x21, [sp, #-0x30]!
    0x0114BC54 stp x20, x19, [sp, #0x10]
    0x0114BC58 stp x29, x30, [sp, #0x20]
    0x0114BC5C add x29, sp, #0x20
    0x0114BC60 adrp x8, #0x4279000
    0x0114BC64 ldr x8, [x8, #0x520]
    0x0114BC68 ldarb w8, [x8]
    0x0114BC6C mov x19, x0
    0x0114BC70 tbz w8, #0, #0x104bd3c
    0x0114BC74 adrp x8, #0x4279000
    0x0114BC78 ldr x8, [x8, #0x528]
    0x0114BC7C ldr w0, [x8]
    0x0114BC80 bl #0x32a3880
    0x0114BC84 ldr x8, [x0, #0x80]
    0x0114BC88 cmp x8, #0x10
    0x0114BC8C b.hs #0x104bd84
    0x0114BC90 str x19, [x0, x8, lsl #3]
    0x0114BC94 ldr x8, [x0, #0x80]
    0x0114BC98 add x8, x8, #1
    0x0114BC9C str x8, [x0, #0x80]
    0x0114BCA0 ldr x8, [x19]
    0x0114BCA4 ldr x8, [x8, #0x10]
    0x0114BCA8 mov w21, #0xf448
    0x0114BCAC movk w21, #1, lsl #16
    0x0114BCB0 mov x20, x0
    0x0114BCB4 mov x0, x19
    0x0114BCB8 mov x1, x21
    0x0114BCBC mov w2, #8
    0x0114BCC0 blr x8
    0x0114BCC4 mov x22, x0
    0x0114BCC8 cbz x0, #0x104bd00
    0x0114BCCC mov x0, x22
    0x0114BCD0 bl #0x102e220
    0x0114BCD4 mov w8, #8
    0x0114BCD8 stp x19, x22, [x22, #8]
    0x0114BCDC stp x21, x8, [x22, #0x18]
    0x0114BCE0 ldr x8, [x20, #0x80]
    0x0114BCE4 sub x8, x8, #1
    0x0114BCE8 str x8, [x20, #0x80]
    0x0114BCEC ldp x29, x30, [sp, #0x20]
    0x0114BCF0 mov x0, x22
    0x0114BCF4 ldp x20, x19, [sp, #0x10]
    0x0114BCF8 ldp x22, x21, [sp], #0x30
    0x0114BCFC ret 
    0x0114BD00 ldr x8, [x19]
    0x0114BD04 mov x0, x19
    0x0114BD08 ldr x8, [x8, #0xb8]
    0x0114BD0C blr x8
    0x0114BD10 mov x0, xzr
    0x0114BD14 bl #0x102e220
    0x0114BD18 mov w8, #8
    0x0114BD1C mov w9, #0x10
    0x0114BD20 str x19, [x8]
    0x0114BD24 str xzr, [x9]
    0x0114BD28 mov w9, #0x18
    0x0114BD2C str x21, [x9]
    0x0114BD30 mov w9, #0x20
    0x0114BD34 str x8, [x9]
    0x0114BD38 b #0x104bce0
    0x0114BD3C adrp x0, #0x4279000
    0x0114BD40 ldr x0, [x0, #0x520]
    0x0114BD44 bl #0x32a2e00
    0x0114BD48 cbz w0, #0x104bc74
    0x0114BD4C adrp x20, #0x4279000
    0x0114BD50 ldr x20, [x20, #0x528]
    0x0114BD54 mov x0, x20
    0x0114BD58 bl #0x7a62a4
    0x0114BD5C adrp x0, #0x4279000
    0x0114BD60 ldr x0, [x0, #0x530]
    0x0114BD64 adrp x2, #0x401a000
    0x0114BD68 add x2, x2, #0
    0x0114BD6C mov x1, x20
    0x0114BD70 bl #0x250
    0x0114BD74 adrp x0, #0x4279000
    0x0114BD78 ldr x0, [x0, #0x520]
    0x0114BD7C bl #0x32a2e10
    0x0114BD80 b #0x104bc74
    0x0114BD84 bl #0x32a24d0
    0x0114BD88 str x21, [sp, #-0x30]!
    0x0114BD8C stp x20, x19, [sp, #0x10]
    0x0114BD90 stp x29, x30, [sp, #0x20]
    0x0114BD94 add x29, sp, #0x20
    0x0114BD98 adrp x8, #0x4279000
    0x0114BD9C ldr x8, [x8, #0x520]

## Disassembly object_initializer_or_error

    0x0112E220 str x19, [sp, #-0x20]!
    0x0112E224 stp x29, x30, [sp, #0x10]
    0x0112E228 add x29, sp, #0x10
    0x0112E22C mov x19, x0
    0x0112E230 bl #0x7a93d8
    0x0112E234 adrp x8, #0x40f2000
    0x0112E238 add x8, x8, #0x3c8
    0x0112E23C str x8, [x19]
    0x0112E240 add x9, x8, #0x70
    0x0112E244 add x8, x8, #0xb8
    0x0112E248 mov w2, #0xf54
    0x0112E24C stp x9, x8, [x19, #0x48]
    0x0112E250 mov w8, #0xe4cc
    0x0112E254 movk w8, #1, lsl #16
    0x0112E258 add x0, x19, x8
    0x0112E25C mov w1, wzr
    0x0112E260 bl #0x32a24a0
    0x0112E264 mov w8, #0xf420
    0x0112E268 movk w8, #1, lsl #16
    0x0112E26C add x0, x19, x8
    0x0112E270 mov w1, wzr
    0x0112E274 mov w2, wzr
    0x0112E278 bl #0x32a3110
    0x0112E27C mov w8, #0xf440
    0x0112E280 movk w8, #1, lsl #16
    0x0112E284 add x0, x19, #0x68
    0x0112E288 mov w2, #0xe464
    0x0112E28C movk w2, #1, lsl #16
    0x0112E290 mov w1, wzr
    0x0112E294 str xzr, [x19, x8]
    0x0112E298 bl #0x32a24a0
    0x0112E29C mov w8, #1
    0x0112E2A0 str w8, [x19, #0x68]
    0x0112E2A4 ldp x29, x30, [sp, #0x10]
    0x0112E2A8 ldr x19, [sp], #0x20
    0x0112E2AC ret 
    0x0112E2B0 str x19, [sp, #-0x20]!
    0x0112E2B4 stp x29, x30, [sp, #0x10]
    0x0112E2B8 add x29, sp, #0x10
    0x0112E2BC adrp x8, #0x40f2000
    0x0112E2C0 add x8, x8, #0x3c8
    0x0112E2C4 str x8, [x0]
    0x0112E2C8 add x9, x8, #0x70
    0x0112E2CC add x8, x8, #0xb8
    0x0112E2D0 mov x19, x0
    0x0112E2D4 stp x9, x8, [x0, #0x48]
    0x0112E2D8 mov w8, #0xf420
    0x0112E2DC movk w8, #1, lsl #16
    0x0112E2E0 add x0, x0, x8
    0x0112E2E4 bl #0x32a30e0
    0x0112E2E8 adrp x8, #0x4279000
    0x0112E2EC ldr x8, [x8, #0x610]
    0x0112E2F0 add x9, x8, #0x10
    0x0112E2F4 add x10, x8, #0x58
    0x0112E2F8 add x8, x8, #0xa0
    0x0112E2FC str x9, [x19]

## Disassembly zukan_read_method

    0x0112E580 str x19, [sp, #-0x20]!
    0x0112E584 stp x29, x30, [sp, #0x10]
    0x0112E588 add x29, sp, #0x10
    0x0112E58C mov x19, x0
    0x0112E590 bl #0x103749c
    0x0112E594 tst w0, #0xff
    0x0112E598 b.eq #0x102e5a8
    0x0112E59C ldp x29, x30, [sp, #0x10]
    0x0112E5A0 ldr x19, [sp], #0x20
    0x0112E5A4 ret 
    0x0112E5A8 ldr x0, [x19, #0x60]
    0x0112E5AC cbz x0, #0x102e59c
    0x0112E5B0 ldr x8, [x0]
    0x0112E5B4 adrp x1, #0x3979000
    0x0112E5B8 add x1, x1, #4
    0x0112E5BC ldp x29, x30, [sp, #0x10]
    0x0112E5C0 ldr x2, [x8, #0x50]
    0x0112E5C4 ldr x19, [sp], #0x20
    0x0112E5C8 br x2
    0x0112E5CC sub sp, sp, #0x50
    0x0112E5D0 stp x22, x21, [sp, #0x20]
    0x0112E5D4 stp x20, x19, [sp, #0x30]
    0x0112E5D8 stp x29, x30, [sp, #0x40]
    0x0112E5DC add x29, sp, #0x40
    0x0112E5E0 adrp x20, #0x4279000
    0x0112E5E4 ldr x20, [x20, #0x558]
    0x0112E5E8 ldarb w8, [x20]
    0x0112E5EC mov x19, x0
    0x0112E5F0 tbz w8, #0, #0x102e678
    0x0112E5F4 adrp x21, #0x4279000
    0x0112E5F8 ldr x21, [x21, #0x560]
    0x0112E5FC adrp x22, #0x4279000
    0x0112E600 ldr x22, [x22, #0x568]
    0x0112E604 add x1, sp, #0x10
    0x0112E608 str wzr, [sp, #0x10]
    0x0112E60C ldr x0, [x21]

## Disassembly zukan_write_method

    0x0112E6F0 str x23, [sp, #-0x40]!
    0x0112E6F4 stp x22, x21, [sp, #0x10]
    0x0112E6F8 stp x20, x19, [sp, #0x20]
    0x0112E6FC stp x29, x30, [sp, #0x30]
    0x0112E700 add x29, sp, #0x30
    0x0112E704 add x19, x0, #0xa0
    0x0112E708 mov x22, x0
    0x0112E70C mov x0, x19
    0x0112E710 mov x20, x2
    0x0112E714 mov x21, x1
    0x0112E718 bl #0x32a30f0
    0x0112E71C add x8, x22, #0xc0
    0x0112E720 ldarb w8, [x8]
    0x0112E724 tbnz w8, #0, #0x102e7e0
    0x0112E728 ldp x9, x8, [x22, #8]
    0x0112E72C sub x14, x8, x9
    0x0112E730 cmp x14, #1
    0x0112E734 b.lt #0x102e780
    0x0112E738 mov x11, #-0x5555555555555556
    0x0112E73C mov w10, #0x8706
    0x0112E740 movk w10, #0x216, lsl #16
    0x0112E744 movk x11, #0xaaab
    0x0112E748 mov w12, #0x30
    0x0112E74C mov x13, x8
    0x0112E750 umulh x14, x14, x11
    0x0112E754 lsr x14, x14, #6
    0x0112E758 madd x23, x14, x12, x9
    0x0112E75C ldr w14, [x23]
    0x0112E760 cmp w14, w10
    0x0112E764 b.eq #0x102e784
    0x0112E768 add x14, x23, #0x30
    0x0112E76C csel x13, x13, x23, lo
    0x0112E770 csel x9, x14, x9, lo
    0x0112E774 sub x14, x13, x9
    0x0112E778 cmp x14, #0
    0x0112E77C b.gt #0x102e750
    0x0112E780 mov x23, x8
    0x0112E784 cbz x23, #0x102e7cc
    0x0112E788 cmp x8, x23
    0x0112E78C b.eq #0x102e7cc
    0x0112E790 mov x0, x22
    0x0112E794 mov x1, x23
    0x0112E798 bl #0xfd7974
    0x0112E79C tbz w0, #0, #0x102e7f8
    0x0112E7A0 mov x0, x22
    0x0112E7A4 mov x1, x23
    0x0112E7A8 mov x2, x21
    0x0112E7AC mov x3, x20
    0x0112E7B0 bl #0x10379c4
    0x0112E7B4 mov x0, x19
    0x0112E7B8 ldp x29, x30, [sp, #0x30]
    0x0112E7BC ldp x20, x19, [sp, #0x20]
    0x0112E7C0 ldp x22, x21, [sp, #0x10]
    0x0112E7C4 ldr x23, [sp], #0x40
    0x0112E7C8 b #0x32a3100
    0x0112E7CC mov x0, x22
    0x0112E7D0 mov x1, x21
    0x0112E7D4 mov x2, x20
    0x0112E7D8 bl #0x1037bdc
    0x0112E7DC b #0x102e7b4
    0x0112E7E0 ldr x0, [x22, #0x60]
    0x0112E7E4 cbz x0, #0x102e7b4
    0x0112E7E8 ldr x8, [x0]
    0x0112E7EC ldr x8, [x8, #0x60]
    0x0112E7F0 blr x8
    0x0112E7F4 b #0x102e7b4
    0x0112E7F8 ldr x0, [x22, #0x60]
    0x0112E7FC cbz x0, #0x102e7a0
    0x0112E800 ldr x8, [x0]
    0x0112E804 adrp x1, #0x3979000
    0x0112E808 add x1, x1, #4
    0x0112E80C ldr x8, [x8, #0x58]
    0x0112E810 blr x8
    0x0112E814 b #0x102e7a0
    0x0112E818 ldr w9, [x0, #0x6c]
    0x0112E81C sub w8, w1, #1
    0x0112E820 mov w10, #1
    0x0112E824 lsl w10, w10, w1
    0x0112E828 cmp w8, #5
    0x0112E82C csinc w8, w10, wzr, lo

## Disassembly get_pokedex_slot

    0x01148F20 str x19, [sp, #-0x20]!
    0x01148F24 stp x29, x30, [sp, #0x10]
    0x01148F28 add x29, sp, #0x10
    0x01148F2C ldr x9, [x0, #0x298]
    0x01148F30 str x9, [x8]
    0x01148F34 cbz x9, #0x1048f70
    0x01148F38 ldr x19, [x9, #0x58]
    0x01148F3C ldr x0, [x19, #0x18]
    0x01148F40 cbz x0, #0x1048f7c
    0x01148F44 ldr x8, [x19, #0x10]
    0x01148F48 cbnz x8, #0x1048f5c
    0x01148F4C ldr x8, [x0]
    0x01148F50 ldr x8, [x8]
    0x01148F54 blr x8
    0x01148F58 str x0, [x19, #0x10]
    0x01148F5C add x8, x19, #0xc
    0x01148F60 ldaxr w9, [x8]
    0x01148F64 add w9, w9, #1
    0x01148F68 stlxr w10, w9, [x8]
    0x01148F6C cbnz w10, #0x1048f60
    0x01148F70 ldp x29, x30, [sp, #0x10]
    0x01148F74 ldr x19, [sp], #0x20
    0x01148F78 ret 
    0x01148F7C adrp x0, #0x3896000
    0x01148F80 add x0, x0, #0x322
    0x01148F84 mov x1, x0
    0x01148F88 mov x2, x0
    0x01148F8C mov w3, wzr
    0x01148F90 bl #0x32a3260
    0x01148F94 str x19, [sp, #-0x20]!
    0x01148F98 stp x29, x30, [sp, #0x10]

## Disassembly primary_vtable_get_registered_ref

    0x008A782C add x1, x0, #0x58
    0x008A7830 mov x0, x8
    0x008A7834 stp xzr, xzr, [x8]
    0x008A7838 b #0x7802f0
    0x008A783C sub sp, sp, #0x30
    0x008A7840 stp xzr, x19, [sp, #8]
    0x008A7844 stp x29, x30, [sp, #0x20]
    0x008A7848 add x29, sp, #0x20
    0x008A784C add x1, x0, #0x58
    0x008A7850 mov x0, sp
    0x008A7854 str xzr, [sp]
    0x008A7858 mov x19, x8
    0x008A785C bl #0x7802f0
    0x008A7860 mov x1, sp
    0x008A7864 mov x0, x19
    0x008A7868 stp xzr, xzr, [x19]
    0x008A786C bl #0x780560
    0x008A7870 ldr x19, [sp]
    0x008A7874 cbz x19, #0x7a78d0
    0x008A7878 add x8, x19, #8
    0x008A787C ldaxr w9, [x8]
    0x008A7880 subs w9, w9, #1
    0x008A7884 stlxr w10, w9, [x8]
    0x008A7888 cbnz w10, #0x7a787c
    0x008A788C b.ne #0x7a78d0
    0x008A7890 str xzr, [x19, #0x10]
    0x008A7894 adrp x8, #0x4279000
    0x008A7898 ldr x8, [x8, #0x498]
    0x008A789C ldarb w8, [x8]
    0x008A78A0 tbz w8, #0, #0x7a78e0
    0x008A78A4 adrp x8, #0x4279000
    0x008A78A8 ldr x8, [x8, #0x4a0]
    0x008A78AC adrp x9, #0x4279000
    0x008A78B0 ldr x8, [x8]
    0x008A78B4 ldr x9, [x9, #0x4a8]
    0x008A78B8 str x8, [x9]
    0x008A78BC ldr x9, [x19]
    0x008A78C0 add x0, x8, #0xd8
    0x008A78C4 sub x1, x29, #8
    0x008A78C8 stur x9, [x29, #-8]
    0x008A78CC bl #0x2944274
    0x008A78D0 ldp x29, x30, [sp, #0x20]
    0x008A78D4 ldr x19, [sp, #0x10]
    0x008A78D8 add sp, sp, #0x30
    0x008A78DC ret 
    0x008A78E0 adrp x0, #0x4279000
    0x008A78E4 ldr x0, [x0, #0x498]
    0x008A78E8 bl #0x32a2e00
    0x008A78EC cbz w0, #0x7a78a4
    0x008A78F0 adrp x0, #0x4279000
    0x008A78F4 adrp x1, #0x4279000
    0x008A78F8 ldr x0, [x0, #0x590]
    0x008A78FC ldr x1, [x1, #0x4a0]
    0x008A7900 adrp x2, #0x401a000
    0x008A7904 add x2, x2, #0
    0x008A7908 bl #0x250
    0x008A790C adrp x0, #0x4279000
    0x008A7910 ldr x0, [x0, #0x498]
    0x008A7914 bl #0x32a2e10
    0x008A7918 b #0x7a78a4

## Disassembly secondary_vtable_get_registered_ref

    0x008A7C1C str x19, [sp, #-0x20]!
    0x008A7C20 stp x29, x30, [sp, #0x10]
    0x008A7C24 add x29, sp, #0x10
    0x008A7C28 ldr x19, [x0, #0x10]
    0x008A7C2C ldr x0, [x19, #0x18]
    0x008A7C30 cbz x0, #0x7a7c6c
    0x008A7C34 ldr x8, [x19, #0x10]
    0x008A7C38 cbnz x8, #0x7a7c4c
    0x008A7C3C ldr x8, [x0]
    0x008A7C40 ldr x8, [x8]
    0x008A7C44 blr x8
    0x008A7C48 str x0, [x19, #0x10]
    0x008A7C4C add x8, x19, #0xc
    0x008A7C50 ldaxr w9, [x8]
    0x008A7C54 add w9, w9, #1
    0x008A7C58 stlxr w10, w9, [x8]
    0x008A7C5C cbnz w10, #0x7a7c50
    0x008A7C60 ldp x29, x30, [sp, #0x10]
    0x008A7C64 ldr x19, [sp], #0x20
    0x008A7C68 ret 
    0x008A7C6C adrp x0, #0x3896000
    0x008A7C70 add x0, x0, #0x322
    0x008A7C74 mov x1, x0
    0x008A7C78 mov x2, x0
    0x008A7C7C mov w3, wzr
    0x008A7C80 bl #0x32a3260
    0x008A7C84 mov x8, x0
    0x008A7C88 sub x0, x0, #0x48
    0x008A7C8C ldr x8, [x8, #0x10]
    0x008A7C90 add x9, x8, #0xc
    0x008A7C94 ldaxr w10, [x9]
    0x008A7C98 subs w10, w10, #1
    0x008A7C9C stlxr w11, w10, [x9]
    0x008A7CA0 cbnz w11, #0x7a7c94
    0x008A7CA4 b.eq #0x7a7cac
    0x008A7CA8 ret 
    0x008A7CAC str xzr, [x8, #0x18]
    0x008A7CB0 ldr x8, [x0]
    0x008A7CB4 ldr x1, [x8, #0x20]
    0x008A7CB8 br x1
    0x008A7CBC add x1, x0, #0x10
    0x008A7CC0 mov x0, x8
    0x008A7CC4 stp xzr, xzr, [x8]
    0x008A7CC8 b #0x7802f0

## Disassembly primary_vtable_callback40

    0x0112E3D0 str x19, [sp, #-0x20]!
    0x0112E3D4 stp x29, x30, [sp, #0x10]
    0x0112E3D8 add x29, sp, #0x10
    0x0112E3DC mov x19, x0
    0x0112E3E0 add x0, x0, #0x68
    0x0112E3E4 mov w2, #0xe464
    0x0112E3E8 movk w2, #1, lsl #16
    0x0112E3EC mov w1, wzr
    0x0112E3F0 bl #0x32a24a0
    0x0112E3F4 mov w8, #1
    0x0112E3F8 str w8, [x19, #0x68]
    0x0112E3FC ldr x8, [x19]
    0x0112E400 ldp x29, x30, [sp, #0x10]
    0x0112E404 ldr x1, [x8, #0x50]
    0x0112E408 mov x0, x19
    0x0112E40C ldr x19, [sp], #0x20
    0x0112E410 br x1

## Disassembly primary_vtable_callback48_load

    0x0112E414 sub sp, sp, #0x50
    0x0112E418 str x23, [sp, #0x10]
    0x0112E41C stp x22, x21, [sp, #0x20]
    0x0112E420 stp x20, x19, [sp, #0x30]
    0x0112E424 stp x29, x30, [sp, #0x40]
    0x0112E428 add x29, sp, #0x40
    0x0112E42C adrp x21, #0x4279000
    0x0112E430 ldr x21, [x21, #0x558]
    0x0112E434 ldarb w8, [x21]
    0x0112E438 mov x19, x0
    0x0112E43C tbz w8, #0, #0x102e508
    0x0112E440 adrp x22, #0x4279000
    0x0112E444 ldr x22, [x22, #0x560]
    0x0112E448 adrp x23, #0x4279000
    0x0112E44C ldr x23, [x23, #0x568]
    0x0112E450 add x1, sp, #8
    0x0112E454 str wzr, [sp, #8]
    0x0112E458 ldr x0, [x22]
    0x0112E45C str x0, [x23]
    0x0112E460 bl #0x1047f0c
    0x0112E464 adrp x1, #0x3979000
    0x0112E468 add x1, x1, #0
    0x0112E46C mov x20, x0
    0x0112E470 bl #0xfd9140
    0x0112E474 tst w0, #0xff
    0x0112E478 b.eq #0x102e4dc
    0x0112E47C lsr x8, x0, #0x20
    0x0112E480 cmp x8, #1
    0x0112E484 b.ne #0x102e4c4
    0x0112E488 ldarb w8, [x21]
    0x0112E48C tbz w8, #0, #0x102e544
    0x0112E490 ldr x0, [x22]
    0x0112E494 add x1, sp, #0x1c
    0x0112E498 str wzr, [sp, #0x1c]
    0x0112E49C str x0, [x23]
    0x0112E4A0 bl #0x1047f0c
    0x0112E4A4 add x8, x19, #0x6c
    0x0112E4A8 str x8, [sp, #8]
    0x0112E4AC mov w8, #0xe460
    0x0112E4B0 movk w8, #1, lsl #16
    0x0112E4B4 add x1, sp, #8
    0x0112E4B8 str x8, [sp]
    0x0112E4BC mov x2, sp
    0x0112E4C0 bl #0x102e580
    0x0112E4C4 ldp x29, x30, [sp, #0x40]
    0x0112E4C8 ldr x23, [sp, #0x10]
    0x0112E4CC ldp x20, x19, [sp, #0x30]
    0x0112E4D0 ldp x22, x21, [sp, #0x20]
    0x0112E4D4 add sp, sp, #0x50
    0x0112E4D8 ret 
    0x0112E4DC ldr x8, [x20, #0x60]
    0x0112E4E0 cbz x8, #0x102e47c
    0x0112E4E4 ldr x9, [x8]
    0x0112E4E8 adrp x1, #0x3979000
    0x0112E4EC add x1, x1, #0
    0x0112E4F0 ldr x9, [x9, #0x50]
    0x0112E4F4 mov x20, x0
    0x0112E4F8 mov x0, x8
    0x0112E4FC blr x9
    0x0112E500 mov x0, x20
    0x0112E504 b #0x102e47c
    0x0112E508 adrp x0, #0x4279000
    0x0112E50C ldr x0, [x0, #0x558]
    0x0112E510 bl #0x32a2e00
    0x0112E514 cbz w0, #0x102e440
    0x0112E518 adrp x0, #0x4279000
    0x0112E51C adrp x1, #0x4279000
    0x0112E520 ldr x0, [x0, #0x700]
    0x0112E524 ldr x1, [x1, #0x560]
    0x0112E528 adrp x2, #0x401a000
    0x0112E52C add x2, x2, #0
    0x0112E530 bl #0x250
    0x0112E534 adrp x0, #0x4279000
    0x0112E538 ldr x0, [x0, #0x558]
    0x0112E53C bl #0x32a2e10
    0x0112E540 b #0x102e440
    0x0112E544 adrp x0, #0x4279000
    0x0112E548 ldr x0, [x0, #0x558]
    0x0112E54C bl #0x32a2e00
    0x0112E550 cbz w0, #0x102e490
    0x0112E554 adrp x0, #0x4279000
    0x0112E558 adrp x1, #0x4279000
    0x0112E55C ldr x0, [x0, #0x700]
    0x0112E560 ldr x1, [x1, #0x560]
    0x0112E564 adrp x2, #0x401a000
    0x0112E568 add x2, x2, #0
    0x0112E56C bl #0x250
    0x0112E570 adrp x0, #0x4279000
    0x0112E574 ldr x0, [x0, #0x558]
    0x0112E578 bl #0x32a2e10
    0x0112E57C b #0x102e490
    0x0112E580 str x19, [sp, #-0x20]!
    0x0112E584 stp x29, x30, [sp, #0x10]
    0x0112E588 add x29, sp, #0x10
    0x0112E58C mov x19, x0
    0x0112E590 bl #0x103749c
    0x0112E594 tst w0, #0xff
    0x0112E598 b.eq #0x102e5a8
    0x0112E59C ldp x29, x30, [sp, #0x10]
    0x0112E5A0 ldr x19, [sp], #0x20
    0x0112E5A4 ret 
    0x0112E5A8 ldr x0, [x19, #0x60]
    0x0112E5AC cbz x0, #0x102e59c
    0x0112E5B0 ldr x8, [x0]
    0x0112E5B4 adrp x1, #0x3979000
    0x0112E5B8 add x1, x1, #4
    0x0112E5BC ldp x29, x30, [sp, #0x10]
    0x0112E5C0 ldr x2, [x8, #0x50]
    0x0112E5C4 ldr x19, [sp], #0x20
    0x0112E5C8 br x2

## Disassembly primary_vtable_callback50_write

    0x0112E5CC sub sp, sp, #0x50
    0x0112E5D0 stp x22, x21, [sp, #0x20]
    0x0112E5D4 stp x20, x19, [sp, #0x30]
    0x0112E5D8 stp x29, x30, [sp, #0x40]
    0x0112E5DC add x29, sp, #0x40
    0x0112E5E0 adrp x20, #0x4279000
    0x0112E5E4 ldr x20, [x20, #0x558]
    0x0112E5E8 ldarb w8, [x20]
    0x0112E5EC mov x19, x0
    0x0112E5F0 tbz w8, #0, #0x102e678
    0x0112E5F4 adrp x21, #0x4279000
    0x0112E5F8 ldr x21, [x21, #0x560]
    0x0112E5FC adrp x22, #0x4279000
    0x0112E600 ldr x22, [x22, #0x568]
    0x0112E604 add x1, sp, #0x10
    0x0112E608 str wzr, [sp, #0x10]
    0x0112E60C ldr x0, [x21]
    0x0112E610 str x0, [x22]
    0x0112E614 bl #0x1047f0c
    0x0112E618 add x2, x19, #0x68
    0x0112E61C adrp x1, #0x3979000
    0x0112E620 add x1, x1, #0
    0x0112E624 bl #0xfd8f8c
    0x0112E628 ldarb w8, [x20]
    0x0112E62C tbz w8, #0, #0x102e6b4
    0x0112E630 ldr x0, [x21]
    0x0112E634 add x1, sp, #0x1c
    0x0112E638 str wzr, [sp, #0x1c]
    0x0112E63C str x0, [x22]
    0x0112E640 bl #0x1047f0c
    0x0112E644 add x8, x19, #0x6c
    0x0112E648 str x8, [sp, #0x10]
    0x0112E64C mov w8, #0xe460
    0x0112E650 movk w8, #1, lsl #16
    0x0112E654 add x1, sp, #0x10
    0x0112E658 str x8, [sp, #8]
    0x0112E65C add x2, sp, #8
    0x0112E660 bl #0x102e6f0
    0x0112E664 ldp x29, x30, [sp, #0x40]
    0x0112E668 ldp x20, x19, [sp, #0x30]
    0x0112E66C ldp x22, x21, [sp, #0x20]
    0x0112E670 add sp, sp, #0x50
    0x0112E674 ret 
    0x0112E678 adrp x0, #0x4279000
    0x0112E67C ldr x0, [x0, #0x558]
    0x0112E680 bl #0x32a2e00
    0x0112E684 cbz w0, #0x102e5f4
    0x0112E688 adrp x0, #0x4279000
    0x0112E68C adrp x1, #0x4279000
    0x0112E690 ldr x0, [x0, #0x700]
    0x0112E694 ldr x1, [x1, #0x560]
    0x0112E698 adrp x2, #0x401a000
    0x0112E69C add x2, x2, #0
    0x0112E6A0 bl #0x250
    0x0112E6A4 adrp x0, #0x4279000
    0x0112E6A8 ldr x0, [x0, #0x558]
    0x0112E6AC bl #0x32a2e10
    0x0112E6B0 b #0x102e5f4
    0x0112E6B4 adrp x0, #0x4279000
    0x0112E6B8 ldr x0, [x0, #0x558]
    0x0112E6BC bl #0x32a2e00
    0x0112E6C0 cbz w0, #0x102e630
    0x0112E6C4 adrp x0, #0x4279000
    0x0112E6C8 adrp x1, #0x4279000
    0x0112E6CC ldr x0, [x0, #0x700]
    0x0112E6D0 ldr x1, [x1, #0x560]
    0x0112E6D4 adrp x2, #0x401a000
    0x0112E6D8 add x2, x2, #0
    0x0112E6DC bl #0x250
    0x0112E6E0 adrp x0, #0x4279000
    0x0112E6E4 ldr x0, [x0, #0x558]
    0x0112E6E8 bl #0x32a2e10
    0x0112E6EC b #0x102e630

## Disassembly primary_vtable_callback58

    0x010D741C ret 
    0x010D7420 stp x20, x19, [sp, #-0x20]!
    0x010D7424 stp x29, x30, [sp, #0x10]
    0x010D7428 add x29, sp, #0x10
    0x010D742C adrp x8, #0x427e000
    0x010D7430 ldr x8, [x8, #0x428]
    0x010D7434 ldarb w8, [x8]
    0x010D7438 tbz w8, #0, #0xfd7450
    0x010D743C adrp x0, #0x427e000
    0x010D7440 ldr x0, [x0, #0x430]
    0x010D7444 ldp x29, x30, [sp, #0x10]
    0x010D7448 ldp x20, x19, [sp], #0x20
    0x010D744C ret 
    0x010D7450 adrp x0, #0x427e000
    0x010D7454 ldr x0, [x0, #0x428]
    0x010D7458 bl #0x32a2e00
    0x010D745C cbz w0, #0xfd743c
    0x010D7460 adrp x19, #0x427e000
    0x010D7464 adrp x8, #0x4279000
    0x010D7468 ldr x19, [x19, #0x430]
    0x010D746C ldr x8, [x8, #0x4d0]
    0x010D7470 adrp x20, #0x4279000
    0x010D7474 ldarb w8, [x8]
    0x010D7478 ldr x20, [x20, #0x4d8]
    0x010D747C tbz w8, #0, #0xfd7494
    0x010D7480 str x20, [x19]
    0x010D7484 adrp x0, #0x427e000
    0x010D7488 ldr x0, [x0, #0x428]
    0x010D748C bl #0x32a2e10
    0x010D7490 b #0xfd743c
    0x010D7494 adrp x0, #0x4279000
    0x010D7498 ldr x0, [x0, #0x4d0]
    0x010D749C bl #0x32a2e00
    0x010D74A0 cbz w0, #0xfd7480
    0x010D74A4 bl #0x77f8f0
    0x010D74A8 str x0, [x20]
    0x010D74AC adrp x0, #0x4279000
    0x010D74B0 ldr x0, [x0, #0x4d0]
    0x010D74B4 bl #0x32a2e10
    0x010D74B8 b #0xfd7480

## Disassembly origin_slot_factory_wrapper_0

    0x01145D44 ldaxr w10, [x9]
    0x01145D48 subs w10, w10, #1
    0x01145D4C stlxr w11, w10, [x9]
    0x01145D50 cbnz w11, #0x1045d44
    0x01145D54 b.eq #0x10464f0
    0x01145D58 ldr x8, [sp]
    0x01145D5C str x8, [x19, #0x288]
    0x01145D60 ldr x0, [x19, #0x98]
    0x01145D64 mov x8, sp
    0x01145D68 bl #0x10471e4
    0x01145D6C ldr x0, [x19, #0x290]
    0x01145D70 str xzr, [x19, #0x290]
    0x01145D74 cbz x0, #0x1045d94
    0x01145D78 ldr x8, [x0, #0x58]
    0x01145D7C add x9, x8, #0xc
    0x01145D80 ldaxr w10, [x9]
    0x01145D84 subs w10, w10, #1
    0x01145D88 stlxr w11, w10, [x9]
    0x01145D8C cbnz w11, #0x1045d80
    0x01145D90 b.eq #0x1046504
    0x01145D94 ldr x8, [sp]
    0x01145D98 str x8, [x19, #0x290]
    0x01145D9C ldr x0, [x19, #0x98]
    0x01145DA0 mov x8, sp
    0x01145DA4 bl #0x104725c
    0x01145DA8 ldr x0, [x19, #0x298]
    0x01145DAC str xzr, [x19, #0x298]
    0x01145DB0 cbz x0, #0x1045dd0
    0x01145DB4 ldr x8, [x0, #0x58]
    0x01145DB8 add x9, x8, #0xc
    0x01145DBC ldaxr w10, [x9]
    0x01145DC0 subs w10, w10, #1
    0x01145DC4 stlxr w11, w10, [x9]
    0x01145DC8 cbnz w11, #0x1045dbc
    0x01145DCC b.eq #0x1046518
    0x01145DD0 ldr x8, [sp]
    0x01145DD4 str x8, [x19, #0x298]
    0x01145DD8 ldr x0, [x19, #0x98]
    0x01145DDC mov x8, sp
    0x01145DE0 bl #0x10472d4
    0x01145DE4 ldr x0, [x19, #0x2a0]
    0x01145DE8 str xzr, [x19, #0x2a0]
    0x01145DEC cbz x0, #0x1045e0c
    0x01145DF0 ldr x8, [x0, #0x58]
    0x01145DF4 add x9, x8, #0xc
    0x01145DF8 ldaxr w10, [x9]
    0x01145DFC subs w10, w10, #1
    0x01145E00 stlxr w11, w10, [x9]

## Disassembly origin_context_constructor_0

    0x02888648 ldarb w8, [x8]
    0x0288864C mov x19, x0
    0x02888650 tbz w8, #0, #0x278871c
    0x02888654 adrp x8, #0x4279000
    0x02888658 ldr x8, [x8, #0x528]
    0x0288865C ldr w0, [x8]
    0x02888660 bl #0x32a3880
    0x02888664 ldr x8, [x0, #0x80]
    0x02888668 cmp x8, #0x10
    0x0288866C b.hs #0x2788764
    0x02888670 str x19, [x0, x8, lsl #3]
    0x02888674 ldr x8, [x0, #0x80]
    0x02888678 add x8, x8, #1
    0x0288867C str x8, [x0, #0x80]
    0x02888680 ldr x8, [x19]
    0x02888684 ldr x8, [x8, #0x10]
    0x02888688 mov x20, x0
    0x0288868C mov w1, #0x350
    0x02888690 mov x0, x19
    0x02888694 mov w2, #0x10
    0x02888698 blr x8
    0x0288869C mov x21, x0
    0x028886A0 cbz x0, #0x27886dc
    0x028886A4 mov x0, x21
    0x028886A8 bl #0x10458e8
    0x028886AC mov w8, #0x350
    0x028886B0 mov w9, #0x10
    0x028886B4 stp x19, x21, [x21, #8]
    0x028886B8 stp x8, x9, [x21, #0x18]
    0x028886BC ldr x8, [x20, #0x80]
    0x028886C0 sub x8, x8, #1
    0x028886C4 str x8, [x20, #0x80]
    0x028886C8 ldp x29, x30, [sp, #0x20]
    0x028886CC mov x0, x21
    0x028886D0 ldp x20, x19, [sp, #0x10]
    0x028886D4 ldr x21, [sp], #0x30
    0x028886D8 ret 
    0x028886DC ldr x8, [x19]
    0x028886E0 mov x0, x19
    0x028886E4 ldr x8, [x8, #0xb8]
    0x028886E8 blr x8
    0x028886EC mov x0, xzr
    0x028886F0 bl #0x10458e8
    0x028886F4 mov w8, #8
    0x028886F8 str x19, [x8]
    0x028886FC mov w8, #0x10
    0x02888700 mov w9, #0x18
    0x02888704 mov w10, #0x350

## Disassembly origin_context_constructor_1

    0x02888690 mov x0, x19
    0x02888694 mov w2, #0x10
    0x02888698 blr x8
    0x0288869C mov x21, x0
    0x028886A0 cbz x0, #0x27886dc
    0x028886A4 mov x0, x21
    0x028886A8 bl #0x10458e8
    0x028886AC mov w8, #0x350
    0x028886B0 mov w9, #0x10
    0x028886B4 stp x19, x21, [x21, #8]
    0x028886B8 stp x8, x9, [x21, #0x18]
    0x028886BC ldr x8, [x20, #0x80]
    0x028886C0 sub x8, x8, #1
    0x028886C4 str x8, [x20, #0x80]
    0x028886C8 ldp x29, x30, [sp, #0x20]
    0x028886CC mov x0, x21
    0x028886D0 ldp x20, x19, [sp, #0x10]
    0x028886D4 ldr x21, [sp], #0x30
    0x028886D8 ret 
    0x028886DC ldr x8, [x19]
    0x028886E0 mov x0, x19
    0x028886E4 ldr x8, [x8, #0xb8]
    0x028886E8 blr x8
    0x028886EC mov x0, xzr
    0x028886F0 bl #0x10458e8
    0x028886F4 mov w8, #8
    0x028886F8 str x19, [x8]
    0x028886FC mov w8, #0x10
    0x02888700 mov w9, #0x18
    0x02888704 mov w10, #0x350
    0x02888708 str xzr, [x8]
    0x0288870C str x10, [x9]
    0x02888710 mov w9, #0x20
    0x02888714 str x8, [x9]
    0x02888718 b #0x27886bc
    0x0288871C adrp x0, #0x4279000
    0x02888720 ldr x0, [x0, #0x520]
    0x02888724 bl #0x32a2e00
    0x02888728 cbz w0, #0x2788654
    0x0288872C adrp x20, #0x4279000
    0x02888730 ldr x20, [x20, #0x528]
    0x02888734 mov x0, x20
    0x02888738 bl #0x7a62a4
    0x0288873C adrp x0, #0x4279000
    0x02888740 ldr x0, [x0, #0x530]
    0x02888744 adrp x2, #0x401a000
    0x02888748 add x2, x2, #0
    0x0288874C mov x1, x20

## Disassembly origin_slot_object_allocator_0

    0x0114720C ldr x8, [x19, #0x10]
    0x01147210 cbnz x8, #0x1047224
    0x01147214 ldr x8, [x0]
    0x01147218 ldr x8, [x8]
    0x0114721C blr x8
    0x01147220 str x0, [x19, #0x10]
    0x01147224 add x8, x19, #0xc
    0x01147228 ldaxr w9, [x8]
    0x0114722C add w9, w9, #1
    0x01147230 stlxr w10, w9, [x8]
    0x01147234 cbnz w10, #0x1047228
    0x01147238 ldp x29, x30, [sp, #0x10]
    0x0114723C ldr x19, [sp], #0x20
    0x01147240 ret 
    0x01147244 adrp x0, #0x3896000
    0x01147248 add x0, x0, #0x322
    0x0114724C mov x1, x0
    0x01147250 mov x2, x0
    0x01147254 mov w3, wzr
    0x01147258 bl #0x32a3260
    0x0114725C str x19, [sp, #-0x20]!
    0x01147260 stp x29, x30, [sp, #0x10]
    0x01147264 add x29, sp, #0x10
    0x01147268 mov x19, x8
    0x0114726C bl #0x104bc50
    0x01147270 str x0, [x19]
    0x01147274 cbz x0, #0x10472b0
    0x01147278 ldr x19, [x0, #0x58]
    0x0114727C ldr x0, [x19, #0x18]
    0x01147280 cbz x0, #0x10472bc
    0x01147284 ldr x8, [x19, #0x10]
    0x01147288 cbnz x8, #0x104729c
    0x0114728C ldr x8, [x0]
    0x01147290 ldr x8, [x8]
    0x01147294 blr x8
    0x01147298 str x0, [x19, #0x10]
    0x0114729C add x8, x19, #0xc
    0x011472A0 ldaxr w9, [x8]
    0x011472A4 add w9, w9, #1
    0x011472A8 stlxr w10, w9, [x8]
    0x011472AC cbnz w10, #0x10472a0
    0x011472B0 ldp x29, x30, [sp, #0x10]
    0x011472B4 ldr x19, [sp], #0x20
    0x011472B8 ret 
    0x011472BC adrp x0, #0x3896000
    0x011472C0 add x0, x0, #0x322
    0x011472C4 mov x1, x0
    0x011472C8 mov x2, x0

## Disassembly origin_zukan_read_method_0

    0x0112E460 bl #0x1047f0c
    0x0112E464 adrp x1, #0x3979000
    0x0112E468 add x1, x1, #0
    0x0112E46C mov x20, x0
    0x0112E470 bl #0xfd9140
    0x0112E474 tst w0, #0xff
    0x0112E478 b.eq #0x102e4dc
    0x0112E47C lsr x8, x0, #0x20
    0x0112E480 cmp x8, #1
    0x0112E484 b.ne #0x102e4c4
    0x0112E488 ldarb w8, [x21]
    0x0112E48C tbz w8, #0, #0x102e544
    0x0112E490 ldr x0, [x22]
    0x0112E494 add x1, sp, #0x1c
    0x0112E498 str wzr, [sp, #0x1c]
    0x0112E49C str x0, [x23]
    0x0112E4A0 bl #0x1047f0c
    0x0112E4A4 add x8, x19, #0x6c
    0x0112E4A8 str x8, [sp, #8]
    0x0112E4AC mov w8, #0xe460
    0x0112E4B0 movk w8, #1, lsl #16
    0x0112E4B4 add x1, sp, #8
    0x0112E4B8 str x8, [sp]
    0x0112E4BC mov x2, sp
    0x0112E4C0 bl #0x102e580
    0x0112E4C4 ldp x29, x30, [sp, #0x40]
    0x0112E4C8 ldr x23, [sp, #0x10]
    0x0112E4CC ldp x20, x19, [sp, #0x30]
    0x0112E4D0 ldp x22, x21, [sp, #0x20]
    0x0112E4D4 add sp, sp, #0x50
    0x0112E4D8 ret 
    0x0112E4DC ldr x8, [x20, #0x60]
    0x0112E4E0 cbz x8, #0x102e47c
    0x0112E4E4 ldr x9, [x8]
    0x0112E4E8 adrp x1, #0x3979000
    0x0112E4EC add x1, x1, #0
    0x0112E4F0 ldr x9, [x9, #0x50]
    0x0112E4F4 mov x20, x0
    0x0112E4F8 mov x0, x8
    0x0112E4FC blr x9
    0x0112E500 mov x0, x20
    0x0112E504 b #0x102e47c
    0x0112E508 adrp x0, #0x4279000
    0x0112E50C ldr x0, [x0, #0x558]
    0x0112E510 bl #0x32a2e00
    0x0112E514 cbz w0, #0x102e440
    0x0112E518 adrp x0, #0x4279000
    0x0112E51C adrp x1, #0x4279000

## Disassembly origin_zukan_write_method_0

    0x0112E600 ldr x22, [x22, #0x568]
    0x0112E604 add x1, sp, #0x10
    0x0112E608 str wzr, [sp, #0x10]
    0x0112E60C ldr x0, [x21]
    0x0112E610 str x0, [x22]
    0x0112E614 bl #0x1047f0c
    0x0112E618 add x2, x19, #0x68
    0x0112E61C adrp x1, #0x3979000
    0x0112E620 add x1, x1, #0
    0x0112E624 bl #0xfd8f8c
    0x0112E628 ldarb w8, [x20]
    0x0112E62C tbz w8, #0, #0x102e6b4
    0x0112E630 ldr x0, [x21]
    0x0112E634 add x1, sp, #0x1c
    0x0112E638 str wzr, [sp, #0x1c]
    0x0112E63C str x0, [x22]
    0x0112E640 bl #0x1047f0c
    0x0112E644 add x8, x19, #0x6c
    0x0112E648 str x8, [sp, #0x10]
    0x0112E64C mov w8, #0xe460
    0x0112E650 movk w8, #1, lsl #16
    0x0112E654 add x1, sp, #0x10
    0x0112E658 str x8, [sp, #8]
    0x0112E65C add x2, sp, #8
    0x0112E660 bl #0x102e6f0
    0x0112E664 ldp x29, x30, [sp, #0x40]
    0x0112E668 ldp x20, x19, [sp, #0x30]
    0x0112E66C ldp x22, x21, [sp, #0x20]
    0x0112E670 add sp, sp, #0x50
    0x0112E674 ret 
    0x0112E678 adrp x0, #0x4279000
    0x0112E67C ldr x0, [x0, #0x558]
    0x0112E680 bl #0x32a2e00
    0x0112E684 cbz w0, #0x102e5f4
    0x0112E688 adrp x0, #0x4279000
    0x0112E68C adrp x1, #0x4279000
    0x0112E690 ldr x0, [x0, #0x700]
    0x0112E694 ldr x1, [x1, #0x560]
    0x0112E698 adrp x2, #0x401a000
    0x0112E69C add x2, x2, #0
    0x0112E6A0 bl #0x250
    0x0112E6A4 adrp x0, #0x4279000
    0x0112E6A8 ldr x0, [x0, #0x558]
    0x0112E6AC bl #0x32a2e10
    0x0112E6B0 b #0x102e5f4
    0x0112E6B4 adrp x0, #0x4279000
    0x0112E6B8 ldr x0, [x0, #0x558]
    0x0112E6BC bl #0x32a2e00

## Limitations

- BL references prove direct code calls only.
- Aligned static data-pointer searches do not account for dynamic relocations or indirect BLR.
- No dynamic virtual dispatch or class identity can be asserted from these matches alone.
- No WriteFile success, Commit ACK or cold restart validation is performed.
