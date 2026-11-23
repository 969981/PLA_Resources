using System.Security.Cryptography;
using System.Text.Json;
using pkNX.Containers;
using pkNX.Game;
using pkNX.Structures;
using pkNX.Structures.FlatBuffers;
using pkNX.Structures.FlatBuffers.Arceus;

if (args.Length != 2)
{
    Console.Error.WriteLine("Usage: PLAEncounter <RomFS /1 directory> <output directory>");
    return 2;
}

string romfs = Path.GetFullPath(args[0]);
string outDir = Path.GetFullPath(args[1]);
string sourceRomfs = Path.GetFullPath(Environment.GetEnvironmentVariable("PLA_SOURCE_ROMFS") ?? romfs);
Directory.CreateDirectory(outDir);
string ResidentPath() => Path.Combine(romfs, "bin/archive/field/resident_release.gfpak");
string FilePath(string suffix) => Path.Combine(romfs, suffix.Replace('/', Path.DirectorySeparatorChar));

string[] originalPaths =
[
    "bin/archive/field/resident_release.gfpak",
    "bin/field/encount/new_huge_outbreak_group.bin",
    "bin/field/encount/new_huge_outbreak_group_lottery.bin",
    "bin/field/encount/new_huge_outbreak_lottery.bin",
    "bin/field/encount/new_huge_outbreak_time_limit.bin",
    "bin/field/encount/huge_outbreak.bin",
    "bin/pokemon/data/poke_misc.bin",
    "bin/message/English/script/place_name.tbl",
];

