# PLA v1.1.1: SV/ZA tooling reuse and full secondary processing plan

> Planning baseline checked against GitHub `master` on 2026-11-06. **This file is an implementation plan, not an extraction-complete claim.** No existing R0 planner or CI run should be counted as parsed output.

## 1. Current remote input reality

- Original paths: `v1.1.1/b38cd4c18831237d85312886f3a377b5_NCA/{0,1}/`. The repository's unchanged local CSV inventory enumerates **19,101 logical NCA files** (6 ExeFS + 19,095 RomFS).
- At the time of this review, the GitHub tree contains **6 ExeFS files** and **19,102 Git blobs under RomFS `1/`**. Of the latter, **19,093 are normal files** and **9 are 7z volumes** representing two logical original files, yielding 19,095 logical RomFS paths **if both volume sets restore correctly**.
- Split originals: `1/bin/archive/field/model/pack/ha_area04.gfpak` (2 parts) and `1/bin/sound/NX64/wwise/bank/Default.pck` (7 parts). Validate contiguous part numbering, `7z t`, actual restoration size, and SHA-256 against an independently measured source receipt. The original CSV's SHA256 column is blank.
- This updates the **initial** R0 "RomFS absent from remote" observation in README/AGENTS; do not treat the historical wording as today's storage state. Remote object counts are not equivalent to per-byte verification.
- `Unpack/v1.1.1/` does not yet exist, and R0 only has inventory audit, task planning, synthetic tests, and a validation workflow. There is **no working batch converter** in this branch.

**Do not port the SV/ZA `arc/data.trpfs -> virtual` stage unchanged.** PLA has directly unpacked RomFS files. Trinity / GFPak archives found in PLA require native-format handling at their own actual input paths.

## 2. Tool import matrix

All tool snapshots must carry an upstream commit, original license, local modifications/tree SHA, dependency inventory, source path, and a **PLA 1.1.1 real-sample proof**. Use `tools/pla-upstream-plan.json` for source refs and compatibility gates. Do not copy an SV-specific wrapper and assume it can parse PLA.

| Priority | Target | Source to review | PLA use and required proof |
| --- | --- | --- | --- |
| P0 | `tools/pkNX` | `969981/SV_Resources/tools/pkNX`; `kwsch/pkNX` | Upstream explicitly supports Legends: Arceus and GFPak drag-drop unpack. Extract the core container API into a **headless CLI**; test a small, medium, and large genuine PLA GFPak, indexed entry sizes, filenames, hashes, and nested entries. Confirm the *pinned* source commit contains the PLA code. |
| P0 | `tools/gftool` | `969981/SV_Resources/tools/gftool`; `pkZukan/gftool` | Trinity file readers and model-family structures. Upstream mentions PLA Trinity filesystem support, but each PLA TR* format and gftool's SV-local .NET 10 patches need independent build and runtime tests. This is not evidence PLA uses SV's TRPFS layout. |
| P0 | `tools/Switch-Toolbox` | `969981/SV_Resources/tools/Switch-Toolbox` | BNTX parsing, export/import roundtrip and pixel-level test. Verify ASTC/BCn formats and mip counts before declaring PNG conversion successful. No GUI-only CI dependency. |
| P1 | `tools/PokeDocs` | `969981/SV_Resources/tools/PokeDocs` | Only PLA-relevant schemas/hashes; unrelated SV/ZA dictionaries remain reference material, not proof of PLA names. |
| P1 | `tools/nx2elf` | `969981/SV_Resources/tools/nx2elf` | ExeFS NSO to ELF analysis, AArch64 segments and offset sanity. |
| P2 | `tools/SCVI_Extract` | `969981/SV_Resources/tools/SCVI_Extract` | Legacy extraction cross-check only, not a production PLA extractor. |

**Sync procedure:** branch-based, opt-in import; fetch pinned commits/source trees, preserve licenses, compare upstream vs locally patched source SHA, retain full nested dependency trees only where required, compile/test `pkNX`, `GFTool.Core`, `Switch-Toolbox` separately, and run format-specific PLA smoke tests. Record `NOT_IMPORTED`, `IMPORTED_UNTESTED`, `BUILD_VERIFIED`, `PLA_SAMPLE_VERIFIED` per tool. No automatic upstream `master` update, blind DLL copying, or main-branch auto-merge. The currently committed `tools/deps/oo2core_8_win64.dll` requires a redistribution-rights review; never clone it into another destination as an implicit prerequisite.

