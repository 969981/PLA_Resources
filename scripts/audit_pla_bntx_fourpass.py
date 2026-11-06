#!/usr/bin/env python3
"""BNTX four-pass source continuity audit: 11903 -> 2956 -> 58 -> 17."""
from __future__ import annotations
import argparse
from collections import Counter
import json
from pathlib import Path
import sys
from audit_pla_bntx_final import read

SHARDS={0:(2989,768,2,2),1:(3616,886,49,8),
        2:(2318,532,2,2),3:(2980,770,5,5)}

def verify(orig:Path,one:Path,two:Path,three:Path)->dict:
 status=Counter()
 remaining=[]
 per_shard={}
 for shard,expected in SHARDS.items():
  roots=[
   orig/f'pla-bntx-report-shard-{shard}'/f'shard-{shard}.jsonl',
   one/f'pla-bntx-retry-shard-{shard}'/f'retry-shard-{shard}.jsonl',
   two/f'pla-bntx-final-shard-{shard}'/f'final-shard-{shard}.jsonl',
   three/f'pla-bntx-precision-shard-{shard}'/f'precision-shard-{shard}.jsonl'
  ]
  levels=[read(p) for p in roots]
  if tuple(len(level) for level in levels)!=expected:
   raise ValueError(f'shard {shard} source count drift')
  for i in range(1,len(levels)):
   required={k for k,v in levels[i-1].items() if v['state']=='PARTIAL'}
   if set(levels[i])!=required:
    raise ValueError(f'shard {shard} retry level {i} has missing/extra source')
   for key,v in levels[i].items():
    if v['source_sha256']!=levels[i-1][key]['source_sha256']:
     raise ValueError('source SHA256 differs between stages: '+key)
  count=Counter()
  for key in levels[0]:
   final=next(level[key] for level in reversed(levels) if key in level)
   state=final['state']
   status[state]+=1;count[state]+=1
   if state!='VERIFIED':
    remaining.append({'source':key,'state':state,'formats':final.get('unsupported_formats',{}),
      'errors':final.get('errors',[])})
  per_shard[str(shard)]=dict(source_count=len(levels[0]),result=dict(count))
 if sum(status.values())!=11903:raise ValueError('not all 11903 members covered')
 return {'schema_version':1,'game':'PLA','version':'1.1.1','stage':'full_BNTX_native_texel_decode',
  'source_count':11903,'states':dict(status),
  'precision_retry_count':17,'precision_newly_verified':sum(
   int(v['state']=='VERIFIED') for i in SHARDS for v in read(three/f'pla-bntx-precision-shard-{i}'/f'precision-shard-{i}.jsonl').values()),
  'remaining':len(remaining),'unresolved_examples':remaining,
  'shards':per_shard,'all_sources_verified':status['VERIFIED']==11903}

def main()->int:
 p=argparse.ArgumentParser(description=__doc__)
 for flag in ('original','first','second','third'):p.add_argument('--'+flag,type=Path,required=True)
 p.add_argument('--out',type=Path,required=True)
 p.add_argument('--strict',action='store_true')
 a=p.parse_args()
 try:
  r=verify(a.original,a.first,a.second,a.third)
  a.out.parent.mkdir(parents=True,exist_ok=True)
  a.out.write_text(json.dumps(r,ensure_ascii=False,indent=2)+'\n',encoding='utf8')
  print(json.dumps({k:r[k] for k in ('source_count','states','precision_newly_verified','remaining','all_sources_verified')},
   ensure_ascii=False),flush=True)
  return int(a.strict and not r['all_sources_verified'])
 except Exception as e:
  print('FOUR_STAGE_BNTX_AUDIT_FAILED:',e,file=sys.stderr)
  return 1
if __name__=='__main__':raise SystemExit(main())
