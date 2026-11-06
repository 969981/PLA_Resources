using System.Text.Json;
using System.Security.Cryptography;
using pkNX.Structures.FlatBuffers;
using pkNX.Structures.FlatBuffers.Arceus;

internal static class Program
{
    private static int Main(string[] args)
    {
        if (args.Length != 2)
        {
            Console.Error.WriteLine("Usage: PLA.Trinity.Catalog <poke_resource_table.trpmcatalog> <out.json>");
            return 2;
        }
        try
        {
            string source = Path.GetFullPath(args[0]);
            string output = Path.GetFullPath(args[1]);
            if (!File.Exists(source)) throw new FileNotFoundException("Missing PLA model reference catalog", source);
            var catalog = FlatBufferConverter.DeserializeFrom<PokeResourceTable>(source);
            var models = catalog.Table.Select(x => new {
                species = x.SpeciesInfo.Species,
                form = x.SpeciesInfo.Form,
                gender = x.SpeciesInfo.Gender,
                model_path = x.ModelPath,
                material_table = x.MaterialTablePath,
                config_path = x.ConfigPath,
                animations = x.Animations.Select(a => new { name = a.Name, path = a.Path }).ToArray(),
                effects = x.Effects.Select(e => new { name = e.Name, path = e.Path }).ToArray()
            }).ToArray();
            if (models.Length < 200 || models.Length > 5000)
                throw new InvalidDataException("Unexpected model catalog count");
            var result = new {
                schema_version = 1,
                game = "PLA",
                type = "PokeResourceTable",
                source_sha256 = Convert.ToHexString(SHA256.HashData(File.ReadAllBytes(source))).ToLowerInvariant(),
                model_count = models.Length,
                animation_reference_count = models.Sum(x => x.animations.Length),
                effect_reference_count = models.Sum(x => x.effects.Length),
                models
            };
            Directory.CreateDirectory(Path.GetDirectoryName(output)!);
            File.WriteAllText(output, JsonSerializer.Serialize(result,new JsonSerializerOptions{WriteIndented=true}));
            Console.WriteLine($"CATALOG_VERIFIED models={models.Length} animations={result.animation_reference_count} effects={result.effect_reference_count}");
            foreach(var v in models.Where(x=>x.species==25).Take(1))
                Console.WriteLine($"PIKACHU ANIMATION SAMPLE: {string.Join(", ",v.animations.Take(5).Select(x=>x.path))}");
            return 0;
        }
        catch(Exception ex)
        {
            Console.Error.WriteLine("PLA catalog parsing failed: "+ex);
            return 2;
        }
    }
}
