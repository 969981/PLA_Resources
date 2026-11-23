#!/usr/bin/env python3
"""Read PLA native GFLXPACK archives without changing the source.

Only verified uncompressed, zlib and LZ4 raw-block modes are supported.
Unknown/undecodable entries raise an explicit error, never fake conversion.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import subprocess
import tempfile
import struct
import zlib
from pathlib import Path

MAGIC = b'GFLXPACK'
FNV_OFFSET = 0xCBF29CE484222645
FNV_PRIME = 0x00000100000001B3


def fnv64(text: str) -> int:
    h = FNV_OFFSET
    for c in text:
        h = ((h ^ ord(c)) * FNV_PRIME) & 0xFFFFFFFFFFFFFFFF
    return h


def lz4_block_decode(data: bytes, expected: int) -> bytes:
    """Small strict decoder for ordinary LZ4 raw blocks, with output cap."""
    out = bytearray()
    i = 0
    while i < len(data):
        token = data[i]
        i += 1
        literal = token >> 4
        if literal == 15:
            while True:
                if i >= len(data):
                    raise ValueError('truncated LZ4 literal extension')
                more = data[i]
                i += 1
                literal += more
                if more != 255:
                    break
        if i + literal > len(data) or len(out) + literal > expected:
            raise ValueError('invalid LZ4 literal length')
        out.extend(data[i:i+literal])
        i += literal
        if i == len(data):
            break
        if i + 2 > len(data):
            raise ValueError('truncated LZ4 distance')
        distance = struct.unpack_from('<H', data, i)[0]
        i += 2
        if not distance or distance > len(out):
            raise ValueError('invalid LZ4 distance')
        match_length = (token & 15) + 4
        if (token & 15) == 15:
            while True:
                if i >= len(data):
                    raise ValueError('truncated LZ4 match extension')
                more = data[i]
                i += 1
                match_length += more
                if more != 255:
                    break
        if len(out) + match_length > expected:
            raise ValueError('LZ4 output exceeds declared size')
        while match_length:
            part = bytes(out[-distance:])
            size = min(match_length, len(part))
            out.extend(part[:size])
            match_length -= size
    if len(out) != expected:
        raise ValueError(f'LZ4 size mismatch: {len(out)} != {expected}')
    return bytes(out)


def _check_range(data: bytes, pos: int, count: int) -> None:
    if pos < 0 or count < 0 or pos + count > len(data):
        raise ValueError(f'GFPak table or entry out of bounds: {pos}+{count}')


class GFPak:
    def __init__(self, data: bytes, ooz_command: str | None = None):
        self.data = data
        self.ooz_command = ooz_command
        if len(data) < 40 or data[:8] != MAGIC:
            raise ValueError('not a valid GFLXPACK header')
        self.version, self.flags, nfiles, nfolders = struct.unpack_from('<IIii', data, 8)
        if not 0 <= nfiles <= 100_000 or not 0 <= nfolders <= 10_000:
            raise ValueError('implausible GFPak entry/folder counts')
        filetable, hashpaths = struct.unpack_from('<qq', data, 24)
        self.filetable_offset = filetable
        _check_range(data, 40, nfolders * 8)
        folder_ptrs = struct.unpack_from(f'<{nfolders}q', data, 40)
        _check_range(data, hashpaths, nfiles * 8)
        _check_range(data, filetable, nfiles * 24)
        self.hashes = struct.unpack_from(f'<{nfiles}Q', data, hashpaths)
        self.entries = []
        for i in range(nfiles):
            level, mode, plain, packed, _, off, __ = struct.unpack_from('<HHiiIiI', data, filetable+i*24)
            if plain < 0 or plain > 512*1024*1024 or packed < 0:
                raise ValueError(f'GFPak entry {i} bad sizes')
            _check_range(data, off, packed)
            self.entries.append({'index':i, 'hash':f'{self.hashes[i]:016X}',
                                 'level':level, 'compression':mode, 'plain_size':plain,
                                 'packed_size':packed, 'offset':off})
        self.folders = []
        for p in folder_ptrs:
            _check_range(data, p, 16)
            h, count, _ = struct.unpack_from('<QiI', data, p)
            if count < 0 or count > nfiles:
                raise ValueError('invalid GFPak folder count')
            _check_range(data, p+16, 16*count)
            listing = []
            for k in range(count):
                namehash, index, _ = struct.unpack_from('<QiI', data, p+16+k*16)
                if not 0 <= index < nfiles:
                    raise ValueError('invalid GFPak folder entry index')
                listing.append({'file_name_hash': f'{namehash:016X}', 'index':index})
            self.folders.append({'hash':f'{h:016X}', 'files':listing})
        if len(set(self.hashes)) != len(self.hashes):
            raise ValueError('duplicate GFPak full-path hash')

    def get_data(self, path: str) -> bytes:
        key = fnv64(path)
        try:
            index = self.hashes.index(key)
        except ValueError as exc:
            raise KeyError(f'GFPak full-path hash not found: {path} ({key:016X})') from exc
        return self.decode_entry(index)

    def decode_entry(self, index: int) -> bytes:
        e = self.entries[index]
        raw = self.data[e['offset']:e['offset'] + e['packed_size']]
        mode = e['compression']
        if mode == 0:
            result = raw
        elif mode == 1:
            result = zlib.decompress(raw)
        elif mode == 2:
            result = lz4_block_decode(raw, e['plain_size'])
        elif 3 <= mode <= 7 and self.ooz_command is not None:
            with tempfile.TemporaryDirectory(prefix='pla-ooz-') as tmp:
                src = Path(tmp) / 'compressed.bin'
                dst = Path(tmp) / 'decompressed.bin'
                src.write_bytes(raw)
                p = subprocess.run([self.ooz_command, str(src), '--length',
                                    str(e['plain_size']), '-o', str(dst)],
                                   stdout=subprocess.PIPE, stderr=subprocess.PIPE,
                                   timeout=90, check=False)
                if p.returncode != 0 or not dst.is_file():
                    raise RuntimeError(f'oozextract failed on entry {index}: {p.stderr.decode(errors="replace")[:1500]}')
                result = dst.read_bytes()
        else:
            raise NotImplementedError(f'GFPak entry {index} uses unsupported compression type {mode}')
        if len(result) != e['plain_size']:
            raise ValueError(f'GFPak decoded length mismatch: {len(result)} != {e["plain_size"]}')
        return result


    def normalized_uncompressed(self) -> bytes:
        """Construct a derived mode-0 GFPak; never modify original bytes."""
        if not self.entries:
            raise ValueError('cannot normalize empty GFPak')
        first_payload = min(e['offset'] for e in self.entries)
        if first_payload < self.filetable_offset + 24 * len(self.entries):
            raise ValueError('GFPak has overlapping metadata and payload')
        result = bytearray(self.data[:first_payload])
        for entry in self.entries:
            decoded = self.decode_entry(entry['index'])
            while len(result) % 16:
                result.append(0)
            if len(result) > 0x7FFFFFFF:
                raise ValueError('normalized GFPak offset exceeds signed 32 bit limit')
            table_pos = self.filetable_offset + entry['index'] * 24
            struct.pack_into('<H', result, table_pos+2, 0)
            struct.pack_into('<i', result, table_pos+4, len(decoded))
            struct.pack_into('<i', result, table_pos+8, len(decoded))
            struct.pack_into('<i', result, table_pos+16, len(result))
            result.extend(decoded)
        packed = bytes(result)
        rebuilt = GFPak(packed)
        if len(rebuilt.entries) != len(self.entries):
            raise ValueError('normalized GFPak entry count mismatch')
        return packed


def main(argv=None):
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('input', type=Path)
    p.add_argument('--path', default='bin/field/resident/AreaSettings.bin')
    p.add_argument('--output', type=Path, required=True, help='write decoded entry to this path')
    p.add_argument('--report', type=Path, required=True, help='write JSON source-ledger report')
    p.add_argument('--ooz-command', type=str, help='path to audited oozextract unoodle CLI (for Oodle entries)')
    p.add_argument('--normalize-to', type=Path, help='create derived mode-0 GFPak')
    args = p.parse_args(argv)
    blob = args.input.read_bytes()
    obj = GFPak(blob, ooz_command=args.ooz_command)
    report = {'game':'PLA', 'version':'1.1.1',
              'source': str(args.input), 'source_size':len(blob),
              'source_sha256': hashlib.sha256(blob).hexdigest(),
              'version_field': obj.version, 'entry_count':len(obj.entries),
              'folder_count': len(obj.folders), 'compression_counts':{}}
    for e in obj.entries:
        key = str(e['compression'])
        report['compression_counts'][key] = report['compression_counts'].get(key, 0) + 1
    try:
        decoded = obj.get_data(args.path)
        report['state'] = 'VERIFIED'
        report['decoded_entry'] = args.path
        report['decoded_size'] = len(decoded)
        report['decoded_sha256'] = hashlib.sha256(decoded).hexdigest()
        args.output.parent.mkdir(parents=True, exist_ok=True)
        args.output.write_bytes(decoded)
        if args.normalize_to:
            normalized = obj.normalized_uncompressed()
            args.normalize_to.parent.mkdir(parents=True, exist_ok=True)
            args.normalize_to.write_bytes(normalized)
            report['normalized_archive_bytes'] = len(normalized)
            report['normalized_archive_sha256'] = hashlib.sha256(normalized).hexdigest()
            report['normalized_archive_state'] = 'DERIVED_NOT_ORIGINAL'
    except Exception as exc:
        report['state'] = 'FAILED'
        report['error'] = str(exc)
        raise
    finally:
        args.report.parent.mkdir(parents=True, exist_ok=True)
        args.report.write_text(json.dumps(report, ensure_ascii=False, indent=2)+'\n', encoding='utf-8')
        print(json.dumps(report, indent=2))


if __name__ == '__main__':
    main()
