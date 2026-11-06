#!/usr/bin/env python3
"""Audit all 11903 BNTX conversion receipts from the four real extraction shards."""
from __future__ import annotations
import argparse
from collections import Counter
import json
from pathlib import Path
import sys

EXPECTED={0:2989,1:3616,2:2318,3:2980}
TOTAL=sum(EXPECTED.values())

def aggregate(root:Path)->dict:
 states=Counter()
 textures=Counter()
 unique=set()
 failures=[]
 shards={}
 for i,expected in EXPECTED.items():
  result=list(root.rglob(f'shard-{i}.jsonl'))
  if len(result)!=1:raise ValueError(f'Expected unique shard-{i}.jsonl, got {len(result)}')
  path=result[0]
  local=Counter()
  rows=0
  for line in path.read_text(encoding='utf-8').splitlines():
   if not line.strip():continue
   r=json.loads(line)
   key=r['source_member'].replace('\\','/').casefold()
   if key in unique:raise ValueError(f'Duplicate BNTX native source: {key}')
   unique.add(key)
   st=r['state']
   if st not in ('VERIFIED','PARTIAL','FAILED'):
    raise ValueError(f'Unexpected state {st}')
   states[st]+=1
   local[st]+=1
   rows+=1
   textures['verified']+=r.get('verified',0)
   textures['unsupported']+=r.get('unsupported',0)
   if st!='VERIFIED' and len(failures)<200:
    failures.append({k:r.get(k) for k in ('source_member','state','error','unsupported','textures')})
  if rows!=expected:raise ValueError(f'BNTX shard {i} has {rows} results, expected {expected}')
  shards[str(i)]={'expected':expected,'statuses':dict(local)}
 if len(unique)!=TOTAL or sum(states.values())!=TOTAL:
  raise ValueError('Cross-shard source mismatch')
 return {'schema_version':1,'game':'PLA','version':'1.1.1',
  'stage':'native_BNTX_to_PNG','expected_sources':TOTAL,
  'total_sources':len(unique),'source_states':dict(states),
  'verified_textures':textures['verified'],
  'unsupported_textures':textures['unsupported'],
  'shards':shards,'failed_examples':failures,
  'complete':states['VERIFIED']==TOTAL}

def main()->int:
 p=argparse.ArgumentParser(description=__doc__)
 p.add_argument('--root',type=Path,required=True)
 p.add_argument('--out',type=Path,required=True)
 p.add_argument('--strict',action='store_true')
 a=p.parse_args()
 try:
  report=aggregate(a.root)
  a.out.parent.mkdir(parents=True,exist_ok=True)
  a.out.write_text(json.dumps(report,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
  print(json.dumps({k:report[k] for k in ('total_sources','source_states','verified_textures','unsupported_textures','complete')},ensure_ascii=False))
  return int(a.strict and not report['complete'])
 except Exception as e:
  print(f'BNTX AUDIT FAILED: {e}',file=sys.stderr)
  return 1

if __name__=='__main__':raise SystemExit(main())
