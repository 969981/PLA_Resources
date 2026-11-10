# PLA 1.1.1 — Pokedex report update: proven in-memory mutation chain

> Evidence scope: verified ELF ARM64 and pinned Ghidra 12.2 C pseudocode. No runtime, Dirty, serializer or save-I/O claim. This document is a separate annotation: the original ELF, project and 82,731 C exports remain immutable.

## Source and address proof

- Original analysis: Actions 42774682950, image base 0x00100000.
- ELF SHA-256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794.
- Raw disassembly: [Actions 42859085940](https://github.com/969981/PLA_Resources/actions/runs/42859085940), success.
- Address conversion: Ghidra VA = ELF VA + 0x100000, validated by 11 matching BL anchors.
- Reproducible evidence: update_all_report_poke_elf_trace.json, update_all_report_poke_elf_trace.md, and scripts/trace_pla_pokedex_mutation.py.
- Native C: derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/0112f528.c.

## 1. Registered entry points join at one core

| Entry class | Registered name | Local label | Direct call |
| --- | --- | --- | --- |
| PokedexSave | UpdateAllReportPoke | 0x0112F4F8 | BL at 0x0112F518 to 0x0112F528 |
| UIResidentManager | UpdateAllReportPokeAndGetResult | 0x0286BC90 | BL at 0x0286BCE0 to 0x0112F528 |

PokedexSave's registration is at 0x00E4FAF0. UIResidentManager's registration is at 0x027E05C0.

Both paths reach the independently recovered function FUN_0112F528(long state, int *result). The two entry labels are not independently exported Ghidra functions. They do not call each other: they each call the same native core.

The UI path calls FUN_01148F20 at 0x0286BCCC, which resolves a ref-counted, lazily initialized pointer from the manager context at +0x298. It passes an output buffer derived from the resident manager's inner object at +0x2EF0 to the common core. The precise lifetime/owner of the saved state remains unverified.

## 2. Confirmed state writes in the common core

Observed record addressing:

    record(id) = state + 0xDC + id * 0x58
    loop IDs: 1..905 (terminates at 0x38A)

| Address relative to state | Width | Observed operation | Proof status |
| --- | --- | --- | --- |
| +0xDC + id*0x58 | u32 | OR bit 1 (mask 2) under qualifying report conditions | OBSERVED; user-facing name inferred |
| +0xDC + id*0x58 | u32 | OR bit 2 (mask 4) on selected completion condition | OBSERVED; meaning provisional |
| +0xE0 + id*0x58 | u32 | update 3-bit task-level fields with shift/mask logic | OBSERVED |
| +0xE4 + id*0x58 | u16 | write adjusted research rate | OBSERVED |
| +0xEA + id*0x58 | u16 | copy a sequence-like value derived from state+0x74 | OBSERVED; precise meaning unresolved |
| +0x1E4CC + id*4 | u32 | write a separate packed 3-bit progress structure | OBSERVED; serialized/transient status unknown |
| +0x74 | u16 | increment/normalize header counter under report-change conditions | OBSERVED |
| +0x78 | u32 | write capped aggregate research points if result != NULL | OBSERVED |
| +0x6C | u32 | FUN_01131AD8 ORs selected global completion/coverage bits | OBSERVED; exact bit labels unknown |

Key C evidence: FUN_0112F528 sets lVar28 = state+0x6C, then uses lVar28+id*0x58+0x70 for per-record flags, +0x74 for packed levels and +0x78 for the research-rate field. It also calls FUN_01131AD8(state) before calculating the aggregate outcome. FUN_01131AD8 writes the global bitfield at state+0x6C.

Existing readers independently align:
- FUN_01130984 reads the 3-bit task fields from +0xE0+id*0x58.
- FUN_0112ECD0 reads research rate from +0xE4+id*0x58.
- FUN_0113097C reads the stored total at state+0x78.

Important guard: the final total-points write at state+0x78 is inside the non-null result-output branch. Both identified wrappers pass a result buffer. Other indirect callers are not ruled out.

## 3. Result consumer path

The core writes 13 consecutive 32-bit result fields, result[0] through result[12], and returns an integer from local_4d0.

The UIResidentManager path supplies the inner object's +0x2EF0 as the result buffer. The nearby registered function GetPokedexParamForEvent at 0x0286BD6C copies fields from inner offsets +0x2F14, +0x2F10, +0x2F08, +0x2F1C and +0x2EF4 to an event output structure.

This closes a static route from mutation and result generation to an event-facing getter. It does not identify the actual rendered screen or callback that schedules a save.

## 4. Dirty, serializer, persistence: still not proven

| Question | Status |
| --- | --- |
| Both public native bindings reach the same core | OBSERVED in ELF |
| Core writes the in-memory Pokédex state | OBSERVED in original Ghidra C |
| Reader and writer offsets match | OBSERVED |
| Native result reaches UI/event fields | OBSERVED |
| Exact Dirty field and its producer | UNRESOLVED |
| Serializer which reads this record layout | UNRESOLVED |
| Local save I/O, completion, retry, rollback | UNRESOLVED |
| Runtime before/after, restart and save reload | NOT TESTED |

Do not rename any function as a persistent save writer based only on the method name, string keyword or an in-memory store.

## 5. Next proof obligations (no full Ghidra reanalysis)

1. Resolve the lifetime and aliases of the state pointer returned through FUN_01148F20 from context +0x298; identify the owning save container.
2. Capture before/after memory snapshots of the state header +0x6C/+0x74/+0x78, one 0x58-byte species record, and the +0x1E4CC+id*4 field, on both interfaces.
3. Follow the actual writes into the save container and test whether a Dirty field is set, retained and cleared; distinguish refcount atomic stores from state-data writes.
4. Identify a serializer by actual loads from these record/header offsets and follow its output into file save I/O or the platform save abstraction.
5. Separately test success, failure, retry and reload behavior; do not report persistence as verified until bytes survive restart.

### Candidate annotation names (not original symbols)

- 0x0112F4F8: PokedexSave_UpdateAllReportPoke_Wrapper
- 0x0286BC90: UIResidentManager_UpdateAllReportPokeAndGetResult_Wrapper
- 0x0112F528: PokedexReport_UpdateAndBuildResult
- 0x01131AD8: Pokedex_ComputeAggregateCompletionBits
- 0x01148F20: ResolveRefCountedPokedexStateFromOwner298
- 0x0286BD6C: UIResidentManager_CopyPokedexEventResultFields

All names remain tentative outside the observed effects. Preserve the original Ghidra database and C files.
