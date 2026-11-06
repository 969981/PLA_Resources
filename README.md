# PLA_Resources

Pokémon Legends: Arceus (PLA) v1.1.1 raw-resource archive and reproducible extraction/research workspace.

## Current recorded state (initial audit, 2026-11-06)

- The repository's root inventory reports **19,102** local files, including one source tree text listing, and **19,101** NCA files: **6** ExeFS + **19,095** RomFS. Source tree directories: **1,219**. Local scan reported zero errors; original hashes were not computed.
- Remote GitHub `master` initially included the ExeFS `/0` files and the six root CSV/JSON inventory reports, but **not** the RomFS `/1` tree. Inventory is not proof of remotely stored original bytes.
- Read [Agent rules](AGENTS.md), [Layout](docs/repository-layout.md), [Provenance](docs/resource-provenance.md), [Roadmap](docs/unpack-roadmap.md), [Scripts](scripts/README.md).

## R0 validation — safe and cheap

```shell
python scripts/audit_pla_inventory.py PLA_1.1.1_files.csv --expected-nca 19101 --expected-exefs 6 --expected-romfs 19095
python scripts/plan_pla_unpack.py PLA_1.1.1_files.csv --out .pla-work/v1.1.1/task-plan.csv
python -m unittest discover -s tests -p 'test_*.py' -v
```

The planner **only plans tasks**. It cannot extract `gfpak` or other game formats. Running it is not an extraction success.

## Next actions

1. Build the immutable RomFS transfer and SHA-256 manifest; use read-only source input.
2. Verify and restore archive volume sets; reconcile each NCA file path.
3. Implement and test real GFPak extraction and `.dat/.tbl`, `.blua`, BNTX, Trinity and Wwise adapters.
4. Use parallel incremental processing, auditable per-source statuses and versioned manifests.

No ROM data, secret, key or proprietary dependency should be copied into tools/tests as a fixture.

## GFPak R3 verification (2026-11-06)

Remote RomFS /1 now includes actual GFPak resources, though 19,095-file source-hash reconciliation is separate. Three Pokemon/UI/field packs successfully passed native extraction and SHA-256 validation in [Actions #42158997746](https://github.com/969981/PLA_Resources/actions/runs/42158997746). For a bounded multiprocessing extraction of the other 675 archives and four-shard Actions execution, see [pipeline guide](docs/gfpak-parallel-pipeline.md). The original R0 findings above are historical; they are not a current remote inventory audit.

**GFPak source detail:** `ha_area04.gfpak` is tracked as two 7z parts rather than a literal `.gfpak` blob. Native full extraction restores it in the runner before checking the expected 678 containers. See `scripts/restore_pla_gfpak_volumes.py`.