## 3. Processing stages, with exactly recorded evidence

1. `source`: enumerate all 19,101 logical input paths, reconstruct multi-volume sources **outside** immutable originals, hash actual bytes and reconcile CSV sizes. A missing part is `SOURCE_MISSING`, not `VERIFIED`.
2. `probe`: sample file magic/header, compression, endian, offsets, CRC if provided, and classify parser family; never rely on extension alone. Include opaque and no-extension files.
3. `extract`: extract nested `.gfpak`, `.arc`, `.pck` only with true format parsers. Give each nested item a reversible key `source_path + archive_entry_id + parent_chain`; prevent path traversal, collisions and archive bombs.
4. `parse`: structural JSON/CSV/text/SQLite, retaining unknown fields, raw offsets, table counts, language and source SHA. Disassembly of `.blua` is not proof of original Lua source.
5. `convert`: BNTX => PNG + metadata; Trinity model/mesh/skeleton/material/animation => glTF/GLB + references; effects `.ptcl` and soundbanks => output only if codec/adapter is confirmed. Keep exact extraction bytes separately.
6. `verify`: signatures, output existence/size/hash, structural invariants; representative image decoded-pixel checks, models geometry/bones/animation, text language/row checks, and valid media. Reopen a subset with an independent reader where possible.
7. `publish`: merge shard ledgers, coverage and failures; only audited outputs pass the publication allowlist. CI artifacts are temporary and not a replacement for persistent storage or source checksums.

Families and first-wave volume from the v1.1.1 root inventory:

| Group | Original files | Planned adapter |
| --- | ---: | --- |
| GFPak | 678 logical | `PLA.GFPakExtract` (headless pkNX core) then recursive dispatch |
| BNTX | 2,969 | `PLA.BntxExport` using proven texture libraries |
| Text | 3,339 `.dat` and 3,227 `.tbl` globally | `PLA.MessageParse` only for confirmed pairs; separate treatment of non-message tables |
| BLUA | 874 | `PLA.BluaInspect` with verified bytecode dialect |
| PTCL | 1,748 | `PLA.PtclInspect` (structured first, never mislabel raw dumps) |
| Trinity | 1,522 `.tranm` plus `.trmdl/.trmsh/.trmtr/.trskl/.trmbf` | `PLA.TrinityExport` with component-reference checks |
| Audio | `.pck/.bnk` incl. split `Default.pck` | `PLA.WwiseExtract` with WEM codec proof |
| Gameplay/other | `.wazabin/.wbin/.bin/.arc/.hkx` and unknowns | native table parsers / header-inspection records |

The above categories **overlap in nested archives** and are not additive totals for a final completeness percentage. Every nested extracted entry needs its own processing record.

## 4. Proposed directory + CLI contract

```text
tools/
  pla-upstream-plan.json         # reviewed refs/roles; no false import claim
  PLA.GFPakExtract/             # future adapter, no GUI for CI
  PLA.TrinityExport/
scripts/
  pla_pipeline/
    inventory.py                 # CSV + actual source path reconciliation
    restore.py                   # 7z volume restoration, independent SHA receipt
    sniff.py                     # magic-based dispatcher
    adapters/{gfpak,message,blua,bntx,trinity,ptcl,wwise,tables}.py
    scheduler.py                 # deterministic shards / bounded workers / leases
    verify.py                    # format-specific independent validators
    audit.py                     # all originals + nested sources + stage coverage
  Run-PLA-FullSecondary.py
  Audit-PLA-FullSecondary.py
Unpack/v1.1.1/
  romfs/<original_relative_path>/extracted/<stable_entry_id>/...
  romfs/<original_relative_path>/parsed/...
  romfs/<original_relative_path>/converted/...
  _index/{source,entries,stage-results,coverage,failed,unsupported,unaccounted}...
manifests/v1.1.1/
  source_manifest.jsonl
  transfer_manifest.json
  stage_results.jsonl
  coverage.json
```

Each batch entry must carry: `source_path`, optional parent entry ID, source size/SHA256, source availability, stage, format signature, parser name and pinned SHA, option fingerprint, output paths/sizes/SHA256, validator, state, error, retry count and attempt timestamps. Use the states already defined in `docs/resource-provenance.md`. A `PARTIAL` run is never a resume skip key; a `VERIFIED` entry may only be skipped after source, parser, options and output fingerprints are rechecked.

