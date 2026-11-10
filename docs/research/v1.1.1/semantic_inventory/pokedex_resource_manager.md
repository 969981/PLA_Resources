# PLA 1.1.1 — Pokédex resource and view call-chain notes

> Scope: static Ghidra 12.2 pseudocode and direct call/reference evidence from the pinned PLA 1.1.1 ELF. This is not original source code and does not establish runtime behavior.

## Executive finding

Two related but not yet fully joined Pokédex paths are visible:

1. A resource-manager path creates a dedicated 0x78-byte manager object, a nested 0x68-byte table container, and three resource-table wrappers for research tasks, rank data, and form-storage indices.
2. A view path resolves a UI object named PokedexView, checks FSYS_X_MENU_ZUKAN_DISABLE, and initializes a view using common/pokedex.dat, View_Top, and CommonOptionBar.

The resource manager and view initialization are both strongly Pokédex-related, but the static evidence collected so far does not yet prove the exact pointer/registry edge connecting those two paths.

## Evidence baseline

- ELF: PLA 1.1.1 main.elf
- Original ELF SHA-256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
- Ghidra: 12.2
- Image base: 0x00100000
- Source analysis: Run 42774682950
- Function records: 82,760
- Successful C pseudocode files: 82,731

Addresses below are Ghidra program addresses, not RVAs. The original generated C files remain unchanged; this document is a separate annotation layer.

## 1. Resource-manager construction chain

### 1.1 Parent context attaches the manager

Function 0x00D840E0 initializes a large context object. Near its end it:

1. Calls FUN_00D86F64(...) to allocate and initialize a subordinate object.
2. Stores the returned pointer in param_1[0x39], i.e. byte offset 0x1C8.
3. Calls FUN_013E2328(lVar7, local_48) on that object.

FUN_00D86F64 allocates 0x78 bytes and calls FUN_013E20C8 as its initializer. FUN_013E20C8 allocates a nested 0x68-byte object through FUN_013E2210 and stores it at outer-object offset 0x58.

**Interpretation:** the parent context owns a Pokédex-related manager at offset +0x1C8; the manager owns a nested table container at offset +0x58. The role is strongly supported by the three child table loaders called immediately afterward.

### 1.2 Nested table container layout

FUN_013E2328 reads the nested container pointer from param_1 + 0x58, then creates and installs three child wrappers:

| Nested container offset | Allocated wrapper size | Initializer | Lazy loader | Resource path |
|---|---:|---|---|---|
| +0x08 | 0x38E0 | 0x013E2520 | 0x013F7098 | bin/appli/pokedex/res_table/pokedex_research_task_table.bin |
| +0x28 | 0x40 | 0x013E2620 | 0x013F6B70 | bin/appli/pokedex/res_table/pokedex_rank_table.bin |
| +0x48 | 0x760 | 0x013E2740 | 0x013F6A80 | bin/appli/pokedex/res_table/pokedex_form_storage_index_table.bin |

This is direct evidence for a three-table resource group. It does not yet establish the on-disk record schemas of all three files.

### 1.3 Lazy-load helper behavior

Each of the three loaders calls:

- FUN_009F1B84: builds a resource-path descriptor. It either passes the path through a prefix-aware path builder or prepends the configured resource prefix, then creates the descriptor object.
- FUN_00938764: obtains/starts the resource load and attaches the result to the wrapper.

In FUN_00938764, the second argument's low bit selects two different paths:

- Bit 0 clear: lock the resource mutex at resource + 0x30; while the ready byte at resource + 0x1E1 is zero, wait on the condition variable at resource + 0x34.
- Bit 0 set: take the alternate request path through FUN_00939B4C; this branch does not perform the explicit ready-condition wait in FUN_00938764.

The three loaders in FUN_013E2328 pass mode 0, so they use the wait-until-ready path. The distribution-table loader described below passes mode 1; its exact scheduling/completion semantics still need to be closed through the helper's consumers.

## 2. Table-specific post-processing

### 2.1 Research task table — 0x013F7098 → 0x013F6DF8

FUN_013F7098 lazily loads pokedex_research_task_table.bin. After the resource manager reports readiness, it derives a pointer from the loaded data and calls FUN_013F6DF8.

FUN_013F6DF8 is not merely a loader. It parses the loaded table and populates records in the wrapper:

- The output record base is param_1 + 0x40.
- Records are addressed at param_1 + 0x40 + index * 0x10, indicating a 16-byte output stride.
- It writes a 16-bit field at the start of a record and packs several small fields into the 64-bit value beginning at record offset +0x02.
- A parsed key/index is range-checked against 0x389 (905).
- Several switch cases write 4-bit values into different nibble positions of the packed 64-bit field.

