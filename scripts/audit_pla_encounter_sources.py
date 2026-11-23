#!/usr/bin/env python3
"""Byte-backed FlatBuffers structural audit of PLA v1.1.1 outbreak resources.

Reports counts and native hashes. It does not interpret a table as a PKHeX
wild encounter slot or claim the resident_release.gfpak was decoded.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import struct
from pathlib import Path

FILES = {
    'huge_outbreak.bin': 'MassOutbreakTable',
    'new_huge_outbreak_group.bin': 'NewHugeOutbreakGroupArchive',
    'new_huge_outbreak_group_lottery.bin': 'NewHugeOutbreakGroupLotteryArchive',
    'new_huge_outbreak_lottery.bin': 'NewHugeOutbreakLotteryArchive',
    'new_huge_outbreak_time_limit.bin': 'NewHugeOutbreakTimeLimitArchive',
}


class FlatBuffer:
    def __init__(self, data: bytes):
        self.data = data

    def val(self, fmt: str, pos: int) -> int:
        if pos < 0 or pos + struct.calcsize('<'+fmt) > len(self.data):
            raise ValueError(f'FlatBuffer out-of-bounds: {pos} {fmt}')
        return struct.unpack_from('<'+fmt, self.data, pos)[0]

    def rel(self, pos: int) -> int:
        target = pos + self.val('I', pos)
        if target <= pos or target >= len(self.data):
            raise ValueError(f'bad forward FlatBuffers offset {pos}->{target}')
        return target

    def field(self, table: int, index: int):
        vtable = table - self.val('i', table)
        size = self.val('H', vtable)
        if size < 4 or size > 4096:
            raise ValueError('invalid vtable length')
        entry = 4 + index * 2
        if entry + 2 > size:
            return None
        off = self.val('H', vtable + entry)
        return table + off if off else None

    def scalar(self, table: int, index: int, fmt: str, default=0):
        p = self.field(table, index)
        return self.val(fmt, p) if p is not None else default

    def string(self, table: int, index: int):
        p = self.field(table, index)
        if p is None:
            return ''
        q = self.rel(p)
        length = self.val('I', q)
        if length > 4096 or q + 4 + length >= len(self.data):
            raise ValueError('invalid FlatBuffers string length')
        if self.data[q+4+length] != 0:
            raise ValueError('unterminated FlatBuffers string')
        return self.data[q+4:q+4+length].decode('utf-8')

    def vector_tables(self, table: int, index: int) -> list[int]:
        p = self.field(table, index)
        if p is None:
            return []
        q = self.rel(p)
        count = self.val('I', q)
        if count > 1_000_000 or q + 4 + count * 4 > len(self.data):
            raise ValueError('invalid vector length')
        return [self.rel(q + 4 + i*4) for i in range(count)]

    def root_tables(self) -> list[int]:
        return self.vector_tables(self.rel(0), 0)


def audit_one(name: str, data: bytes) -> dict:
    f = FlatBuffer(data)
    tables = f.root_tables()
    result = {'schema': FILES[name], 'bytes': len(data), 'sha256': hashlib.sha256(data).hexdigest(),
              'root_records': len(tables), 'status': 'STRUCTURE_VERIFIED', 'sample': []}
    for table in tables[:3]:
        if name == 'huge_outbreak.bin':
            sample = {'outbreak_change_chance': f.scalar(table, 1, 'i'),
                      'spawn_min': f.scalar(table, 5, 'i'), 'spawn_max': f.scalar(table, 6, 'i'),
                      'shiny_roll_bonus': f.scalar(table, 7, 'i')}
        elif name == 'new_huge_outbreak_group.bin':
            sample = {'group_id': f'{f.scalar(table, 0, "Q"):016X}',
                      'successive_entries': len(f.vector_tables(table, 1)),
                      'encounter_table_id': f'{f.scalar(table, 2, "Q"):016X}'}
        elif name == 'new_huge_outbreak_group_lottery.bin':
            sample = {'lottery_group_id': f'{f.scalar(table, 0, "Q"):016X}',
                      'common': len(f.vector_tables(table, 1)),
                      'rare1': len(f.vector_tables(table, 2)),
                      'rare2': len(f.vector_tables(table, 3))}
        elif name == 'new_huge_outbreak_lottery.bin':
            sample = {'group': f.string(table, 1),
                      'outbreak_chance': f.scalar(table, 2, 'i'),
                      'outbreak_total_min': f.scalar(table, 3, 'i'),
                      'outbreak_total_max': f.scalar(table, 4, 'i')}
        else:
            sample = {'duration': f.scalar(table, 0, 'i'), 'chance': f.scalar(table, 1, 'i')}
        result['sample'].append(sample)
    return result


def main(argv=None):
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('romfs_root', type=Path, help='path to /1 RomFS root (containing bin/)')
    p.add_argument('--output', type=Path, required=True)
    p.add_argument('--strict', action='store_true', help='exit nonzero on missing/invalid sources')
    args = p.parse_args(argv)
    output = {'game': 'PLA', 'version': '1.1.1', 'stage': 'structure', 'sources': {}}
    failures = []
    for name in FILES:
        path = args.romfs_root / 'bin' / 'field' / 'encount' / name
        try:
            data = path.read_bytes()
            output['sources'][name] = {'relative_path': f'bin/field/encount/{name}', **audit_one(name, data)}
        except (OSError, ValueError, UnicodeError, struct.error) as e:
            output['sources'][name] = {'status': 'SOURCE_MISSING' if not path.exists() else 'FAILED', 'error': str(e)}
            failures.append(name)
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(json.dumps(output, indent=2, ensure_ascii=False) + '\n', encoding='utf-8')
    print(json.dumps({'records': {k: v.get('root_records') for k,v in output['sources'].items()}, 'failed': failures}, indent=2))
    if failures and args.strict:
        raise SystemExit(1)


if __name__ == '__main__':
    main()
