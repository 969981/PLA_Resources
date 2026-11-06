using System.Security.Cryptography;
using System.Text.Json;
using pkNX.Containers;
using pkNX.Structures.FlatBuffers.Arceus;

// Native PLA model/skeleton/material/mesh table inspection. Does not claim
// glTF geometry rendering or animation conversion.
internal static class Program
{
    private static int Main(string[] args)
    {
        if (args.Length != 2)
        {
            Console.Error.WriteLine("Usage: PLA.Trinity.Inspect <Pokemon-model.gfpak> <output-json>");
            return 2;
        }
        try
        {
            string source = Path.GetFullPath(args[0]), output = Path.GetFullPath(args[1]);
            string stem = Path.GetFileNameWithoutExtension(source);
            if (!System.Text.RegularExpressions.Regex.IsMatch(stem,
                    @"^pm[0-9]{4}_[0-9]{2}_[0-9]{2}$"))
                throw new NotSupportedException($"Non-Pokemon PLA GFPak not yet mapped: {stem}");
            if (!File.Exists(source))
                throw new FileNotFoundException("Original source GFPak missing", source);
            byte[] bytes = File.ReadAllBytes(source);
            if (!bytes.AsSpan().StartsWith("GFLXPACK"u8))
                throw new InvalidDataException("Invalid native GFPak magic");
            var pack = new GFPack(source);
            var model = new PokemonModelArchive(pack);
            int meshes = model.Meshes.Length;
            int materials = model.DefaultMaterials.Length;
            int bones = model.Skeleton.Bones?.Count() ?? 0;
            int nodes = model.Skeleton.Nodes?.Count() ?? 0;
            if (meshes == 0 || materials == 0 || bones == 0 || nodes == 0)
                throw new InvalidDataException("Incomplete native model graph");

            var info = new
            {
                schema_version = 1,
                stage = "PLA_native_trinity_model",
                state = "VERIFIED",
                species_model = stem,
                source_sha256 = Convert.ToHexString(SHA256.HashData(bytes)).ToLowerInvariant(),
                gfpak_entries = pack.Count,
                meshes,
                material_entries = materials,
                skeleton_bones = bones,
                skeleton_nodes = nodes,
                mesh_buffer_tables = model.MeshDataBuffers.Length,
                referenced_textures = model.UsedTextures.Order(StringComparer.Ordinal).ToArray(),
                lods = model.TRModel.LODs?.Count() ?? 0,
                material_filenames = model.TRModel.Materials?.ToArray() ?? [],
                mesh_filenames = model.TRModel.Meshes?.Select(m => m.Filename).ToArray() ?? [],
                parser = "pkNX PLA PokemonModelArchive + FlatSharp Arceus schemas"
            };
            Directory.CreateDirectory(Path.GetDirectoryName(output)!);
            File.WriteAllText(output, JsonSerializer.Serialize(info,
                new JsonSerializerOptions { WriteIndented = true }));
            Console.WriteLine($"VERIFIED {stem} meshes={meshes} bones={bones} materials={materials}");
            return 0;
        }
        catch (Exception ex)
        {
            Console.Error.WriteLine("PLA Trinity model inspection failed: " + ex);
            return 2;
        }
    }
}
