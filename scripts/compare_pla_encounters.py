#!/usr/bin/env python3
"""Compare two PLA PKHeX encounter_la.pkl files without redistributing data."""
from __future__ import annotations

import argparse
import hashlib
import json
import sys
from collections import Counter
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from pla_encounter_pkl import decode_pkl, summarize


def signature(area):
    slots = tuple(tuple(slot[field] for field in
                        ('species', 'form', 'alpha', 'level_min', 'level_max', 'gender', 'flawless_ivs'))
                  for slot in area['slots'])
    return (tuple(area['locations']), area['type'], slots)


def compare(native: bytes, reference: bytes):
    ours = decode_pkl(native)
    upstream = decode_pkl(reference)
    generated = Counter(signature(x) for x in ours)
    baseline = Counter(signature(x) for x in upstream)
    extra = generated - baseline
    missing = baseline - generated
    return {
        'generated': {'sha256': hashlib.sha256(native).hexdigest(), 'bytes': len(native), **summarize(ours)},
        'reference': {'sha256': hashlib.sha256(reference).hexdigest(), 'bytes': len(reference), **summarize(upstream)},
        'exact_file_equal': native == reference,
        'semantic_multiset_equal': not extra and not missing,
        'native_only_area_records': sum(extra.values()),
        'reference_only_area_records': sum(missing.values()),
        'native_only_sample': [dict(locations=list(k[0]), type=k[1], slot_count=len(k[2]), count=v)
                               for k, v in extra.most_common(30)],
        'reference_only_sample': [dict(locations=list(k[0]), type=k[1], slot_count=len(k[2]), count=v)
                                  for k, v in missing.most_common(30)],
    }


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('generated', type=Path)
    parser.add_argument('reference', type=Path)
    parser.add_argument('--output', required=True, type=Path)
    parser.add_argument('--require-semantic-equal', action='store_true')
    args = parser.parse_args(argv)
    result = compare(args.generated.read_bytes(), args.reference.read_bytes())
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(json.dumps(result, ensure_ascii=False, indent=2) + '\n', encoding='utf-8')
    print(json.dumps({k: v for k, v in result.items() if 'sample' not in k}, indent=2))
    if args.require_semantic_equal and not result['semantic_multiset_equal']:
        raise SystemExit(1)


if __name__ == '__main__':
    main()
