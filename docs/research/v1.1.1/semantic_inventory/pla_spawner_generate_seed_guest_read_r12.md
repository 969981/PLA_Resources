# PLA v1.1.1 R12 — GenerateSeed 首次实际读取观测与 SlotRNG 验收

> [!IMPORTANT]
> **观测工具已准备；本仓库的 Actions 不运行 PLA 游戏，也没有真实 guest 读监视点命中证据。**
> R12 只在用户连接真实 AArch64 PLA 1.1.1 guest GDB Stub 后，才能证明哪段代码读取了已生成的 `Entry+0x20`。不得把 R12 的推算 `expected_entity_seed` 当作游戏实际 `native_entity_seed`。

## 0. 原始证据和地址映射

- 原始 ELF：`Unpack/v1.1.1/exefs/main/main.elf`，SHA-256 `260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794`。
- Ghidra 12.2 Run 42774682950 的 IMAGE_BASE=`0x00100000`，**运行时地址 = 当前 guest main base + (Ghidra VA - 0x00100000)**。
- [R11 原始 ARM64 汇编证据](pla_entry_arm64_r11.md) 已确定 `FUN_01B56418` 执行 `STR X14,[X12,#0x20]`。
- 本轮脚本：[`pla_spawner_seed_read_gdb_r12.py`](https://github.com/969981/PLA_Resources/blob/master/scripts/pla_spawner_seed_read_gdb_r12.py)（在 GDB Python 中执行）。
- 离线审计：[`audit_pla_spawner_seed_read_r12.py`](https://github.com/969981/PLA_Resources/blob/master/scripts/audit_pla_spawner_seed_read_r12.py)（标准 Python + 本仓库 R8 参考算法）。JSONL 应保存在本机，不要直接上传公开仓库。
- 仅有模拟器/guest 读取/硬件监视点的证据才可获得 `hardware_read_watchpoint_hit`。R12 是**只读内存采样**，GDB 软件代码断点本身可能临时修改 guest/JIT 指令缓存；不代表零侵入调试。

## 1. 为什么观测点必须选在 `0x01B565A4`

R11 已验证的原始 ARM64 字节与语义：

```asm
Ghidra VA       原始 bytes   指令
01B5659C       ac010a8b     ADD X12, X13, X10
01B565A0       8e1100f9     STR X14, [X12, #0x20]  ; 写入 GenerateSeed
01B565A4       0e6442f9     LDR X14, [X0, #0x4C8]  ; **下一条指令**
01B55148       08a040f9     LDR X8, [X0, #0x140]  ; 清理对象指向 Entry
01B55174       1f1100f9     STR XZR,[X8, #0x20] ; 清零，不是 Seed 读取
01B57120       c8a240f9     LDR X8,[X22, #0x140]
01B5714C       1f1100f9     STR XZR,[X8, #0x20] ; 清零，不是 Seed 读取
```

将一次性代码断点放在 `0x01B565A4`，前一条 STR 已执行，此时：

- `X0`：刷新控制对象，`SpawnerPtr=*(X0+0x4C8)`。
- `X12`：`EntryPtr`；校验 `EntryPtr-SpawnerPtr = 0,0x80,…,0x380`。
- `X14`：尚未被下一条指令覆盖，应该等于刚写入的 `*(uint64_t*)(EntryPtr+0x20)`。
- `Entry+0x43` 的 IsEmpty 可能仍为 1，因为代码在 `0x01B565CC` 才清理；R12 **不会**过早检查这一标志，避免错误拒绝有效新种子。

R12 在安装任何代码断点之前验证上述 7 个 ARM64 指令的 **guest 内存原始字节**，不匹配就停止。主模块基址须是实际 guest main ELF 的加载基址，而非主机程序 PID/地址。

## 2. 真正启动流程

1. 将 PLA 1.1.1 存档做本机完整备份；使用单独的离线测试副本。连接提供 AArch64 GDB Remote Stub 的模拟器。先用一个无害的代码断点核实其继续执行能力。选择包含 GDB 软件断点/JIT 修复的模拟器版本。
2. 在 guest **已经加载 main 并停止**后，从其 guest 映射取得真实的 `main base`。不同模拟器或模拟器版本的映射方式可能不同；**不要套用固定基址**。
3. 把以下占位符替换成真实 base 和可写日志路径；在与模拟器连通的系统运行 GDB：

```bash
export PLA_R12_MAIN_BASE=0xYOUR_REAL_GUEST_MAIN_BASE
export PLA_R12_LOG=/tmp/pla111-r12-run01.jsonl
export PLA_R12_CASE_ID=pla111-spawn-r12
export PLA_R12_RUN_ID=boot01
gdb-multiarch -nx -q \
  -ex 'set architecture aarch64' \
  -ex 'set pagination off' \
  -ex 'target remote localhost:6543' \
  -ex 'source scripts/pla_spawner_seed_read_gdb_r12.py'
```

4. 在 GDB 中执行 `continue`，让游戏正常创建一个野生刷新条目。命中 `main+0x01A565A4` 后，GDB 应自动停下并显示 `EntryPtr` 和 `GenerateSeed`；日志出现 `producer_after_store`。如果从未命中，**不得**声称目标生成函数未被调用，可能是当前场景没有新建野生条目。
5. 在 **该次断点停住时**执行 `pla-r12-arm`，而不是在回调中动态修改断点。可选已知实体管理指针：`pla-r12-arm 0xREAL_OWNER_PTR`，会读取 `Owner+0x140`，但它此时可能尚未关联到新条目，因此只作观测，不强制匹配。
6. 执行 `continue`，等待真正对 `EntryPtr+0x20` 的 **硬件读取监视点**命中。命中后游戏停住，日志出现 `hardware_read_watchpoint_hit`，并保存 `PC`、`LR`、`SP`、`X0-X30`、读取时 Seed、指令上下文、参考计算的两个 SlotRNG 输出。
7. 使用 `pla-r12-inspect` 或 GDB 的 `x/12i $pc-0x18`、`info reg`、`bt` 人工确认真实读指令，因硬件 watchpoint 的 `PC` 可能位于真正 `LDR` 的后一条指令。**读取监视点命中 ≠ 已证明该代码执行 SlotRNG 两次 Next**。
8. 在命中的代码中验证 seed 是否作为 xoroshiro128+ 新状态的 s0（s1=`0x82A2B175229D6A5B`），然后追踪第一输出 `slotRoll`、第二输出 `EntitySeed` 与调用者。如果种子仅被转移或复制，应继续到下一个消费者，而不是将复制函数标成最终 RNG 生成。
9. 用同一只游戏内产生的 PA8 EC/PID/6IV/TID32 对照 [R11 PKHeX 字段工具](https://github.com/969981/PLA_Resources/blob/master/scripts/pla_rng_guest_parity_r11.py)，只有原生对象和时间戳/调用链一致的样本才可归入 `NATIVE_GAME_PARITY`。

## 3. 硬件 watchpoint 是否支持必须单独验收

GDB API 使用 `gdb.Breakpoint(spec, type=gdb.BP_WATCHPOINT, wp_class=gdb.WP_READ, internal=True, temporary=True)`。根据 [GDB 官方文档](https://sourceware.org/gdb/current/onlinedocs/gdb.html/Set-Watchpoints.html)，`rwatch` **只支持硬件实现**。GDB Remote Stub 必须提供硬件读取监视点支持；某些模拟器只实现代码断点或写入监视点。

- `watch_install_requested` 仅表示 GDB 已接受配置，**不代表目标模拟器已经成功安装监视点**；首次 `continue` 仍可能报不支持。
- 不会降级为软件写断点、`awatch` 或基于轮询的“首次读”假证据。
- 如目标 Remote Stub 不支持 `rwatch`，应改用 **guest/JIT 级只读内存访问跟踪**（必须能识别完整 guest effective address 与是 READ 还是 WRITE）；该模式尚未实现，不能声称已接入。
- 单次只装一个 8 字节读取监视点，避免超出硬件 watchpoint 数量限制；如果要追另一条 Entry，需要重启/重新创建当前 R12 观测会话。日志路径必须全新。

## 4. 保存 JSONL 与离线严谨审计

```bash
python3 scripts/audit_pla_spawner_seed_read_r12.py \
  --jsonl /tmp/pla111-r12-run01.jsonl \
  --report /tmp/pla111-r12-audit.json
```

审计工具只在同一 case/run 的生产端记录、`watch_install_requested`、`hardware_read_watchpoint_hit` 按顺序存在，地址/seed 与 PC/LR 都一致时，报告：

```text
MONITORED_HARDWARE_READ_RECORDED_NATIVE_CONSUMER_UNIDENTIFIED
```

这仍只确认“读取监视点命中”。真正消费者的函数身份、两次 `SlotRNG.Next()`、原生 `EntitySeed` 及后续 PA8 的 `EC/PID/IV` 必须继续实机采样；离线审计不会自动提升状态。

其它状态：

- `PRODUCER_CAPTURE_ONLY`：只抓到 Seed 写入；
- `WATCH_REQUESTED_NO_VALID_READ_HIT`：配置了观察但没有可信读取命中，或目标拒绝支持；
- `INSTRUMENTATION_ERROR`：原生采样、地址别名、安装 watchpoint 等错误；
- `NO_PRODUCER_CAPTURE`：尚未命中刷新生成。

原始 JSONL 包含内存地址和寄存器上下文，不要无检查地公开上传，也不要与真实存档、帐号凭证混用。

## 5. 已知限制与下一道关口

- R12 GDB 工具使用的是 GDB 观测，不是支持所有模拟器的通用内存读追踪工具。
- R12 工作流对 Python 脚本和离线模拟输入做 CI 测试，**绝不等同于真实 guest 成功命中硬件读取监视点**。
- 此前已证实的 `FUN_01B55130/FUN_01B570CC` 是清零 Seed 的清理路径，应作为负对照。
- 对象字段 `Owner+0x140` 应在实体实例创建之后再确认指向同一 Entry；生产时尚未关联不能被当作错误。
- 成功定位第一个读者后，以其 PC/LR 及直接上层对象身份为新的静态 ARM64 切片入口，再恢复真正的 `SlotRNG.Next()×2` 和 `EntityRNG`，不要再全量跑 Ghidra。

**本轮 R12 的交付标准是：有真实环境时能可靠捕捉首次受监控的 Seed READ，且不会把缺少监视点支持、模拟样本或推算结果标为游戏生成验证。**
