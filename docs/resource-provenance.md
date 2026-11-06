# Provenance, per-file stage status and audit evidence

## Baseline measurements

Source: local `PLA_1.1.1_files.csv` and `PLA_1.1.1_summary.json` (generated 2026-11-06). 19,102 records include one outside-NCA text listing. NCA: 19,101 (ExeFS 6, RomFS 19,095). Total directory count 1,219, total local directory bytes 6,468,079,628. The upload is a structural inventory, not a verified RomFS transfer receipt. `SHA256` is blank in the supplied CSV.

## Required per-source ledger fields

```json
{
  "schema_version": 1,
  "game": "PLA",
  "version": "1.1.1",
  "source_relative_path": "b38cd4c18831237d85312886f3a377b5_NCA/1/bin/archive/ai/ai.gfpak",
  "source_size_bytes": null,
  "source_sha256": null,
  "source_available": false,
  "stage": "extract",
  "state": "SOURCE_MISSING",
  "tool": null,
  "tool_revision": null,
  "params_fingerprint": null,
  "input_fingerprint": null,
  "outputs": [],
  "error": null,
  "evidence": "inventory_path_only"
}
```

This is a schema *illustration*, not an actual processed resource. A live manifest must populate fields from real execution. Source hashes must be calculated from byte streams, not filenames or assumed stable versions.

## State machine

Each stage `extract`, `parse`, `convert`, `verify` must have a separate state:

- `SOURCE_MISSING`: bytes absent; cannot run.
- `PLANNED`: input known and task exists; no work performed.
- `RUNNING`: transient lease, never terminal success.
- `PARTIAL`: some outputs exist, but not all validated; always eligible for resume.
- `VERIFIED`: this particular stage finished with all its required checks.
- `UNSUPPORTED`: format/variant unsupported, with reason; auditable but **not** successful conversion.
- `FAILED`: execution/verification failure, include stack/error and retry history.
- `SKIPPED_UNCHANGED`: allowed only after verifying the exact prior `VERIFIED` fingerprint and outputs.

Proof labels for semantic relationships: `CONFIRMED`, `CANDIDATE`, `UNKNOWN`, `REJECTED`. Do not conflate semantic confidence with a pipeline execution state.

## Fingerprinting

Hash `source_sha256 + parser_revision + schema_sha256 + normalized_options + stage` into a stable task fingerprint. On resume, skip only with matching fingerprint, complete output manifest, extant outputs and validated output hashes. A changed parser invalidates affected derivatives.

## Coverage gates

- Enumerate every source file from the versioned source manifest. Include unsupported and failed assets; never hide them in a success percentage.
- Require `expected NCA count == sources recorded == terminal stage results` at the intended stage, **subject to explicitly documented source changes**. A stage `VERIFIED` count is not equivalent to total-accounted count.
- Count file bytes, record archive entry count, check offset boundaries, CRC/hash where available and validate decoded format signatures. If a converter only extracted opaque bytes, mark extract verified and parse/convert pending or unsupported.
- Publish `coverage.json`, `failed.jsonl`, `unsupported.jsonl`, `unaccounted.jsonl` and their generation commands. A CI green check is not an independent ROM-integrity proof.

## Archive originals

For rights-approved transfers of files >90 MiB, create 90 MiB 7z volumes with `-t7z -mx=1 -v90m`. Record all parts and SHA-256, test archive and restore to a work directory outside `v1.1.1/`, compare restored source SHA-256. Never push original/derivative >100 MB Git blob. Respect rights/visibility requirements.
