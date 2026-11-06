using BnTxx;
using System.Collections;
using System.Diagnostics;
using System.ComponentModel;
using System.Drawing;
using System.Drawing.Imaging;
using System.Reflection;
using System.Runtime.InteropServices;
using System.Security.Cryptography;
using System.Buffers.Binary;
using System.Numerics;
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

    // Decode native BNTX BC6H GOB-tiled 4x4 blocks into linear float32 RGB.
    // A preview PNG is NOT a lossless HDR representation. The .rgb32f file is.
    private static Bitmap DecodeBC6(
        Assembly assembly, object texture, string stage, int index,
        int width, int height, int formatVariant, out string hdrName, out string hdrHash)
    {
        if (formatVariant is not (0x01 or 0x02 or 0x05 or 0x0A))
            throw new NotSupportedException($"BC6H variant 0x{formatVariant:X2} is not mapped");
        bool signed = formatVariant is 0x02 or 0x05;
        var type = texture.GetType();
        byte[] source = (byte[])(type.GetField("Data")?.GetValue(texture)
            ?? throw new InvalidDataException("Missing BC6H block data"));
        int log2 = (int)(type.GetField("BlockHeightLog2")?.GetValue(texture) ?? -1);
        if (log2 is < 0 or > 5)
            throw new InvalidDataException($"BC6H native block height exponent {log2} out of bounds");
        int bxCount = checked((width + 3) / 4), byCount = checked((height + 3) / 4);
        var swizzleType = assembly.GetType("BnTxx.BlockLinearSwizzle", throwOnError: true)!;
        object swizzle = Activator.CreateInstance(swizzleType,
            BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic,
            binder: null, args: [bxCount, 16, 1 << log2], culture: null)
            ?? throw new InvalidDataException("BC6H native GOB mapping unavailable");
        var getOffset = swizzleType.GetMethod("GetSwizzleOffset",
            BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic)
            ?? throw new MissingMethodException("BlockLinearSwizzle.GetSwizzleOffset");
        byte[] blocks = new byte[checked(bxCount * byCount * 16)];
        for (int y = 0; y < byCount; y++)
        {
            for (int x = 0; x < bxCount; x++)
            {
                int sourceOffset = (int)(getOffset.Invoke(swizzle, [x, y])
                    ?? throw new InvalidDataException("Null native block offset"));
                if (sourceOffset < 0 || sourceOffset + 16 > source.Length)
                    throw new InvalidDataException($"BC6H block {x},{y} outside native byte span");
                Buffer.BlockCopy(source, sourceOffset, blocks, (y * bxCount + x) * 16, 16);
            }
        }
        int paddedWidth = checked(bxCount * 4), paddedHeight = checked(byCount * 4);
        var codec = signed ? BCnEncoder.Shared.CompressionFormat.Bc6S
                           : BCnEncoder.Shared.CompressionFormat.Bc6U;
        var floats = new BCnEncoder.Decoder.BcDecoder()
            .DecodeRawHdr(blocks, paddedWidth, paddedHeight, codec);
        if (floats.Length != paddedWidth * paddedHeight)
            throw new InvalidDataException("BC6H HDR texel count mismatch");

        byte[] preview = new byte[checked(width * height * 4)];
        hdrName = $"texture_{index:D4}.rgb32f";
        string rawPath = Path.Combine(stage, hdrName);
        using (var writer = new BinaryWriter(File.Create(rawPath)))
        {
            for (int y = 0; y < height; y++)
            {
                for (int x = 0; x < width; x++)
                {
                    var color = floats[y * paddedWidth + x];
                    // Bitwise-preserving float32 RGB, raster order; PNG is tonemapped preview only.
                    writer.Write(color.r);
                    writer.Write(color.g);
                    writer.Write(color.b);
                    int dest = (y * width + x) * 4;
                    preview[dest + 0] = ToneMap(color.b);
                    preview[dest + 1] = ToneMap(color.g);
                    preview[dest + 2] = ToneMap(color.r);
                    preview[dest + 3] = 255;
                }
            }
        }
        if (new FileInfo(rawPath).Length != (long)width * height * 12)
            throw new InvalidDataException("BC6H HDR float32 output byte count mismatch");
        hdrHash = HashFile(rawPath);
        using (var check = File.OpenRead(rawPath))
        {
            if (SHA256.HashData(check).Length != 32)
                throw new InvalidDataException("BC6H file readback failed");
        }
        var bitmap = new Bitmap(width, height, PixelFormat.Format32bppArgb);
        var rect = new Rectangle(0, 0, width, height);
        var locked = bitmap.LockBits(rect, ImageLockMode.WriteOnly, PixelFormat.Format32bppArgb);
        try
        {
            int row = width * 4;
            for (int y = 0; y < height; y++)
                Marshal.Copy(preview, y * row, IntPtr.Add(locked.Scan0, y * locked.Stride), row);
        }
        finally { bitmap.UnlockBits(locked); }
        return bitmap;
    }

    private static byte ToneMap(float color)
    {
        if (!float.IsFinite(color) || color <= 0) return 0;
        double linear = color / (1.0 + color);
        return (byte)Math.Clamp((int)Math.Round(255.0 * Math.Pow(linear, 1.0 / 2.2)), 0, 255);
    }

    // These are nn::gfx::ChannelFormat 0x0E, 0x15 and 0x19. Every layer is
    // decoded from a native GOB-tiled byte span, never a resized placeholder.
    // Full-resolution scalar values remain available beside 8-bit PNG previews.
    private static (Bitmap First, List<Dictionary<string, object?>> Layers) DecodeExtendedFormat(
        object texture, int fmt, int variant, int width, int height, string stage, int textureIndex)
    {
        int bpp = fmt == 0x0E ? 4 : fmt == 0x15 ? 8 : 16;
        if ((fmt == 0x0E && variant != 0x01) ||
            ((fmt == 0x15 || fmt == 0x19) && variant != 0x05))
            throw new NotSupportedException($"Unsupported native format 0x{fmt:X2}{variant:X2}");
        var t = texture.GetType();
        byte[] bytes = (byte[])(t.GetField("Data")?.GetValue(texture)
            ?? throw new InvalidDataException("Missing tiled pixel data"));
        int arrayCount = (int)(t.GetField("ArrayCount")?.GetValue(texture) ?? 0);
        int mipCount = (int)(t.GetField("MipmapCount")?.GetValue(texture) ?? 0);
        int log2 = (int)(t.GetField("BlockHeightLog2")?.GetValue(texture) ?? -1);
        if (arrayCount is < 1 or > 1024 || mipCount != 1 || log2 is < 0 or > 5)
            throw new NotSupportedException($"Unsupported array/mips/GOB layout layers={arrayCount}, mips={mipCount}, bh={log2}");

        int bh = 1 << log2, widthGobs = checked((width * bpp + 63) / 64);
        int heightGroups = checked((height + bh * 8 - 1) / (bh * 8));
        int layerStride = checked(widthGobs * 512 * bh * heightGroups);
        if ((long)layerStride * arrayCount != bytes.LongLength)
            throw new InvalidDataException($"Native byte extent {bytes.Length} != {arrayCount} layers x {layerStride}");
        int bppShift = BitOperations.TrailingZeroCount((uint)bpp);
        int xShift = BitOperations.TrailingZeroCount((uint)(512 * bh));
        int yShift = BitOperations.TrailingZeroCount((uint)(bh * 8));

        var results = new List<Dictionary<string, object?>>();
        Bitmap? first = null;
        for (int layer = 0; layer < arrayCount; layer++)
        {
            byte[] preview = new byte[checked(width * height * 4)];
            string rawExtension = fmt == 0x0E ? ".r10g10b10a2le" : ".rgba32f";
            string rawName = $"texture_{textureIndex:D4}_layer_{layer:D3}{rawExtension}";
            string pngName = $"texture_{textureIndex:D4}_layer_{layer:D3}.png";
            string rawPath = Path.Combine(stage, rawName);
            using (var writer = new BinaryWriter(File.Create(rawPath)))
            {
                for (int y = 0; y < height; y++)
                    for (int x = 0; x < width; x++)
                    {
                        int X = x << bppShift;
                        int offset = checked(layer * layerStride +
                            (y >> yShift) * (512 * bh * widthGobs) +
                            ((X >> 6) << xShift) +
                            (((y & (bh * 8 - 1)) >> 3) << 9) +
                            (((X & 0x3f) >> 5) << 8) +
                            (((y & 7) >> 1) << 6) +
                            (((X & 0x1f) >> 4) << 5) +
                            ((y & 1) << 4) + (X & 0xf));
                        if (offset < layer * layerStride || offset + bpp > (layer + 1) * layerStride)
                            throw new InvalidDataException($"Native GOB pixel offset outside layer {layer}");
                        int dest = checked((y * width + x) * 4);
                        if (fmt == 0x0E)
                        {
                            uint p = BinaryPrimitives.ReadUInt32LittleEndian(bytes.AsSpan(offset, 4));
                            int r = (int)(p & 1023), g = (int)((p >> 10) & 1023),
                                b = (int)((p >> 20) & 1023), a = (int)((p >> 30) & 3);
                            writer.Write(p);
                            preview[dest] = (byte)((b * 255 + 511) / 1023);
                            preview[dest + 1] = (byte)((g * 255 + 511) / 1023);
                            preview[dest + 2] = (byte)((r * 255 + 511) / 1023);
                            preview[dest + 3] = (byte)((a * 255 + 1) / 3);
                        }
                        else
                        {
                            float r, g, b, a;
                            if (fmt == 0x15)
                            {
                                r = (float)BitConverter.UInt16BitsToHalf(BinaryPrimitives.ReadUInt16LittleEndian(bytes.AsSpan(offset, 2)));
                                g = (float)BitConverter.UInt16BitsToHalf(BinaryPrimitives.ReadUInt16LittleEndian(bytes.AsSpan(offset + 2, 2)));
                                b = (float)BitConverter.UInt16BitsToHalf(BinaryPrimitives.ReadUInt16LittleEndian(bytes.AsSpan(offset + 4, 2)));
                                a = (float)BitConverter.UInt16BitsToHalf(BinaryPrimitives.ReadUInt16LittleEndian(bytes.AsSpan(offset + 6, 2)));
                            }
                            else
                            {
                                r = BitConverter.ToSingle(bytes, offset);
                                g = BitConverter.ToSingle(bytes, offset + 4);
                                b = BitConverter.ToSingle(bytes, offset + 8);
                                a = BitConverter.ToSingle(bytes, offset + 12);
                            }
                            writer.Write(r);
                            writer.Write(g);
                            writer.Write(b);
                            writer.Write(a);
                            preview[dest] = ToneMap(b);
                            preview[dest + 1] = ToneMap(g);
                            preview[dest + 2] = ToneMap(r);
                            preview[dest + 3] = (byte)(float.IsFinite(a) ?
                                Math.Clamp((int)Math.Round(a * 255.0), 0, 255) : 0);
                        }
                    }
            }
            int rawBpp = fmt == 0x0E ? 4 : 16;
            long expected = (long)width * height * rawBpp;
            if (new FileInfo(rawPath).Length != expected)
                throw new InvalidDataException("Native high-precision output length differs from texel count");
            Bitmap image = CreateBgraBitmap(preview, width, height);
            image.Save(Path.Combine(stage, pngName), ImageFormat.Png);
            using (var check = new Bitmap(Path.Combine(stage, pngName)))
            {
                if (!ReadExactBgra(check).Bgra.AsSpan().SequenceEqual(preview))
                    throw new InvalidDataException($"Layer {layer} PNG readback differs from decoded native texels");
            }
            results.Add(new Dictionary<string, object?> {
                ["layer"] = layer,
                ["png_file"] = pngName,
                ["png_sha256"] = HashFile(Path.Combine(stage, pngName)),
                ["native_decoded_file"] = rawName,
                ["native_decoded_sha256"] = HashFile(rawPath),
                ["native_decoded_bytes"] = expected
            });
            if (layer == 0) first = image;
            else image.Dispose();
        }
        return (first ?? throw new InvalidDataException("No decoded native array layers"), results);
    }

    private static Bitmap CreateBgraBitmap(byte[] data, int width, int height)
    {
        if (data.LongLength != (long)width * height * 4)
            throw new InvalidDataException("BGRA pixel length mismatch");
        var bitmap = new Bitmap(width, height, PixelFormat.Format32bppArgb);
        var rect = new Rectangle(0, 0, width, height);
        var locked = bitmap.LockBits(rect, ImageLockMode.WriteOnly, PixelFormat.Format32bppArgb);
        try
        {
            int stride = width * 4;
            for (int y = 0; y < height; y++)
                Marshal.Copy(data, y * stride, IntPtr.Add(locked.Scan0, y * locked.Stride), stride);
        }
        finally { bitmap.UnlockBits(locked); }
        return bitmap;
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
                    ["native_variant"] = Convert.ToInt32(type.GetField("FormatVariant")?.GetValue(texture)),
                    ["native_block_height_log2"] = type.GetField("BlockHeightLog2")?.GetValue(texture),
                    ["native_data_bytes"] = (type.GetField("Data")?.GetValue(texture) as byte[])?.Length,
                    ["native_array_count"] = type.GetField("ArrayCount")?.GetValue(texture),
                    ["native_mipmap_count"] = type.GetField("MipmapCount")?.GetValue(texture),
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
                    else if (Convert.ToInt32(type.GetField("FormatType")?.GetValue(texture)) == 0x1F)
                    {
                        int variant = Convert.ToInt32(type.GetField("FormatVariant")?.GetValue(texture));
                        source = DecodeBC6(assembly, texture, dir, index,
                            width, height, variant, out string hdrName, out string hdrSha);
                        rec["decoder"] = "BCnEncoder.Net/BC6H_HDR";
                        rec["native_variant"] = variant;
                        rec["hdr_rgb32f_file"] = hdrName;
                        rec["hdr_rgb32f_sha256"] = hdrSha;
                        rec["preview_note"] = "PNG is tone-mapped; .rgb32f preserves decoded HDR floats";
                    }
                    else if (Convert.ToInt32(type.GetField("FormatType")?.GetValue(texture)) is 0x0E or 0x15 or 0x19)
                    {
                        int code = Convert.ToInt32(type.GetField("FormatType")?.GetValue(texture));
                        int variant = Convert.ToInt32(type.GetField("FormatVariant")?.GetValue(texture));
                        var extendedResult = DecodeExtendedFormat(texture, code, variant, width, height, dir, index);
                        source = extendedResult.First;
                        rec["decoder"] = "BnTxx-GOB+nn::gfx native high precision";
                        rec["array_layers"] = extendedResult.Layers.Count;
                        rec["layers"] = extendedResult.Layers;
                        rec["precision_note"] = "Packed 10-bit / RGBA float data preserved; PNG is 8-bit preview";
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