**Observed:** a compact, indexed table is decoded into 16-byte records, with a key bounded to 0–905 and multiple packed subfields.

**Inference:** the key is likely associated with a Pokémon species/dex-entry domain, and the packed values likely encode research-task metadata. The exact meanings of the record fields and switch cases remain unresolved until the source table and its consumers are traced.

### 2.2 Form-storage index table — 0x013F6A80 → 0x013F69B0

FUN_013F6A80 lazily loads pokedex_form_storage_index_table.bin. Once the shared data context is ready, it calls FUN_013F69B0.

FUN_013F69B0:

- Sets a ready flag at wrapper offset +0x38.
- Reads a 16-bit count from the source table at context offset +0x250 and stores it at wrapper offset +0x3A.
- Stores a pointer to the first table record at wrapper offset +0x40.
- Clears 0x714 bytes beginning at wrapper offset +0x48.
- 0x714 / 2 = 0x38A = 906, so the destination is a 906-entry 16-bit lookup array.
- Reads source records in 3 × 16-bit units and builds the lookup array.

**Observed:** the form-storage resource is transformed into a 906-entry u16 lookup table.

**Inference:** 906 entries are consistent with an index domain containing slot 0 plus IDs 1–905. This is suggestive of a National-Dex-sized species index, but the mapping direction and treatment of forms must be confirmed from the raw table and its consumers.

### 2.3 Rank table — 0x013F6B70

FUN_013F6B70 lazily loads pokedex_rank_table.bin through the same path-descriptor and resource-load helpers. It checks the wrapper's loaded state and the shared data context's ready flag, then derives the wrapper's data pointer/end marker.

No separate post-processing routine is called from this function. The exact rank record schema and the functions that consume the loaded table remain open.

### 2.4 Distribution table — 0x013F5CD0

FUN_013F5CD0 references pokedex_distribution_table.bin, but it is not called by FUN_013E2328 in the direct-call chain currently recovered.

Unlike the three loaders above, it calls FUN_00938764(..., 1, ...), selecting the helper's alternate non-wait request path. It also performs atomic reference-count updates and releases a shared resource object when the count reaches zero.

**Observed:** this loader uses mode 1 and reference-counted shared-resource cleanup.

**Inference:** it is likely used through a separate asynchronous/shared-resource path. Its caller and completion callback still need to be found, including possible vtable or indirect-call references.

## 3. Pokédex view path

### 3.1 Menu gate

FUN_0146A850 contains two high-value strings:

- PokedexView
- FSYS_X_MENU_ZUKAN_DISABLE

It resolves the PokedexView object through FUN_01470C50, checks the Zukan-disable flag, and calls FUN_01480448 when the disable flag is not set.

This is strong evidence that the function participates in the Pokédex view/menu entry path. It does not, by itself, prove what the final view transition does.

### 3.2 View initialization and common data

FUN_013EF328 contains the strings View_Top, CommonOptionBar, and common/pokedex.dat. It:

1. Resolves the top view and common option bar.
2. Loads common/pokedex.dat through FUN_00D37BB4.
3. Passes the resulting resource object into FUN_013EE3FC.
4. Updates the view state fields at offsets +0x68 through +0x80 of the object returned by FUN_013EF59C.

FUN_013EE3FC stores the supplied data pointers and obtains several subordinate objects through FUN_00D48784.

**Observed:** the view initialization path explicitly loads common/pokedex.dat and binds the result into view-related state.