var evidence = new Dictionary<string, object>();
var sourceEvidence = new Dictionary<string, object>();
try
{
    foreach (var relative in originalPaths)
    {
        var path = Path.Combine(sourceRomfs, relative.Replace('/', Path.DirectorySeparatorChar));
        if (!File.Exists(path))
            throw new FileNotFoundException("Required original resource is missing", path);
        var info = new FileInfo(path);
        sourceEvidence[relative] = new
        {
            size_bytes = info.Length,
            sha256 = Convert.ToHexString(SHA256.HashData(File.ReadAllBytes(path))).ToLowerInvariant()
        };
    }

    // Parse archive directly from native GFPak bytes. This uses pkNX's own
    // container and FlatBuffers implementations, not a hand-built guess.
    var resident = new GFPack(ResidentPath());
    var settingsRaw = resident.GetDataFullPath("bin/field/resident/AreaSettings.bin");
    if (settingsRaw.Length == 0)
        throw new InvalidDataException("AreaSettings.bin not found inside resident GFPak");
    var settings = FlatBufferConverter.DeserializeFrom<AreaSettingsTable>(settingsRaw);
    var group = FlatBufferConverter.DeserializeFrom<NewHugeOutbreakGroupArchive>(
        File.ReadAllBytes(FilePath("bin/field/encount/new_huge_outbreak_group.bin")));
    var lottery = FlatBufferConverter.DeserializeFrom<NewHugeOutbreakGroupLotteryArchive>(
        File.ReadAllBytes(FilePath("bin/field/encount/new_huge_outbreak_group_lottery.bin")));
    var misc = FlatBufferConverter.DeserializeFrom<PokeMiscTable>(
        File.ReadAllBytes(FilePath("bin/pokemon/data/poke_misc.bin")));

    // An explicit GameVersion override bypasses the original 19,095-file count
    // requirement: this job uses a sparse, read-only RomFS checkout.
    var gameParent = Path.GetDirectoryName(romfs)
        ?? throw new InvalidDataException("Cannot locate RomFS parent");
    var (loc, loadStatus) = GameLocation.GetGame(gameParent, GameVersion.PLA);
    if (loc is null)
        throw new InvalidDataException($"PLA GameLocation could not load: {loadStatus}");
    var game = new GameManagerPLA(loc, 2); // English; string indices are language independent.
    // Initialize common .dat text before accessing GetStrings; normal GameManagerPLA.Initialize()
    // does this through ResetText(), but that also initializes unrelated game data.
    game.GetFilteredFolder(GameFile.GameText, path => Path.GetExtension(path) == ".dat");
    string[] placeNames = game.GetStrings(TextName.metlist_00000);
    var story = (FolderContainer)game.GetFile(GameFile.StoryText);
    story.Initialize();
    var ahtb = new AHTB(story.GetFileData("place_name.tbl"));
    // pkNX.ToIndexedDictionary intentionally maps one AHTB entry per provided text string.
    // v1.1.1 has a trailing AHTB entry (157 indexes vs 156 localized names).
    // Missing native entries are fatal; surplus entries remain visible in the audit.
    if (placeNames.Length == 0 || ahtb.Entries.Count < placeNames.Length)
        throw new InvalidDataException($"Place name table/text insufficient: {ahtb.Entries.Count} vs {placeNames.Length}");
    var placeMap = ahtb.ToIndexedDictionary(placeNames);
    evidence["place_name_table_entries"] = ahtb.Entries.Count;
    evidence["place_name_text_entries"] = placeNames.Length;
    evidence["place_name_unmapped_trailing_entries"] = ahtb.Entries.Count - placeNames.Length;

    var bytes = new List<byte[]>();
    var dedup = new HashSet<string>(StringComparer.Ordinal);
    var perArea = new List<object>();
    var types = new int[5];
    int slotsTotal = 0;
    int decodedCount = 0;
    foreach (var groupAreas in ResidentAreaSet.AreaNames)
    {
        var area = AreaInstance.Create(resident, groupAreas, settings);
        int generated = 0;
        int duplicated = 0;
        foreach (var raw in EncounterTableUtil.GetEncounterDump(area, placeMap, misc, group, lottery))
        {
            decodedCount++;
            if (raw.Length < 4)
                throw new InvalidDataException("Encounter area shorter than header");
            int locCount = raw[0];
            int start = (locCount + 2) & ~1;
            if (locCount < 1 || start + 2 > raw.Length)
                throw new InvalidDataException("Invalid encounter location metadata");
            int kind = raw[start], slotCount = raw[start + 1];
            if (kind is < 0 or > 4 || start + 2 + slotCount * 8 != raw.Length)
                throw new InvalidDataException($"Invalid native slot/type structure, kind={kind}");
            var key = Convert.ToHexString(raw);
            if (!dedup.Add(key))
            {
                duplicated++;
                continue;
            }

            types[kind]++;
            slotsTotal += slotCount;
            bytes.Add(raw);
            generated++;
        }
        perArea.Add(new { area = groupAreas.ParentName, records = generated, duplicate_records = duplicated });
        Console.WriteLine($"AREA {groupAreas.ParentName}: new={generated} duplicates={duplicated}");
    }

    if (bytes.Count == 0 || slotsTotal == 0)
        throw new InvalidDataException("Encounter extraction yielded no verified records");

    byte[] packed = MiniUtil.PackMini(bytes.ToArray(), "la");
    if (packed[0] != (byte)'l' || packed[1] != (byte)'a')
        throw new InvalidDataException("PKL identifier check failed");
    if (BitConverter.ToUInt16(packed, 2) != bytes.Count)
        throw new InvalidDataException("PKL entry count check failed");
    int endOfOffsets = 4 + bytes.Count * 4;
    if (BitConverter.ToUInt32(packed, endOfOffsets) != packed.Length)
        throw new InvalidDataException("PKL terminator offset check failed");
    var pklPath = Path.Combine(outDir, "encounter_la.pkl");
    File.WriteAllBytes(pklPath, packed);
    evidence["status"] = "GENERATED_NATIVE";
    evidence["version"] = "1.1.1";
    evidence["game"] = "PLA";
    evidence["source_bytes"] = sourceEvidence;
    evidence["normalization"] = sourceRomfs != romfs ? "Oodle decompressed into separate, read-only derived RomFS overlay" : "native original";
    evidence["resident_nested_area_settings_sha256"] = Convert.ToHexString(SHA256.HashData(settingsRaw)).ToLowerInvariant();
    evidence["location_mappings"] = placeMap.Count;
    evidence["gfpak_nested_entries"] = resident.Count;
    evidence["native_area_records_before_dedup"] = decodedCount;
    evidence["area_records"] = bytes.Count;
    evidence["slot_records"] = slotsTotal;
    evidence["types"] = types;
    evidence["pkhex_mini_bytes"] = packed.Length;
    evidence["pkhex_mini_sha256"] = Convert.ToHexString(SHA256.HashData(packed)).ToLowerInvariant();
    evidence["per_area"] = perArea;
    Console.WriteLine($"SUCCESS: records={bytes.Count}, slots={slotsTotal}, output={packed.Length} bytes");
}
catch (Exception ex)
{
    evidence["status"] = "FAILED";
    evidence["error"] = ex.ToString();
    Console.Error.WriteLine(ex);
    evidence["source_bytes"] = sourceEvidence;
    File.WriteAllText(Path.Combine(outDir, "native-export-evidence.json"),
        JsonSerializer.Serialize(evidence, new JsonSerializerOptions { WriteIndented = true }));
    return 1;
}
File.WriteAllText(Path.Combine(outDir, "native-export-evidence.json"),
    JsonSerializer.Serialize(evidence, new JsonSerializerOptions { WriteIndented = true }));
return 0;
