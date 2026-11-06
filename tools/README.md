# Upstream tools / source provenance

R0 does not vendor external code or binaries automatically.

Candidate dependencies should be reviewed and pinned individually: `gftool` (including nested dependencies), `PokeDocs` where PLA-specific data exists, `Switch-Toolbox` for verified supported formats, `pkNX` only if PLA support is proven, and `nx2elf` for ExeFS investigation. A tool proven for SV or ZA is **not automatically compatible** with PLA.

When approved, create `tools/upstream.json` with exact URL, commit SHA, license, nested dependencies, local tree hash, how to verify and a PLA compatibility smoke test. Do not commit proprietary `oo2core*.dll`, ROM/console keys or unsigned binary installers. Do not add vendored code to this R0 scaffold.

## Selected SV tool revisions for PLA

The new [upstream.json](upstream.json) pins pkNX, Switch-Toolbox, gftool, PokeDocs and nx2elf. Run `python scripts/sync_pla_tools.py --only pkNX` in the repository root; the checkouts are kept in ignored `.pla-work/toolsrc` and not vendored into Git. The new `tools/PLA.GFPak.Cli` builds against pinned pkNX.Containers with MSBuild `PkNxRoot`. See [pipeline guide](../docs/gfpak-parallel-pipeline.md). An authorized local Oodle decoder is still required for PLA compressed members.
