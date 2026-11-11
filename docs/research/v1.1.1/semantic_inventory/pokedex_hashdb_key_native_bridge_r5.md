# PLA 1.1.1 — R5 图鉴存档键 0x02168706 与 hashdb 原生读写闭环

> **结论（2026-11-11）**：不能将 `PokedexSave` 与 hashdb 判为无关子系统。原生函数以精确记录键 `0x02168706` 在同一 `0x30` 字节 hashdb 描述符数组中读取及更新记录；PKHeX PLA 存档解析器独立确认 `KZukan=0x02168706` 和图鉴块的数据布局。已经取得 **图鉴键 → hashdb 描述符 → 写入源/同步标志 → 镜像 → 序列化/WriteFile** 的静态证据。尚不能证明 `UpdateAllReportPoke` 会立即执行 WriteFile/Commit 或成功保存；`context+0x298` 的实际构造者、引用到具体注册虚函数的映射、文件事务 ACK 和重启读回仍未闭合。

## 1. 基线与验证身份

- 游戏：Pokémon Legends: Arceus v1.1.1。
- 原始 ELF：`Unpack/v1.1.1/exefs/main/main.elf`，SHA-256 `260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794`，69,781,384 字节。
- 固定反编译源：Ghidra 12.2 全量 Run `42774682950`、82,731 个成功生成的 C 文件。地址均为 Ghidra VA（image base `0x00100000`），不是 ELF RVA。
- 本轮原始 ARM64 STR 偏移审计：[Actions #42938347008](https://github.com/969981/PLA_Resources/actions/runs/42938347008) **Success**。C 覆盖：82,731/82,731；原始机器码中各类 `STR` 的 `+0x298` 立即数命中 684 次（包括大量无关类型和栈空间），不等于 684 个图鉴所有者。
- 结果文件：`save_slot_298_str_audit_r5.json` / `.md`；只读工具 `scripts/trace_pla_save_slot_298_stores.py`。
- 未重新运行全量 Ghidra，未修改任何原始 ELF、现有 Ghidra 工程、SQLite、NDJSON 或原始 per-function C。

## 2. 图鉴键的双来源独立对账（CONFIRMED）

**PKHeX 源代码**：

- [`SaveBlockAccessor8LA.cs`](https://github.com/kwsch/PKHeX/blob/master/PKHeX.Core/Saves/Access/SaveBlockAccessor8LA.cs)：`PokedexSave = new(sav, Block(sav, KZukan))`，`private const uint KZukan = 0x02168706;`。
- [`PokedexSaveData.cs`](https://github.com/kwsch/PKHeX/blob/master/PKHeX.Core/Saves/Substructures/Gen8/LA/Pokedex/PokedexSaveData.cs)：`POKEDEX_SAVE_DATA_SIZE = 0x1E460`，研究记录从块内 `0x70 + species*0x58` 开始，统计记录从块内 `0x151A8 + index*0x18` 开始。

**PLA 1.1.1 原生 C**：

- [`FUN_0112E6F0`](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/0112e6f0.c)：在 manager `+0xA0` 互斥锁保护下，使用 `manager+0x08`（begin）、`manager+0x10`（end）作为 `0x30` 长度描述符数组进行按 `*desc==0x2168706` 的二分查找。命中走 `FUN_010D7974` 校验和 `FUN_011379C4` 更新；未命中走 `FUN_01137BDC` 插入。
- [`FUN_0113749C`](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/0113749c.c)：在同构描述符数组上以相同键查找，读取 `desc+0x08` 数据指针、`desc+0x20` 长度，通过 `FUN_010D7784` 获取或返回相关块数据。
- [`FUN_0112E580`](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/0112e580.c)：是 `FUN_0113749C` 的上层包装，Ghidra 在其反编译中丢失部分实参，勿据此臆断签名。

**判定**：`0x02168706` 不是从图鉴名称猜的数，也不是只有 PKHeX 的静态定义；已经在游戏原生代码中独立证实它是 `0x30` hashdb **描述符记录键**，且对象操作位于已恢复的图鉴相关函数簇。图鉴与 hashdb 的键级映射为 **CONFIRMED**。

## 3. 原生图鉴块更新会置位 hashdb 描述符 +0x28（CONFIRMED）

### 命中已存在记录

[`FUN_011379C4`](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/011379c4.c) 使用现有 `uint* param_2` 描述符：

1. `uVar6 = *param_4 + 5`：为待写数据按上层长度加 5 字节；原因或封装层具体含义仍未逐字节证明。
2. 如实际长度变化，调用 `FUN_010D4780` 为该描述符的源缓冲及镜像缓冲分配/扩容容量。
3. 缓冲存在时执行 `*(undefined1 *)(param_2 + 10) = 1`。由于 `param_2` 是 `uint*`，**真实字节地址是 `desc+0x28`**。
4. `uVar8 = *(undefined8 *)(param_2+8)` 读取 `desc+0x20` 记录长度。
5. `lVar7 = *(long *)(param_2+2)` 读取 `desc+0x08` 工作源指针，继而经 `FUN_010D80B4` 对该源缓冲进行数据写入。

### 未命中记录键

[`FUN_01137BDC`](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01137bdc.c) 在描述符数组中以 `FUN_011376C8` 插入记录，并执行：

```c
lVar8 = *(long *)(manager + 0x10);    // 新数组末端
*(undefined1 *)(lVar8 - 8) = 1;        // 新元素 (end - 0x30) + 0x28
```

之后访问 `lVar8-0x28`（新 desc+0x08）、`lVar8-0x10`（新 desc+0x20），调用 `FUN_010D80B4` 写入源缓冲。失败路径包含 `FUN_010D099C` 释放描述符和数组回退；这仅是**插入失败回滚**，尚不能延伸为文件保存失败后的回滚。

### 必须纠正 R4 中的过窄解释

此前 R4 已知 `FUN_010CD634` 在读文件/恢复描述符时 set `+0x28=1`，因此没有把该标志直接命名为游戏图鉴 Dirty。R5 进一步确认：**图鉴块原生写入操作也会置位相同的 PendingCopy 标志**。合理名仍是 `SnapshotMirrorNeedsSync` / `HashBlockPendingCopy`，其用途比“图鉴修改”更广泛。

## 4. 精确数据结构与存档块边界

已有 `FUN_010D34A8`、`FUN_010D4780`、`FUN_010CE5DC` 支持的 hashdb 描述符布局：

| 相对偏移 | 含义 | 证据 |
| --- | --- | --- |
| `+0x00` | u32 key = `0x02168706`（在图鉴相关描述符） | `FUN_0112E6F0` |
| `+0x08` | 独立分配的工作源缓冲区 | `FUN_010D34A8 / FUN_010D4780` |
| `+0x10` | 独立分配的快照镜像缓冲区 | `FUN_010CE5DC` |
| `+0x18` | 容量 | `FUN_010D4780` |
| `+0x20` | 实际长度 | `FUN_010CE5DC` |
| `+0x28` | 待复制/镜像同步标志 | `FUN_011379C4 / FUN_01137BDC / FUN_010CD634 / FUN_010CE5DC` |

注意：描述符源缓冲是 allocator 分配的，**不要求它的指针等于图鉴业务对象 `FUN_01148F20` 返回的指针**。用户真正要验证的是「原生序列化内容及其传播」，不是指针数值机械相等。

**PokedexSave 业务对象布局对账**：

- `FUN_0112F528` 的 `state+0x6C` 可对应 PKHeX 的图鉴持久化块数据起点（通过下一个字段的布局核对）。
- 游戏研究记录：`state + 0xDC + species*0x58`。
- 与 PKHeX：`(state + 0x6C) + 0x70 + species*0x58 = state+0xDC+species*0x58`，精确吻合。
- PKHeX 块长 `0x1E460`，所以存档块结束地址是 `state+0x6C+0x1E460 = state+0x1E4CC`。
- `FUN_0112F528` 另有 `state+0x1E4CC+species*4` 的 packed task progress 写入；这部分位于**PKHeX 图鉴块已知长度之外**，因此至少不能默认认为它原样序列化进同一个 `0x1E460` 图鉴块。它可能是额外运行时/辅助结构，或有独立持久化来源，仍待查。

## 5. 图鉴所有者 +0x298 的管理身份已经获得更强连接，但构造/动态分发未闭合

**OBSERVED — [`FUN_01147C34`](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/01147c34.c)**：

```c
FUN_010CD044(*(undefined8 *)(context + 0x100),
              *(undefined8 *)(context + 0x298));
```

其真正上层 [`FUN_0287C530`](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/02/0287c530.c) 从 `PTR_DAT_04379560` 取得 context 后调用 `FUN_01147C34`。而 `FUN_01148F20` 从相同的 context+0x298 获得图鉴相关对象引用。

`FUN_010CD044` 主要把引用/回调对象注册进 manager+0xD8/+0xE0 引用集合；`FUN_010CEEA0`、`FUN_010CEC54`、`FUN_010CEB08` 对集合中的对象依次调用动态虚函数 `+0x40/+0x48/+0x58`。

**身份边界**：

- `+0x298` 的管理注册关系 — **OBSERVED / CONFIRMED**。
- 该引用对象的精确分配函数、哪段初始化代码最终赋值 `context+0x298` — **UNRESOLVED**。
- 该引用的具体虚表方法最终是否分发至 `FUN_0112E6F0`（图鉴 key 写）和 `FUN_0112E580`（读）— **CANDIDATE**，尚缺虚表或实际 BLR 目标。
- 现有的 raw `STR` 审计在原生代码里找到 684 处显式偏移 `+0x298` 的 store；包含写 `sp+0x298`、无关类字段等，**不得**据数量或相近名称伪称确立了图鉴构造者。

## 6. 保存磁盘路径及事务 ACK 仍需单独验收

已确认的共享 hashdb 串行化机制：

```text
KZukan=0x02168706
    ↓
FUN_0112E6F0  (查找/更新该键)
    ├── existing → FUN_011379C4
    └── missing  → FUN_01137BDC
    ↓
desc+0x08 源缓冲修改，desc+0x28=1
    ↓
FUN_010CE5DC 复制到 desc+0x10 镜像；立即清 +0x28
    ↓
FUN_010CE274 → FUN_02A8D6BC → nn::fs::WriteFile
    ↓
原生 save hashdb 后台任务返回 job+0x448 = 2 (成功) / 3 (失败)
```

**严格状态含义**：这里的 `WriteFile` 是调用链的真实原生静态证据，但没有同一事务的 `nn::fs::Commit` 成功回执和冷启动读回；不能写 `PERSISTED`。尤其 `desc+0x28` 在 WriteFile 之前清零并不等于文件写入成功。

`FUN_027DCC74 → FUN_011325A0 / FUN_011342B0 → FUN_027DD040 → FUN_011457E4` 的图鉴业务修改与保存任务控制流此前已独立建立，但 **`FUN_0112F528` (UpdateAllReportPoke) 是否主动触发写 block 的虚方法、何时调用 SaveSystem 总保存，以及失败重试/回滚** 仍未证实。

## 7. R5 技术关口判定

| 技术关口 | 证据等级 |
| --- | --- |
| PLA `KZukan=0x02168706` | **CONFIRMED**：PKHeX 和原生 C 双对账 |
| 键对应的原生 `0x30` hashdb 描述符查询 | **CONFIRMED** |
| 图鉴键已有/缺失两种写入分支 | **CONFIRMED** |
| 对该描述符源缓冲写入及 `+0x28` 置位 | **CONFIRMED** |
| 源→镜像→流→文件 `WriteFile` 的通用 hashdb 路径 | **CONFIRMED** |
| 同一 `context+0x298` 对象注册在 manager+0x100 | **CONFIRMED** |
| 该特定对象的真正分配/赋值代码 | **UNRESOLVED** |
| 注册对象虚函数 → `0x02168706` 读写方法实际调度 | **UNRESOLVED** |
| `UpdateAllReportPoke` 实时触发保存 | **UNRESOLVED** |
| Save 完成后的 `Commit` ACK / 实机重启读回 | **NOT VERIFIED** |

**下一步建议（不再全量 Ghidra）**：

1. 对 `context+0x298` 的初始化，进行仅针对该对象的动态写观察或 Ghidra p-code 反向切片；过滤 sp 基址及无关类，抓真实 writer 的 LR / base pointer / value。
2. 从 `FUN_01147C34 → FUN_010CD044` 保存的对象虚表向下追 `+0x40/+0x48/+0x58` 的动态方法，验证是否调用 `FUN_0112E6F0` / `FUN_0112E580`，恢复明确加载/保存接口。
3. 离线存档对账 `0x02168706` 的内容长度、前 `0x70` 字节和物种 `0x58` 字节数据；如果运行时写入带有 5 字节传输封装，则首先区分内存原始块长和外层描述符/文件长度，不应直接将两者混为一谈。
4. 最终验收 `UpdateAllReportPoke` 内存修改→图鉴块写入→保存任务启动→WriteFile→Commit 成功→重启读回，分项标记 **OBSERVED / UNRESOLVED / NOT TESTED**。

**架构决定**：不应该把 hashdb 和图鉴持久化研究正式拆成无关项目；但应该将“hashdb 通用序列化层”“图鉴 KZukan 块实现”“SaveSystem 高层任务状态机”分为独立证据层，只有能证明真实数据/调用关系的边才连线。