Required CLI options (as implemented): `--version v1.1.1 --stage <...> --jobs <n> --shard-index <i> --shard-count <n> --resume --retry-failed --dry-run --strict --max-output-mb <n> --timeout-seconds <n>`. Reports must explicitly show **planned vs restored vs extracted vs structurally parsed vs converted vs verified**, not a single misleading success percentage.

## 5. GitHub Actions stages and bounded parallelism

- `pla-source-reconcile.yml`: cheap structural inventory, 7z part coverage, source-vs-inventory audit; no bulk parse. Can run on pushes to scripts/docs.
- `pla-tools-verify.yml`: pinned-source provenance, library build + synthetic tests. PLA real-sample tests must be separate from compile-only status.
- `pla-gfpak-extract.yml`: manual dispatch after native extractor is proven, starting with 3 sample packs then full 678; archive outputs and nested item list.
- `pla-secondary-full.yml`: manual dispatch, stable SHA256(path) sharding. Proposed first run **16 shards / max-parallel 4**, small-family workers up to 4 and heavy texture/model/audio workers up to 2, with RAM/CPU bounded by the runner. Do not shard only by folder count: `ptcl` and audio dominate byte size. Prefer Git partial clone and sparse checkout to fetch shard inputs rather than checking out all multi-GB sources on every worker.
- `pla-secondary-audit.yml`: aggregate results for all shards even when some fail; detect missing jobs, missing blobs, invalid outputs, duplicate or conflicting paths. PR/test jobs must never commit extracted game media.

For `manual` jobs: preserve successful shard artifacts on failure, retain failure-ledger artifacts, use bounded retries and atomic output publishing. Do **not** schedule expensive full conversions every night before proving throughput and storage capacity. Generated game assets should be published only where the operator has redistribution authorization. The pipeline can still publish compact non-copyright-sensitive integrity reports.

## 6. Release gates

- **G0 — inventory & transfer:** exactly 19,101 logical source paths reconciled; two 7z sets restore and pass independent hash comparison; failures enumerated.
- **G1 — tool compatibility:** exact pinned tool revisions built, at least 3 distinct PLA real samples per high-priority family (including a nested archive), documented functional results.
- **G2 — native extraction:** all 678 logical top-level GFPak files have extract outcomes, all extracted entries are indexed, unknowns and failed items explicit.
- **G3 — format parsing:** each PLA original and nested item has an exhaustive terminal ledger for the requested stage; every claimed converted item passes output-specific verification.
- **G4 — full publication:** merge all shards; `missing=0`, `unaccounted=0`, duplicate input keys=0, output hash errors=0. `UNSUPPORTED` and `FAILED` still block a **fully parsed** claim even if they are accounted for.

## 7. Suggested execution order

1. Reconcile current GitHub tree with baseline CSV and validate the two actual 7z originals and their SHA receipts.
2. Import/test pinned pkNX and gftool source on a feature branch; establish a headless PLA GFPak extractor. Test BNTX with Switch-Toolbox separately.
3. Run real 3-pack GFPak smoke tests, index nested files, then all 678 top-level packages.
4. Parallel process messages, BNTX, Trinity, BLUA, effects and sound by parser family; perform semantic validation, not just file dumping.
5. Audit every source, every nested entry and every stage; retry failed/partial shards and publish only verified outputs.

## References

- Internal: `docs/unpack-roadmap.md`, `docs/resource-provenance.md`, `scripts/plan_pla_unpack.py`.
- Source baseline: `PLA_1.1.1_summary.json`, `PLA_1.1.1_files.csv`, current GitHub source tree.
- [SV pinned vendors](https://github.com/969981/SV_Resources/blob/master/tools/upstream.json), [SV pipeline](https://github.com/969981/SV_Resources/tree/master/scripts/resource_pipeline), [ZA source workflow](https://github.com/969981/ZA_Resources/blob/master/.github/workflows/za-virtual-convert.yml).
- [pkNX README: explicit PLA + GFPak support](https://github.com/kwsch/pkNX), [gftool README: Trinity and PLA support](https://github.com/pkZukan/gftool), [Switch-Toolbox](https://github.com/KillzXGaming/Switch-Toolbox).
