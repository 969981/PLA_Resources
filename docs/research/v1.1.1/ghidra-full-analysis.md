# PLA 1.1.1 — Ghidra 12.2 full native analysis

## Input and source provenance

- Game: Pokémon Legends: Arceus 1.1.1.
- Source: `v1.1.1/b38cd4c18831237d85312886f3a377b5_NCA/0/main` (NSO0, original file preserved).
- Converted ELF: `Unpack/v1.1.1/exefs/main/main.elf` (69,781,384 bytes).
- Verified ELF SHA-256: `260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794`.
- Ghidra: **official 12.2**, `ghidra_12.2_PUBLIC_20261016.zip`, verified SHA-256 `2c2cd776db3c1f6a097ba418922378ac3649cadd5e844a6f5f088ae628a7be67`; Java 25.
- Exporter implementation was adapted from `969981/SWSH_Resources` commit `f2cffb64d20e9b6882d2f70e7c2a8d06a93ccfa6` to PLA source identity, filenames and single-main program.

## Pipelines

1. [PLA full Ghidra analysis](../../../.github/workflows/pla-ghidra-full.yml): `analyzeHeadless` imports the published ELF, performs Ghidra native analysis and calls `tools/ghidra/PLAExport.java` to record **every Ghidra-discovered** memory block, function, instruction, defined data, symbol, reference and an individual decompiler attempt/status per function. Export is gzip-compressed NDJSON. In parallel to the event stream the editable `PLA111.gpr` + `PLA111.rep/` is retained.
2. `pla_build_sqlite.py` streams original NDJSON into an indexed SQLite containing `functions`, `instructions`, `references_full`, `symbols`, `defined_data`, `memory_blocks`, `decompilation`, `metadata` and `report_counts`. It requires a final complete summary, reconciles counts and checks SQLite integrity. Includes original ELF hash and original events hash.
3. `pla_extract_c.py` collects **actual Ghidra C pseudocode only**. Failure, empty and timeout statuses remain inspectable in `pla_decompiled_index.csv`. Success count + failure count must equal attempted functions; no placeholder C code.
4. [PLA GitHub publisher](../../../.github/workflows/pla-ghidra-publish.yml): on successful completion, downloads the exact source run's four artifacts, validates hash and row coverage, expands the native project and every successfully decompiled function into separate `.c` files, splits SQLite into byte-identical shards and decompressed NDJSON at whole-line boundaries, verifies a full reassembly before uploading to `master` in batches. No original asset is touched.

### GitHub paths

- Analysis outputs: Actions run artifacts named `PLA-pla-project`, `PLA-pla-sqlite`, `PLA-pla-c`, `PLA-pla-ndjson` and diagnostics (30-day retention).
- Published output (for each successful run): `derived/v1.1.1/Ghidra_12.2_Run_<run_id>/pla/`:
  - `project/PLA111.gpr`, `project/PLA111.rep/`; `project_parts/` when individual Ghidra native DB internals need splitting.
  - `database/`: **raw SQLite binary parts**, ordered and SHA-256-verified.
  - `ndjson/`: **plain uncompressed NDJSON parts**, each part contains complete JSON lines.
  - `c/<address-prefix>/<function-entry>.c`: one file per successful Ghidra C decompilation.
  - `sqlite_manifest.json`, `decompiled_manifest.json`, `decompiled_index.csv`, `parts_manifest.json`: complete counts, errors, file hashes and restore instructions.
- All Git blobs are limited to 45 MiB in the publication stage. Original Ghidra project internal files can themselves be split.

### Restore

Clone the repository and execute (replace the run ID with one that has a successful publication):

```bash
python3 tools/ghidra/pla_restore_split.py \
  --source derived/v1.1.1/Ghidra_12.2_Run_<run_id>/pla \
  --out /tmp/pla-ghidra-restored
```

This verifies every shard's SHA-256, recombines the raw SQLite/NDJSON and any oversized Ghidra native project internal files, checks SQLite `PRAGMA integrity_check` and row counts, and reports record counts. For database-only use, append `--no-project`.

C source files already exist individually at `c/`; they are Ghidra-generated **pseudocode**, not original game C++ source. Function signatures/names and business meaning are Ghidra analysis hypotheses unless independently validated. A full Ghidra analysis/export counts recovered Ghidra functions, not all true native function entry points. Compare recovered coverage with native unwind FDE and machine-code evidence before making absolute completeness claims.

## Pipeline validation and failure handling

Run the direct analysis via Actions / `workflow_dispatch`. The **full analysis run must finish successfully** before the publisher starts. If original analysis fails, diagnostics are still uploaded but no incomplete data is published. The publisher refuses pre-existing run directories, validates original ELF identity, manifest consistency, per-function success/failure coverage, SQLite integrity, NDJSON record boundaries and reassembled hashes. A Git push failure remains a failed publication; it must never be described as fully submitted.

Generated derived data is static Ghidra output. It does not prove dynamic call behavior, game-version equivalence or the accuracy of inferred types.
