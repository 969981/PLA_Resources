# PLA 1.1.1 — R8 宝可梦生成、野生刷新与 xoroshiro128+ 原生证据

> **状态：野生刷新点 GroupSeed → GenerateSeed/AlphaSeed 的原生写入已确认；具体物种与个体 EC/PID/IV 原生函数尚未完成端到端对账。** 只读分析原有 Ghidra 12.2 Run 42774682950 的 82,731 份 C 文件，公开对照 PKHeX/PermuteMMO；不覆盖原始 ELF、数据库或生成的 C。未连接实际运行的 PLA guest，因此不能宣称游戏生成实机等价。

## 1. 原始与参考基线

- 原始游戏：PLA v1.1.1，`main.elf` SHA-256 `260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794`，Ghidra image base `0x00100000`。
- 公共算法：[PKHeX `Xoroshiro128Plus.cs`](https://github.com/kwsch/PKHeX/blob/master/PKHeX.Core/Legality/RNG/Algorithms/Xoroshiro128Plus.cs)，[PKHeX `Overworld8aRNG.cs`](https://github.com/kwsch/PKHeX/blob/master/PKHeX.Core/Legality/RNG/Methods/Gen8a/Overworld8aRNG.cs)，[PKHeX `SpawnerMeta8a.cs`](https://github.com/kwsch/PKHeX/blob/master/PKHeX.Core/Saves/Substructures/Gen8/LA/Spawners/SpawnerMeta8a.cs)，[PKHeX `SpawnerEntry8a.cs`](https://github.com/kwsch/PKHeX/blob/master/PKHeX.Core/Saves/Substructures/Gen8/LA/Spawners/SpawnerEntry8a.cs)。
- 社区已用工具：[PermuteMMO](https://github.com/kwsch/PermuteMMO)（MO/MMO 刷新行动路径排列），[EtumrepMMO](https://github.com/kwsch/EtumrepMMO)（EC 反求 group seed 并验证），[PLA-Live-Map](https://github.com/Lincoln-LM/PLA-Live-Map)（刷新点与当前／未来生成映射），[pla-reverse-gui](https://github.com/Lincoln-LM/pla-reverse-gui)（逆向 seed），[ParLiAment](https://github.com/LegoFigure11/ParLiAment)（定点/传说相关场景）。
- 工具现状：这些工具支持不同场景；不能将 MO、MMO、普通刷新点、定点神兽视为完全相同生成路径。

## 2. 已确定原生 AArch64 对应算法

**CONFIRMED Native RNG** — [`FUN_00DB854C`](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/00/00db854c.c)：

```c
a = state[0];
b = state[1];
x = a ^ b;
state[0] = rotl(a, 24) ^ x ^ (x << 16);
state[1] = rotl(x, 37);
return (float)(a+b) * 5.421011e-20f * bound;
```

这与 PKHeX xoroshiro128+ 的 24/37/16 位转移完全吻合，返回值是用于权重抽签的 `NextFloat` 类路径。其浮点实际舍入与平台 C 生成需通过运行时对账，不能单靠脚本把浮点表边界称为原生字节等价。

**CONFIRMED Native constructor**：

- [`FUN_00DB84C4`](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/00/00db84c4.c) 调用 `nn::crypto::GenerateCryptographicallyRandomBytes(...,8)` 作为 64 位状态 `s0`，并把 `s1` 设成 `0x82A2B175229D6A5B`。
- [`FUN_00DB8508`](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/00/00db8508.c) 使用调用者指定的 `seed` 初始化完全相同状态。
- [`FUN_009273D4`](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/00/009273d4.c) 在 `param_1+0x70/+0x78` 上运行此 128-bit RNG，以掩码/拒绝采样获得有界随机数。确认是 `NextInt` 风格，而不是简单无偏的 `next() % limit`。
- [`FUN_00927460`](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/00/00927460.c) 取小于 100 的抽样并与传入概率比较。但这个随机调用者的具体游戏业务还需要数据流检查；不能给它贴 Alpha/闪光标签。

## 3. 原版刷新点 Seed 派生：原生函数与 PKHeX 存档结构精确吻合

**CONFIRMED — [`FUN_01B56418`](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01b56418.c)；直接调用者 [`FUN_01B54E58`](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01b54e58.c)**。

此例最关键的是 `param_1+0x4C8` 指向一份最多 8 个条目的内存 spawner；每条 stride `0x80`，使用 `+0x43` 的 IsEmpty 标志判断需要填入的空位，从 `spawner+0x408` 读取 GroupSeed，再以 xoroshiro128+ 生成两个连续 Next 输出，写入空位 `+0x20` 和 `+0x58`，并设置 IsEmpty 和 IsDead = 0，结束后写回 `spawner+0x408` 下一 GroupSeed。

| 内存数据 | 原版 offset | PKHeX 定义与校验 |
| --- | --- | --- |
| 单条刷新记录大小 | `0x80` | SpawnerEntry8a.SIZE |
| `GeneratorSeed` | `spawner + i*0x80 + 0x20` | SpawnerEntry8a.GenerateSeed |
| `AlphaSeed` | `spawner + i*0x80 + 0x58` | SpawnerEntry8a.AlphaSeed |
| IsDead | `spawner + i*0x80 + 0x42` | SpawnerEntry8a.IsDead |
| IsEmpty | `spawner + i*0x80 + 0x43` | SpawnerEntry8a.IsEmpty |
| CountSeed | `spawner+0x400` | SpawnerMeta8a.CountSeed |
| GroupSeed | `spawner+0x408` | SpawnerMeta8a.GroupSeed |
| Current count | `spawner+0x418` | SpawnerMeta8a.Count |

**注意两种随机源独立**：`FUN_01B56418` 从 `param_1+0x4B0/+0x4B8` 另一套 xoroshiro 状态抽取需保持的数量，随后把下一 CountSeed 写到 `spawner+0x400`；**GroupSeed 不是 CountSeed**。单一“主 Seed”并不能描述这套刷新状态。

该函数实现的是原生空位批量更新；并未因此证明普通刷新、MO 和 MMO 的所有重排策略都由它一处处理。`FUN_01B54E58` 在满足条件时调度它，但条件的业务意义尚待结合刷新类型对象验证。

## 4. 社区确定的下一层生成算法（需与原生分别验收）

参考 [`PermuteMMO.SpawnGenerator`](https://github.com/kwsch/PermuteMMO/blob/master/PermuteMMO.Lib/Generation/SpawnGenerator.cs)、[`Overworld8aRNG`](https://github.com/kwsch/PKHeX/blob/master/PKHeX.Core/Legality/RNG/Methods/Gen8a/Overworld8aRNG.cs)：

```text
GroupSeed (64bit)
    └─ xoroshiro128+ Next() → GeneratorSeed
                      Next() → AlphaMoveSeed
           └─ xoroshiro128+(GeneratorSeed)
                      NextFloat(sumWeights) → encounter slot (species/form/alpha)
                      Next() → EntitySeed
                      optional NextInt(level range) → level
               └─ xoroshiro128+(EntitySeed)
                      EC → fake TID → repeated PID/shiny checks
                      guaranteed 31 IV slots → remaining IVs
                      ability → gender → nature → height/weight
```

- **物种/头目**由 encounter table 权重与类型决定，不是 `EntitySeed` 自己决定。
- **闪光**的基本判定是 `((PID ^ fakeTID) ^ ((PID ^ fakeTID)>>16)) & 0xFFFF < 16`；多个 PID 候选中可提前命中。PKHeX 实际持有的 PA8 PID 还要走 `ForceShinyState`，应用玩家实际 `TID/SID`，不要直接把 raw fakePID 当作已经保存的 PID。
- **固定 IV**：先随机抽不重复的槽位填 31，再填剩余的 [0,31]，其余来源依 encounter 参数而定。
- **头目**：是否为头目是遭遇槽数据或遭遇条件；常见 Alpha 有 3 个保底 31 IV，但并非可对所有神兽或特殊分支无条件应用的规则。
- **性别**：PKHeX `Overworld8aRNG` 使用有性别比例的 `NextInt(252)+1`，目前 PermuteMMO `SpawnGenerator` 使用 `NextInt(253)+1`；R8 参考实现让用户选择两种上限，而不是把存在分歧的分支称为唯一的原生公式。
- **身高体重**：普通值分别通过两次 `NextInt(0x81)` 与 `NextInt(0x80)` 相加；Alpha 固定 255（原始标量）。

社区各类闪光 PID 候选次数（`1+图鉴完成 1+完美图鉴 2+闪符 3+类型加成`）：

| 遭遇类型 | 无图鉴加成 | 完成图鉴+完美图鉴+闪符 |
| --- | ---: | ---: |
| 普通野生 | 1 | 7 |
| 大大大量出现 MMO | 13 | 19 |
| 普通大量出现 MO | 26 | 32 |

**重要**：这列是社区原生规则参考，不是本轮已定位的 `FUN_01B56418` 的直接输出（该函数不负责完整个体 PID/IV 流程）。同时早期随机 PID 可能导致消耗 RNG 调用次数不同。

## 5. 已发现的候选原生后续函数（不可越级 CONFIRMED）

- [`FUN_01094470`](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01094470.c)：输入遇敌表结构与 `param_12` XOROSHIRO state，更新状态并写入约 0x80 字节结果结构。直接调用者 `FUN_01BB3778`、`FUN_01C521E4`。适合追踪 Encounter Slot/Level、形态或等级字段；目前不可直接命名完整 PID/IV 生成器。
- [`FUN_01930680`](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01930680.c)：从 FlatBuffer 数据恢复 species/form 候选并推进 `param_5` 的 xoroshiro 结构；上层 `FUN_0192D274` 明确调用。需确认返回的数据是完整 Poke 对象、刷怪表还是另一种报告对象。
- [`FUN_019313E0`](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/019313e0.c) 执行 `NextInt(100)` 风格概率判断，参与 FlatBuffer 记录抽样，调用者 `FUN_0193053C`；业务具体标签仍待证。
- [`FUN_010F130C`](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/010f130c.c) 为若干记录各自注入 `nn::crypto::GenerateCryptographicallyRandomBytes` 生成的 64 位初始状态和共享常量；不宜在未追上层对象前将其标为全游戏刷新 Seed 来源。
- [`FUN_018C7A74`](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/018c7a74.c) 虽包含 `spawn_pattern_num` 和 xoroshiro，但也明显涉及 `bandit_config`，可能是 NPC 事件刷新；并非已确认 Pokémon 野外生成。

R8 全量 C 扫描 [Actions #42948759610](https://github.com/969981/PLA_Resources/actions/runs/42948759610) 成功，82,731/82,731 份文件已校验：31 份 C 命中 xoroshiro 状态常量、120 份含 inline 正向旋转特征、19 份含独立加密熵调用，最终归纳 143 份候选。这些**不是** 143 个宝可梦生成函数；其中大量是通用 RNG 使用者或误判。详见 [R8 静态候选 JSON](pla_native_rng_candidates_r8.json) 和 [Markdown](pla_native_rng_candidates_r8.md)。

## 6. 独立可复现的正向算法参考

本仓库新增 [`scripts/pla_rng_reference_r8.py`](https://github.com/969981/PLA_Resources/blob/master/scripts/pla_rng_reference_r8.py)，使用纯 Python 标准库计算 `xoroshiro128+` 正/逆推进、GroupSeed→GeneratorSeed/AlphaSeed→EntitySeed、EC/fakeTID/rawPID/IV/性别/性格/体型，以及 MO/MMO 的 shiny rolls。引用参数和未确认差异写进结果元数据；**不修改存档，不制造 PA8，也不宣称与未经 guest 测试的原生实体生成逐字节一致**。

样例：

```bash
python3 scripts/pla_rng_reference_r8.py --group-seed 0x1234 --count 4 --rolls 13 --ivs 3
python3 scripts/pla_rng_reference_r8.py --entity-seed 0xC50932B428A734FD --rolls 1 --ivs 3 --alpha
python3 scripts/pla_rng_reference_r8.py --self-test
```

单元对账来源：

1. [PKHeX `Xoroshiro128Tests.cs`](https://github.com/kwsch/PKHeX/blob/master/Tests/PKHeX.Core.Tests/General/Xoroshiro128Tests.cs) 有已知前 3 个 32 位输出及双向回退测试；**注意 PKHeX 测试中返回的 frame index=98 是从零开始的，意味着 99 次 Next() 调用**。
2. [PermuteMMO `UtilTests.Garchomp`](https://github.com/kwsch/PermuteMMO/blob/master/PermuteMMO.Tests/UtilTests.cs) 公开 `EntitySeed=0xC50932B428A734FD` 的 Seed/行动路径案例。
3. [PermuteMMO `SaveFileParameter`](https://github.com/kwsch/PermuteMMO/blob/master/PermuteMMO.Lib/Generation/SaveFileParameter.cs) 完整闪光奖励计算。

## 7. 下一轮窄突破口

1. 以已确认 `FUN_01B56418` 的 **`SpawnerEntry.GenerateSeed+0x20`** 写入为生产端，寻找同一 `0x80` entry 的消费者，按真实指针传播恢复 `GenerateSeed → encounter slot roll → entitySeed`，避免偏移碰巧相同的误判。
2. 优先检查 `FUN_01BB3778 → FUN_01094470`、`FUN_0192D274 → FUN_01931C40` 是否读取相同的 entry seed / encounter table，验证 `FUN_01094470` 构造结果能否对上 PKHeX 的物种、等级字段。
3. 沿 `EC/fakeTID/PID` 和六个随机 IV 的准确写入找到真正原生实体构造例程，与已通过独立测试向量的 Python 参考算法对账。单靠 inline xoroshiro 候选数不足以认定完成。
4. 对 **普通刷新点、普通大量出现 MO、大大大量出现 MMO、固定头目／神兽、时空歪曲、剧情固定** 分支分别验证表与 Seed。是否闪光锁定、是否遭遇时才固定种子，不能统一假定。
5. 有 guest 后记录 groupSeed、entry+0x20/+0x58、species/form/level、entitySeed、EC、PID、IV 与 shiny roll count；要求至少同一对象的原生调用链 + PKHeX 输出 + 实际 PA8 三方一致，方能标记 `NATIVE_GAME_PARITY`。

**现阶段结论：R8 已确认 PLA 原版刷新点 Seed 生成/更新逻辑与 xoroshiro128+ 算法，完整物种/个体生成、分支特性和游戏实机一致性仍是待验收项。**
