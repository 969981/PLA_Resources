# PLA v1.1.1 development roadmap

## Differences from SV / ZA

The initial PLA inventory has 19,095 RomFS file paths exposed directly. It is **not** an `arc/data.trpfs` indexing problem: the SV/ZA stage that extracts a Trinity virtual file system cannot simply be copied. Reuse architectural principles and relevant native adapters, then build PLA-specific format dispatch and evidence.

## Milestones and acceptance criteria

| Stage | Target | Acceptance evidence |
| --- | --- | --- |
| R0 | AGENTS, docs, manifest schema, synthetic test scaffold, inventory audit and cheap CI | CSV counts reconciled; synthetic tests pass; incomplete remote RomFS explicitly reported |
| R1 | Import original v1.1.1 RomFS with volume restores and hashes | All 19,101 NCA file paths reconciled; original sizes/hashes and archive-part receipts verified |
| R2 | Original ExeFS analysis and format/magic census | Valid ELF/NSO/NPDM reports; recognized/unrecognized header counts, no silent format assumptions |
| R3 | Native `.gfpak` recursive extraction | 678 top-level GFPaks each `VERIFIED`, `UNSUPPORTED` or `FAILED` with entry count and hashes; nested types indexed |
| R4 | `.dat/.tbl` and `.blua` parser research | Per-language pair/offset validation, BLUA dialect verified, bytecode disassembly explicitly distinguished from decompile guesses |
| R5 | BNTX, Trinity model/animation, PTCL, Wwise `.bnk/.pck` conversion | Typed adapters plus sample visual/structural/audio checks; unsupported content still accounted for |
| R6 | Game tables: `pml/`, `field/encount/`, Pokémon, moves, items, quest and flags | CSV/JSON/SQLite schema mapping with native field offsets, data constraints and cross-source evidence |
| R7 | Full deterministic parallel build + resume + rerun of failures | Every original path has an outcome, no `PARTIAL` silently skipped, fingerprints ensure exact incremental rebuild |
| R8 | Release and research indexes | Versioned manifests, provenance, licensing review, small Git artifacts / approved external storage for large data |

The first R0 planner does not perform real extraction. Implement each adapter only after independent native-format validation; do not mark R3–R8 done until test results and actual outputs exist.

## Input-based priorities (2026-11-06 local inventory)

- `.gfpak`: 678 files / 1,700,039,584 bytes; nesting may expand count.
- `.dat` + `.tbl`: 3,339 + 3,227 files; includes 10 text languages (644 entries each in `message/`). Validate `.dat/.tbl` pairing and non-message usages separately.
- `.blua`: 874 files / 99,792,585 bytes, primarily `bin/haxe/release/`.
- `.bntx`: 2,969 files / 799,668,528 bytes; `.ptcl`: 1,748 / 2,651,902,688 bytes.
- `.tranm`: 1,522 files, plus `.trmdl`, `.trmsh`, `.trmtr`, `.trskl`. Pair model components by proven references, not stem-only heuristics.
- Wwise `bin/sound/NX64/wwise/`: `.pck`, `.bnk` have large resource footprints. First inspect codec and soundbank structure.
- `bin/field/encount/`: `huge_outbreak.bin` and `new_huge_outbreak_*.bin` are high-value gameplay resources; semantics are not established merely by name.

## Parallel execution design (once R3+ adapters exist)

1. Scan immutable sources and emit one canonical task per source path.
2. Compute source SHA-256 in a streaming pass; stable-shard using SHA-256 of normalized relative path modulo shard count.
3. Group by parser family and memory risk; CPU-bound tasks use processes, small file reads can use bounded threads. Keep a dedicated writer for JSONL and atomic temp-to-final output moves.
4. Include `--jobs`, `--resume`, `--retry-failed`, `--shard-count`, `--shard-index`, `--dry-run`, `--strict` and stage-specific timeout/memory controls.
5. Merge shard ledgers deterministically and audit every original input. Persist unrecoverable errors rather than aborting the whole batch with no per-file records.
6. Promote results only after signature, size, output SHA-256, parser invariants and representative data/visual validation.

## Proposed CI (cost controlled)

- `validate-pla-r0.yml`: push/PR quick tests + CSV structural audit.
- `pla-source-audit.yml`: manual or periodic inventory / transfer verification (create later).
- `pla-gfpak-extract.yml`, `pla-secondary-convert.yml`, `pla-coverage-audit.yml`: manually triggerable matrix stages after real parsers and RomFS are present.
- Use cache keyed by pinned parser/tool revisions and input fingerprint; publish compact manifests as Actions Artifacts. Do not bulk-commit raw extracted game media by default.
