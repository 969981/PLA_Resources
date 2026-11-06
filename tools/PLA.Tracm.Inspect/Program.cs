using System.Collections.Concurrent;
using System.Security.Cryptography;
using System.Text.Json;
using FlatSharp;
using Trinity.Core.Flatbuffers.TR.Animation;

internal static class Program
{
    private sealed record Native(string native_path,string source_archive,string state,
        string? path,string? sha256);

    private static object Decode(Native entry)
    {
        if (entry.state!="READY"||entry.path is null||entry.sha256 is null)
            return new {entry.native_path,entry.source_archive,state="SOURCE_FAILED",
                frames=0u,fps=0u,tracks=0,material_tracks=0,
                blendshape_tracks=0,visibility_tracks=0,error="Unverified native file"};
        try
        {
            byte[] bytes=File.ReadAllBytes(entry.path);
            var actual=Convert.ToHexString(SHA256.HashData(bytes)).ToLowerInvariant();
            if (!string.Equals(actual,entry.sha256,StringComparison.OrdinalIgnoreCase))
                throw new InvalidDataException("Native TRACM SHA256 changed");
            var motion=FlatBufferSerializer.Default.Parse<TRACM>(bytes);
            if (motion is null)throw new InvalidDataException("Not a native TRACM FlatBuffer");
            int count=motion.Tracks?.Count??0;
            if (count>10000)throw new InvalidDataException("Implausible material track count");
            uint frames=motion.Info?.FrameCount??0, fps=motion.Info?.FrameRate??0;
            if (frames>1000000||fps>1000)throw new InvalidDataException("Implausible TRACM playback");
            var tracks=motion.Tracks??[];
            int material=tracks.Sum(x=>x.MaterialAnimation?.MaterialTrack?.Count??0);
            int blend=tracks.Sum(x=>x.BlendshapeAnimation?.BlendshapeTracks?.Count??0);
            int visible=tracks.Count(x=>x.VisibilityAnimation is not null);
            string state=motion.Info is null?"PARSED_NO_PLAYBACK":"VERIFIED";
            return new {
                entry.native_path,entry.source_archive,state,frames,fps,
                tracks=count,material_tracks=material,blendshape_tracks=blend,
                visibility_tracks=visible,
                raw_sha256=actual,
                material_frame_multiplier=motion.MaterialFrameMultiplier,
                blendshape_frame_multiplier=motion.BlendshapeFrameMultiplier,
                visibility_frame_multiplier=motion.VisibilityFrameMultiplier,
                error=(string?)null
            };
        }
        catch(Exception ex)
        {
            return new {entry.native_path,entry.source_archive,state="FAILED",
                frames=0u,fps=0u,tracks=0,material_tracks=0,
                blendshape_tracks=0,visibility_tracks=0,error=ex.GetBaseException().Message};
        }
    }
    private static int Main(string[] args)
    {
        if(args.Length is not (3 or 4)){
            Console.Error.WriteLine("Usage: PLA.Tracm.Inspect <native-preflight.jsonl> <out.jsonl> <summary.json> [threads]");
            return 2;
        }
        try{
            int threads=args.Length==4?int.Parse(args[3]):3;
            if(threads is <1 or >16)throw new ArgumentOutOfRangeException(nameof(threads));
            var input=File.ReadLines(args[0]).Where(x=>!string.IsNullOrWhiteSpace(x))
                .Select(s=>JsonSerializer.Deserialize<Native>(s)??throw new InvalidDataException("Null native row")).ToArray();
            if(input.Length==0)throw new InvalidDataException("Empty original TRACM source ledger");
            var states=new ConcurrentDictionary<string,int>();
            var result=new ConcurrentBag<string>();
            Parallel.ForEach(input,new ParallelOptions{MaxDegreeOfParallelism=threads},item=>{
                var row=JsonSerializer.Serialize(Decode(item));
                using var obj=JsonDocument.Parse(row);
                states.AddOrUpdate(obj.RootElement.GetProperty("state").GetString()??"FAILED",1,(_,v)=>v+1);
                result.Add(row);
            });
            Directory.CreateDirectory(Path.GetDirectoryName(Path.GetFullPath(args[1]))!);
            File.WriteAllLines(args[1],result.OrderBy(x=>x,StringComparer.Ordinal));
            int parsed=states.GetValueOrDefault("VERIFIED")+states.GetValueOrDefault("PARSED_NO_PLAYBACK");
            var summary=new {schema_version=1,stage="PLA_TRACM_TYPED_NATIVE",
                total=input.Length,parsed,states=states.OrderBy(x=>x.Key).ToDictionary(x=>x.Key,x=>x.Value),
                typed_complete=parsed==input.Length};
            Directory.CreateDirectory(Path.GetDirectoryName(Path.GetFullPath(args[2]))!);
            File.WriteAllText(args[2],JsonSerializer.Serialize(summary,new JsonSerializerOptions{WriteIndented=true}));
            Console.WriteLine("TRACM_BATCH "+JsonSerializer.Serialize(summary));
            return summary.typed_complete?0:3;
        }catch(Exception ex){
            Console.Error.WriteLine("TRACM_BATCH_FAILED "+ex);
            return 2;
        }
    }
}
