# PLA 1.1.1 ExeFS main → ELF (nx2elf)

## Original (immutable)
- Game: Pokémon Legends: Arceus, version 1.1.1.
- Source: `v1.1.1/b38cd4c18831237d85312886f3a377b5_NCA/0/main`.
- GitHub source size at setup: 31,882,976 bytes. SHA-256 is calculated from bytes at build time; the original inventory does not establish a hash.
- Source type: expected `NSO0`. The build fails rather than labeling a non-NSO file as converted.

## Tool and reproducible command
- Converter: `tools/nx2elf` from `969981/SV_Resources`, pinned at commit `be3a50098a7126ec8bc72fc1c921be54a1d06071`.
- Tool is compiled from the pinned repository in GitHub Actions, rather than copying an unreviewed binary or adding a submodule.
- Local equivalent after compiling the pinned converter:

```bash
python scripts/build_pla_main_elf.py \
  --converter /path/to/nx2elf \
  --tool-revision be3a50098a7126ec8bc72fc1c921be54a1d06071
```

Equivalent conversion invocation: `nx2elf <source-main> --export-elf <temporary-main.elf>`.

## Output and proof
- Derived output directory: `Unpack/v1.1.1/exefs/main/`.
- If ELF is below 95,000,000 bytes, commit `main.elf` directly.
- Otherwise commit ordered `main.elf.chunk-000`, etc. (each at most 90,000,000 bytes), and restore with `cat main.elf.chunk-* > main.elf` on Unix or byte-concatenation on Windows.
- Always commit `main.elf.manifest.json` and `main.elf.sha256`. The manifest records actual source/output SHA-256 and lengths, tool revision, ELF header counts, chunk SHA-256 and verification states.
- Workflow also uploads the complete ELF as a downloadable Actions artifact, for 14 days.

Validated conditions: source magic is NSO0; output exists and has an ELF64 little-endian AArch64 header, valid bounded program/section header tables, and full-size SHA-256 matches the Git-stored copy or the concatenation of chunks. `readelf -h`, `readelf -l` and `readelf -S` provide extra diagnostics during CI. These checks are **structural**, not proof of symbol semantics or functional runtime equivalence.

## Execution
Workflow: [Build PLA main ELF](../../../.github/workflows/build-pla-main-elf.yml), triggered on initial workflow push or manually through **Actions → Build PLA 1.1.1 main ELF → Run workflow**.

The original source under `v1.1.1/` is never rewritten. The validated ELF may be opened in Ghidra using AArch64 little-endian; disassembly/decompilation and symbol recovery are separate follow-on steps.
