# PLA 1.1.1 — R6 `context+0x298` 真正构造者、图鉴 KZukan 原生读写包装和虚表证据

> **范围**：固定版本 `PLA v1.1.1`，原始 ELF SHA-256 `260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794`（69,781,384 字节）。Ghidra VA = ELF VA + `0x00100000`。原有 Ghidra 12.2 全量分析 `42774682950`、82,731 份 C、原始 ELF、SQLite、Ghidra 项目保持只读、不覆盖、不重分析。
>
> **关键结果**：`context+0x298` 具体构造及赋值链已经由 C 和原生 ARM64 双重闭合，`KZukan=0x02168706` 的独立原生块读/写包装直接使用 `state+0x6C` 和 `0x1E460` 大小。Ghidra 对关键初始化函数误标了不返回，遗漏了后续初始化代码。**虚表槽位到读/写方法的完整动态调度仍需要重定位或原始 Ghidra 引用证据；不得直接标为实机已调用。**

## 1. 固定证据来源

1. [R6 原始 ELF 只读审计 Actions #42942085861](https://github.com/969981/PLA_Resources/actions/runs/42942085861)：**SUCCESS**。脚本 [`scripts/trace_pla_pokedex_vtable_r6.py`](https://github.com/969981/PLA_Resources/blob/master/scripts/trace_pla_pokedex_vtable_r6.py)，机器码与 xrefs：[pokedex_vtable_factory_raw_elf_r6.json](pokedex_vtable_factory_raw_elf_r6.json) / [Markdown](pokedex_vtable_factory_raw_elf_r6.md)。
2. 已发表的 Ghidra C 路径 `derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/..`，为原版 Ghidra 12.2 反编译结果，非游戏原始 C 源码。
3. R5 独立确认 PKHeX `KZukan=0x02168706`，大小 `0x1E460`；原生 hashdb 按该 key 查找 `0x30` 描述符，写入时 `+0x28` 置位。

## 2. 构造链：现在已 CONFIRMED

按原生 ARM64 直接 `BL` 的证据：

```text
FUN_0287F8B0
  └─ BL 0x02888630       构造上层 SaveSystem context
        ├─ allocator vtable+0x10 分配 0x350 字节，0x10 对齐
        └─ BL 0x011458E8
             ├─ context[0x53]=... 对应字节偏移 +0x298
             └─ BL 0x0114725C (site 0x01145DA4)
                  └─ BL 0x0114BC50 (site 0x0114726C)
                       ├─ allocator 分配 0x1F448 字节，8 对齐
                       └─ BL 0x0112E220 (site 0x0114BCD0)
                            └─ 构造图鉴状态对象，安装主/附加虚表
```

关键数据流：

- `FUN_011458E8`（`c/01/011458e8.c`）调用 `FUN_0114725C`，将共享对象返回到 `local_60`；`param_1[0x53]=local_60`，即 `context+0x298`。原始 ARM64：`0x01145DA4 BL 0x0114725C`，`0x01145DD4 STR X8,[X19,#0x298]`。该函数此前已知在上层 context 构造中调用，`x19` 是构造函数内实例指针。
- `FUN_0114725C`（`c/01/0114725c.c`）调用 `FUN_0114BC50`，对 `object+0x58` 的引用控制结构执行初始化及引用计数。
- `FUN_0114BC50`（`c/01/0114bc50.c`）申请 `0x1F448` 字节，并执行 `FUN_0112E220` 对象初始化。
- `FUN_01148F20`（`c/01/01148f20.c`）从同一 context `+0x298` 槽位读入引用；该槽位的创建者不再是 UNKNOWN。
- `FUN_01147C34`（`c/01/01147c34.c`）将该槽的受管理对象注册到 `context+0x100` 指向的 hashdb 业务监听管理器：`FUN_010CD044(*(context+0x100),*(context+0x298))`。
- `FUN_010CD044`（`c/01/010cd044.c`）实际登记到 manager `+0xD8/+0xE0` 的回调/受管理引用列表。通用遍历入口 `FUN_010CEEA0`、`FUN_010CEC54`、`FUN_010CEB08` 分别调用列表中对象虚表的 `+0x40/+0x48/+0x58` 方法。

**限制**：构造链证据确认引用身份；`FUN_010CD044` 的间接 `vtable+0x10` 取得的子对象与 `FUN_0112E220` 创建的主/附加虚表之间还需要给出真实虚表入口映射。

## 3. 关键反编译遗漏：FUN_0112E220 在原始 ELF 中确实返回

原 Ghidra C `c/01/0112e220.c` 把 `FUN_008A93D8` 错标记为不返回，从而将 `FUN_0112E220` 缩减到 `FUN_008A93D8()`。

经过 R6 原始 ARM64 复核：

```asm
0x0112E230  BL   FUN_008A93D8
0x0112E23C  STR  X8,[X19]           ; 安装主虚表
0x0112E24C  STP  X9,X8,[X19,#0x48] ; 安装两份附加虚表
0x0112E258  ADD  X0,X19,X8         ; X8=0x1E4CC
0x0112E260  BL   FUN_032A24A0
0x0112E294  STR  XZR,[X19,X8]      ; X8=0x1F440
0x0112E298  BL   FUN_032A24A0
0x0112E2A0  STR  W8,[X19,#0x68]
0x0112E2AC  RET
```

确证的 Ghidra VA 虚表候选：主表 `0x041F23C8`，两份附加表 `0x041F2438`、`0x041F2480`（已从原始 ELF 的 ADRP/ADD 组合推导，正确处理了 `0x100000` image base）。

**IMPORTANT**：原始 ELF 文件中的这些表的函数指针槽位多数存储为 `0`，属于待重定位地址内容的候选现象，不可据此标注为空虚表，也不可从原始 qword 值证明方法身份。已准备只读 Ghidra 工程引用扫描来核对。

## 4. 原生精确块读写：数据面已 CONFIRMED

**读**：原生代码 `0x0112E4C0 BL FUN_0112E580` 前：

- `ADD X8,X19,#0x6C`；`STR X8,[SP,#8]`；
- `MOV W8,#0xE460`、`MOVK W8,#1,LSL#16` -> `0x1E460`；
- `FUN_0112E580` 随后 `BL FUN_0113749C`，按 `KZukan=0x02168706` 读取 hashdb 描述符。

**写**：原生代码 `0x0112E660 BL FUN_0112E6F0` 前：

- `ADD X8,X19,#0x6C`；`STR X8,[SP,#0x10]`；
- `MOV W8,#0xE460`、`MOVK W8,#1,LSL#16` -> `0x1E460`；
- `FUN_0112E6F0` 随后 `BL FUN_011379C4` 处理已存在 hashdb 图鉴记录，或 `BL FUN_01137BDC` 插入缺失记录，更新 `desc+0x08` 工作缓冲与 `desc+0x28` 待镜像同步标志。

这确实将 **一个具体的 `PokedexSave` 状态对象中的 `state+0x6C`、完整 `0x1E460` 数据块** 关联到了图鉴 hashdb 键，而不再只是同名 / 同 hash / 同步标志的猜测。

## 5. Ghidra 原生工程还原主虚表方法（CONFIRMED static entry mapping）

首次试图读取原始 Ghidra 工程时 [Actions #42942448823](https://github.com/969981/PLA_Resources/actions/runs/42942448823) 因稀疏检出遗漏 `tools/ghidra/pla_embed_elf.py` 而在恢复工具导入阶段失败；添加该依赖并重新运行后，[Actions #42942725014](https://github.com/969981/PLA_Resources/actions/runs/42942725014) 已 **SUCCESS**，完成：

- 恢复并 SHA 校验原生 Ghidra 项目（不是从 ELF 新建一个项目）；
- 官方固定 Ghidra 12.2 使用 `-process main.elf -noanalysis -readOnly`；
- [`PLATracePokedexVtablesR6.java`](https://github.com/969981/PLA_Resources/blob/master/tools/ghidra/PLATracePokedexVtablesR6.java) 从 Ghidra 原生 ReferenceManager、Memory、Listing 导出 15 个目标和 132 个表槽位；
- [原生 NDJSON](pokedex_vtable_native_ghidra_r6.ndjson) 和 [摘要](pokedex_vtable_native_ghidra_r6.md) 均已发布到 master。
- **重要技术修正**：原始 ELF 的大多数虚表函数指针为零重定位占位，但原始 Ghidra 数据库的内存引用中真实记录了已恢复的非零地址。原始 ELF 零值不是实时空虚表，也不应代替 Ghidra 数据库引用。

主虚表 `0x041F23C8` 的实际函数指针：

| 虚表偏移（字节） | Ghidra 数据库恢复的函数入口 | 原生 ARM64 的实际行为 |
| --- | --- | --- |
| `+0x10` | `0x008A782C` | 用于 `FUN_010CD044` 获得注册对象引用的候选接口；具体返回对象仍待下层验证 |
| `+0x40` | `0x0112E3D0` | 先重置 `state+0x68` 后，`BR` 跳至 `[object->vtable+0x50]`；这是间接尾调到本对象写方法的静态证据 |
| `+0x48` | `0x0112E414` | `0x0112E4C0 BL FUN_0112E580`，读 `KZukan`（`state+0x6C`，大小 `0x1E460`） |
| `+0x50` | `0x0112E5CC` | `0x0112E660 BL FUN_0112E6F0`，写 `KZukan`（`state+0x6C`，大小 `0x1E460`） |
| `+0x58` | `0x010D741C` | 原始 ARM64 `RET`；局部行为为空操作 |

**注意入口与调用地址不同**：`0x0112E414` 和 `0x0112E5CC` 是虚表指向的真正入口；`0x0112E4C0` 和 `0x0112E660` 是两种入口内部向共享数据读写函数发起 `BL` 的调用位置。此前 C 反编译受错误 `noreturn` 传播影响没有单独导出所有包装入口；本轮以原始汇编和 Ghidra 原始数据恢复其身份。

Ghidra 原生程序引用里还同时有三类独立证据：`0x0114725C <- 0x01145DA4` 构造引用、`0x0114BC50 <- 0x0114726C` 分配引用，以及 `FUN_010CD044` 在 `FUN_01147C34` 中的 37 个直接 `BL` 注册操作。这些与虚表数据相互支撑。

**仍未证明的唯一方法层关键边**：`FUN_010CD044` 通过传入对象的 `vtable+0x10` 返回哪种具体 listener/ref 及其实际虚表，`FUN_010CEEA0/+0x40`、`FUN_010CEC54/+0x48`、`FUN_010CEB08/+0x58` 对该 listener 的 `BLR` 是否确实进入上述 `PokedexSave` 主虚表槽位。现已由 `FUN_008A782C → 控制记录 +0x18 → FUN_010D68E4` 的静态证据闭合对象身份，运行时调度顺序仍需实机/guest 验证。

## 6. 注册 listener 的真实对象身份：引用控制结构闭环（CONFIRMED static linkage）

新一轮 [原始 ELF + 回调入口扫描](https://github.com/969981/PLA_Resources/actions/runs/42943359227) 把 `FUN_008A782C` 和 `FUN_010D68E4` 的必要中间环节恢复了出来。配合已发布的 C：
- [`FUN_008A93D8`](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/00/008a93d8.c) 初始化图鉴对象基础类，并执行 `FUN_02A43E4C(&local_48, allocator, param_1+10)`，传入的 `param_1+10` 为 **图鉴对象 `object+0x50`**。
- [`FUN_02A43E4C`](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/02/02a43e4c.c) 写入共享控制记录 `*(long *)(control+0x18) = param_3`；故 `control+0x18=object+0x50`。基础类随后将控制句柄 `local_48` 存入 `object+0x58`。
- Ghidra 原生主虚表 `+0x10 → 0x008A782C`，原始 ARM64：

```asm
0x008A782C add x1,x0,#0x58
0x008A7830 mov x0,x8
0x008A7834 stp xzr,xzr,[x8]
0x008A7838 b   #0x7802f0
```

  其在 `object+0x58` 的控制句柄基础上生成注册引用（后面 tail 分发实现需要完整上下文，故不直接将 `0x007802F0` 命名为唯一完整函数入口）。

- [`FUN_010CD044`](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/010cd044.c) 在注册对象时调用参数的 `vtable+0x10`，将返回的句柄插入 manager `+0xD8/+0xE0` 回调引用列表。
- [`FUN_010D68E4`](https://github.com/969981/PLA_Resources/blob/master/derived/v1.1.1/Ghidra_12.2_Run_42774682950/pla/c/01/010d68e4.c) 在锁住有效的控制引用以后，实际执行：

```asm
0x010D6970 ldr  x9,[x0,#0x18]   ; control + 0x18
0x010D6974 sub  x10,x9,#0x50    ; (object+0x50)-0x50 = object
0x010D6978 cmp  x9,#0
0x010D697C csel x9,xzr,x10,eq
0x010D6980 str  x9,[x8]         ; 输出恢复对象基址
```

- 因此 hashdb manager 列表中的受管理引用能恢复到**同一个图鉴对象的主对象基址**，而不必假设两个无关对象只是字段偏移相似。其调用者 `FUN_010CEEA0` / `FUN_010CEC54` / `FUN_010CEB08` 使用原始主对象指针，分别查询虚表 `+0x40/+0x48/+0x58`。主虚表实际目标如上表已由 Ghidra 原生数据库恢复。

**结论**：将 `context+0x298 → 受管理引用注册 → 引用控制记录 → 原对象身份 → 主虚表回调方法 → KZukan=0x02168706 数据读写包装` 标记为 **CONFIRMED STATIC**。这不是基于同一个 hash 值的经验联想，而是由构造源地址、控制块逆算、函数指针表、原生 ARM64 BL 及 Ghidra 静态引用逐段证明的关系。

但**静态回调能力不是实时触发证明**。主虚表 `+0x40` 会重置后尾调写方法；`+0x48` 是读；`+0x58` 在检查的原生代码窗口直接 `RET`。何时实际调用这些方法，哪些入口用于初始化、加载或保存，仍需观察运行时事件/任务调度。不能把 `FUN_010CEEA0` 的 `+0x40` 自动解释为每次 `UpdateAllReportPoke` 的正常保存。

## 7. 保存任务与持久化边界

```text
SaveSystem context+0x298  —— 已证明来自 FUN_0114725C / FUN_0114BC50
            |
Pokedex 实例 + 主/附加虚表 —— 原始 ARM64 已恢复安装语句
            |
注册到 hashdb listener —— FUN_01147C34 → FUN_010CD044，已证明
            |
listener vtable +0x40/+0x48/+0x58 —— 受管理引用经 control+0x18-0x50 恢复到原图鉴对象，静态虚表目标已确认
            |
Pokedex 特定读取/写入包装 —— 0x0112E4C0 / 0x0112E660 已通过直接 BL 证明
            |
KZukan=0x02168706 描述符 → 工作缓冲+0x08 → 镜像+0x10 → WriteFile
            |
Commit 成功 ACK + 冷启动读回 —— 未验收
```

**切忌混淆**：

- `FUN_0112F528` (`UpdateAllReportPoke`) 会修改 Pokedex 内存，但不能因读/写包装存在就推断其会立刻触发保存。
- `desc+0x28` 反映 hashdb 的镜像需要同步，清零发生在 WriteFile/Commit 之前；不是磁盘已持久化 Dirty。
- `nn::fs::WriteFile` 函数存在并参与相关通用 hashdb 任务，并不证明任一目标游戏存档交易 `Commit` 成功。
- `FUN_0112E220` C 失败属于已恢复的静态反编译 `noreturn` 误标，**不改写原 82,731 份 C**，应另存证据。

**状态**：

| 验收边 | 状态 |
| --- | --- |
| Context 分配 + 初始化 | **CONFIRMED** |
| `+0x298` 图鉴对象创建/赋值 | **CONFIRMED** |
| Pokedex 主/附加虚表安装 | **CONFIRMED** |
| 图鉴 `state+0x6C` + `0x1E460` 读写 wrapper | **CONFIRMED** |
| `KZukan` 原生 hashdb 记录读写 | **CONFIRMED** |
| Pokedex 对象主虚表 +0x48 / +0x50 → 图鉴读/写包装函数 | **CONFIRMED 静态方法槽位与目标** |
| 注册引用经弱引用控制块恢复到原图鉴对象并读取主虚表 | **CONFIRMED STATIC** |
| 真实游戏中何时调度该方法（初始化、加载、保存） | **UNRESOLVED — runtime sequencing** |
| UpdateAllReportPoke → 自动保存调度 | **UNRESOLVED** |
| 文件事务 Commit ACK / 失败重试 / 重启读回 | **NOT VERIFIED** |

## 8. 本轮新增可复现成果

- 原始 ELF 小范围原生汇编/xref 扫描：`scripts/trace_pla_pokedex_vtable_r6.py`。
- ARM64 结果：`pokedex_vtable_factory_raw_elf_r6.md/.json`。
- 原 Ghidra 12.2 read-only vtable/xref 脚本：`tools/ghidra/PLATracePokedexVtablesR6.java`。
- 原 Ghidra 工程还原、只读扫描工作流：`.github/workflows/pla-pokedex-native-ghidra-vtable-r6.yml`，验证成功运行 `42942725014`。
- 原 Ghidra 内存引用与每个槽位结果：`pokedex_vtable_native_ghidra_r6.ndjson`、`pokedex_vtable_native_ghidra_r6.md`。
- 不重跑全量分析，不覆盖原始 ELF/Ghidra/SQLite/82,731 C 文件。
