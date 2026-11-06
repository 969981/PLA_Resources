using System.Collections.Concurrent;
using System.Security.Cryptography;
using System.Text.Json;
using FlatSharp;
using Trinity.Core.Flatbuffers.TR.Animation;
using Trinity.Core.Flatbuffers.TR.Model;

// Batch parses native PLA TRANM and binds each track to the original TRSKL.
// Strictly separates a parseable motion from a fully bone-matched animation.
internal static class NativeBatch
{
    private sealed record Input(
        string native_path,
        string source_pack,
        string state,
        string? motion_path,
        string? skeleton_path,
        string? source_sha256,
        string? skeleton_sha256);

    private static string Sha(string path) =>
        Convert.ToHexString(SHA256.HashData(File.ReadAllBytes(path))).ToLowerInvariant();

    private static bool IsHelperTrack(string name) =>
        name.StartsWith("exp_op", StringComparison.Ordinal) ||
        name.StartsWith("end_", StringComparison.Ordinal) ||
        name.EndsWith("_pointConstraint1", StringComparison.Ordinal) ||
        name.EndsWith("_orientConstraint1", StringComparison.Ordinal);

    private static object Process(Input entry, ConcurrentDictionary<string, Lazy<HashSet<string>>> boneCache)
    {
        if (entry.motion_path is null || entry.source_sha256 is null ||
            (entry.state != "READY" && entry.state != "SKELETON_NOT_FOUND"))
            return new {
                entry.native_path,entry.source_pack,state=entry.state,
                frames=0u,fps=0u,animated_bones=0,matched_bones=0,
                helper_tracks=0,non_skeleton_tracks=0,unmatched_bones=Array.Empty<string>(),
                scale_channels=0,rotation_channels=0,translation_channels=0,
                error="Native motion source itself failed SHA preflight"
            };
        try
        {
            byte[] bytes=File.ReadAllBytes(entry.motion_path);
            string actual=Convert.ToHexString(SHA256.HashData(bytes)).ToLowerInvariant();
            if (!string.Equals(actual,entry.source_sha256,StringComparison.OrdinalIgnoreCase))
                throw new InvalidDataException("Original TRANM SHA-256 changed");
            var motion=FlatBufferSerializer.Default.Parse<TRANM>(bytes);
            if (motion?.Info is null || motion.SkeletalAnimation?.Tracks is null)
                throw new InvalidDataException("Unrecognized native TRANM graph");
            if (motion.Info.FrameCount is < 1 or > 100000 || motion.Info.FrameRate is < 1 or > 1000)
                throw new InvalidDataException("Out-of-range native frame count/rate");

            HashSet<string>? skeleton=null;
            if (entry.state=="READY")
            {
                if (entry.skeleton_path is null || entry.skeleton_sha256 is null)
                    throw new InvalidDataException("READY entry lacks native skeleton reference");
                skeleton=boneCache.GetOrAdd(entry.skeleton_path,path=>new Lazy<HashSet<string>>(()=>
                {
                    byte[] raw=File.ReadAllBytes(path);
                    var decoded=FlatBufferSerializer.Default.Parse<TRSKL>(raw);
                    if (decoded?.TransformNodes is null || decoded.TransformNodes.Length==0)
                        throw new InvalidDataException("Native skeleton has no nodes");
                    return decoded.TransformNodes.Select(x=>x.Name)
                        .Where(x=>!string.IsNullOrWhiteSpace(x))
                        .ToHashSet(StringComparer.Ordinal);
                })).Value;
                if (Sha(entry.skeleton_path)!=entry.skeleton_sha256)
                    throw new InvalidDataException("Original TRSKL SHA-256 changed");
            }

            var tracks=motion.SkeletalAnimation.Tracks;
            if (tracks.Any(t=>string.IsNullOrWhiteSpace(t.BoneName)))
                throw new InvalidDataException("Native TRANM includes empty track name");
            var unmatched=skeleton is null?Array.Empty<string>():
                tracks.Where(t=>!skeleton.Contains(t.BoneName)).Select(t=>t.BoneName).Distinct().ToArray();
            int helper=unmatched.Count(IsHelperTrack);
            int unbound=unmatched.Length-helper;
            int matched=skeleton is null?0:tracks.Count(t=>skeleton.Contains(t.BoneName));
            string state=skeleton is null?"PARSED_NO_SKELETON":
                tracks.Count==0?"EMPTY_TRACKS":
                unmatched.Length==0?"VERIFIED":
                unbound==0?"AUXILIARY_ONLY":"BONE_UNMATCHED";
            return new {
                entry.native_path,entry.source_pack,state,
                frames=motion.Info.FrameCount,fps=motion.Info.FrameRate,
                playback=motion.Info.PlayType.ToString(),
                animation_sha256=actual,skeleton_sha256=entry.skeleton_sha256,
                animated_bones=tracks.Count,matched_bones=matched,
                helper_tracks=helper,non_skeleton_tracks=unbound,unmatched_bones=unmatched,
                scale_channels=tracks.Count(t=>t.ScaleChannel!=null),
                rotation_channels=tracks.Count(t=>t.RotationChannel!=null),
                translation_channels=tracks.Count(t=>t.TranslateChannel!=null),
                error=(string?)null
            };
        }
        catch(Exception ex)
        {
            return new {
                entry.native_path,entry.source_pack,state="FAILED",
                frames=0u,fps=0u,animated_bones=0,matched_bones=0,
                helper_tracks=0,non_skeleton_tracks=0,unmatched_bones=Array.Empty<string>(),
                scale_channels=0,rotation_channels=0,translation_channels=0,
                error=ex.GetBaseException().Message
            };
        }
    }

