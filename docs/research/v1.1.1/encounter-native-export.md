# PLA v1.1.1 native encounter export: source → GFPak → mapping → PKHeX

## Native path (implemented on dedicated branch)

The dedicated command-line bridge in `tools/pla-encounter-native/` invokes pkNX's **actual** reusable libraries in a Linux CI job; it does not treat the upstream PKHeX binary as its input. It works in read-only mode against the checked-out PLA v1.1.1 RomFS. pkNX source is cloned at **3bc649eea311ab1f249af43a562f8d70fe90ed9b**, GPL-3.0, during the CI job and is not copied to this repository.

1. **GFPak native decompression**: `pkNX.Containers.GFPack` reads `bin/archive/field/resident_release.gfpak` and resolves `bin/field/resident/AreaSettings.bin` by the original FNV-1a path hash. Unsupported compression must fail, never silently use compressed bytes.
2. **FlatBuffers decoding**: parses the area settings, resident encounter tables, placement generators, location polygons and native outburst group lotteries via pkNX's FlatSharp-compiled game schemas. Reads `poke_misc.bin` to apply alpha bonus rules.
3. **Map ID cross-link**: reads PLA English `metlist_00000` text and the native `place_name.tbl` lookup; relies on pkNX's `AreaInstance` and `EncounterTableUtil.GetEncounterDump` for location-zone selection. The map ID is **not** guessed from filenames or copied from the baseline PKHeX file.
4. **PKHeX export**: deduplicates byte-identical areas, packs `la` Mini records as `encounter_la.pkl`, validates record layout and terminator offsets, writes a source-hash evidence report.
5. **Independent comparison**: downloads upstream PKHeX `encounter_la.pkl` into the CI runner's temporary directory *for comparison only*. Reports exact and semantic-multiset agreement or differences without overwriting native output.

The pipeline emits `native-export-evidence.json`, `encounter_la.pkl` and `pkhex-reference-compare.json` as a short-lived **CI artifact** when successful, not as a permanent unsolicited Git resource binary. No original ROM or game resource is mutated.

## Run CI

On the `feat/pla-encounter-pkl-audit-20261123` branch, inspect the [native export workflow](../../../.github/workflows/pla-encounter-native-export.yml) and its Actions logs. The workflow also supports manual dispatch once GitHub recognizes it on a supported ref.

The workflow uses a **sparse checkout** of only the native GFPak, encounter data, English message tables, misc data and the tool scripts, avoiding a full 6 GB clone. It clones a pinned pkNX revision and builds the console tool with .NET 10 on Ubuntu. For manual local invocation on a Windows/WSL workstation with a full legally obtained PLA RomFS, link the `romfs` directory from the appropriate game root and call:

```bash
git clone https://github.com/kwsch/pkNX.git vendor/pkNX
git -C vendor/pkNX checkout 3bc649eea311ab1f249af43a562f8d70fe90ed9b
dotnet build tools/pla-encounter-native/PLAEncounter.csproj -c Release -p:PkNXRoot="$PWD/vendor/pkNX"
dotnet tools/pla-encounter-native/bin/Release/net10.0/PLAEncounter.dll \
  "/absolute/path/to/pla-game/romfs" ".pla-work/native-output"
python scripts/pla_encounter_pkl.py inspect ".pla-work/native-output/encounter_la.pkl"
python scripts/compare_pla_encounters.py ".pla-work/native-output/encounter_la.pkl" \
  "/path/to/upstream/encounter_la.pkl" --output ".pla-work/native-output/pkhex-reference-compare.json"
```

**Acceptance states**: `GENERATED_NATIVE` must mean that original source byte hashes exist, all native decoders succeeded, no missing named location mapping was ignored, and `encounter_la.pkl` passes structural validation. A comparison discrepancy must be reported as a discrepancy, not automatically interpreted as an extraction failure or as an improvement. A CI failure does not mean the game data contains no encounters; inspect the error report.

The reference counts (1,738 areas, 7,132 slots, 519/213/169/227/610 types) come from a **separate PKHeX reference**, and must never be inserted into a supposedly native export as predetermined values. Every CI export has its own actual counts and source hashes.
