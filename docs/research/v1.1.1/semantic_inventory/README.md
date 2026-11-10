# PLA 1.1.1 — first-pass semantic candidate inventory

This is a static evidence index, not a claim that keyword matches prove function behavior. String xrefs are linked to candidate functions using exported function address intervals. Use the address, callsite and C path to inspect the original Ghidra pseudocode and instructions.

- domain_string_xrefs.csv: domain keyword strings and direct references.
- domain_function_candidates.csv: ranked candidate functions by domain.
- selected_callgraph_edges.csv: direct call references adjacent to top-ranked candidates.
- rtti_vtable_typeinfo_symbols.csv: RTTI/vtable/typeinfo-like symbol names and xref counts.
- decompilation_failures.csv: unsuccessful or empty decompilation records.
- summary.json: counts, evidence scope and mapping caveats.

Function interval attribution is provisional. Confirm every business label through instruction-level data flow, callers/callees, structure offsets and runtime evidence.
