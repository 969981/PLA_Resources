# PLA 1.1.1 — R7 runtime observation and persistence acceptance gate

> **State: INSTRUMENTATION READY; GAME GUEST NOT ATTACHED; PERSISTENCE_NOT_VERIFIED.** R7 converts the verified R6 static calling graph into a reproducible, non-patching-to-save observation plan. The installed tooling was tested **only with synthetic events** in CI; it has not observed a running PLA game. No original ELF, Ghidra project, 82,731 C files, or SQLite shards are changed.

## 1. Pinned identity and strict separation of outcomes

- Original PLA 1.1.1 main ELF SHA-256: `260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794`.
- Ghidra 12.2 original export: GitHub Actions `42774682950`; Ghidra VA image base `0x00100000`.
- **Runtime guest function address**: `loaded_main_base + (Ghidra_VA - 0x00100000)`. `loaded_main_base` is determined from the current guest memory map, not from the host binary address nor hard-coded by the script.
- Main graph from R6: `UpdateAllReportPoke → state` and `context+0x298 → native graph → vtable+0x50 (0x0112E5CC) → FUN_0112E6F0` are distinct edges until the runtime sequence confirms an actual call.
- Persistent Zukan byte range is `state+0x6C` length `0x1E460`; species record `state+0xDC + 0x58*species` lives inside it.
- **Important auxiliary region**: `state+0x1E4CC` length `0xF54` ends at lock `state+0x1F420`. Changes there may come from `UpdateAllReportPoke` but are **not** evidence that the persistent `KZukan` block changed. Both regions are independently SHA-256 sampled; no actual save data bytes are logged.
- Key `KZukan=0x02168706`, hashdb descriptor size `0x30`; `desc+0x08` source, `desc+0x10` mirror, `desc+0x20` actual length, `desc+0x28` pending copy.

## 2. Guest PC probes and native arguments

| Event | Ghidra VA | Breakpoint input / read-only observation | What it proves |
| --- | --- | --- | --- |
| `report_update_enter/exit` | `0x0112F528` | `X0=state`, hash `state+0x6C` and auxiliary `+0x1E4CC` before/after | Which in-memory region changed |
| `zukan_write_enter` | `0x0112E5CC` | `X0=state`, 0x1E460-byte hash | Entry into Pokedex main vtable `+0x50` target |
| `hash_write_enter` | `0x0112E6F0` | `X0=hashdb manager`, keyed descriptor | Native KZukan write invoked |
| `hash_write_post` | `0x0112E7B4` | `X22=manager`, find KZukan descriptor and pending | Post-write descriptor state. This PC is reached from both existing and inserted record branches |
| `snapshot_enter/exit` | `0x010CE5DC` | `X0=manager`, compare source/mirror SHA256 and `pending` before/after | Pending `1→0` with matching mirror; **NOT** disk persistence |
| `save_hashdb_job_requested` | `0x010CED3C` | `X0=manager`, status | Save hashdb job attempted; the function may choose not to start a new job |
| `hashdb_writefile_enter/exit` | `0x010CE274` | `X0=manager`, boolean return `W0` | hashdb save I/O result; not Commit |
| `hashdb_write_job_result` | `0x011506B8` | `X19=job`; read job `+0x448` **after** store | `2` = serialization/write job success, `3` = job failure |
| `commit_enter/exit` | `0x02A8F2F4` | `X0=commit context`; read `*(u32*)(X0+8)` after return | Exact native `nn::fs::Commit` Result; `0` means this call returned success, not yet proven same transaction as hashdb job |
| `save_task_poll` | `0x011457E4` | `X0=task`, `+4` stage, `+8` task result | Task state-machine progression |
| `save_callback_enter` | `0x011486F8` | `X0=context`, `ctx+0xB0` stored Commit result | Callback stage, not sufficient to assert persistence |
| `zukan_load_enter/exit` | `0x0112E414` | `X0=state`, compare hashes after load on a **fresh game run** | Cold-start comparison candidate |

