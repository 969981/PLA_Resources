# PLA v1.1.1 — encounter_la.pkl 原生提取、读取与编辑指南

> 本文面向 PKHeX 的 **野生遭遇** `encounter_la.pkl`。不是宝可梦单体 `.pa8`、游戏存档 `main`，也不是剧情固定遭遇的 `Encounters8a.StaticLA`。参见 [[encounter-native-export]]、[[encounter-static-gifts]]。

## 1. 原生遭遇从哪里来

    PLA 1.1.1 原始 RomFS /1/
      ├─ bin/archive/field/resident_release.gfpak
      │    ├─ GFLXPACK、FNV64 文件路径哈希、Oodle 压缩
      │    └─ AreaSettings.bin / 遭遇配置 / 生成器 / 点位数据
      ├─ bin/field/encount/huge_outbreak.bin
      ├─ bin/field/encount/new_huge_outbreak_group*.bin
      ├─ bin/pokemon/data/poke_misc.bin
      └─ bin/message/English/common/ + script/place_name.tbl
          ↓
    scripts/extract_pla_resident.py + oozextract v0.5.7 (MIT)
          ↓
    临时派生的无压缩 GFPak，原始字节和 SHA-256 均保留
          ↓
    tools/pla-encounter-native/Program.cs + pkNX 固定 revision
          ↓
    AreaInstance.Create / EncounterTableUtil.GetEncounterDump
          ↓
    遭遇表、地图地点 ID、生成器、歪曲点、树矿点、超大量出现关联
          ↓
    完整区域字节去重 → MiniUtil.PackMini(areas, "la")
          ↓
    encounter_la.pkl + 原生来源审计账本
          ↓
    Python inspect/unpack/pack/find/show/set-slot/set-area
          ↓
    用户编辑副本 + 输出文件名.audit.json

上游 `pkNX` 固定 `3bc649eea311ab1f249af43a562f8d70fe90ed9b`；开源 `oozextract` v0.5.7 用于替代 Linux 上缺失的专有 Oodle DLL。游戏原件全程只读。生成程序不使用 PKHeX 的现成 PKL 作为输入；PKHeX 只作最终对账基准。

