using System.Buffers.Binary;
using System.Security.Cryptography;
using System.Runtime.InteropServices;
using System.Text.Json;
using pkNX.Containers;

// CLI wrapper around the pinned pkNX.Containers/GFPack native parser.
// It writes original decompressed member bytes, never renamed "converted" files.
internal static class Program
{
    private static readonly List<object> Members = [];
    private static int _archiveCount;

    private static int Main(string[] args)
    {
        try
        {
            if (args.Length < 2)
                throw new ArgumentException("Usage: PLA.GFPak.Cli <input.gfpak> <empty-output-directory> [--oodle <absolute DLL path>] [--max-depth 2]");
            var input = Path.GetFullPath(args[0]);
            var output = Path.GetFullPath(args[1]);
            var maxDepth = 2;
            string? oodlePath = null;
            for (int i = 2; i < args.Length; i++)
            {
                switch (args[i])
                {
                    case "--oodle":
                        oodlePath = Path.GetFullPath(args[++i]); break;
                    case "--max-depth":
                        maxDepth = int.Parse(args[++i]); break;
                    default: throw new ArgumentException($"Unknown argument: {args[i]}");
                }
            }
            if (maxDepth is < 0 or > 4)
                throw new ArgumentOutOfRangeException(nameof(maxDepth), "Expected 0..4");
            if (!File.Exists(input))
                throw new FileNotFoundException("Input GFPak is absent", input);
            if (Directory.Exists(output) && Directory.EnumerateFileSystemEntries(output).Any())
                throw new IOException("Destination must be empty (staging directory expected)");
            if (oodlePath is not null)
            {
                if (!File.Exists(oodlePath))
                    throw new FileNotFoundException("Oodle decoder not found", oodlePath);
                NativeLibrary.SetDllImportResolver(typeof(GFPack).Assembly, (name, _, _) =>
                    name == Oodle.OodleLibraryPath ? NativeLibrary.Load(oodlePath) : IntPtr.Zero);
            }
            Directory.CreateDirectory(output);
            var bytes = File.ReadAllBytes(input);
            Extract(bytes, output, "", 0, maxDepth);
            var meta = new
            {
                schema_version = 1,
                source = input,
                source_size = bytes.Length,
                source_sha256 = Hash(bytes),
                parser = "pkNX.Containers.GFPack",
                max_depth = maxDepth,
                archive_count = _archiveCount,
                extracted_count = Members.Count,
                members = Members
            };
            var json = JsonSerializer.Serialize(meta, new JsonSerializerOptions { WriteIndented = true });
            File.WriteAllText(Path.Combine(output, "_manifest.json"), json);
            Console.WriteLine($"VERIFIED archives={_archiveCount} entries={Members.Count}");
            return 0;
        }
        catch (Exception ex)
        {
            Console.Error.WriteLine(ex.ToString());
            return 2;
        }
    }

    private static void Extract(byte[] bytes, string root, string prefix, int depth, int maxDepth)
    {
        if (bytes.Length < 24 || BinaryPrimitives.ReadUInt64LittleEndian(bytes) != GFPack.Magic)
            throw new InvalidDataException($"Bad GFPak magic/header at {prefix}");
        var pack = new GFPack(bytes);
        if (pack.Count < 0 || pack.FileTable.Length != pack.Count ||
            pack.HashAbsolute.Length != pack.Count || pack.DecompressedFiles.Length != pack.Count)
            throw new InvalidDataException("Invalid GFPak member tables");
        _archiveCount++;

        // Preserve all native hash mappings. A filename hash is not proof of its original name.
        var names = new Dictionary<int, List<object>>();
        foreach (var folder in pack.HashInFolder)
        {
            foreach (var record in folder.Files)
            {
                if ((uint)record.Index >= (uint)pack.Count)
                    throw new InvalidDataException("GFPak folder member index out of bounds");
                if (!names.TryGetValue(record.Index, out var list))
                    names[record.Index] = list = [];
                list.Add(new
                {
                    folder_hash = folder.Folder.HashFnv1aPathFolderName.ToString("X16"),
                    filename_hash = record.HashFnv1aPathFileName.ToString("X16")
                });
            }
        }
        for (int i = 0; i < pack.Count; i++)
        {
            var entry = pack.FileTable[i];
            var data = pack.DecompressedFiles[i] ?? throw new InvalidDataException($"Entry {i} decoded to null");
            if (entry.SizeDecompressed < 0 || entry.SizeDecompressed != data.Length ||
                entry.SizeCompressed < 0 || entry.OffsetPacked < 0 ||
                (long)entry.OffsetPacked + entry.SizeCompressed > bytes.Length)
                throw new InvalidDataException($"Entry {i} has invalid size/offset/decompression");
            var hash = pack.HashAbsolute[i].HashFnv1aPathFull.ToString("X16");
            var rel = $"{prefix}entry_{i:D5}_{hash}.bin";
            var dest = Path.Combine(root, rel.Replace('/', Path.DirectorySeparatorChar));
            Directory.CreateDirectory(Path.GetDirectoryName(dest)!);
            File.WriteAllBytes(dest, data);
            var isPack = data.Length >= 24 && BinaryPrimitives.ReadUInt64LittleEndian(data) == GFPack.Magic;
            Members.Add(new
            {
                path = rel,
                index = i,
                depth,
                full_path_hash = hash,
                folder_mappings = names.GetValueOrDefault(i) ?? [],
                compression = entry.Type.ToString(),
                compressed_size = entry.SizeCompressed,
                decoded_size = data.Length,
                sha256 = Hash(data),
                magic_hex = Convert.ToHexString(data.AsSpan(0, Math.Min(8, data.Length))),
                format_hint = isPack ? "gfpak" : data.AsSpan().StartsWith("BNTX"u8) ? "bntx" :
                    data.AsSpan().StartsWith("BNSH"u8) ? "bnsh" : "unknown",
                nested_gfpak = isPack
            });
            if (isPack && depth < maxDepth)
                Extract(data, root, $"{prefix}entry_{i:D5}_{hash}.nested/", depth + 1, maxDepth);
        }
    }
    private static string Hash(byte[] data) => Convert.ToHexString(SHA256.HashData(data)).ToLowerInvariant();
}
