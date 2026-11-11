# PLA 1.1.1 — serializer writer function-pointer evidence (raw ELF)

Read-only original ELF scan. Results are exact instruction/data occurrences, NOT a resolved callgraph.

- SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
- ELF bytes: 69781384
- Anchor: {'site': '0x112F518', 'callee': '0x112F528'}
- Status: RAW_ELF_DIRECT_BL_AND_EXACT_DATA_POINTERS_ONLY

| Target | Ghidra VA | Direct BL | Exact aligned nonexec ptrs |
| --- | --- | ---: | ---: |
| SerializerWriteWrapper | 0x010CE274 | 1 | 0 |
| SerializerCopyAndEmit | 0x010CE5DC | 1 | 0 |
| SerializerSize | 0x010CE508 | 2 | 0 |
| PokedexGetContextSlot | 0x01148F20 | 30 | 0 |
| PokedexMutation | 0x0112F528 | 2 | 0 |
| SaveJobController | 0x011457E4 | 5 | 0 |
| SaveJobCommitWrapper | 0x01148690 | 5 | 0 |
| CommitAdapter | 0x02A8F2F4 | 1 | 0 |
| FileWriteAdapter | 0x02A8D6BC | 2 | 0 |
| PokedexEventMutationTask | 0x027DCC74 | 4 | 0 |

## SerializerWriteWrapper

Direct BL: 0x01150690

No aligned, nonexecutable absolute pointer found (NOT proof of no pointer dispatch).

## SerializerCopyAndEmit

Direct BL: 0x010CE30C

No aligned, nonexecutable absolute pointer found (NOT proof of no pointer dispatch).

## SerializerSize

Direct BL: 0x010CE29C, 0x010CE624

No aligned, nonexecutable absolute pointer found (NOT proof of no pointer dispatch).

## PokedexGetContextSlot

Direct BL: 0x00C53688, 0x00C53DEC, 0x00C5453C, 0x00C54C9C, 0x00DAAAD0, 0x00DAABB0, 0x00DAAC90, 0x00DAB328, 0x00DABF94, 0x00E93424, 0x00E93F1C, 0x011A3E10, 0x0120E574, 0x0120EAA0, 0x0120EC24, 0x0120EE7C, 0x0125E1A0, 0x0139877C, 0x013F3BB0, 0x013F4258, 0x013F5834, 0x01413238, 0x01456144, 0x0160DD54, 0x01683F9C, 0x01685DB8, 0x01907184, 0x01B72EE0, 0x027DCCD8, 0x0286BCCC

No aligned, nonexecutable absolute pointer found (NOT proof of no pointer dispatch).

## PokedexMutation

Direct BL: 0x0112F518, 0x0286BCE0

No aligned, nonexecutable absolute pointer found (NOT proof of no pointer dispatch).

## SaveJobController

Direct BL: 0x011457C0, 0x0275D668, 0x0275E804, 0x027DBD1C, 0x027DCF44

No aligned, nonexecutable absolute pointer found (NOT proof of no pointer dispatch).

## SaveJobCommitWrapper

Direct BL: 0x010CC0A8, 0x01145878, 0x01454F4C, 0x01683A28, 0x027DBB04

No aligned, nonexecutable absolute pointer found (NOT proof of no pointer dispatch).

## CommitAdapter

Direct BL: 0x011486CC

No aligned, nonexecutable absolute pointer found (NOT proof of no pointer dispatch).

## FileWriteAdapter

Direct BL: 0x010CE390, 0x01144134

No aligned, nonexecutable absolute pointer found (NOT proof of no pointer dispatch).

## PokedexEventMutationTask

Direct BL: 0x00D17CE0, 0x00D17E8C, 0x0120BC88, 0x0120BCE0

No aligned, nonexecutable absolute pointer found (NOT proof of no pointer dispatch).

## Narrow ARM64 disassembly windows


### HashdbWriterRawCaller

```asm
0x01150668 ldp      x20, x19, [sp], #0x20
0x0115066C ret      
0x01150670 str      x21, [sp, #-0x30]!
0x01150674 stp      x20, x19, [sp, #0x10]
0x01150678 stp      x29, x30, [sp, #0x20]
0x0115067C add      x29, sp, #0x20
0x01150680 mov      x19, x0
0x01150684 ldr      x0, [x0, #0x410]
0x01150688 add      x2, x19, #0x418
0x0115068C ldr      x1, [x19, #8]
0x01150690 bl       #0xfce274
0x01150694 add      x21, x19, #0x450
0x01150698 mov      w20, w0
0x0115069C mov      x0, x21
0x011506A0 bl       #0x32a30f0
0x011506A4 tst      w20, #1
0x011506A8 mov      w8, #2
0x011506AC cinc     w8, w8, eq
0x011506B0 mov      x0, x21
0x011506B4 str      w8, [x19, #0x448]
0x011506B8 bl       #0x32a3100
0x011506BC mov      x0, x19
0x011506C0 ldp      x29, x30, [sp, #0x20]
0x011506C4 ldp      x20, x19, [sp, #0x10]
0x011506C8 ldr      x21, [sp], #0x30
0x011506CC b        #0x2949880
0x011506D0 str      x19, [sp, #-0x20]!
0x011506D4 stp      x29, x30, [sp, #0x10]
```


### HashdbWriterPrologue