已验证的 [GitHub Actions 原生导出 #45148337059](https://github.com/969981/PLA_Resources/actions/runs/45148337059)：GFPAK 内部文件 2,066 项、区域 **1,738**、遭遇槽 **7,132**、PKL **86,760 字节**。区域类型 0–4：519 / 213 / 169 / 227 / 610。

- 原生 SHA-256：`b9f56e99ace2ed560d2b0df578286526392303adc695ad173564d4b096007d2b`。
- 当时 PKHeX 基准 SHA-256：`e39f106cadafef463322ab3dc17dafec91684d981a1187cbc307a249af7d36a4`。
- 唯一语义区别：地点 `[9,56,60]` 的白条纹野蛮鲈鱼（Species 550，Form 2）两条槽位，原生 `gender=0`，PKHeX 参考 `gender=2`。编辑后的 PKHeX 兼容副本不能冒充原生证据。

## 2. 如何从 RomFS 原生资源生成 PKL

最简单的是查看 [已通过的 Native Export 工作流](../../../.github/workflows/pla-encounter-native-export.yml)，下载运行中的短期 Artifact `pla-v1.1.1-native-encounter-pkl`。它包含 `encounter_la.pkl`、`resident-extraction.json`、`native-export-evidence.json`、`pkhex-reference-compare.json`。

在 Linux/WSL2 中独立复现（需要原始 PLA 1.1.1 RomFS、Python 3.12+、.NET SDK 10、Rust/Cargo、Git），在仓库根目录运行：

    export ROMFS="$(pwd)/v1.1.1/b38cd4c18831237d85312886f3a377b5_NCA/1"
    export OUT="$(pwd)/.pla-work/manual-native"
    mkdir -p "$OUT"
    cargo install oozextract --version 0.5.7 --locked --features cli --root "$OUT/ooz"

    python scripts/extract_pla_resident.py "$ROMFS/bin/archive/field/resident_release.gfpak" --ooz-command "$OUT/ooz/bin/unoodle" --output "$OUT/AreaSettings.bin" --normalize-to "$OUT/resident-uncompressed.gfpak" --report "$OUT/resident-extraction.json"

    git clone https://github.com/kwsch/pkNX.git "$OUT/pkNX"
    git -C "$OUT/pkNX" checkout 3bc649eea311ab1f249af43a562f8d70fe90ed9b
    dotnet build tools/pla-encounter-native/PLAEncounter.csproj -c Release -p:PkNXRoot="$OUT/pkNX"

    mkdir -p "$OUT/pla-game/romfs/bin/archive/field" "$OUT/export"
    ln -s "$ROMFS/bin/field" "$OUT/pla-game/romfs/bin/field"
    ln -s "$ROMFS/bin/pokemon" "$OUT/pla-game/romfs/bin/pokemon"
    ln -s "$ROMFS/bin/message" "$OUT/pla-game/romfs/bin/message"
    cp "$OUT/resident-uncompressed.gfpak" "$OUT/pla-game/romfs/bin/archive/field/resident_release.gfpak"
    PLA_SOURCE_ROMFS="$ROMFS" dotnet tools/pla-encounter-native/bin/Release/net10.0/PLAEncounter.dll "$OUT/pla-game/romfs" "$OUT/export"
    python scripts/pla_encounter_pkl.py inspect "$OUT/export/encounter_la.pkl"

**注意：**不是读取原始 NCA 加密文件的程序；要有解出的 RomFS `bin/`。Windows 建议 WSL2 以避免软链接权限与 Oodle DLL 依赖。`PLA_SOURCE_ROMFS` 用于对**真正原始路径**计算 SHA-256，虚拟文件夹只供 pkNX 解码。

## 3. PKL 二进制结构

PKL 使用 PKHeX 的 `la` Mini 格式，所有多字节整数均为小端：

| 文件偏移 | 长度 | 内容 |
| --- | --- | --- |
| `0x00` | 2 字节 | ASCII `la`（`6C 61`） |
| `0x02` | 2 字节 | `uint16 area_count` |
| `0x04` | `4 * (area_count+1)` 字节 | 各区域 `uint32 offset`，末项指向文件尾 |
| `offsets[i]` | 变化 | 第 i 条区域（0-based） |

第一条偏移是 `8 + 4 * area_count`；偏移、区域结尾按 4 字节对齐。

每一区域保存 `uint8 location_count`、紧随其后的地点 ID 数组（每项 `uint8`）、必要时补 0 以对齐到 2 字节，然后是 `uint8 type` 和 `uint8 slot_count`，再接连续槽位；区域末尾使用 0 填充到 4 字节对齐。

**每槽固定 8 字节：**

| 槽内相对偏移 | 类型 | JSON 字段 | 意义 |
| --- | --- | --- | --- |
| +0..1 | `uint16` | `species` | 宝可梦编号 |
| +2 | `uint8` | `form` | 形态 |
| +3 | `uint8` | `alpha` | 0 非头目 / 1 随机 / 2 必定 |
| +4 | `uint8` | `level_min` | 最低等级 |
| +5 | `uint8` | `level_max` | 最高等级 |
| +6 | `uint8` | `gender` | 0 雄性 / 1 雌性 / 2 随机 |
| +7 | `uint8` | `flawless_ivs` | 最低保底 31 个体数（0～6） |

`type`：0 普通、1 时空歪曲、2 树木/矿点、3 大量出现、4 超大量出现。特别注意：游戏**原生** FlatBuffers 的随机性别可能编码为 -1；不能按原值写入 PKL 的 `gender`，两种格式不同。

## 4. 读取、查找和导出 JSON（Windows PowerShell）

    python scripts/pla_encounter_pkl.py inspect "encounter_la.pkl"

    # 按物种/形态查找；输出含 area_index 和 slot_index（全是 0-based）
    python scripts/edit_pla_encounter_pkl.py find "encounter_la.pkl" --species 550 --form 2 --limit 30

    # 进一步限定地点 9、普通遭遇 type 0、随机头目 alpha 1
    python scripts/edit_pla_encounter_pkl.py find "encounter_la.pkl" --species 550 --form 2 --location 9 --type 0 --alpha 1

    # 核实具体区域的全部槽位；791 是特定原生版本的示例索引
    python scripts/edit_pla_encounter_pkl.py show "encounter_la.pkl" --area 791

    # 解包为完整 JSON；便于 VS Code 查看和程序分析
    python scripts/pla_encounter_pkl.py unpack "encounter_la.pkl" --output "encounter_la.json"

JSON 的顶层必须是 `game="PLA"`、`version="1.1.1"`、`areas` 数组。区域包含 `locations`、`type`、`slots`。每个槽位只有上表七个字段；地图坐标、刷新概率、剧情触发 ID 等不在此格式内。

## 5. 安全编辑单个槽位或区域

新增脚本 `scripts/edit_pla_encounter_pkl.py` 提供 `find`、`show`、`set-slot`、`set-area`。修改之前使用 `find` + `show` 确认 0-based 索引。**只写到新文件，不允许覆盖原文件或其他已存在路径**；同时产生 `.audit.json` 记录修改前/后字段、SHA-256 和原因，并标注 `USER_MODIFIED_NOT_NATIVE`。

    # 演示：对 2026-11-23 的原生 PKL，将某槽的性别值设为 2
    # 这是格式编辑示例，不代表这条记录因修改而符合游戏合法性。
    python scripts/edit_pla_encounter_pkl.py set-slot "encounter_la.pkl" --area 791 --slot 0 --set "gender=2" --expect-sha256 "b9f56e99ace2ed560d2b0df578286526392303adc695ad173564d4b096007d2b" --reason "研究原生与 PKHeX 的 Gender 差异" --output "encounter_la_custom.pkl"

    # 单次可重复 --set，例如：
    # --set "level_min=20" --set "level_max=25" --set "alpha=1"

    # 修改一个区域的地点列表/类型：不代表原游戏会因此改变刷新行为
    python scripts/edit_pla_encounter_pkl.py set-area "encounter_la.pkl" --area 791 --locations "9,56,60" --type 1 --reason "独立区域类型测试" --output "encounter_la_area_test.pkl"

    python scripts/pla_encounter_pkl.py inspect "encounter_la_custom.pkl"

安全约束：拒绝输入输出同一路径、已存在的输出/审计文件、输入 SHA 不符、未知字段、超出类型范围、最低等级高于最高等级、无变化的修改，以及无法无损编码的源文件。`--expect-sha256` 非必填但建议始终提供。

## 6. 批量编辑：JSON → PKL → 差异报告

    python scripts/pla_encounter_pkl.py unpack "encounter_la.pkl" --output "encounter_la_edit.json"
    # 编辑 JSON 中的 areas、locations、slots（不要改 game/version）
    python scripts/pla_encounter_pkl.py pack "encounter_la_edit.json" --output "encounter_la_repacked.pkl" --check-roundtrip
    python scripts/pla_encounter_pkl.py inspect "encounter_la_repacked.pkl"
    python scripts/compare_pla_encounters.py "encounter_la.pkl" "encounter_la_repacked.pkl" --output "encounter_la_diff.json"

对不作修改的 JSON，重新打包应与原二进制逐字节一致。`pack` 提供严格的结构验证，但**不会像 set-slot 一样自动生成修改审计**，批量编辑要自行保存变更记录。

快速测试：

    python -m unittest discover -s tests -p "test_*pkl*.py" -v

[PKL Reader/Editor CI](../../../.github/workflows/pla-encounter-pkl-editor.yml) 使用固定的 PKHeX 参考 PKL 验证 SHA、无损解包/打包、受控单槽改动和差异报告，不将参考游戏资源写回仓库。

## 7. 格式边界和注意事项

| 目标文件 | 本编辑器可直接处理？ | 原因 |
| --- | --- | --- |
| `encounter_la.pkl` | 是 | 野生遭遇的 `la` Mini 资源 |
| `poke_add.bin` | 否 | 赠送 FlatBuffers，属于独立来源 |
| `poke_event_encount.bin` | 否 | 剧情/战斗 FlatBuffers，不一定可捕获 |
| `Encounters8a.StaticLA` | 否 | PKHeX 固定遭遇 C# 表 |
| `main` / `.pa8` | 否 | 存档与个体数据，不是 PKL |

**修改 PKL 不会修改游戏中的野生刷新，也不会让不可能的遭遇自动被 PKHeX 判断合法。** 结构正确只是格式层面的通过；真正的捕获、剧情、地图、RNG 和合法性需独立验证。不能把用户修改版作为原生提取成果。

## 8. 代码链接与上游

- [原生导出器](../../../tools/pla-encounter-native/Program.cs)
- [GFPak 解压](../../../scripts/extract_pla_resident.py)
- [PKL 编解码](../../../scripts/pla_encounter_pkl.py)
- [PKL 查找与编辑](../../../scripts/edit_pla_encounter_pkl.py)
- [PKL 语义对比](../../../scripts/compare_pla_encounters.py)
- [编辑测试](../../../tests/test_edit_pla_encounter_pkl.py)
- [剧情固定/赠送与交换](encounter-static-gifts.md)

上游依据：[PKHeX EncounterArea8a](https://github.com/kwsch/PKHeX/blob/master/PKHeX.Core/Legality/Encounters/Templates/Gen8a/EncounterArea8a.cs)、[pkNX GameDumperPLA](https://github.com/kwsch/pkNX/blob/master/pkNX.WinForms/Dumping/Gen8a/GameDumperPLA.cs)、[pkNX EncounterTableUtil](https://github.com/kwsch/pkNX/blob/master/FlatBuffers/Arceus/Arceus/Util/EncounterTableUtil.cs)、[oozextract](https://github.com/lvlvllvlvllvlvl/oozextract)。
