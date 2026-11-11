# PLA 1.1.1 R9 — SpawnEntry GenerateSeed 生产端、管理对象与消费者证据边界

> **审计结论：种子生产与实体条目的生命周期关联已被原生 C 代码确认；将 `SpawnerEntry.GenerateSeed(+0x20)` 追到 `FUN_01094470` 的真实数据流仍未闭合，亦未证明原生 EC/PID/6IV 写入函数。** 对照已有的 PKHeX／PermuteMMO 规则，但不把社区算法当作已验证的本机调用结果。

## 不变性与证据

- PLA 版本：v1.1.1；原始 main.elf SHA-256：`260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794`。
- 原始 Ghidra 12.2 全量成果：Run 42774682950。原有 82,731 个单函数反编译 C 文件、原始 ELF、Ghidra 数据库均未重跑、覆盖或修改。
- 本轮审计工具：[`scripts/trace_pla_spawner_seed_consumers_r9.py`](https://github.com/969981/PLA_Resources/blob/master/scripts/trace_pla_spawner_seed_consumers_r9.py)。
- R9 Actions [#42950502936](https://github.com/969981/PLA_Resources/actions/runs/42950502936)：**Success**，覆盖 82,731/82,731 份带原始 ELF SHA 的 C 文件。
- 静态输出：[R9 Markdown](pla_spawner_seed_consumers_r9.md)／[R9 JSON](pla_spawner_seed_consumers_r9.json)。候选数为 25，必须人工区分结构体复制、生命周期和真正使用 RNG 的函数。

## 1. CONFIRMED：八条刷新记录与两个 PRNG

- [FUN_01B56418](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01b56418.c) 原生代码通过 `*(param_1 + 0x4C8)` 获得 spawner 指针；每条记录跨度 `0x80`，扫描偏移 `0x43/0xC3/.../0x3C3` 的 IsEmpty；对空条目把连续两次 RNG 输出写到 `entry+0x20` 和 `entry+0x58`，清理 `entry+0x42/+0x43`。
- 同函数从 `spawner+0x408` 读取旧 GroupSeed，使用常量 `0x82A2B175229D6A5B` 构造 xoroshiro128+，写回新 GroupSeed 到 `spawner+0x408`。
- 独立的刷新数量随机状态在上层 `param_1+0x4B0/+0x4B8`；数量及新 CountSeed 分别更新到 `spawner+0x418` 和 `spawner+0x400`。**CountSeed 与 GroupSeed 不是同一字段，也非同一推进序列。**
- 这些字段与 [PKHeX SpawnerEntry8a](https://github.com/kwsch/PKHeX/blob/master/PKHeX.Core/Saves/Substructures/Gen8/LA/Spawners/SpawnerEntry8a.cs) 和 [SpawnerMeta8a](https://github.com/kwsch/PKHeX/blob/master/PKHeX.Core/Saves/Substructures/Gen8/LA/Spawners/SpawnerMeta8a.cs) 的结构与含义一致。

## 2. CONFIRMED：条目关联的实体清理及刷新条件

- [FUN_01B54E58](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01b54e58.c) 实际调用 `FUN_01B56418`，还依据刷新控制对象中的计数与模式字段决定是否触发。
- [FUN_01BAB534](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01bab534.c) 在活动对象刷新数量变化时读取 `spawner+0x418` 并标记 `entry+0x43`；也会调用 `FUN_01B54E58`，属于 **调度/状态** 环节。
- [FUN_01BAB8F4](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01bab8f4.c) 从控制对象 `+0x4C8` 获取 spawner，逐条读取 8 组 `entry+0x42/+0x43` 状态，判断是否均已死亡或为空。它读取的是 **生命周期标记**，不表示已使用 `GenerateSeed`。
- [FUN_01B55130](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01b55130.c) 在实体清理时取 `*(entity+0x140)` 指向的条目，把条目 `+0x43` 置为 1，清空 `+0x20` 和 `+0x58` 等位置。
- [FUN_01B570CC](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01b570cc.c) 也经实体 `+0x140` 指针重置相同状态；[FUN_01B54FA0](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01b54fa0.c) 是调用清理及注销的上层。

由此能确认一部分真实引用关系：**spawner 持有 0x80 字节条目；生成函数初始化条目；实体对象持有条目指针；清理函数能回写条目**。但清理的读写不能替代生成时的 consumer 证明。

## 3. CONFIRMED 直接调用；UNRESOLVED 跨对象 Seed 数据流

| 原生函数与关系 | 静态证据 | 状态 |
| --- | --- | --- |
| [FUN_01B56418](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01b56418.c) → `entry+0x20/+0x58` | 精确写地址、两个 Next 输出与 0x80 条目跨度均可见 | **CONFIRMED** |
| [FUN_01C521E4](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01c521e4.c) → [FUN_01094470](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01094470.c) | 在上层调用参数内将 `param_1+0x6F0` 作为 RNG 指针传入 | **CONFIRMED CALL，不等于已确认来自 SpawnEntry** |
| [FUN_01BB3778](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01bb3778.c) → [FUN_01094470](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01094470.c) | `local_128 = param_1+0x350`，随后将 `local_128` 传作 RNG 参数 | **CONFIRMED CALL，种子来源未证** |
| [FUN_01094470](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01094470.c) → 返回结构 | 函数读取表和状态，第一随机输出写到结果 `+0x08`，还有分布式属性写入 | **CONFIRMED 原生结果构造行为；未证明 EC/PID/6IV** |
| [FUN_0192D274](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/0192d274.c) → [FUN_01930680](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01930680.c) | FlatBuffer 表与 RNG 相关路径，可进一步审计物种/形态候选 | **CONFIRMED CALL；关联条目未证** |

上述 `param_1+0x350` 和 `param_1+0x6F0` 是各自独立调用者中的字段位置；即使两者都运行 xoroshiro128+，**不能证明它们的 seed 源自 spawner entry+0x20**。需要通过结构体指针与寄存器读写来证明，不能仅用整数常量或函数相近地址推断。

## 4. 被排除的误判候选

- [FUN_01BFE800](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01bfe800.c) 虽命中 spawner 相关 0x20、0x58、0x400、0x408、0x4C8 等高分模式，代码实为大范围逐字段拷贝；并无已证实的随机数使用。**EXCLUDED as direct RNG consumer**。
- [FUN_007E9304](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/00/007e9304.c) 对大型结构进行逐字段编码，不是靠相同偏移就能视为 SpawnEntry Seed 消费者。**EXCLUDED pending object provenance**。
- [FUN_01BD2FD0](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01bd2fd0.c) 的 `param_2+0x20/+0x58` 是输入对象初始化字段，不具备 spawner 指针同一性的证据。**EXCLUDED pending object provenance**。
- [FUN_01B56ACC](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01b56acc.c) 使用全局 RNG 计算位置扰动等坐标数据；没有读到 `entry+0x20` 的原生证据。**Not the EC/PID generator by proof**。

本轮 25 个候选是证据筛选范围，不是 25 个真实 Pokémon 生成函数。

## 5. 对账计划：EC / PID / 6 IV / 闪光

按 [PKHeX Overworld8aRNG](https://github.com/kwsch/PKHeX/blob/master/PKHeX.Core/Legality/RNG/Methods/Gen8a/Overworld8aRNG.cs) 与 [PermuteMMO SpawnGenerator](https://github.com/kwsch/PermuteMMO/blob/master/PermuteMMO.Lib/Generation/SpawnGenerator.cs) 的 **参考算法**，需分别对账：

1. 在原生消费者上观测 `entity+0x140` 所指的条目地址，检查从条目 `+0x20` 读取的 64-bit GenerateSeed 是否进入下一层 xoroshiro128+ 的 `s0`；验证 `s1=0x82A2B175229D6A5B`。
2. 检查这层 seed 的第一 RNG 输出是否用于 `NextFloat(weightSum)` 与遭遇表 species/form/Alpha 选择，第二输出是否作为 **EntitySeed**，第三输出是否用于等级抽签；记录每个游戏分支的实际推进。
3. 对真正的 EntitySeed 消费函数记录 EC 的 NextInt(0xFFFFFFFF)、fakeTID、每次 PID roll/shiny XOR、选择多少保底31IV、六项 IV 与 ability/gender/nature/size 的原生写入顺序。最终 PID 还必须和玩家真实 TID/SID 及 PKHeX 的 `ForceShinyState` 对账。
4. 大量出现 MO／大大大量出现 MMO 的额外位置与闪光次数、静态头目/时空歪曲等分支分别对账，不用一套 seed 规则覆盖所有遭遇。
5. 对一个同一时刻的原生实例至少记录：`SpawnerPtr`,`EntryPtr`,`GenerateSeed`,`AlphaSeed`,`GroupSeed`,`EncounterTableHash`,`Species/Form/Alpha/Level`,`EntitySeed`,`EC`,`PID`,`IV[6]`,`TID/SID`。然后和 PKHeX + 真实 PA8 三方一致再标记 `NATIVE_GAME_PARITY`。

### 尚未跨过的关键关口

**UNRESOLVED:** 必须从真正的函数入口/虚函数消费者证明 `Actor/Entity+0x140 → SpawnerEntry+0x20 → slot RNG → NextFloat(table) → EntitySeed`。已知的 `FUN_01094470` 两个调用者传入另外两个内存 RNG state，故目前不能把它们直接接到 slot seed 生产端上。**不要把 `FUN_01B56418` 的组 Seed 写入误报成 EC/PID/六项IV 已生成或存档成功。**

保留只读、不可覆盖的原始 ELF/Ghidra/反编译成果；所有研究结论以独立文档与工具增量发布。
