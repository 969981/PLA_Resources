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

## Strict interpretation

- A function pointer may appear in a static data table or be generated at runtime.
- A raw adjacent 64-bit word is NOT itself proven to be a method pointer.
- Any PokedexSave-to-serializer association still requires concrete object pointer identity.
- '0 hits' is only a negative finding for the specific pointer encodings searched.
