using BnTxx;
using System.Collections;
using System.Diagnostics;
using System.ComponentModel;
using System.Drawing;
using System.Drawing.Imaging;
using System.Reflection;
using System.Runtime.InteropServices;
using System.Security.Cryptography;
using System.Text.Json;

// Headless native-pixel BNTX -> PNG exporter.
// Uses the .NET 10-ported BnTxx source from the user's SV_Resources repository.
// This code never fabricates pixels or saves a raw payload under a PNG extension.
internal static class Program
{
    private static string Hash(byte[] data) =>
        Convert.ToHexString(SHA256.HashData(data)).ToLowerInvariant();

    private static string HashFile(string path) =>
        Hash(File.ReadAllBytes(path));

    // Graphics.DrawImage blends transparent pixels and mutates decoded colors.
    // Copy each 32-bit BGRA row directly; this preserves native channel bytes.
    private static TexturePixels ReadExactBgra(Bitmap bitmap)
    {
        var area = new Rectangle(0, 0, bitmap.Width, bitmap.Height);
        var raw = new byte[checked(bitmap.Width * bitmap.Height * 4)];
        var locked = bitmap.LockBits(area, ImageLockMode.ReadOnly, PixelFormat.Format32bppArgb);
        try
        {
            int rowBytes = checked(bitmap.Width * 4);
            for (int y = 0; y < bitmap.Height; y++)
                Marshal.Copy(IntPtr.Add(locked.Scan0, y * locked.Stride),
                    raw, y * rowBytes, rowBytes);
        }
        finally { bitmap.UnlockBits(locked); }
        return new TexturePixels(bitmap.Width, bitmap.Height, raw);
    }

    private static Bitmap DecodeAstc(Assembly assembly, object texture, string decoderExe, string stage, int index)
    {
        if (!File.Exists(decoderExe))
            throw new FileNotFoundException("Pinned astcenc decoder is missing", decoderExe);
        string astcPath = Path.Combine(stage, $"_temporary_{index:D4}.astc");
        string pngPath = Path.Combine(stage, $"_temporary_{index:D4}.png");
        try
        {
            // Use the native BnTxx ASTC block-linear unswizzle routine.
            var astcClass = assembly.GetType("BnTxx.ASTC", throwOnError: true)!;
            var save = astcClass.GetMethod("Save", BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Static)
                ?? throw new MissingMethodException("BnTxx.ASTC.Save");
            save.Invoke(null, [texture, astcPath]);
            var info = new FileInfo(astcPath);
            if (!info.Exists || info.Length < 32)
                throw new InvalidDataException("No meaningful native ASTC blocks");
            var start = new ProcessStartInfo(decoderExe) {
                UseShellExecute = false, RedirectStandardOutput = true, RedirectStandardError = true,
                CreateNoWindow = true
            };
            start.ArgumentList.Add("-dl");
            start.ArgumentList.Add(astcPath);
            start.ArgumentList.Add(pngPath);
            start.ArgumentList.Add("-silent");
            using var proc = Process.Start(start) ?? throw new IOException("Unable to start astcenc");
            if (!proc.WaitForExit(120_000)) {
                proc.Kill(entireProcessTree: true);
                throw new TimeoutException("astcenc exceeded 120 seconds");
            }
            string stderr = proc.StandardError.ReadToEnd();
            if (proc.ExitCode != 0 || !File.Exists(pngPath))
                throw new InvalidDataException($"astcenc exit {proc.ExitCode}: {stderr[..Math.Min(stderr.Length, 400)]}");
            // Bitmap(string) holds the PNG file open: clone to a detached bitmap.
            using var source = new Bitmap(pngPath);
            return new Bitmap(source);
        }
        finally {
            if (File.Exists(astcPath)) File.Delete(astcPath);
            if (File.Exists(pngPath)) File.Delete(pngPath);
        }
    }

