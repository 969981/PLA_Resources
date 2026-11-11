# PLA 1.1.1 — R4：hashdb 镜像源指针、置位/清零、失败码与图鉴所有者的未闭合桥

> **固定证据**：原始 ELF SHA-256 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794；Ghidra 12.2 全量导出 Run 42774682950；所有地址均为 Ghidra VA（image base 0x100000）。本轮仅新增脚本/报告，不修改原始 ELF、Ghidra 工程、SQLite、NDJSON 和 82,731 个 C 文件。
>
> **结论**：明确找到了镜像描述符 +0x28 的至少一条生产者（FUN_010CD634）、源/镜像缓冲的分配器（FUN_010D4780）、消费者（FUN_010CE5DC）和序列化作业返回码（位于 0x01150670 的原生代码）。这些对象属于已经定位的 **save hashdb/load hashdb** 通路。**不能**由此认为 +0x08 的源指针就是 FUN_01148F20 返回的图鉴状态。

## 1. 本轮可重放实测

1. [ELF 目标指针与 BL 扫描 Actions #42935694877](https://github.com/969981/PLA_Resources/actions/runs/42935694877)：success。
2. [ARM64 调用上下文补充 Actions #42936209764](https://github.com/969981/PLA_Resources/actions/runs/42936209764)：success；用 Capstone 5.0.6 实际反汇编原始 ELF。
3. 证据文件：serializer_owner_ptr_trace_r4.json、serializer_owner_ptr_trace_r4.md。
4. 脚本：scripts/trace_pla_serializer_owner_pointers.py；workflow：.github/workflows/pla-serializer-owner-pointer-trace.yml。
5. 数据映射锚：0x0112F518 的 BL 指向 0x0112F528（Ghidra VA）；ELF RVA = Ghidra VA - 0x100000。
6. 原始 ELF 69,781,384 字节；没有重新跑全量 Ghidra。
7. 扫描还找到 **FUN_010CE274 的直接 BL 调用者 0x01150690**。该调用位置先前没有在单函数 C 搜索中体现；原始机器码补足了覆盖缺口。
8. 非可执行 ELF 段中这些目标的严格 64 位绝对指针匹配均为 0；这**不**排除 GOT、相对表、二次重定位或运行时构造虚表，不能以此推断没有间接调用。

## 2. 源缓冲 +0x08 的真实创建及用途

**OBSERVED — FUN_010D4780（c/01/010d4780.c）**：

对一个描述符及分配器进行操作：

- 如果 desc+0x08 或 desc+0x10 为空，从同一分配器虚函数 +0x10 **分别申请两块缓冲区**，然后填入 desc+0x08 和 desc+0x10；
- 如果请求长度超过 desc+0x18 的容量，独立申请两块更大缓冲区，从原来的 desc+0x08 和 desc+0x10 拷贝 desc+0x20 字节，释放旧缓冲；
- 记录 desc+0x18 容量与 desc+0x20 实际长度。
- 需要注意已有缓冲且请求长度不超过容量的分支，仅修改实际长度。

已确认的实际字节布局：

| desc 偏移 | 字段 | 静态证据 | 置信度 |
| --- | --- | --- | --- |
| +0x00 | u32 记录键或标识符 | FUN_010CE5DC 在流中写入 | OBSERVED（含义待证） |
| +0x08 | 独立分配的工作源数据 | FUN_010D4780；FUN_010CD634 读入数据的目标 | OBSERVED |
| +0x10 | 独立分配的镜像数据 | FUN_010D4780；FUN_010CE5DC 的 memcpy 目标及写流数据源 | OBSERVED |
| +0x18 | 分配容量 | FUN_010D4780 | OBSERVED |
| +0x20 | 实际数据长度 | FUN_010D4780、FUN_010CE5DC | OBSERVED |
| +0x28 | 源数据更新后镜像需要同步的标志 | FUN_010CD634 set 1、FUN_010CE5DC clear 0 | OBSERVED |

**严格限定**：这个字段结构不能视作真实 PokedexSave state 内部布局。FUN_01148F20 返回的是 manager context+0x298 槽位的引用对象，拥有自己的 +0x58 引用控制结构。本轮没有任何证据说明该引用值等于 hashdb 描述符的独立分配源指针。结构来源不同，因此不能直接通过“offset”和“同属 SaveSystem”作别名推断；也不能仅凭分配器来源宣称所有情况下必定不可能别名。

## 3. +0x28 的置位者、清零者与先后顺序

**OBSERVED — FUN_010CD4C0 → FUN_010CD634：**

- FUN_010CD4C0 加载待解析数据、处理长度和 SHA-256 验证，然后调用 FUN_010CD634；
- FUN_010CD634 根据记录标识匹配或插入 0x30 字节描述符，必要时调用 FUN_010D4780 扩容；
- **FUN_010CD634 的 C 行约 300：** `*(undefined1 *)(__dest + 10) = 1;`；由于 __dest 为 `uint*`，实际字节偏移 **+0x28**。
- 在该语句之前/之后均能找到对源缓冲读入数据的操作。此函数提供了明确的 **read/load-to-mirror-pending** 标志生产证据。

**OBSERVED — FUN_010CE5DC（c/01/010ce5dc.c）**：

遍历 0x30-byte desc，满足 pending 且 source/mirror 非空时：

```c
if (desc->needs_copy && desc->source && desc->mirror) {
    memcpy(desc->mirror, desc->source, desc->size);
    desc->needs_copy = 0;
}
```

后面序列化每条记录时，取 **desc+0x10 镜像指针**（反编译变量为 `lVar9 = *(long *)(puVar2 + 4)`，puVar2 为 4 字节指针），和 +0x20 长度，写入输出流。即使 needs_copy==0，该记录仍会写入镜像中的现有数据。

**严格区分**：+0x28 是镜像同步 pending 位，不能因此命名 PokedexDirty。仅从代码已经证明它会在解析加载数据时置位，而不是只因游戏内图鉴研究发生变化才置位。

## 4. save hashdb 的真实写盘作业和成功/失败码

**OBSERVED — 原始 ELF 0x01150670~0x011506CC：**

```asm
0x01150680 mov   x19, x0
0x01150684 ldr   x0, [x0, #0x410]   ; job->serializer manager
0x01150688 add   x2, x19, #0x418
0x0115068C ldr   x1, [x19, #8]
0x01150690 bl    FUN_010CE274     ; 真实的直接调用
0x01150698 mov   w20, w0
0x011506A4 tst   w20, #1
0x011506A8 mov   w8, #2
0x011506AC cinc  w8, w8, eq        ; 成功 2，失败 3
0x011506B4 str   w8, [x19, #0x448] ; 持锁期间写入作业结果
```

真实汇编周边调用了位于 job+0x450 的 LockMutex / UnlockMutex 实现。
`FUN_0115057C` 在构造这个 job 时把参数写到 job+0x410，初始化 job+0x448 状态和 job+0x450 互斥锁。这提供了明确的作业参数来源与实例布局，而不是只靠名字。

**OBSERVED — FUN_010CE274：**调用 FUN_010CE5DC 序列化记录，准备哈希等元信息，调用 FUN_010CE800 得到目标文件句柄，最终调用 FUN_02A8D6BC → nn::fs::WriteFile。它的布尔返回值实际流入上述后台 job 的成功/失败转换。

**OBSERVED — 任务标签**：

- FUN_010CED3C 在创建任务后把字符串 `"save hashdb"` 传给任务运行器；使用 manager+0xD0 作业引用，job+0x302 bit 0 用于完成性检查。
- FUN_010CE980 类似启动 `"load hashdb"`；其任务引用是 manager+0xC8，和保存作业不同。
- FUN_010CEACC 读取 load 任务的 +0x448；不能因为作业具有同一结构就把它当作 save hashdb 的专用结果查询函数。
- 两条「hashdb」任务的具体游戏逻辑归属、保存文件路径及其对 PokedexSave 的覆盖范围尚需独立确认。

## 5. 失败后标志是否恢复：已确认和未确认

已确认的**时序**：

1. FUN_010CE5DC 复制源→镜像，**立即清空描述符 +0x28**。
2. FUN_010CE5DC 将镜像缓冲区数据写入临时序列化输出流。
3. FUN_010CE274 稍后才执行实际 WriteFile；失败可使返回值为 0。
4. 0x01150670 作业代码将失败转成 **job+0x448 = 3**，成功转成 **2**。

**OBSERVED negative in these inspected functions**：FUN_010CE274、FUN_010CE5DC 与 job 0x01150670 的局部失败路径，没有重新将 desc+0x28 设置为 1。FUN_010CED3C 允许在已有 job 未运行或已完成时构建/提交下一个 `save hashdb` job，但没有发现它根据 +0x448==3 **立即自动重试** 的显式分支。

**不能推断数据已经丢失**：desc+0x10 的镜像仍保存先前复制的数据；下一次调用 FUN_010CE5DC 时，无论 +0x28 是否为 0，都将遍历所有描述符并将镜像内容写入流。因此如果同一镜像与描述符仍在、且有新一次保存尝试，失败快照有机会再次写入。**但**后续新修改是否会重新置位或更新镜像、旧 job 的清理是否改变这些数据、失败后是否自动触发重试，均未证明。

**NOT PROVEN**：通用磁盘 `Commit` 是否与这次 hashdb WriteFile 同事务、文件系统原子性/断电行为、失败后是否成功重传，以及冷启动后的持久化读回。

## 6. 与图鉴更新链的关联：目前仍断开的边

已经观察到图鉴业务修改+保存任务的另一条路径：FUN_027DCC74 → FUN_011325A0/FUN_011342B0 → FUN_027DD040 → FUN_011457E4。该路径和 hashdb 的 snapshot/writefile 目前并没有通过以下证据相连：

- 特定 PokedexSave 图鉴 state 与 hashdb 的 desc+0x08 指针是否别名；
- 哪个注册器将图鉴状态实际编码为 hashdb 记录键、缓冲区和长度；
- 是否存在专门处理 `UpdateAllReportPoke` 的 pending copy/Dirty 行为；
- 写盘 hashdb 事务与图鉴变更的实际持久化同步确认；
- 真实运行时成功/失败实验。

因此当前**不支持**将 FUN_010CE5DC 的 +0x28 改名 `PokedexDirty`，也不支持宣称 `UpdateAllReportPoke` 调用即写盘成功。

## 7. 下一步最值得做的事

1. 以 FUN_010CD634 的记录键（desc+0x00）、FUN_010D4780 分配器、FUN_010CE5DC 编码器为源，恢复 hashdb 记录注册/读写规则，查是否含图鉴状态字段或整体图鉴块；
2. 在原生 Ghidra 项目中只读追踪 FUN_01148F20 context+0x298 的真实写入者，把指针身份映射到具体数据来源；
3. 对当前 hashdb job+0x448 状态 2/3 的所有消费者和任务调度触发条件做动态/静态交叉验收，尤其针对失败重试；
4. 做模拟错误注入和游戏重启读回实验，验证镜像缓存是否在实际游戏失败后重新使用，以及对应图鉴更新是否持久化。

**最终状态**：hashdb 的 descriptor source、pending producer、snapshot consumer 和 2/3 作业状态映射已有可信原始证据；图鉴对象别名和最终持久化依旧 UNRESOLVED。