**Open question:** the precise relationship between common/pokedex.dat and the three bin/appli/pokedex/res_table/*.bin resources is not yet proven. They may be separate layers (view/common data versus structured resource tables).

## 4. Current evidence graph

    Parent context
      0x00D840E0
        └─ stores manager at parent + 0x1C8
           └─ 0x00D86F64 allocates 0x78-byte object
              └─ 0x013E20C8 initializes outer manager
                 └─ outer + 0x58 -> nested 0x68-byte container
                    └─ 0x013E2328 populates:
                       ├─ +0x08 -> 0x38E0-byte research wrapper
                       │  └─ 0x013F7098 -> research_task_table.bin
                       │     └─ 0x013F6DF8 parses 16-byte packed records
                       ├─ +0x28 -> 0x40-byte rank wrapper
                       │  └─ 0x013F6B70 -> rank_table.bin
                       └─ +0x48 -> 0x760-byte form wrapper
                          └─ 0x013F6A80 -> form_storage_index_table.bin
                             └─ 0x013F69B0 builds 906-entry u16 map

    Separate view path:
      0x0146A850 -- PokedexView / ZUKAN_DISABLE gate --> 0x01480448
      0x013EF328 -- common/pokedex.dat + View_Top --> 0x013EE3FC

    Separate distribution resource:
      0x013F5CD0 -- distribution_table.bin, mode 1
      caller/indirect dispatch not yet resolved

The two Pokédex paths are strongly related by resource names and UI strings, but the missing object/registry edge is intentionally left open.

## 5. Evidence grades and confidence

| Claim | Evidence | Grade |
|---|---|---|
| Three table wrappers are installed by 0x013E2328 | Direct allocation sizes, nested offsets and calls | OBSERVED |
| The three wrappers load the named research/rank/form resources | Literal resource paths in their loader functions | OBSERVED |
| Research table is decoded into 16-byte records | Writes and stride in 0x013F6DF8 | OBSERVED |
| Research records are Pokémon research tasks | Resource filename plus index bound and packed fields | INFERRED |
| Form-storage post-processing creates 906 u16 entries | Clear size and loop writes in 0x013F69B0 | OBSERVED |
| The 906-entry index is species/dex keyed | Count aligns with 0..905 but direction is unknown | INFERRED |
| 0x0146A850 is on the Pokédex view/menu path | PokedexView, FSYS_X_MENU_ZUKAN_DISABLE, view lookup | OBSERVED |
| The resource manager and UI view share the same live object | No exact pointer/registry edge yet | UNRESOLVED |
| Any table directly changes save data or runtime Pokédex progress | No save-side effect or runtime trace yet | NOT_PROVEN |

## 6. Next reverse-engineering steps

1. Recover the binary header and record schema of pokedex_research_task_table.bin; trace each parsed field from 0x013F6DF8 into its consumers.
2. Find all reads of wrapper offsets +0x40 and +0x48 for the form-storage object; establish the 906-entry mapping direction.
3. Trace consumers of the rank-table pointer from 0x013F6B70.
4. Resolve the caller of 0x013F5CD0 using exact reference records, vtable slots and indirect-call sites; verify the mode-1 completion path.
5. Join the resource-manager object at parent offset +0x1C8 to the PokedexView object path through exact pointers or registry lookups.
6. Only after those links are closed, assign stable semantic names and import comments into a separate annotated Ghidra project. Keep the original restored project immutable.

No full Ghidra analysis, ELF re-import, or C regeneration is required for these steps.


## Addendum — fixed 906-slot research record array

A deeper look at the wrapper constructor closes an important part of the research-table layout:

- FUN_013E2520 allocates exactly 0x38E0 bytes and calls FUN_013F6D50.
- FUN_013F6D50 initializes the data area from wrapper offset +0x40 to the end of the object.
- It advances in groups of 0x30 bytes, initializing three 0x10-byte records per iteration.
- The data area is 0x38A0 bytes; 0x38A0 / 0x10 = 906 records.
- FUN_013F6DF8 later writes each decoded record at +0x40 + index * 0x10, with the index validated to 0..905.

The resulting record layout is supported by the constructor's stores:

| Record offset | Width | Observed initialization / parser use |
|---|---:|---|
| +0x00 | u16 | Zero-initialized; parser writes the source-row ordinal when starting a species group |
| +0x02 | u64 | Initialized to a sentinel bit pattern; parser updates selected 4-bit fields |
| +0x0A | u16 | Zero-initialized; no meaning assigned yet |
| +0x0C | u32 | Zero-initialized; no meaning assigned yet |

The u64 at +0x02 is unaligned relative to the 16-byte record base. The parser updates nibble fields at bit positions corresponding to task categories 1, 2 and 6–10. When it closes a group, it writes the grouped-row count into the low nibble.

**Strong inference:** this is a per-dex-index research-task summary array. The u16 field at +0x00 appears to store the first source-row ordinal for that index, and the low nibble appears to store the number of grouped task rows. Those field meanings are still hypotheses until compared with the original BIN records and their runtime consumers.

This makes the fixed-array interpretation stronger than the earlier size-only inference. The exact meanings of the packed nibbles, the +0x0A field and the +0x0C field remain unresolved.


## Addendum — form-storage map direction

The loop in FUN_013F69B0 provides more detail than the earlier size calculation:

- The source pointer at wrapper +0x40 is advanced in 3-u16 records (6 bytes per record).
- The first u16 in each source record is compared against the current destination index, which iterates from 0 through 905.
- For each destination index, the routine scans all consecutive source rows whose first u16 equals that index.
- It stores the first matching source-row ordinal in the destination u16 at +0x48 + index * 2.

Therefore the observed algorithm is a 906-entry index from a 0..905 key to the first matching row ordinal in the source form-storage table. The resource filename makes a species/dex index the strongest interpretation of the key, but that key meaning remains an inference.

The source rows contain three u16 fields; this builder uses only the first field. The other two fields are preserved through the source pointer at +0x40 and need to be traced in the consumers. A zero map value may mean no matching row or a first row at ordinal zero; the table's sentinel convention must be checked before assigning that meaning.
