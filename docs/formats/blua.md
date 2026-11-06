# BLUA native bytecode investigation — PLA v1.1.1

**Status: PLANNED.** Inventory has 874 `.blua` files beneath `bin/haxe/release/`.

First inspect exact magic, version, endianess, compiler dialect and chunk boundaries for multiple real samples. Decode constants, prototype hierarchy, upvalue descriptions and instructions with synthetic tests. A successful disassembly is not equivalent to verified original source names, control flow or runtime call sites. Document per-sample source SHA-256 and all unknown opcodes; never silently substitute ZA/SV Lua ABI assumptions.