    public static int Run(string[] args)
    {
        if (args.Length is not (4 or 5))
        {
            Console.Error.WriteLine("Usage: PLA.Tranm.Inspect --batch <native-preflight.jsonl> <output.jsonl> <summary.json> [threads]");
            return 2;
        }
        try
        {
            var source = Path.GetFullPath(args[1]);
            var output = Path.GetFullPath(args[2]);
            var summary = Path.GetFullPath(args[3]);
            int workers = args.Length == 5 ? int.Parse(args[4]) : 3;
            if (workers is < 1 or > 16) throw new ArgumentOutOfRangeException(nameof(workers));
            var items = File.ReadLines(source)
                .Where(x => !string.IsNullOrWhiteSpace(x))
                .Select(x => JsonSerializer.Deserialize<Input>(x) ??
                    throw new InvalidDataException("Null preflight entry"))
                .ToArray();
            if (items.Length == 0) throw new InvalidDataException("Empty native motion manifest");
            var states = new ConcurrentDictionary<string,int>();
            var cache = new ConcurrentDictionary<string,Lazy<HashSet<string>>>();
            var results = new ConcurrentBag<string>();
            Parallel.ForEach(items,new ParallelOptions{MaxDegreeOfParallelism=workers},item =>
            {
                var result = Process(item,cache);
                string serialized = JsonSerializer.Serialize(result);
                using var doc = JsonDocument.Parse(serialized);
                string state = doc.RootElement.GetProperty("state").GetString() ?? "FAILED";
                states.AddOrUpdate(state,1,(_,v)=>v+1);
                results.Add(serialized);
            });
            Directory.CreateDirectory(Path.GetDirectoryName(output)!);
            File.WriteAllLines(output,results.OrderBy(x => x,StringComparer.Ordinal));
            int verified=states.GetValueOrDefault("VERIFIED");
            int parsed=verified+states.GetValueOrDefault("AUXILIARY_ONLY")+
                states.GetValueOrDefault("BONE_UNMATCHED")+
                states.GetValueOrDefault("EMPTY_TRACKS")+
                states.GetValueOrDefault("PARSED_NO_SKELETON");
            var receipt=new {
                schema_version=2,stage="PLA_NATIVE_TRANM_TYPED_BATCH",
                source_count=items.Length,states=states.OrderBy(x=>x.Key).ToDictionary(x=>x.Key,x=>x.Value),
                verified,parsed,
                original_sha256_check="each TRANM verified and each available TRSKL verified",
                typed_parse_complete=parsed==items.Length,
                bone_bind_complete=verified==items.Length,
                complete=parsed==items.Length
            };
            Directory.CreateDirectory(Path.GetDirectoryName(summary)!);
            File.WriteAllText(summary,JsonSerializer.Serialize(receipt,new JsonSerializerOptions{WriteIndented=true}));
            Console.WriteLine($"TRANM_BATCH source={items.Length} verified={verified} states={JsonSerializer.Serialize(receipt.states)}");
            // Failure is intentional whenever any native source is not a verified skeleton animation.
            return receipt.complete ? 0 : 3;
        }
        catch (Exception ex)
        {
            Console.Error.WriteLine("TRANM BATCH FAILED: "+ex);
            return 2;
        }
    }
}
