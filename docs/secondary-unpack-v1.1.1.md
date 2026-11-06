# PLA v1.1.1 全量二次解包：R4/R5 证据与阶段

## 持久化状态

- Git `master` 目前仍未包含原生解包产物：工作在 PR #2（原生 GFPak）及其上叠加的 PR #3（二次加工）。
- 四份 `pla-gfpak-extracted-shard-0..3` 原始解包字节保存在 GitHub Actions run `42160235620` 的 **14 天 Artifacts**；没有把这 7.33 GB 数据提交为 Git blobs。
- 仓库的 `Unpack/v1.1.1/_index/gfpak-format-census.json` 是体积较小的真实审计摘要，已经入功能分支。
- 对于大规模派生资源，先审核分发权限及 Git 仓库容量，再决定经 7z 90 MiB 分卷、Release Assets 或长期工件存储保存。不要将临时 Artifact 与仓库持久化混淆。

## 已得到的原生证据

| Gate | 内容 | 结果 |
| --- | --- | --- |
| R3 | 原生 GFPak / 嵌套 GFPak | 678/678 VERIFIED，run 42160235620 |
| R4 | 102452 个原生提取成员逐一大小及 SHA-256 校验 | 102452 VERIFIED，run 42165327417；修正后的类型分类以最新 census 为准 |
| R4 | 11,903 个以真实 magic 确定的 BNTX | 可进入实际像素解码 |
| R4 | PLA Pikachu `pm0025_00_00.gfpak` 模型 | 3 Mesh、55 Bones、79 Skeleton Nodes、1 Material、3 MeshBufferTables，run 42165897130 |
| R4 | FNV64 恢复 Trinity 原始路径 | 356 个宝可梦 GFPak、3875 个文件哈希精确匹配，run 42166597611 |
| R5 | BNTX → PNG | 8/8 样本像素 SHA-256 往返验证成功，run 42166004347；11,903 全量进行中，绝不能把 PARTIAL 当 COMPLETE |

确认为 Trinity 原路径的文件：`.trmdl` 356，`.trmsh` 1055，`.trmtr` 356，`.trskl` 351，`.trmmt` 351，`.trmbf` 1055，`.trpokecfg` 351。该恢复方式不是根据 magic 猜文件名，而是依据 pkNX 的 PLA 原始路径模板计算 FNV1a64，并与每个实际 GFPAK 元数据中的完整路径哈希逐项相等匹配。

## 接下来的独立解码阶段

1. **BNTX**：优先解决当前 BnTxx 没有解码器的 ASTC 等纹理格式，逐纹理列出格式/尺寸/源哈希、像素 SHA、生成 PNG SHA、回读一致性；不因容器里有一张已成功就把其余纹理标记为成功。
2. **Trinity 模型**：从 `.trmdl` 读取 Mesh、材质与 Skeleton 引用；`.trmsh/.trmbf/.trmtr/.trskl` 按哈希恢复的真实文件名定位，导出 glTF 2.0，再反向验证顶点数量、索引、UV、骨骼权重和材质参数。动画 `.tranm` 与 `.trac*` 在证明文件所属和轨道时间域后再接入，不能用 SV 结构强行套 PLA。
3. **数据表与文本**：从原始 `.dat/.tbl` 匹配语言编码、记录数量和偏移；从 pkNX 的 Arceus FlatBuffers schema 中按已验证文件路径逐种验证。首次成功的表可以导出 JSON/CSV/SQLite。
4. **BLUA**：先验证 chunk 头、版本和字节码方言；只有能通过原生反汇编和指令表检查后才转汇编，不把反编译猜测升格为脚本真源码。
5. **PTCL / Wwise**：PTCL 解析 emitter、资源引用、纹理；Wwise `.pck/.bnk` 解析 soundbank、WEM/codec 后逐文件实际解码并复核时长/采样率，失败逐条报告。
6. **总覆盖**：除 678 个 GFPak 之外，仍需将 19,101 个原始 NCA 文件分阶段结账；每个输入必须保留 `VERIFIED/UNSUPPORTED/FAILED/SOURCE_MISSING` 之一，未知成员不能偷偷复制文件冒充二次转换。

## 并发契约

跨 Runner 4 个 Shard；每 Runner 建议 2–3 个独立 .NET 解码子进程，线程用于小文件签名、I/O、SHA-256 校验；CPU 密集工作不要再无限嵌套多进程。输出先放临时目录，经 PNG/glTF/JSON 二次打开、签名/结构检验和 SHA-256 后再原子落盘。脚本参数支持 `--jobs`、失败单项重试、源哈希指纹断点续跑、分片对账。一个 `PARTIAL` 不可跳过或视为成功。

所有数字必须回链到真实 Actions 日志或生成的 `_index` / `coverage` 文档。未经原始文件 SHA 对账，不宣称与本地 ROM 完全相同。
