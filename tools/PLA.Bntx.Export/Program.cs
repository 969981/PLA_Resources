using BnTxx;
using System.Collections;
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

    private static int Main(string[] args)
    {
        if (args.Length != 2)
        {
            Console.Error.WriteLine("Usage: PLA.Bntx.Export.exe <input-bntx-any-extension> <new-output-dir>");
            return 2;
        }
        string input = Path.GetFullPath(args[0]);
        string dir = Path.GetFullPath(args[1]);
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
                    if (!decoded || methodArgs[1] is not Bitmap source)
                        throw new NotSupportedException("BnTxx has no decoder for this texture format");
                    using (source)
                    {
                        // Explicit original decoded BGRA pixels, not a placeholder image.
                        var pixels = TexturePixels.FromBitmap(source);
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
                        var returned = TexturePixels.FromBitmap(check);
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
                      or TargetInvocationException or ExternalException or ArgumentException)
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
                source_size = content.Length, tool = "PLA.Bntx.Export/BnTxx",
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
