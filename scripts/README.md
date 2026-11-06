# Scripts — PLA v1.1.1

## Available in R0

- `audit_pla_inventory.py`: checks root inventory CSV structure, duplicate paths, NCA class totals and optional source presence/size. **By default it does not verify original bytes exist on GitHub.**
- `plan_pla_unpack.py`: emits a deterministic, exhaustive per-source task-plan CSV. **Does not extract or convert anything.**

```shell
python scripts/audit_pla_inventory.py PLA_1.1.1_files.csv --expected-nca 19101 --expected-exefs 6 --expected-romfs 19095
python scripts/plan_pla_unpack.py PLA_1.1.1_files.csv --out .pla-work/v1.1.1/task-plan.csv
python -m unittest discover -s tests -p 'test_*.py' -v
```

To check real local source presence, optionally pass `--source-root "J:\ROMS\Nintendo Switch\Pokemon\Pokemon Legends Arceus\v1.1.1" --strict-source` to the auditor. This is expected to fail on the current GitHub clone because RomFS has not yet been uploaded.

## Proposed future scripts (not implemented by R0)

- `Archive-PLA-RomFS.ps1`, `Restore-PLA-RomFS.ps1`, `Verify-PLA-RomFS.ps1`: read-only source transfer, 7z volume manifests, restore hash checks.
- `Extract-PLA-GFPak.py`, `Parse-PLA-Messages.py`, `Analyze-PLA-BLUA.py`: native byte-backed adapters.
- `Convert-PLA-Assets.py`: images, Trinity models/effects and Wwise media by format-aware plugin.
- `Run-PLA-Parallel.py`, `Audit-PLA-Coverage.py`: parallel jobs, resume, failure retry and total reconciliation.

Do not call proposed scripts implemented until they are written, tested and proven against real assets.
