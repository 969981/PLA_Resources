using System.Security.Cryptography;
using System.Text.Json;
using FlatSharp;
using Trinity.Core.Flatbuffers.TR.Animation;
using Trinity.Core.Flatbuffers.TR.Model;

internal static class Program
{
    private static int Main(string[] args)
    {
        if (args.Length>0 && args[0]=="--batch")
            return NativeBatch.Run(args);
        if (args.Length != 3)
        {
            Console.Error.WriteLine("Usage: PLA.Tranm.Inspect <native.tranm-or-bin> <matching-native.trskl> <out.json>");
            return 2;
        }
        try
        {
            byte[] raw = File.ReadAllBytes(args[0]);
            byte[] skeletonRaw = File.ReadAllBytes(args[1]);
            var motion = FlatBufferSerializer.Default.Parse<TRANM>(raw);
            var skeleton = FlatBufferSerializer.Default.Parse<TRSKL>(skeletonRaw);
            if (motion?.Info == null || motion.SkeletalAnimation == null ||
                motion.SkeletalAnimation.Tracks == null)
                throw new InvalidDataException("Missing native TRANM playback or tracks");
            if (motion.Info.FrameCount is < 1 or > 100000 ||
                motion.Info.FrameRate is < 1 or > 1000)
                throw new InvalidDataException("Native animation has implausible frame count/rate");
            if (skeleton.TransformNodes == null || skeleton.TransformNodes.Length == 0)
                throw new InvalidDataException("Reference TRSKL skeleton has no transform nodes");

            var bones = skeleton.TransformNodes.Select(x => x.Name).ToHashSet(StringComparer.Ordinal);
            var tracks = motion.SkeletalAnimation.Tracks.Select(t => new
            {
                bone = t.BoneName,
                skeleton_match = bones.Contains(t.BoneName),
                has_scale = t.ScaleChannel != null,
                has_rotation = t.RotationChannel != null,
                has_translation = t.TranslateChannel != null
            }).ToArray();
            if (tracks.Length == 0)
                throw new InvalidDataException("No authentic bone animation track");
            if (tracks.Any(t => string.IsNullOrWhiteSpace(t.bone)))
                throw new InvalidDataException("Invalid empty native bone name");
            var result = new
            {
                schema_version = 1,
                game = "PLA",
                state = "VERIFIED",
                parser = "Trinity FlatSharp TRANM + TRSKL",
                animation_source_sha256 = Convert.ToHexString(SHA256.HashData(raw)).ToLowerInvariant(),
                skeleton_source_sha256 = Convert.ToHexString(SHA256.HashData(skeletonRaw)).ToLowerInvariant(),
                frames = motion.Info.FrameCount,
                fps = motion.Info.FrameRate,
                playback = motion.Info.PlayType.ToString(),
                duration_seconds = (double)motion.Info.FrameCount / motion.Info.FrameRate,
                skeleton_nodes = bones.Count,
                animated_bones = tracks.Length,
                matching_bones = tracks.Count(t => t.skeleton_match),
                unmatched_bones = tracks.Where(t => !t.skeleton_match).Select(t => t.bone).ToArray(),
                scale_channels = tracks.Count(t => t.has_scale),
                rotation_channels = tracks.Count(t => t.has_rotation),
                translation_channels = tracks.Count(t => t.has_translation),
                tracks
            };
            Directory.CreateDirectory(Path.GetDirectoryName(Path.GetFullPath(args[2]))!);
            File.WriteAllText(args[2], JsonSerializer.Serialize(result,
                new JsonSerializerOptions { WriteIndented = true }));
            Console.WriteLine($"TRANM VERIFIED: frames={result.frames}, fps={result.fps}, animated_bones={result.animated_bones}, skeleton_match={result.matching_bones}");
            return 0;
        }
        catch (Exception ex)
        {
            Console.Error.WriteLine("PLA native TRANM failed: "+ex);
            return 2;
        }
    }
}
