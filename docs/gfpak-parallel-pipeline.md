# PLA 1.1.1 GFPak headless extraction — implementation and validation

## Why this is not the SV/ZA TRPFS pipeline

PLA RomFS has directly exposed `bin/archive/**/*.gfpak`. The original v1.1.1
inventory lists **678 GFPaks / 1,700,039,584 compressed bytes**. Unlike Sword's
LZ4-heavy packs, PLA archive members use Oodle compression. The CLI uses pinned
`kwsch/pkNX` `pkNX.Containers.GFPack` to extract genuine member bytes.

## Implemented

- `tools/upstream.json`: exact pinned SHA for pkNX, Switch-Toolbox, gftool, PokeDocs, nx2elf.
- `scripts/sync_pla_tools.py`: fetch pinned tools into ignored `.pla-work/toolsrc/`.
- `tools/PLA.GFPak.Cli/`: .NET 10 console adapter; native GFPak magic, member
  indices, full-path hashes, original filename/folder hash mappings, decompressed
  length and file bounds; bounded nested GFPak recognition/extraction.
- `scripts/extract_pla_gfpak.py`: stable-sharded Python `ProcessPoolExecutor`
  running one .NET extractor per independent archive. Each worker checks SHA-256
  in a bounded `ThreadPoolExecutor`; staged output promoted only after all
  entries verify. `--resume` never trusts PARTIAL. Failures are recorded.
- `scripts/audit_pla_gfpak_coverage.py`: reconcile all 678 source-relative
  paths with the four shard ledgers; no missing/failed item may count as success.

The CLI writes exact member bytes under
`Unpack/v1.1.1/romfs/bin/archive/.../<archive>.gfpak/extracted/` plus
`_manifest.json` and `_receipt.json`. Hash-indexed names ending in `.bin`
are **not** claims about original member filenames or decoded formats.
Each native member has its original index, compression type, size, native
folder/name/full-path hashes, output SHA-256 and first 8 magic bytes.

## First real three samples

- `bin/archive/pokemon/pm0025_00_00.gfpak`
- `bin/archive/appli/battle_menu.gfpak`
- `bin/archive/field/resident_release.gfpak`

Windows `pkNX` / .NET 10 run
[42158997746](https://github.com/969981/PLA_Resources/actions/runs/42158997746)
reported `VERIFIED 3 / 3` and 0 C# compilation errors.
Its artifact `pla-gfpak-real-samples` stores the actual extracted members and
manifests (14-day retention). Do not extrapolate the sample outcome to the
other 675 archives or to secondary-format parse coverage.

## Local Windows commands

From the PLA_Resources checkout (PowerShell):

```powershell
python scripts/sync_pla_tools.py --only pkNX
$pkNX = (Resolve-Path '.pla-work/toolsrc/pkNX').Path
dotnet build tools/PLA.GFPak.Cli/PLA.GFPak.Cli.csproj -c Release "-p:PkNxRoot=$pkNX"

$cli = 'tools/PLA.GFPak.Cli/bin/Release/net10.0/PLA.GFPak.Cli.dll'
$root = 'v1.1.1/b38cd4c18831237d85312886f3a377b5_NCA/1'

python scripts/extract_pla_gfpak.py --source-root $root --cli $cli `
  --oodle 'tools/deps/oo2core_8_win64.dll' --samples --jobs 3 `
  --hash-threads 2 --strict

python scripts/extract_pla_gfpak.py --source-root $root --cli $cli `
  --oodle 'tools/deps/oo2core_8_win64.dll' --expected-count 678 `
  --jobs 3 --hash-threads 2 --max-depth 2 --resume --strict
```

The Oodle decoder must be legally available on the executing machine.
The new workflow does not add or distribute any decoder binary.

## GitHub Actions full coverage

`.github/workflows/pla-gfpak-extract.yml`: choose **mode=full** in
`workflow_dispatch`. Four Windows runners split the full deterministic
inventory into `shard=0..3` and each runs 3 extractor processes with 2
verification threads per process. Each shard uploads a manifest artifact
and the extracted bytes separately (14-day retention). A final coverage job
combines the four ledgers and requires **678/678** verified/accounted sources.
Downloaded artifacts are not automatically committed to `master`.

## Next secondary adapters

1. Classify each extracted blob by *actual magic/header*; add independent stage
   ledgers for known signatures and keep `unknown` as unknown.
2. Validate BNTX texture decode and true pixel export/redecode.
3. Parse `.trmdl/.trmsh/.trmtr/.trskl/.tranm` references; GL preview and
   actual vertex/material/animation round-trip tests.
4. Decode `.dat/.tbl` language pairs and `.blua` only after dialect validation.
5. Process `.ptcl`, Wwise `.bnk/.pck` and all remaining original RomFS files.
6. Check `19,101` NCA source inventory paths and hashes independently of the
   completed `678` GFPak extraction stage.

Current statuses: **native extraction implemented and tested on 3 real packs**;
**all-678 coverage not yet certified**; **secondary semantic parsers pending**.
