# PLA 1.1.1 — exact-body semantic review bundle

This bundle refines the first-pass keyword inventory using exact Ghidra function-body ranges exported from the restored native project in read-only/no-analysis mode.

- top_candidates.json: top candidates per domain, with evidence and direct neighbors.
- semantic_shortlist.csv: compact ranked candidate table.
- semantic_string_xrefs.csv: matching string xrefs and exact source-function ownership.
- semantic_callgraph_edges.csv: aggregated direct calls touching the shortlist.
- top_candidate_pseudocode.md: Ghidra C pseudocode for leading candidates.
- summary.json: counts, mapping validation and limitations.

The analysis uses no ELF re-import, no Ghidra reanalysis and no new decompilation. Every business label remains a hypothesis until data flow and runtime behavior are verified.
