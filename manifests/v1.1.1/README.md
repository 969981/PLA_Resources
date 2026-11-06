# PLA v1.1.1 manifests

Create machine-generated ledgers here after real transfer/extraction begins:

- `source_manifest.jsonl`: exactly one entry per NCA source file (known size, SHA-256 and availability).
- `transfer_manifest.json`: original vs stored 7z part paths, per-part size/hash and full restoration validation.
- `stage_results.jsonl`: one current stage outcome per source and stage, with prior attempts retained separately.
- `coverage.json`: counts by available/missing, verified/partial/failed/unsupported, class and extension.
- `failed.jsonl`, `unsupported.jsonl`, `unaccounted.jsonl`: explicit open items.

Use `docs/resource-provenance.md` as normative contract. These generated files do not exist in R0 because RomFS source bytes have not been fully transferred or hashed.