`0x0112E4C0` and `0x0112E660` are direct BL callsites **inside** wrappers; they are not wrapper entry addresses.

**Limited instrumentation**: `gdb.FinishBreakpoint` is used for several return observations; if an emulator GDB Stub does not implement it correctly, a `return_probe_error` or `return_out_of_scope` is written. Never treat absence of exit events as function nonexecution.

## 3. Read-only observation setup (opt-in; offline game and save backup)

1. **Back up a known-good offline PLA 1.1.1 save before debugging.** Do not use the only copy. Stop other automated cheat/save tools during the acceptance run.
2. Use an AArch64 guest debugger exposing a GDB Remote Stub. Eden documents `General → Debug → Enable GDB Stub` or CLI `-d`, and GDB `target remote localhost:6543`. In WSL2, the reachable address may instead be the Windows host IP. Check the actual active emulator instance; do not assume every build supports all breakpoints.
3. **Important emulator caveat**: A 2026-11-08 Eden guest-debugging fix addressed software-breakpoint continuation and JIT instruction cache invalidation. Check that your installed build includes the fix before many live breakpoints, and practice with a single harmless breakpoint. In particular, GDB software breakpoints can temporarily patch translated guest code; the probe never writes save variables but must **not** be represented as zero-intervention CPU observation.
4. Determine the loaded *guest* `main` base from `monitor get mappings` / game memory map, not `info proc mappings` for host PID. Verify the chosen base with an instruction at `main_base+0x0102F528` (report core) or `main_base+0x0102E5CC` (zukan writer) before installing probes. If the bytes do not match this original v1.1.1 ELF, **stop** rather than use guessed addresses.
5. Start a persistent GDB session, connect to the guest, then source the script. GDB will halt the game on attach; type `continue` to let it run. On emulator versions with broken software-breakpoint resume, relaunch and use a fixed build; do not repeatedly patch the stopped instruction.

Example Linux/WSL shell for an **already identified** guest `main` module base:

```bash
export PLA_R7_MAIN_BASE=0xREPLACE_WITH_GUEST_MAIN_BASE
export PLA_R7_LOG=/tmp/pla111-r7-normal.jsonl
export PLA_R7_CASE_ID=pla111-normal-001
export PLA_R7_RUN_ID=normal-first-boot
export PLA_R7_STAGES=update,block,mirror,io,commit
gdb-multiarch -nx -q \
  -ex 'set architecture aarch64' \
  -ex 'set pagination off' \
  -ex 'target remote localhost:6543' \
  -ex 'source scripts/pla_pokedex_runtime_gdb_r7.py'
```

The placeholder `PLA_R7_MAIN_BASE` is **not** an actual address. The script fails before arming without a valid numeric value. To reduce overhead, run phases separately, such as `PLA_R7_STAGES=update,block` then `mirror,io` and `commit`. **Do not detach/reconnect a fragile emulator repeatedly**; use one long-lived debugger session per game run and restart only when explicitly doing the cold-start test. Additional optional env: `PLA_R7_HASH_BYTES` (max bytes per digest), `PLA_R7_MAX_EVENTS` (default 20000; auto-disables probes at limit).

While paused in GDB, the optional human action markers are:

```gdb
pla-r7-mark baseline_start
pla-r7-mark update_action
pla-r7-mark save_action
pla-r7-mark cold_restart
pla-r7-mark end
continue
```

Markers never cause gameplay or trigger save; they only annotate the JSONL sequence. You must perform the corresponding in-game actions manually.

## 4. Acceptance scenarios and evidence rules

**A. Baseline no change:** record normal background game behavior first. It is possible to see unrelated periodic SaveSystem/Commit calls. A Commit result `0` without a report update is a valid unrelated save, not proof about the report.

