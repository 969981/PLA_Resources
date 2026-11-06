#!/usr/bin/env python3
"""Merge four independent PLA GFPak member-census shard summaries."""
from __future__ import annotations
import argparse
from collections import Counter
import csv
import json
from pathlib import Path
import sys

def merge(root:Path, expected_archives:int=678)->dict:
 shards=sorted(root.rglob('census.json'))
 if len(shards)!=4: raise ValueError(f'expected 4 census shards, got {len(shards)}')
 formats=Counter()
 families=Counter()
 states=Counter()
 unknown=[]
 errors=[]
 archive_total=0
 member_total=0
 bytes_total=0
 seen=set()
 for p in shards:
  data=json.loads(p.read_text(encoding='utf-8'))
  if data.get('stage')!='member_format_census' or not data.get('complete'):
   raise ValueError(f'incomplete or foreign stage: {p}')
  if not data.get('sha256_verified'):
   raise ValueError(f'shard has unverified member bytes: {p}')
  archive_total+=data['original_archives']
  member_total+=data['expected_members']
  bytes_total+=data['decoded_member_bytes']
  formats.update(data['formats'])
  families.update(data['families'])
  states.update(data['states'])
  errors.extend(data.get('errors',[]))
  unknown.extend(data.get('unknown_examples',[])[:10])
  members=p.parent/'members.csv'
  if not members.is_file(): raise ValueError(f'missing members.csv: {members}')
  with members.open(encoding='utf-8',newline='') as fh:
   rows=csv.DictReader(fh)
   rows_count=0
   for row in rows:
    key=(row['source_gfpak'],row['member_path'])
    if key in seen: raise ValueError(f'duplicate member from shards: {key}')
    seen.add(key)
    rows_count+=1
   if rows_count!=data['expected_members']:
    raise ValueError(f'member CSV count mismatch {p} ({rows_count})')
 if archive_total!=expected_archives:
  raise ValueError(f'original archives {archive_total} != {expected_archives}')
 if len(seen)!=member_total or states['VERIFIED']!=member_total or errors:
  raise ValueError('incomplete member coverage')
 if sum(formats.values())!=member_total:
  raise ValueError('format count != member count')
 return dict(schema_version=1,stage='PLA_v1.1.1_gfpak_format_census',
  source_run_id=42160235620, original_archives=archive_total,
  expected_archives=expected_archives, member_count=member_total,
  member_bytes=bytes_total,states=dict(states),
  formats=dict(sorted(formats.items(),key=lambda z:(-z[1],z[0]))),
  families=dict(sorted(families.items())),unknown_examples=unknown,
  all_native_member_sha256_verified=True, complete=True)

def main()->int:
 p=argparse.ArgumentParser(description=__doc__)
 p.add_argument('--root',required=True,type=Path)
 p.add_argument('--out',required=True,type=Path)
 p.add_argument('--expected-archives',type=int,default=678)
 a=p.parse_args()
 try:
  report=merge(a.root,a.expected_archives)
  a.out.parent.mkdir(parents=True,exist_ok=True)
  a.out.write_text(json.dumps(report,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
  print(json.dumps(report,ensure_ascii=False),flush=True)
  return 0
 except Exception as ex:
  print(f'CENSUS MERGE FAILED: {ex}',file=sys.stderr)
  return 1

if __name__=='__main__': raise SystemExit(main())
