# PLA 1.1.1 — PokedexSave API and research-progress model

> Static reconstruction from Ghidra 12.2 C pseudocode. Names below are provisional semantic annotations, not original source symbols. No runtime/save-write behavior is claimed.

## Executive finding

Function 0x00E4FAF0 constructs a native binding object named PokedexSave and registers methods for completion flags, completed-entry counts, report counts, research rates, research points, acquisition counts and challenge-battle state.

These methods connect the PokedexSave data object to the resource manager recovered in pokedex_resource_manager.md:

- Research-task queries reach the research-task wrapper at nested manager offset +0x08 through FUN_013F7198.
- GetResearchPoint reaches the rank-table wrapper at nested manager offset +0x28 through FUN_013E245C and FUN_013F6C68.

This closes a static connection between the PokedexSave API and the resource-manager table group.

## 1. Native PokedexSave method registration

FUN_00E4FAF0 contains the literal class/group name PokedexSave, allocates a 0x1F8-byte native binding object, installs its vtable, and writes method-name/function-pointer pairs.

| Exposed API | Registered target | Recovered behavior |
|---|---|---|
| IsPokedexCompleted | 0x0112E818 | Tests a completion bit in the state header |
| GetCompletePokeNum | 0x0112ED20 | Counts fully completed entries |
| GetReportPokeNum | 0x0112EDC4 | Counts captured/report-qualified entries |
| UpdateAllReportPoke | 0x0112F4F8 (local label) | Implementation boundary unresolved |
| GetAllPokeResearchPoint | 0x011308D0 | Sums rates for entries passing the perfect check |
| GetTotalResearchPoint | 0x0113097C | Reads the stored total at +0x78 |
| GetResearchPoint | 0x0113204C | Looks up a value in the rank table |
| GetPokeGetCount | 0x0112EC0C | Reads per-entry acquisition count |
| GetPokeResearchRate | 0x0112ECD0 | Reads rate and applies the perfect-entry cap |
| IsPokedexPerfect | 0x0112E83C (local label) | Registered entry boundary unresolved; helper 0x011357F8 implements the task-completion test |
| SetChallengeBattleFlag | 0x01135C0C (local label) | Challenge-battle state setter |
| GetChallengeBattleFlag | 0x01135C2C (local label) | Challenge-battle state getter |
| GetChallengeBattleCount | 0x01135C50 (local label) | Challenge-battle count getter |

The local-label targets are stored as code pointers by the binding table, but are not yet separate Ghidra function entries. They must not be treated as fully recovered function boundaries.

## 2. Per-entry research record layout

Several independent accessors use the same 0x58-byte stride. Combining their exact offsets gives a compact per-entry record beginning at:

    record_base(species_id) = state + 0xDC + species_id * 0x58

| Record offset | Absolute formula | Type | Evidence |
|---|---|---|---|
| +0x00 | state + 0xDC + id × 0x58 | byte flags | GetReportPokeNum tests bit 1 |
| +0x04 | state + 0xE0 + id × 0x58 | u32 | GetTaskProgress reads packed task levels |
| +0x08 | state + 0xE4 + id × 0x58 | u16 | GetPokeResearchRate |
| +0x0A | state + 0xE6 + id × 0x58 | u16 | GetPokeGetCount |
| +0x0C through +0x57 | — | unresolved | Not assigned yet |

The state header also exposes:

- +0x6C: u32 completion flag field, read by IsPokedexCompleted.
- +0x78: u32 total research point field, read by GetTotalResearchPoint.

The structure is a partial layout, not a complete definition of the save block.

## 3. Research task progress encoding

### 3.1 Task definitions

FUN_013F7198 reads the 906-entry research-task index array recovered earlier:

- It rejects species/index values greater than or equal to 0x38A (906).
- It reads the task count from the low nibble of the 64-bit metadata field.
- The accepted count is 1–10.
- It reads the first source-row ordinal from the u16 field at the start of the 16-byte index record.
- It resolves the corresponding source rows from the research-task resource and fills a task-definition output structure.

This is the direct bridge from the resource table to per-species task definitions.

### 3.2 Saved progress levels

FUN_01130984 reads a u32 at:

    state + 0xE0 + species_id * 0x58

The task index selects a 3-bit field in this word. Up to ten tasks therefore occupy 30 bits:

    progress_level(task_index) = (packed_u32 >> (task_index * 3)) & 0x7

The function combines this saved level with task-specific live counters/conditions, computes the applicable target level, and can write the current level, current progress value and target level through its output parameters.

**Observed:** the save block stores per-task progress levels as 3-bit fields, and the task evaluator reads them using a 0x58-byte species stride.

**Inference:** values represent staged research progress. The perfect-check helper treats a task as complete when the returned/current level is greater than 1.

### 3.3 Perfect-entry test

FUN_011357F8:

