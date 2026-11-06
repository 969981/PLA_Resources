# PLA v1.1.1 research log

Initial data source: user-generated local Windows file-system inventory. Total local entries 19,102; NCA 19,101 files (ExeFS 6, RomFS 19,095), 1,219 folders, 6,468,079,628 bytes including one TXT listing. Local enumeration reported 0 scan errors; SHA-256 disabled. GitHub initial audit showed only ExeFS `0/`, not RomFS `1/`.

Priorities: GFPak internal archive extraction; 10-language `.dat/.tbl`; BLUA format; BNTX/TRINITY model family; effect/audio conversion; `field/encount/` gameplay data. All parser and field semantic claims remain `UNKNOWN` until byte evidence, offsets, hashes and repeatable validation exist.

Log individual experiments in new dated files, including source file SHA-256, parser/tool commit, shell command, output hashes, exceptions, tested hypotheses and confidence/evidence status.
