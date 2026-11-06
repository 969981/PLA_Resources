# Repository layout contract

```text
PLA_Resources/
├── AGENTS.md
├── README.md
├── .github/workflows/validate-pla-r0.yml
├── PLA_1.1.1_{files,extensions,modules,directories,languages}.csv
├── PLA_1.1.1_summary.json
├── v1.1.1/b38cd4c18831237d85312886f3a377b5_NCA/
│   ├── 0/                                   # ORIGINAL ExeFS (present)
│   └── 1/                                   # ORIGINAL RomFS (initially missing on GitHub)
├── Unpack/v1.1.1/
│   ├── exefs/<original-name>/               # derived ELF/symbol analyses
│   ├── romfs/bin/archive/.../<name>.gfpak/
│   │   ├── extracted/                       # exact archive entry bytes
│   │   ├── parsed/                          # structured decoded records
│   │   └── converted/                       # inspectable PNG/glTF/JSON/etc.
│   ├── romfs/bin/message/.../<name>.dat/    # optional per-source parsed output
│   └── _index/                              # per-file result ledger / audit
├── manifests/v1.1.1/                       # transfer / source / output records
├── docs/{formats,research}/                # evidence and specs
├── scripts/                                 # reproducible tools
├── tests/                                   # synthetic fixtures/tests
├── tools/                                   # reviewed, pinned upstream source
└── .pla-work/                               # ignored local working dir
```

The `Unpack/` tree is a proposed destination; its absence is normal during R0. The legacy `virtual/` tree from SV/ZA is **not** applicable unless an actual PLA container provides a virtual namespace proven by bytes.

## Path rules

- Preserve the original basename, extension, lettercase and entire RomFS-relative path.
- Never write parsed files into the source `/1` directory or overload `*.gfpak` with a folder of the same path at source.
- Container entries may have duplicate or unsafe names. Use stable, reversible entry IDs, validate against path traversal, and retain original internal names separately in manifest metadata.
- For a source such as `bin/archive/ai/ai.gfpak`, the target is `Unpack/v1.1.1/romfs/bin/archive/ai/ai.gfpak/extracted/...`.
- Outputs need a unique source-relative path and stage; folder creation is not successful conversion.
- Keep `manifests/` for compact ledgers, `.pla-work/` for caches and large scratch, and versioned `Unpack/` for accepted derived outputs only.

## Versioning and publication

A new release gets its own version root. Git tracks scripts, schemas, notes, approved originals and **small validated derived artifacts**. Larger decoded outputs require explicit opt-in and a verified artifact/archive publication strategy. Do not bundle media just because GitHub Actions completed successfully.