1. Resolves the task definitions for the species through FUN_013F7198.
2. Returns true when the species has no task definitions.
3. Iterates the defined tasks.
4. For each task marked as relevant by the decoded task metadata, calls FUN_01130984.
5. Fails the perfect check if any relevant task's current level is not greater than 1.

This is the helper used by the research-rate and completed-entry calculations.

## 4. Research rate, acquisition count and completion rules

### 4.1 Research rate

FUN_0112ECD0 reads a u16 at state + 0xE4 + species_id × 0x58. It accepts IDs below 0x3D5 (981).

If the stored value is greater than 99:

- Return 100 when FUN_011357F8 says the entry is perfect.
- Otherwise return 99.

Therefore 100 is reserved for a perfect entry in this getter. A stored value above 99 alone is not enough.

### 4.2 Acquisition count

FUN_0112EC0C reads a u16 at state + 0xE6 + species_id × 0x58, also with an ID bound of 0x3D5 (981).

This is the field exposed as GetPokeGetCount.

### 4.3 Completed-entry count

FUN_0112ED20 iterates species IDs 1 through 905. For each species accepted by FUN_0112E8D0, it reads the research-rate field. Values above 99 are normalized to 100 only when the perfect check succeeds; otherwise they become 99. The function increments the result only when the normalized rate is above 99.

**Interpretation:** GetCompletePokeNum counts entries that have reached the perfect/100 state, not merely entries with a stored rate of 100.

### 4.4 Sum of perfect-entry research rates

FUN_011308D0 iterates species IDs 1 through 905. It adds a species' research rate only when FUN_011357F8 reports that species as perfect; non-perfect entries contribute zero. Values above 99 are normalized using the same perfect-entry rule.

The exposed name is GetAllPokeResearchPoint. Its exact game-facing use is not yet known, but its implementation is narrower than a simple sum of every species' current rate.

### 4.5 Report-qualified count

FUN_0112EDC4 iterates species IDs 1 through 905 and checks:

- The per-entry acquisition count at state + 0xE6 + id × 0x58 is nonzero.
- The status byte at state + 0xDC + id × 0x58, specifically bit 1.
- When that bit is set, FUN_0112EFF0 is used to test aggregate task progress.

It increments the result when the capture/report conditions pass.

The precise user-facing meaning of “report” (already reported, ready to report, or report-qualified) remains unresolved until the caller and UI consumer are traced.

## 5. Rank table and total research points

GetResearchPoint is implemented by FUN_0113204C.

Its resource path is now explicit:

1. Resolve the global parent context.
2. Read the Pokedex manager pointer from parent offset +0x1C8.
3. Call FUN_013E245C on that manager.
4. FUN_013E245C returns the nested table container's +0x28 child, which is the rank-table wrapper.
5. Call FUN_013F6C68 with that wrapper and the requested parameter.
6. FUN_013F6C68 searches the loaded rank-table structure and returns a u32 value from the matching record.

This proves that GetResearchPoint queries the rank-table wrapper, not the research-task wrapper. The returned value is likely a rank threshold or required research-point value; the exact parameter domain and record field meaning still require caller/UI tracing.

GetTotalResearchPoint simply returns the u32 at state +0x78. A likely use is to compare the current total against rank thresholds returned by GetResearchPoint, but that comparison has not yet been proven in the caller.

## 6. Current static business graph

    PokedexSave native binding
      0x00E4FAF0
        ├─ GetPokeResearchRate -> 0x0112ECD0
        │    └─ perfect helper -> 0x011357F8
        │         ├─ task definitions -> 0x013F7198
        │         │    └─ research-task wrapper (nested manager +0x08)
        │         └─ task progress -> 0x01130984
        │              └─ packed 3-bit levels at state +0xE0 + id*0x58
        ├─ GetCompletePokeNum -> 0x0112ED20
        ├─ GetAllPokeResearchPoint -> 0x011308D0
        ├─ GetPokeGetCount -> 0x0112EC0C
        ├─ GetTotalResearchPoint -> 0x0113097C
        └─ GetResearchPoint -> 0x0113204C
             └─ 0x013E245C -> nested manager +0x28
                  └─ 0x013F6C68 -> rank-table lookup

## 7. Open questions

1. Identify the full 0x58-byte per-entry record and the remaining fields.
2. Confirm the semantics of the 3-bit progress levels and each research-task type.
3. Trace FUN_0112EFF0 and the GetReportPokeNum caller to determine the exact report state.
4. Resolve the local-label implementations for IsPokedexPerfect and UpdateAllReportPoke.
5. Find the UI caller comparing GetTotalResearchPoint with GetResearchPoint.
6. Trace the actual save writer/serializer. These getters prove reads from a save-like state object, not persistence writes.
7. Explain why the task table indexes 906 entries while some save accessors accept IDs below 981.

No full Ghidra analysis, ELF re-import or C regeneration is required.
