#!/usr/bin/env python3
"""Encode/decode PKHeX PLA encounter_la.pkl (the 'la' Mini container).

No game resources are bundled. 'pack' requires independently decoded encounter
areas with verified location mapping. This tool does not extract GFPak containers.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import struct
from pathlib import Path

TYPE_NAMES = {0: 'standard', 1: 'distortion', 2: 'landmark', 3: 'mass_outbreak', 4: 'massive_mass_outbreak'}
FIELDS = ('species', 'form', 'alpha', 'level_min', 'level_max', 'gender', 'flawless_ivs')


def require_int(value, name, low, high):
    if type(value) is not int or not low <= value <= high:
        raise ValueError(f'{name}: expected integer {low}..{high}, got {value!r}')
    return value


def decode_pkl(data: bytes) -> list[dict]:
    if len(data) < 8 or data[:2] != b'la':
        raise ValueError('not a PLA Mini container (la)')
    count = struct.unpack_from('<H', data, 2)[0]
    header = 8 + count * 4
    if len(data) < header:
        raise ValueError('truncated Mini offsets')
    offsets = struct.unpack_from(f'<{count+1}I', data, 4)
    if offsets[0] != header or offsets[-1] != len(data):
        raise ValueError('invalid Mini first/final offset')
    if any(b <= a or a % 4 or b % 4 for a, b in zip(offsets, offsets[1:])):
        raise ValueError('unordered or unaligned Mini offsets')
    areas = []
    for index, (begin, end) in enumerate(zip(offsets, offsets[1:])):
        chunk = data[begin:end]
        if not chunk:
            raise ValueError(f'area {index}: empty chunk')
        n = chunk[0]
        align = (n + 1 + 1) & ~1
        if n == 0 or align + 2 > len(chunk):
            raise ValueError(f'area {index}: invalid locations')
        locations = list(chunk[1:1+n])
        if chunk[n+1:align] != bytes(align-(n+1)):
            raise ValueError(f'area {index}: nonzero location alignment')
        typ, slots_count = chunk[align:align+2]
        if typ not in TYPE_NAMES:
            raise ValueError(f'area {index}: unknown type {typ}')
        required = align + 2 + 8*slots_count
        if required > len(chunk) or chunk[required:] != bytes(len(chunk)-required):
            raise ValueError(f'area {index}: bad slot length or padding')
        slots = []
        for i in range(slots_count):
            x = struct.unpack_from('<H6B', chunk, align+2+8*i)
            slots.append(dict(zip(FIELDS, x)))
        areas.append({'locations': locations, 'type': typ, 'slots': slots})
    return areas


def encode_pkl(areas: list[dict]) -> bytes:
    if not isinstance(areas, list) or len(areas) > 65535:
        raise ValueError('areas must be an array of <=65535 areas')
    offsets = []
    chunks = []
    next_offset = 8 + len(areas) * 4
    for index, area in enumerate(areas):
        if not isinstance(area, dict) or set(area) != {'locations', 'type', 'slots'}:
            raise ValueError(f'area {index}: expected locations, type, slots')
        loc = area['locations']
        if not isinstance(loc, list) or not 1 <= len(loc) <= 255:
            raise ValueError(f'area {index}: locations must be nonempty array <=255')
        for x in loc:
            require_int(x, f'area {index} location', 0, 255)
        typ = require_int(area['type'], f'area {index} type', 0, 4)
        slots = area['slots']
        if not isinstance(slots, list) or len(slots) > 255:
            raise ValueError(f'area {index}: slots must be an array <=255')
        block = bytearray([len(loc), *loc])
        while len(block) % 2:
            block.append(0)
        block += bytes([typ, len(slots)])
        for i, slot in enumerate(slots):
            if not isinstance(slot, dict) or set(slot) != set(FIELDS):
                raise ValueError(f'area {index} slot {i}: invalid fields')
            limits = [(1, 1025), (0, 255), (0, 2), (1, 100), (1, 100), (0, 2), (0, 6)]
            vals = [require_int(slot[k], f'area {index} slot {i} {k}', *bounds)
                    for k, bounds in zip(FIELDS, limits)]
            if vals[3] > vals[4]:
                raise ValueError(f'area {index} slot {i}: reversed level range')
            block += struct.pack('<H6B', *vals)
        while len(block) % 4:
            block.append(0)
        offsets.append(next_offset)
        next_offset += len(block)
        chunks.append(block)
    return b'la' + struct.pack('<H', len(areas)) + struct.pack(f'<{len(offsets)+1}I', *offsets, next_offset) + b''.join(chunks)


def summarize(areas):
    counts = {TYPE_NAMES[i]: 0 for i in TYPE_NAMES}
    for area in areas:
        counts[TYPE_NAMES[area['type']]] += 1
    return {'areas': len(areas), 'slots': sum(len(x['slots']) for x in areas), 'by_type': counts}


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__)
    sub = parser.add_subparsers(dest='command', required=True)
    for cmd in ('inspect', 'unpack', 'pack'):
        p = sub.add_parser(cmd)
        p.add_argument('input', type=Path)
        if cmd != 'inspect':
            p.add_argument('--output', type=Path, required=True)
        if cmd == 'pack':
            p.add_argument('--check-roundtrip', action='store_true', help='decode generated output before writing')
    args = parser.parse_args(argv)
    if args.command == 'pack':
        obj = json.loads(args.input.read_text(encoding='utf-8-sig'))
        if set(obj) != {'game', 'version', 'areas'} or obj['game'] != 'PLA' or obj['version'] != '1.1.1':
            raise ValueError('JSON requires game=PLA, version=1.1.1, areas')
        areas = obj['areas']
        data = encode_pkl(areas)
        if args.check_roundtrip and decode_pkl(data) != areas:
            raise ValueError('generated file failed roundtrip validation')
        args.output.parent.mkdir(parents=True, exist_ok=True)
        args.output.write_bytes(data)
    else:
        data = args.input.read_bytes()
        areas = decode_pkl(data)
        if args.command == 'unpack':
            obj = {'game': 'PLA', 'version': '1.1.1', 'areas': areas}
            args.output.parent.mkdir(parents=True, exist_ok=True)
            args.output.write_text(json.dumps(obj, indent=2, ensure_ascii=False) + '\n', encoding='utf-8')
    print(json.dumps({'command': args.command, 'sha256': hashlib.sha256(data).hexdigest(), 'bytes': len(data), **summarize(areas)}, indent=2))


if __name__ == '__main__':
    main()
