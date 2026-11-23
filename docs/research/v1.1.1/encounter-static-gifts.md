# PLA 1.1.1 · 剧情固定遭遇、赠送及交换（原生来源审计）

## 原生证据

本研究与 [野生遭遇的 encounter_la.pkl](encounter-native-export.md) 完全分开。这里的原始数据不是一个可以直接替代 PKHeX StaticLA 的合法性二进制资源。

| 原生 RomFS 路径 | pkNX schema | 可验证顶层记录 | 语义 |
| --- | --- | ---: | --- |
| `bin/pokemon/data/poke_add.bin` | `Poke/PokeAdd.fbs` | 8 | 直接追加到队伍或盒子的剧情赠送和初始宝可梦 |
| `bin/pokemon/data/poke_event_encount.bin` | `Field/Static/EventEncountArchive.fbs` | 251 遭遇组，298 个槽位 | 剧情脚本、特殊战斗、重复挑战、固定遭遇的混合表 |
| `bin/pokemon/data/poke_encount.bin` | `EncounterMultiplerArchive` | 322 根记录（结构测量） | 野外倍率参数，不是固定剧情赠送 |
| `bin/script_event_data/field_trade.bin` | 未发现于当前 PLA /1/ 资源树 | 无 | 不能将其他作品的 NPC 交换来源照搬到 PLA |

原生字段包括 Species、Form、Gender、ShinyLock、Level、Ability、Nature、Height、Weight、Alpha、Move1..4、Mastered1..4、IV_HP..SPE、NumPerfectIvs 和 GV_HP..SPE；赠送数据另有 TryInsertParty、Ball 和事件名。脚本战斗表额外包括非捕获战斗的参数。`ShinyType: 0=Random, 1=Always, 2=Never`，原生性别 `-1` 表示随机，与 PKHeX 模板值不可直接混用。

## 原生 poke_add.bin 的 8 条赠送记录

| Index | 内部标识 | 宝可梦 | Lv | ShinyLock | 高/重标量 | 附注 |
| ---: | --- | --- | ---: | --- | --- | --- |
| 0 | `shoki3_kusa` | 722 木木枭 | 5 | Never | 127/127 | 初始草主 |
| 1 | `shoki3_honoo` | 155 火球鼠 | 5 | Never | 127/127 | 初始火主 |
| 2 | `shoki3_mizu` | 501 水水獭 | 5 | Never | 127/127 | 初始水主 |
| 3 | `event_092` | 37 阿罗拉六尾 Form 1 | 40 | Never | 127/127 | 地区形态 |
| 4 | `dialga_o` | 483 帝牙卢卡 | 65 | Never | 127/127 | 起源球 37、3 保底个体 |
| 5 | `palkia_o` | 484 帕路奇亚 | 65 | Never | 127/127 | 起源球 37、3 保底个体 |
| 6 | `special_dp` | 484 帕路奇亚 | 65 | Never | 127/127 | 与上一项相同种类/形态/等级，尚须定位脚本调用分支 |
| 7 | `arceus` | 493 阿尔宙斯 | 75 | Never | 127/127 | 3 保底个体 |

这里是 8 条**脚本资源记录**，不是 8 次独立可领取的证明；不应把 `special_dp` 自动转换为第二个合法帕路奇亚赠送模板。

## 原生事件表不是全部可捕获遭遇

`poke_event_encount.bin` 包含 **251 组 298 条记录**，其中包括剧情战斗和重战组（典型 `mut_` 前缀）。初步已见 `mev002` 的音箱蟀 Lv12、`numelgon01` 的洗翠黏美龙 Lv58、`zoroark01` 的洗翠索罗亚克 Lv58；`nsi_ex_09_r` 还包含 Lv100 的阿尔宙斯再次战斗模板，不能将其作为新捕获的 Lv75 阿尔宙斯。

因此每条记录保留 `EncounterName` 与原始索引；`mut_` 只标记为「战斗模板，尚未证明可捕获」；其他组标记为「需追踪触发调用」。不根据 Species/Form/Level 的相同而断言合法性相同。

## PKHeX 固定模板与交换判断

- [PKHeX Encounters8a.StaticLA](https://github.com/kwsch/PKHeX/blob/master/PKHeX.Core/Legality/Encounters/Data/Gen8/Encounters8a.cs) 是手工定义的地点、异色、是否头目、保底个体值等静态模板。它结合游戏剧情，**不能**直接由单张原生事件表完整生成。
- [EncounterStatic8a](https://github.com/kwsch/PKHeX/blob/master/PKHeX.Core/Legality/Encounters/Templates/Gen8a/EncounterStatic8a.cs) 的 Location、Method、Shiny、Alpha、Ball、Moves、Height 和 Weight 需要综合验证；特殊固定异色小火马、未定图腾和传说遭遇另需场景及合法性证据。
- [PLA EncounterPossible8a](https://github.com/kwsch/PKHeX/blob/master/PKHeX.Core/Legality/Encounters/Generator/Possible/EncounterPossible8a.cs) 的枚举分支为 Event / Static / Slot，**没有独立的 NPC Trade 模板分支**。本次也没有在该 PLA RomFS 目录发现独立的 NPC 交换数据文件；不能凭游戏具有玩家联机交换功能就制造 NPC 交换合法来源。

## 可复现审计命令

在仓库根目录执行（Python 标准库）：

    python -m unittest discover -s tests -p "test_pla_static_gifts.py" -v
    python scripts/audit_pla_static_gifts.py "v1.1.1/b38cd4c18831237d85312886f3a377b5_NCA/1" --output ".pla-work/static-gift-evidence" --pkhex-source "C:\Temp\Encounters8a.cs"

输出 `pla_gifts_native.json`、`pla_gifts_native.csv`、`pla_event_groups_native.json`、`pla_event_slots_native.csv`、`pla_static_gift_audit.json`。每条有原始索引、分组和逐字段数据，附 SHA-256。与 PKHeX 的 Species/Form/Level 比对只作为 **SPECIES_FORM_LEVEL_ONLY 语法候选**，不作为合法性判决。

CI：[PLA Static Gift and Scripted Encounter Source Audit](../../../.github/workflows/pla-static-gifts-audit.yml) 将 PKHeX 参考固定到 `a5311f9f55a84376fd2e2499b25d9fb9640d9f2d`；生成结果以短期 Actions Artifact 形式保存。

## 后续需要的独立证据

1. 沿 `PokeAdd.Field_00`、`EventEncount.EncounterName` 查找剧情脚本和实际游戏生成/入盒调用，区分可捕获、不可捕获、重复战斗以及奖励角色；
2. 逐条核对 PKHeX Fixed 模板的种类、形态、等级、地点、异色、头目、保底个体、球、招式、大小、Method 与剧情标志；
3. 按来源分别追踪图腾、必闪小火马、传说/幻之宝可梦等特殊脚本；把未证明项标记 Unknown，而非自动补齐；
4. 对已证明的合法固定模板输出专用结构化 JSON 和校验工具；在明确消费者格式前不要将它们塞进野生 `encounter_la.pkl`。

参考：[pkNX PokeAdd.fbs](https://github.com/kwsch/pkNX/blob/master/FlatBuffers/Arceus/Schemas/Poke/PokeAdd.fbs) · [pkNX EventEncountArchive.fbs](https://github.com/kwsch/pkNX/blob/master/FlatBuffers/Arceus/Schemas/Field/Static/EventEncountArchive.fbs)