**B. Update but do not manually save:** trigger `PokedexSave.UpdateAllReportPoke` by the usual in-game action, then observe before/after state hashes. The report may change persistent `KZukan`, auxiliary region, both, or neither. Do not expect an immediate WriteFile. Record if no game-side report call actually fired.

**C. Explicit normal save:** take a new snapshot of the game state, start normal save. Check KZukan descriptor pending `1`, mirror snapshot `1→0` and matching source/mirror SHA-256, hashdb write job `2` and `nn::fs::Commit` result `0`. **The hashdb write job and the separate Commit function cannot be called one validated disk transaction simply because both returned success around the same time.** Need path, mount, transaction handle, or actual cold-start evidence.

**D. Controlled failure (only on disposable save):** observe a genuine save failure if one occurs under safe reproducible conditions. `hashdb_job+0x448=3` and nonzero native Commit Result are separate failure axes. Do not deliberately kill the only real save or patch its result codes. After a failure, examine whether pending is reasserted and whether a retry is performed; do not infer retry by job completion alone.

**E. Cold restart:** completely exit the emulated game and start again, using the same `PLA_R7_CASE_ID` and a **new `PLA_R7_RUN_ID`**. Observe `zukan_load_exit` from the *new* game run and compare full `0x1E460` block hash with the prior changed block; also inspect a concrete expected species research result in the UI / offline save parser. If no load hook fired or only auxiliary data matches, the persistence check remains unproven.

## 5. Evidence extraction and strict offline grading

The GDB probe writes timestamps, guest process/thread labels, program-counter addresses, pointer values, selected result codes, `0x02168706` descriptor pending flag and **SHA-256 digests only**. It does **not** copy the actual plaintext save data. Nevertheless, address traces may be personally or operationally sensitive; keep raw JSONL outside the public GitHub repository.

Analyze one or multiple runs:

```bash
python3 scripts/audit_pla_pokedex_runtime_r7.py \
  /tmp/pla111-r7-normal.jsonl /tmp/pla111-r7-restart.jsonl \
  --out /tmp/pla111-r7-audit.json
```

The auditor marks the following as separate observations: report memory changed, persistent KZukan block changed, auxiliary-only changed, Pokedex write method entered, descriptor pending, successful source→mirror copy, hashdb WriteFile return, hashdb job status `2` or `3`, native Commit result, and full-block hash match **across distinct run IDs**. The auditor intentionally emits `PERSISTENCE_NOT_VERIFIED` even when all indicators are present, since automated proof of a shared IO/Commit transaction ID, failure recovery and a fresh disk reload are not yet available.

CI synthetic tests (no emulator):

```bash
python3 -m py_compile \
  scripts/pla_pokedex_runtime_gdb_r7.py \
  scripts/audit_pla_pokedex_runtime_r7.py
python3 scripts/audit_pla_pokedex_runtime_r7.py --self-test
```

Live evidence **cannot be generated by GitHub Actions** unless a real PLA guest and save with the required GDB capability is connected. A green CI result validates only instrumentation syntax and the offline auditor's mock transitions, including failures; it must never be labeled real game save success.

## 6. Remaining live verification gates

- [ ] Attached AArch64 GDB Stub to genuine v1.1.1 guest with verified main base, no crashes.
- [ ] Captured UpdateAllReportPoke pre/post, including persistent `0x1E460` block vs auxiliary-only region.
- [ ] Captured actual Pokedex main-vtable +0x50 call and KZukan descriptor update.
- [ ] Captured `desc+0x28` pre/post mirror copy with matching SHA-256.
- [ ] Captured hashdb write job result (2/3) and verified the actual file/mount context.
- [ ] Captured Commit native return and proved it belongs to the same relevant save transaction.
- [ ] Captured controlled failure / retry where safe.
- [ ] Cold-restarted the game and confirmed saved species research state against actual fresh save data.

**This document is an execution-ready acceptance protocol, not a claim that runtime verification has already occurred.**
