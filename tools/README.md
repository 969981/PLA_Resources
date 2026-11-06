# Upstream tools / source provenance

R0 does not vendor external code or binaries automatically.

Candidate dependencies should be reviewed and pinned individually: `gftool` (including nested dependencies), `PokeDocs` where PLA-specific data exists, `Switch-Toolbox` for verified supported formats, `pkNX` only if PLA support is proven, and `nx2elf` for ExeFS investigation. A tool proven for SV or ZA is **not automatically compatible** with PLA.

When approved, create `tools/upstream.json` with exact URL, commit SHA, license, nested dependencies, local tree hash, how to verify and a PLA compatibility smoke test. Do not commit proprietary `oo2core*.dll`, ROM/console keys or unsigned binary installers. Do not add vendored code to this R0 scaffold.
