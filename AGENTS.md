# Repository instructions — PLA_Resources

## Mission
Maintain a reproducible, evidence-based Pokémon Legends: Arceus (PLA) v1.1.1 resource archive and native format research workspace. Original bytes and original relative paths are immutable. Counted, copied, extracted, parsed and validated are **different** statuses.

## Mandatory first checks
1. Read `README.md`, `docs/README.md`, `docs/repository-layout.md`, `docs/resource-provenance.md`, `docs/unpack-roadmap.md` and the relevant format note.
2. Inspect Git branch, status, remote HEAD, original source tree, inventory CSV, tool revision and current checkpoint. Preserve user changes; never overwrite conflicting remote changes.
3. Before changing a parser or converter, state the input type, output contract, expected validation and fallback for unknown data. After changing, run tests and summarize exact commands, file paths, results and unresolved failures.

## Immutable original sources
- `v1.1.1/b38cd4c18831237d85312886f3a377b5_NCA/0/` holds ExeFS (6 files already present on remote at initial audit). Do not edit, rename or replace.
- `v1.1.1/b38cd4c18831237d85312886f3a377b5_NCA/1/` is the expected RomFS root. **It was absent from the remote repository at the initial audit**; do not claim remote completeness based on the local CSV alone.
- Create a new `<version>/<NCA_ID>_NCA/` tree for a new version. Never merge versions or infer shared structures without byte-level evidence.
- Existing six `PLA_1.1.1_*.csv` / `.json` root inventory reports are user-produced baseline records. Do not rewrite or renormalize them casually. The inventory includes one non-NCA text listing: 19,102 total entries, of which 19,101 NCA files (6 ExeFS, 19,095 RomFS), and 1,219 directories.
- Baseline file `SHA256` cells are empty because original inventory was run without `-IncludeHash`. Record new hashes from actual bytes; never manufacture hashes or call the baseline a cryptographic verification.

## Directory ownership
- `docs/`: architecture, formats, research, logs, verification. Research notes versioned under `docs/research/v1.1.1/`.
- `scripts/`: maintained Python and PowerShell code; `tests/`: synthetic tests with no ROM-derived fixture bytes.
- `manifests/v1.1.1/`: transfer, source provenance, parsed outputs, failures and coverage with documented schemas.
- `tools/`: explicitly approved source dependencies with pinned upstream revision, license and compatibility tests; never automatically copy all SV/ZA vendors.
- `Unpack/v1.1.1/`: derived outputs only. Original `v1.1.1/` files may be read, not overwritten. Preserve source-path case, file basename and extension in output paths.
- `.pla-work/`: local checkpoint/cache/restore space; ignored by Git. Large or legally restricted derived artifacts belong in verified external storage or opt-in release archives, not automatically in Git.

## Source and output evidence
- Record game/version, exact source relative path, size, SHA-256, tool name/revision, options, command, stage, output path(s), output size(s)/SHA-256, validation and errors.
- `CONFIRMED` requires repeatable native byte evidence or a verified parse; `CANDIDATE` is a hypothesis, `UNKNOWN` is unresolved, `REJECTED` is disproven with a retained explanation. A filename, hash hit, image similarity or tool exit code alone is not proof of a semantic mapping.
- A parser may mark `UNSUPPORTED` but never silently copy bytes or rename extensions and claim `CONVERTED`. Preserve all unparsed sources in the ledger.
- Every source file must have exactly one terminal audit state per pipeline stage. `PARTIAL` is never a valid skip key for resume. Status semantics and manifest schema are documented in `docs/resource-provenance.md`.
- Avoid corrupt paths, case-insensitive collisions, symlink escapes and path traversal. Do not delete source bytes or generated outputs until hash-verified replacement is established.

## Format-specific policy
- PLA's first-level RomFS resources are already individual files; **do not assume** an SV/ZA `data.trpfs` virtual archive or copy their extraction stage unchanged.
- `.gfpak`: container extraction, then format-aware nested parsing. Do not claim all inner assets decoded when only archive entries were extracted.
- `.dat/.tbl`: test pairing per language, encoding, offsets and record counts; do not infer identifiers without native validation.
- `.blua`: determine native bytecode dialect, byte order and chunk validity before disassembly; decompiled names are hypotheses unless proved.
- `.bntx`, `.trmdl/.trmsh/.trmtr/.trskl/.tranm`, `.ptcl`, `.pck/.bnk`: use dedicated adapters and non-empty output validation; preserve unknown sections.

## Performance and CI rules
- Support `--jobs`, `--resume`, `--retry-failed`, `--shard-index`, `--shard-count`, `--dry-run`, and `--strict` in batch converters as they are implemented. Use deterministic partitioning based on normalized source paths, atomic writes, append-only results and controlled RAM/CPU parallelism. A failed shard must not invalidate successful evidence.
- Keep inventory/audit CI cheap; only run expensive full extraction via `workflow_dispatch` or an explicitly approved schedule. Do not commit giant intermediary exports during tests.
- A successful workflow requires source coverage, parser coverage, exception reporting and output validation, not merely process exit code zero.

## Git, large files, rights
- Stage explicit paths. Separate scripts/docs commits from resource-data batches. No `git add .` / `git add -A` in bulk import scripts, force pushes, resets, history rewrites or automatic merges on divergent history.
- Do not add ordinary Git blobs >=100,000,000 bytes. For approved original-file transfer, use 7-Zip `-t7z -mx=1 -v90m`, store parts alongside the original location, hash each part, run `7z t`, reconstruct in temporary storage and match the source SHA-256; batch pushes conservatively (e.g. ~600 MiB per push, below 2 GiB).
- Respect licensing, access and distribution permissions. Do not commit ROM keys, credentials, proprietary DLLs, unapproved third-party source/binaries or large copyrighted game exports without explicit rights review. Private hosting alone is not authorization.

## Acceptance gates
- R0: docs, scripts, synthetic tests and inventory integrity checks are present and CI passes. R0 does **not** imply that RomFS or parsers are available.
- R1: all source artifacts verifiably available, hashed and restored if split; 19,101 NCA paths reconciled, or the variance explained.
- R2+: extract, parse, convert and cross-check per-format with per-file coverage; publish only validated artifacts and explicit known limitations.
