# PLA 1.1.1 R11 — 从原始 ARM64 写入证据到读访问与 PKHeX 对账

> [!IMPORTANT] 当前结论
> **原生汇编已经证明 SpawnEntry.GenerateSeed 的写入及实体清理链，但并未证明其读取者或 EC/PID/IV 生成函数。** R10 全库 C 扫描和 R11 原始 ELF 反汇编未发现可确认为同一 Spawner Entry 的正向 Seed→EC 调用链，因此不得把静态候选解释为原生行为一致性。

## 0. 固定源及不可变性

- 平台：《宝可梦传说 阿尔宙斯》PLA 1.1.1；Ghidra 12.2 已有全量输出。
- 原始 ELF `Unpack/v1.1.1/exefs/main/main.elf`：SHA-256 `260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794`。
- Ghidra 原始 VA = ELF 模块 RVA + `0x00100000`。以下所有 VA 为 Ghidra VA，运行时必须换算为 `main+RVA`。
- 已有 Ghidra 原始分析 Run 42774682950 未重新运行，也未修改 ELF、数据库、C 或 NDJSON。
- [R10 C 源审计](pla_entry_owner_reads_r10.md) · [R10 JSON](pla_entry_owner_reads_r10.json) · [R11 逐指令证据](pla_entry_arm64_r11.md) · [R11 JSON](pla_entry_arm64_r11.json)。
- R10 修正版 [Actions #42953282442](https://github.com/969981/PLA_Resources/actions/runs/42953282442) 与 R11 原始 ELF [Actions #42953665761](https://github.com/969981/PLA_Resources/actions/runs/42953665761)：均成功。R11 反汇编直接读取 byte-exact 原始 ELF，非重新运行 Ghidra。

## 1. 本轮 ARM64 锁定的真正生产端（CONFIRMED）

函数：[FUN_01B56418](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01b56418.c)。

| Ghidra VA / main RVA | 原始 ARM64 | 解释 |
|---|---|---|
| `0x01B56424` / `main+0x01A56424` | `ldr x8, [x0, #0x4c8]` | 从当前控制对象读取 Spawner 条目缓冲区 |
| `0x01B56570` / `main+0x01A56570` | `ldr x11, [x13, #0x408]` | 从 Spawner 读取当前 GroupSeed；这条路径的 x13 是 Spawner 基址 |
| `0x01B56574` | `mov x10, xzr` | 八条记录的条目偏移从 0 初始化 |
| `0x01B56578` | `mov x12, x9` | 常数第二 RNG 状态，从上一条常量装载传来 |
| `0x01B56584` | `add x14, x11, x12` | xoroshiro128+ 第一次输出，即 s0+s1 mod 2^64 |
| `0x01B5659C` | `add x12, x13, x10` | 目标 `SpawnerPtr + EntryOffset` |
| `0x01B565A0` / `main+0x01A565A0` | **`str x14, [x12, #0x20]`** | **真正写入 Entry.GenerateSeed** |
| `0x01B565C0` / `main+0x01A565C0` | `str x13, [x14, #0x58]` | 写入同一条目 AlphaSeed（这里 x14 已重新得到 `SpawnerPtr+EntryOffset`） |
| `0x01B565CC` | `strb wzr, [x13, #0x43]` | 条目清除 IsEmpty |
| `0x01B565D8` | `strb wzr, [x13, #0x42]` | 条目状态复位 |
| `0x01B565F8` | `add x10, x10, #0x80` | 下一个条目，确认 Entry stride = 0x80 |
| `0x01B56614` | `str x1, [x8, #0x408]` | 将推进后的 GroupSeed 写回 Spawner |

上表取自原始 ELF 的十六进制指令字节 + Capstone 5.0.5 解码；参考 [R11 原始逐指令记录](pla_entry_arm64_r11.md)，可查看前后分支指令。不是凭结构偏移猜测。

### 生产端的寄存器关系

```text
X0 = 刷新控制对象
X13 = SpawnerPtr（在当前执行分支已加载）
X10 = EntryOffset，取值 0 / 0x80 / … / 0x380
X12 = X13 + X10 = EntryPtr
X11 = *(u64*)(SpawnerPtr + 0x408) = GroupSeed
X9  = RNG 的第二状态常量 0x82A2B175229D6A5B
X14 = X11 + X9 (mod 2^64)
STR X14, [X12, #0x20]  →  Entry.GenerateSeed
```

在此函数的另一段循环中，状态更新并生成第二个输出，写在 `Entry+0x58`；这与 PKHeX 的 GroupRand.Next / AlphaSeed 调用顺序一致，但仍是 **生成前处理**，而非 EC/PID 实际生成。

## 2. 已证明的是清理（CONFIRMED RESET，不是 READ CONSUMER）

[ FUN_01B55130 ](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01b55130.c)

```asm
01B55148  ldr  x8, [x0, #0x140]   // X8 = *(Owner + 0x140)
01B5514C  cbz  x8, #0x1B55198     // 没有条目则跳过
01B55168  strb w10, [x8, #0x43]  // IsEmpty=1
01B55174  str  xzr, [x8, #0x20]  // **清零 GenerateSeed**
01B55194  stp  xzr, xzr, [x8, #0x58] // 清零 AlphaSeed 及邻近字段
```

[ FUN_01B570CC ](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01b570cc.c)

```asm
01B570E0  ldr  x22, [x1]           // owner = *param_2
01B57120  ldr  x8, [x22, #0x140]  // entry = *(owner+0x140)
01B57124  cbz  x8, #0x1B57170
01B57140  strb w10, [x8, #0x43]  // IsEmpty=1
01B5714C  str  xzr, [x8, #0x20]  // **清零 GenerateSeed**
01B5716C  stp  xzr, xzr, [x8, #0x58]
```

两个函数均显示 `LDR → STR`，**不是 `LDR → LDR`**。特别地，不应把 `FUN_01B55130` 的下一个函数附近的 `LDR … #0x20` 拼进同一个 CFG。R11 的原始工具目前是固定长度指令窗口，窗口可能越过函数边界；结论只引用确属于对应函数的指令及原始反编译体。

## 3. 仅有同偏移匹配而没有指针身份的 C 候选

R10 旧版遗漏 `undefined8 **` 类型，已修复并用新的 Actions 复验。修正版扫描全部 **82,731** 份反编译源，得到：

| 特征 | 文件数 |
|---|---:|
| 任意代码包含 `0x140` | 928 |
| 识别到对对象 `+0x140` 的指针读取 | 192 |
| 后续同局部变量出现 `+0x20` / `[4]` | 14 |
| 初步符合数据读取语法 | 1 |
| 证明是同一 Spawner 的实际 Seed 消费 | **0** |

该 1 个读取语法候选是 `FUN_01443720`，但对象身份未与 Spawner 绑定。其他大量 `+0x20` 命中实为虚函数释放槽（例如 `(**(code **)(*ptr + 0x20))()`），或 Entry 字段清零，不能算 RNG 消费。

**审计边界：** 这不能证明游戏中不存在消费者：可能由参数转发、对象复制、内联、虚调用、寄存器别名或反编译失败隐藏。它只是说明最简单的显式 C 指针链未闭合。

## 4. PKHeX 参考生成顺序及本机对账闸门

对照官方 [kwsch/PKHeX `Overworld8aRNG.cs`](https://github.com/kwsch/PKHeX/blob/master/PKHeX.Core/Legality/RNG/Methods/Gen8a/Overworld8aRNG.cs) 的目前 master 实现：

```text
GroupSeed
  → groupRNG.Next() = Slot/GenerateSeed
  → groupRNG.Next() = AlphaMoveSeed
SlotRNG(GenerateSeed)
  → slotRoll = SlotRNG.Next()          // 用于遭遇表抽签
  → entitySeed = SlotRNG.Next()       // 用于实体随机属性
  → 后续 Level 抽签（取决于参数）
EntityRNG(EntitySeed)
  → EC, fakeTID, PID roll(s), 6 IV / 31 保底
  → Ability, Gender, Nature, Height, Weight
  → 玩家真实 TID/SID 参与存档 PID 的 shiny 强制状态调整
```

以上仅是 **PKHeX 的参考顺序**；不可据此反向声称每个原生函数已定位。

若要对同一只 PA8 做 `NATIVE_MANAGED_BYTE_PARITY` 或 `NATIVE_GAME_PARITY`，需要一条从同一游戏实例采样的观测记录：

| 观测项 | 源 | 必要性 |
|---|---|---|
| `MainBase`, `LR`, `PC`, `X0–X8` | guest 原生函数命中 | 判定实际路径 |
| `SpawnerPtr`, `EntryOffset`, `EntryPtr` | 生产端与实体回链 | 证明指针同一性 |
| `*(EntryPtr+0x20)`, `*(EntryPtr+0x58)` | Entry 原生内存 | 必须观测不为空 |
| `GroupSeed`, `slotRoll`, `EntitySeed` | RNG 原生状态/调用位置 | 证明实际推进顺序 |
| `Species/Form/Alpha/Level` | 原生遭遇结果 | 证明抽签行为 |
| `PA8.EC`, `PA8.PID`, `PA8.IV[6]`, `TID/SID` | 原生实体/存档 | PKHeX 逐字段比较 |

建议 **先对 `EntryPtr+0x20` 建只读访问监控**：记录第一个真正读取地址的 PC/LR 及寄存器。如果 guest 不能设置硬件读断点，需在 guest 级别只读记录对该地址的 load，而非写入自定义值。命中后继续寻找对 `SlotRNG.Next()` 的两次调用或等价内联实现，再找实体 RNG 与 PA8 内存写入。

不能把写入后的 `Entry+0x20` 数值直接当成 `EntitySeed`：它先作为 **Slot/GenerateSeed** 初始化一层 RNG。

## 5. 下一道唯一未闭合关口

1. 从同一运行时 `Owner+0x140` 得到 `EntryPtr`，验证是否与 `SpawnerPtr + N*0x80` 相等。
2. 捕捉 `EntryPtr+0x20` 的 **首次 READ**（排除重置清零的 WRITE），查明实际 PC/LR 与消费函数。
3. 把消费函数入口寄存器传递接到 `slotRoll/EntitySeed`，再到原生 EC/PID/IV 生成和 PA8 对账。
4. 未有 guest 样本时，拒绝以 `CONFIRMED` 标注这一段。

静态 ARM64 验收已经成功；**真实运行时相同宝可梦的 EC/PID/IV 对账尚未完成，绝不能展示捏造的原生对账结果**。