    private static int Main(string[] args)
    {
        if (args.Length is not (2 or 3))
        {
            Console.Error.WriteLine("Usage: PLA.Bntx.Export.exe <input-bntx-any-extension> <new-output-dir> [astcenc-exe]");
            return 2;
        }
        string input = Path.GetFullPath(args[0]);
        string dir = Path.GetFullPath(args[1]);
        string? astcenc = args.Length == 3 ? Path.GetFullPath(args[2]) : null;
        try
        {
            if (!File.Exists(input))
                throw new FileNotFoundException("Missing BNTX source", input);
            if (Directory.Exists(dir) && Directory.EnumerateFileSystemEntries(dir).Any())
                throw new IOException("Destination must be an empty staging directory");
            var content = File.ReadAllBytes(input);
            if (content.Length < 0x40 || !content.AsSpan(0, 4).SequenceEqual("BNTX"u8))
                throw new InvalidDataException("Not a BNTX file");
            Directory.CreateDirectory(dir);

            // BnTxx publicly exposes BNTX.LoadFromFile, but the exact per-texture
            // decoder is internal. Reflect its two native classes to enumerate
            // and decode every texture instead of silently selecting the first.
            Assembly assembly = typeof(BNTX).Assembly;
            var binaryType = assembly.GetType("BnTxx.Formats.BinaryTexture", throwOnError: true)!;
            var decoderType = assembly.GetType("BnTxx.PixelDecoder", throwOnError: true)!;
            var decoder = decoderType.GetMethod("TryDecode",
                BindingFlags.Static | BindingFlags.Public | BindingFlags.NonPublic)
                ?? throw new MissingMethodException("BnTxx.PixelDecoder.TryDecode unavailable");
            using var stream = new MemoryStream(content, writable: false);
            var container = Activator.CreateInstance(binaryType,
                BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic,
                binder: null, args: new object[] { stream }, culture: null)
                ?? throw new InvalidDataException("Unable to construct BNTX metadata");
            var textures = binaryType.GetField("Textures",
                BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic)?.GetValue(container)
                as IEnumerable ?? throw new InvalidDataException("No BNTX texture list");

            var reports = new List<object>();
            int verified = 0, unsupported = 0;
            int index = 0;
            foreach (object texture in textures)
            {
                var type = texture.GetType();
                string name = (type.GetField("Name")?.GetValue(texture) as string) ?? "";
                var fmt = type.GetField("FormatType")?.GetValue(texture)?.ToString() ?? "Unknown";
                var width = (int)(type.GetField("Width")?.GetValue(texture) ?? 0);
                var height = (int)(type.GetField("Height")?.GetValue(texture) ?? 0);
                string dst = Path.Combine(dir, $"texture_{index:D4}.png");
                var rec = new Dictionary<string, object?> {
                    ["index"] = index, ["original_name"] = name, ["native_format"] = fmt,
                    ["width"] = width, ["height"] = height,
                    ["state"] = "UNSUPPORTED"
                };
                try
                {
                    if (width is < 1 or > 16384 || height is < 1 or > 16384 ||
                        (long)width * height > 128_000_000)
                        throw new InvalidDataException("Invalid or excessive texture dimensions");
                    // TryDecode returns false for unsupported ASTC and other formats.
                    object?[] methodArgs = { texture, null, 0 };
                    bool decoded = (bool)(decoder.Invoke(null, methodArgs) ??
                        throw new InvalidDataException("Decoder returned null"));
                    Bitmap source;
                    if (decoded && methodArgs[1] is Bitmap native)
                    {
                        source = native;
                        rec["decoder"] = "BnTxx";
                    }
                    else if (fmt.StartsWith("ASTC", StringComparison.Ordinal) && astcenc is not null)
                    {
                        source = DecodeAstc(assembly, texture, astcenc, dir, index);
                        rec["decoder"] = "BnTxxASTCUnswizzle+ARM_astcenc";
                    }
                    else throw new NotSupportedException($"No native pixel decoder for {fmt}");
                    using (source)
                    {
                        // Explicit original decoded BGRA pixels, not a placeholder image.
                        var pixels = ReadExactBgra(source);
                        if (pixels.Width != width || pixels.Height != height ||
                            pixels.Bgra.LongLength != (long)width * height * 4)
                            throw new InvalidDataException("Decoded pixel count does not match metadata");
                        using var png = new Bitmap(width, height, PixelFormat.Format32bppArgb);
                        var area = new Rectangle(0, 0, width, height);
                        var locked = png.LockBits(area, ImageLockMode.WriteOnly,
                            PixelFormat.Format32bppArgb);
                        try
                        {
                            int rowBytes = checked(width * 4);
                            for (int y = 0; y < height; y++)
                                Marshal.Copy(pixels.Bgra, y * rowBytes,
                                    IntPtr.Add(locked.Scan0, y * locked.Stride), rowBytes);
                        }
                        finally { png.UnlockBits(locked); }
                        png.Save(dst, ImageFormat.Png);
                        using var check = new Bitmap(dst);
                        var returned = ReadExactBgra(check);
                        if (returned.Width != width || returned.Height != height ||
                            !pixels.Bgra.AsSpan().SequenceEqual(returned.Bgra))
                            throw new InvalidDataException("PNG pixel readback differs from native decoded BGRA");
                        rec["state"] = "VERIFIED";
                        rec["output_name"] = Path.GetFileName(dst);
                        rec["output_sha256"] = HashFile(dst);
                        rec["decoded_pixel_sha256"] = Hash(pixels.Bgra);
                        rec["png_bytes"] = new FileInfo(dst).Length;
                        verified++;
                    }
                }
                catch (Exception ex) when (ex is InvalidDataException or NotSupportedException
                      or TargetInvocationException or ExternalException or ArgumentException
                      or IOException or Win32Exception or TimeoutException)
                {
                    if (File.Exists(dst)) File.Delete(dst);
                    rec["reason"] = ex.GetBaseException().Message;
                    unsupported++;
                }
                reports.Add(rec);
                index++;
            }
            var manifest = new {
                schema_version = 1, source_sha256 = Hash(content),
                source_size = content.Length, tool = "PLA.Bntx.Export/BnTxx+ASTCENC",
                texture_count = index, verified, unsupported,
                state = index > 0 && unsupported == 0 ? "VERIFIED" : "PARTIAL",
                textures = reports
            };
            File.WriteAllText(Path.Combine(dir, "conversion.json"),
                JsonSerializer.Serialize(manifest, new JsonSerializerOptions { WriteIndented = true }));
            Console.WriteLine($"BNTX textures={index} verified={verified} unsupported={unsupported}");
            return index > 0 && unsupported == 0 ? 0 : 3;
        }
        catch (Exception ex)
        {
            Console.Error.WriteLine("BNTX native decode failed: " + ex);
            return 2;
        }
    }
}
