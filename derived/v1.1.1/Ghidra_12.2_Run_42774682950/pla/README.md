# Pla 1.1.1 — Ghidra 12.2 full static export

Source: [Actions #42774682950](https://github.com/969981/PLA_Resources/actions/runs/42774682950).

- `project/PLA111.gpr` and `.rep/`: editable native Ghidra program; restore project_parts first if present.
- `database/`: losslessly split **raw SQLite bytes** (not ZIP or gzip).
- `ndjson/`: **plain** JSON-lines parts, each part ends on a whole JSON record.
- `c/`: 82731 individual C pseudocode files; 29 failures or empty results are recorded in `decompiled_index.csv`.
- `parts_manifest.json`: original and each-shard SHA-256 and counts.

Restore using `python3 tools/ghidra/pla_restore_split.py --source <this-directory> --out <empty-directory>`.
These files are Ghidra-derived static analysis, not Nintendo's original source code.
