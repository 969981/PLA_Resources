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

## 5. 下一步需要证明的方法分发和持久化边界

```text
SaveSystem context+0x298  —— 已证明来自 FUN_0114725C / FUN_0114BC50
            |
Pokedex 实例 + 主/附加虚表 —— 原始 ARM64 已恢复安装语句
            |
注册到 hashdb listener —— FUN_01147C34 → FUN_010CD044，已证明
            |
listener vtable +0x40/+0x48/+0x58 —— 真实调用点已证明，目标槽位仍待确认
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
| 注册对象虚表 → 图鉴读/写包装函数 | **UNRESOLVED**，待重定位/Ghidra refs |
| UpdateAllReportPoke → 自动保存调度 | **UNRESOLVED** |
| 文件事务 Commit ACK / 失败重试 / 重启读回 | **NOT VERIFIED** |

## 6. 本轮新增可复现成果

- 原始 ELF 小范围原生汇编/xref 扫描：`scripts/trace_pla_pokedex_vtable_r6.py`。
- ARM64 结果：`pokedex_vtable_factory_raw_elf_r6.md/.json`。
- 原 Ghidra 12.2 read-only vtable/xref 脚本：`tools/ghidra/PLATracePokedexVtablesR6.java`。
- 原 Ghidra 工程还原、只读扫描工作流：`.github/workflows/pla-pokedex-native-ghidra-vtable-r6.yml`。
- 不重跑全量分析，不覆盖原始 ELF/Ghidra/SQLite/82,731 C 文件。
