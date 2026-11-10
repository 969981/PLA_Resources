#!/usr/bin/env python3
"""Convert PLA v1.1.1 ExeFS main (NSO) to ELF with reproducible hashes.

Keep the original source immutable. Validated derived files go under Unpack/.
ELFs too large for a single Git blob are split byte-for-byte and hash checked.
"""
from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path
import shutil
import struct
import subprocess
import tempfile

SOURCE_REL = "v1.1.1/b38cd4c18831237d85312886f3a377b5_NCA/0/main"
OUTPUT_REL = "Unpack/v1.1.1/exefs/main"


def sha256_file(path: Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as handle:
        for block in iter(lambda: handle.read(4 * 1024 * 1024), b""):
            digest.update(block)
    return digest.hexdigest()


def verify_elf(path: Path) -> dict:
    size = path.stat().st_size
    if size < 64:
        raise ValueError("ELF is missing or too small")
    with path.open("rb") as handle:
        header = handle.read(64)
    if header[:4] != b"\x7fELF" or header[4] != 2 or header[5] != 1:
        raise ValueError("expected 64-bit little-endian ELF")
    machine = struct.unpack_from("<H", header, 18)[0]
    if machine != 183:
        raise ValueError(f"expected EM_AARCH64 (183), got {machine}")
    ehsize, phentsize, phnum, shentsize, shnum = struct.unpack_from("<HHHHH", header, 52)
    phoff, shoff = struct.unpack_from("<QQ", header, 32)
    if ehsize != 64 or phentsize < 56 or phnum == 0 or shentsize < 64 or shnum == 0:
        raise ValueError("ELF program/section header tables are missing or invalid")
    if phoff + phentsize * phnum > size or shoff + shentsize * shnum > size:
        raise ValueError("ELF program/section header table extends beyond file")
    return {
        "elf_class": "ELF64", "endianness": "little", "machine": "AArch64",
        "program_headers": phnum, "section_headers": shnum,
    }


def convert(args: argparse.Namespace) -> dict:
    source, converter, out_dir = Path(args.source), Path(args.converter), Path(args.output_dir)
    if not source.is_file():
        raise FileNotFoundError(f"source missing: {source}")
    if not converter.is_file():
        raise FileNotFoundError(f"converter missing: {converter}")
    with source.open("rb") as handle:
        magic = handle.read(4)
    if magic != b"NSO0":
        raise ValueError(f"expected NSO0 source, got {magic!r}")
    source_hash, source_size = sha256_file(source), source.stat().st_size
    out_dir.mkdir(parents=True, exist_ok=True)

    with tempfile.TemporaryDirectory(prefix="pla-nx2elf-") as tmp:
        elf_tmp = Path(tmp) / "main.elf"
        subprocess.run([
            str(converter.resolve()), str(source.resolve()), "--export-elf", str(elf_tmp),
        ], check=True)
        # nx2elf main() may exit 0 even when NsoToElf() fails.
        if not elf_tmp.is_file():
            raise RuntimeError("nx2elf did not create an ELF")
        info = verify_elf(elf_tmp)
        elf_size, elf_hash = elf_tmp.stat().st_size, sha256_file(elf_tmp)
        parts = []
        if elf_size < args.max_git_blob_bytes:
            target = out_dir / "main.elf"
            shutil.copyfile(elf_tmp, target)
            if sha256_file(target) != elf_hash:
                raise RuntimeError("copied ELF SHA-256 mismatch")
            parts.append({
                "name": target.name, "size_bytes": target.stat().st_size, "sha256": elf_hash,
            })
            distribution = "single_git_blob"
        else:
            with elf_tmp.open("rb") as src:
                index = 0
                while chunk := src.read(args.chunk_size_bytes):
                    target = out_dir / f"main.elf.chunk-{index:03d}"
                    target.write_bytes(chunk)
                    parts.append({
                        "name": target.name, "size_bytes": len(chunk),
                        "sha256": hashlib.sha256(chunk).hexdigest(),
                    })
                    index += 1
            rebuilt = hashlib.sha256()
            for part in parts:
                with (out_dir / part["name"]).open("rb") as handle:
                    for block in iter(lambda: handle.read(4 * 1024 * 1024), b""):
                        rebuilt.update(block)
            if rebuilt.hexdigest() != elf_hash:
                raise RuntimeError("split ELF round-trip SHA-256 mismatch")
            distribution = "split_exact_bytes"

        names = {part["name"] for part in parts}
        for stale in out_dir.glob("main.elf.chunk-*"):
            if stale.name not in names:
                stale.unlink()
        if "main.elf" not in names and (out_dir / "main.elf").is_file():
            (out_dir / "main.elf").unlink()
        manifest = {
            "schema_version": 1, "game": "Pokemon Legends Arceus", "version": "1.1.1",
            "stage": "convert", "state": "VERIFIED",
            "source_relative_path": SOURCE_REL, "source_size_bytes": source_size,
            "source_sha256": source_hash, "source_magic": "NSO0",
            "tool": "nx2elf",
            "tool_repository": "969981/SV_Resources:tools/nx2elf",
            "tool_revision": args.tool_revision,
            "conversion_options": ["--export-elf"],
            "elf_size_bytes": elf_size, "elf_sha256": elf_hash,
            "elf_header": info, "output_relative_directory": OUTPUT_REL,
            "distribution": distribution, "files": parts,
            "validation": [
                "NSO0 magic", "ELF64 little-endian AArch64",
                "ELF header table bounds", "SHA256 of input and output",
                "copy/split SHA256 equality",
            ],
        }
        (out_dir / "main.elf.manifest.json").write_text(
            json.dumps(manifest, ensure_ascii=False, indent=2) + "\n", encoding="utf-8",
        )
        (out_dir / "main.elf.sha256").write_text(
            f"{elf_hash}  main.elf\n", encoding="ascii",
        )
        if args.artifact_path:
            artifact = Path(args.artifact_path)
            artifact.parent.mkdir(parents=True, exist_ok=True)
            shutil.copyfile(elf_tmp, artifact)
        return manifest


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--source", default=SOURCE_REL)
    parser.add_argument("--converter", required=True)
    parser.add_argument("--tool-revision", required=True)
    parser.add_argument("--output-dir", default=OUTPUT_REL)
    parser.add_argument("--artifact-path")
    parser.add_argument("--max-git-blob-bytes", type=int, default=95_000_000)
    parser.add_argument("--chunk-size-bytes", type=int, default=90_000_000)
    args = parser.parse_args()
    if (
        args.max_git_blob_bytes <= 0
        or args.chunk_size_bytes <= 0
        or args.chunk_size_bytes >= args.max_git_blob_bytes
    ):
        parser.error("chunk size must be positive and smaller than max Git blob size")
    print(json.dumps(convert(args), ensure_ascii=False, indent=2))


if __name__ == "__main__":
    main()