```asm
0x010CE274 sub      sp, sp, #0x150
0x010CE278 str      x28, [sp, #0x100]
0x010CE27C stp      x24, x23, [sp, #0x110]
0x010CE280 stp      x22, x21, [sp, #0x120]
0x010CE284 stp      x20, x19, [sp, #0x130]
0x010CE288 stp      x29, x30, [sp, #0x140]
0x010CE28C add      x29, sp, #0x140
0x010CE290 mov      x22, x2
0x010CE294 mov      x19, x1
0x010CE298 mov      x24, x0
0x010CE29C bl       #0xfce508
0x010CE2A0 ldr      x8, [x19]
0x010CE2A4 add      x20, x0, #0x20
0x010CE2A8 mov      x23, x0
0x010CE2AC mov      x0, x19
0x010CE2B0 mov      w2, #8
0x010CE2B4 ldr      x8, [x8, #0x10]
0x010CE2B8 mov      x1, x20
0x010CE2BC blr      x8
0x010CE2C0 cbz      x0, #0xfce468
0x010CE2C4 adrp     x8, #0x40f0000
0x010CE2C8 add      x8, x8, #0x6d0
0x010CE2CC sturb    wzr, [x29, #-0x60]
```


### HashdbCopyFlagClear

```asm
0x010CE5DC str      x25, [sp, #-0x50]!
0x010CE5E0 stp      x24, x23, [sp, #0x10]
0x010CE5E4 stp      x22, x21, [sp, #0x20]
0x010CE5E8 stp      x20, x19, [sp, #0x30]
0x010CE5EC stp      x29, x30, [sp, #0x40]
0x010CE5F0 add      x29, sp, #0x40
0x010CE5F4 add      x19, x0, #0x80
0x010CE5F8 mov      x21, x0
0x010CE5FC mov      x0, x19
0x010CE600 mov      x20, x1
0x010CE604 bl       #0x32a30f0
0x010CE608 add      x22, x21, #0xa0
0x010CE60C mov      x0, x22
0x010CE610 bl       #0x32a30f0
0x010CE614 add      x25, x21, #0xc1
0x010CE618 mov      w8, #1
0x010CE61C stlrb    w8, [x25]
0x010CE620 mov      x0, x21
0x010CE624 bl       #0xfce508
0x010CE628 ldr      x8, [x20]
0x010CE62C mov      x23, x0
0x010CE630 mov      x0, x20
0x010CE634 ldr      x8, [x8, #0x18]
0x010CE638 blr      x8
0x010CE63C ldr      x8, [x0]
0x010CE640 mov      x24, x0
0x010CE644 ldr      x8, [x8, #0x28]
0x010CE648 blr      x8
0x010CE64C ldr      x8, [x0]
0x010CE650 mov      x1, x23
0x010CE654 ldr      x2, [x24, #8]
0x010CE658 ldr      x8, [x8, #0x18]
0x010CE65C blr      x8
0x010CE660 tbz      w0, #0, #0xfce7ec
0x010CE664 ldp      x23, x24, [x21, #8]
0x010CE668 cmp      x23, x24
0x010CE66C b.ne     #0xfce680
0x010CE670 b        #0xfce6a8
0x010CE674 add      x23, x23, #0x30
0x010CE678 cmp      x24, x23
0x010CE67C b.eq     #0xfce6a8
0x010CE680 ldrb     w8, [x23, #0x28]
0x010CE684 cbz      w8, #0xfce674
0x010CE688 ldr      x1, [x23, #8]
0x010CE68C cbz      x1, #0xfce674
0x010CE690 ldr      x0, [x23, #0x10]
0x010CE694 cbz      x0, #0xfce674
0x010CE698 ldr      x2, [x23, #0x20]
0x010CE69C bl       #0x32a23b0
0x010CE6A0 strb     wzr, [x23, #0x28]
0x010CE6A4 b        #0xfce674
0x010CE6A8 add      x8, x21, #0xc1
0x010CE6AC mov      x0, x22
0x010CE6B0 stlrb    wzr, [x8]
0x010CE6B4 bl       #0x32a3100
0x010CE6B8 ldp      x24, x25, [x21, #8]
0x010CE6BC cmp      x24, x25
0x010CE6C0 b.eq     #0xfce7c4
0x010CE6C4 ldr      w8, [x24]
0x010CE6C8 str      w8, [sp, #0xc]
0x010CE6CC ldr      x8, [x20]
0x010CE6D0 ldr      x8, [x8, #0x10]
0x010CE6D4 mov      x0, x20
0x010CE6D8 blr      x8
0x010CE6DC ldr      x8, [x0]
0x010CE6E0 mov      x21, x0
0x010CE6E4 ldr      x8, [x8, #0x28]
0x010CE6E8 blr      x8
0x010CE6EC ldr      x8, [x0]
0x010CE6F0 mov      w1, #4
0x010CE6F4 ldr      x2, [x21, #8]
0x010CE6F8 ldr      x8, [x8, #0x18]
0x010CE6FC blr      x8
0x010CE700 tbz      w0, #0, #0xfce720
0x010CE704 ldr      x8, [x21]
0x010CE708 add      x1, sp, #0xc
0x010CE70C mov      x0, x21
0x010CE710 mov      w2, #4
0x010CE714 ldr      x8, [x8, #0x18]
```


### SaveJobStatusReader

```asm
0x01150638 stp      x20, x19, [sp, #-0x20]!
0x0115063C stp      x29, x30, [sp, #0x10]
0x01150640 add      x29, sp, #0x10
0x01150644 add      x20, x0, #0x450
0x01150648 mov      x19, x0
0x0115064C mov      x0, x20
0x01150650 bl       #0x32a30f0
0x01150654 ldr      w19, [x19, #0x448]
0x01150658 mov      x0, x20
0x0115065C bl       #0x32a3100
```


## Strict interpretation

- A function pointer may appear in a static data table or be generated at runtime.
- A raw adjacent 64-bit word is NOT itself proven to be a method pointer.
- Any PokedexSave-to-serializer association still requires concrete object pointer identity.
- '0 hits' is only a negative finding for the specific pointer encodings searched.
