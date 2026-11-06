#!/usr/bin/env python3
"""Strictly reconcile 11903 prior BNTX originals with the 2956 retry results."""
from __future__ import annotations
import argparse
from collections import Counter
import json
from pathlib import Path
import sys
EXPECTED={0:(2989,768),1:(3616,886),2:(2318,532),3:(2980,770)}
def read(path:Path)->dict:
 rows={}
 for line in path.read_text(encoding='utf-8').splitlines():
  if not line.strip():continue
  record=json.loads(line)
  pathkey=record['source_member'].replace('\\','/').casefold()
  if pathkey in rows:raise ValueError('duplicate native source in ledger '+pathkey)
  rows[pathkey]=record
 return rows
def audit(previous:Path,retries:Path)->dict:
 stats=Counter()
 unsupported=Counter()
 missing=[]
 for i,(total,partial) in EXPECTED.items():
  old=read(previous/f'pla-bntx-report-shard-{i}'/f'shard-{i}.jsonl')
  new=read(retries/f'pla-bntx-retry-shard-{i}'/f'retry-shard-{i}.jsonl')
  if len(old)!=total:raise ValueError(f'shard {i} prior source count wrong {len(old)} != {total}')
  old_partial={k for k,v in old.items() if v['state']=='PARTIAL'}
  if len(old_partial)!=partial:raise ValueError(f'shard {i} prior partial count wrong')
  if set(new)!=old_partial:
   raise ValueError(f'shard {i} missing or unexpected partial retries: missing {len(old_partial-set(new))} extra {len(set(new)-old_partial)}')
  for key,item in old.items():
   if item['state']=='VERIFIED':
    stats['previously_verified']+=1
   elif item['state']=='PARTIAL':
    state=new[key]['state']
    stats['retry_'+state.lower()]+=1
    if state!='VERIFIED':
     if len(missing)<100:
      missing.append({'source_member':key,'state':state,'errors':new[key].get('errors')})
     unsupported.update(new[key].get('unsupported_formats',{}))
   else:raise ValueError(f'prior non-auditable state for {key}')
 count=stats['previously_verified']+sum(v for k,v in stats.items() if k.startswith('retry_'))
 if count!=11903:raise ValueError(f'incomplete coverage {count}')
 complete=stats.get('retry_verified',0)==2956 and not missing
 return dict(stage='PLA_v1.1.1_BNTX_lossless_PNG_native_codec',
  expected_sources=11903,original_partial=2956,states=dict(stats),
  newly_fixed=stats.get('retry_verified',0),remaining_sources=2956-stats.get('retry_verified',0),
  incomplete_examples=missing,unsupported_formats=dict(unsupported),complete=complete)
def main()->int:
 p=argparse.ArgumentParser(description=__doc__)
 p.add_argument('--previous',type=Path,required=True)
 p.add_argument('--retry',type=Path,required=True)
 p.add_argument('--out',type=Path,required=True)
 p.add_argument('--strict',action='store_true')
 a=p.parse_args()
 try:
  result=audit(a.previous,a.retry)
  a.out.parent.mkdir(parents=True,exist_ok=True)
  a.out.write_text(json.dumps(result,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
  print(json.dumps({k:result[k] for k in ('states','newly_fixed','remaining_sources','unsupported_formats','complete')},ensure_ascii=False))
  return int(a.strict and not result['complete'])
 except Exception as e:
  print('RETRY COVERAGE ERROR:',e,file=sys.stderr)
  return 1
if __name__=='__main__':raise SystemExit(main())
