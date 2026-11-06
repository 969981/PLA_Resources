# PLA localized message `.dat` / `.tbl`

**Status: PLANNED.** Local inventory records 6,557 paths under `bin/message/` and 10 language directories with 644 entries each. Globally, 3,339 `.dat` and 3,227 `.tbl` files exist (including non-message data).

Pair `.dat` with matching `.tbl` **only when bytes confirm the relationship**. Validate index offsets, text encoding, row count, language, fallback behavior and duplicate keys. Export `language`, `file`, `record_index`, `key`, `text`, original offsets and hash. Leave opaque or undecoded data untouched and include `UNKNOWN` records in coverage.
