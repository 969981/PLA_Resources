#!/usr/bin/env python3
"""Three-stage BNTX census: 11903 native -> 2956 retry -> 58 final formats.

Do not report success when a source is missing, duplicated or still PARTIAL.
"""
from __future__ import annotations
import argparse
from collections import Counter
import json
from pathlib import Path
import sys

SHARDS={0:(2989,768,2),1:(3616,886,49),2:(2318,532,2),3:(2980,770,5)}
def read(path:Path)->dict:
 if not path.is_file():raise ValueError('missing ledger '+str(path))
 result={}
 for line in path.read_text(encoding='utf8').splitlines():
  if not line.strip():continue
  row=json.loads(line)
  key=row['source_member'].replace('\\','/').casefold()
  if key in result:raise ValueError('duplicate ledger source '+key)
  if row['state'] not in ('VERIFIED','PARTIAL','FAILED'):
   raise ValueError('invalid state for '+key)
  result[key]=row
 return result

def audit(original:Path,first:Path,second:Path)->dict:
 status=Counter()
 formats=Counter()
 failed=[]
 stats={}
 source=0
 for shard,(n0,n1,n2) in SHARDS.items():
  a=read(original/f'pla-bntx-report-shard-{shard}'/f'shard-{shard}.jsonl')
  b=read(first/f'pla-bntx-retry-shard-{shard}'/f'retry-shard-{shard}.jsonl')
  c=read(second/f'pla-bntx-final-shard-{shard}'/f'final-shard-{shard}.jsonl')
  source+=len(a)
  if len(a)!=n0 or len(b)!=n1 or len(c)!=n2:
   raise ValueError(f'shard {shard} incorrect source count {len(a)}/{len(b)}/{len(c)} expected {n0}/{n1}/{n2}')
  firstset={k for k,v in a.items() if v['state']=='PARTIAL'}
  secondset={k for k,v in b.items() if v['state']=='PARTIAL'}
  if set(b)!=firstset or set(c)!=secondset:
   raise ValueError(f'shard {shard} incomplete retry/source matching')
  local=Counter()
  for key in a:
   record=c[key] if key in c else b[key] if key in b else a[key]
   if key in c and c[key]['source_sha256']!=b[key]['source_sha256']:
    raise ValueError('source hash drift on final retry '+key)
   if key in b and b[key]['source_sha256']!=a[key]['source_sha256']:
    raise ValueError('source hash drift on original retry '+key)
   state=record['state']
   local[state]+=1
   status[state]+=1
   if state!='VERIFIED':
    formats.update(record.get('unsupported_formats',{}))
    failed.append({'source_member':key,'state':state,
                   'formats':record.get('unsupported_formats',{}),
                   'errors':record.get('errors',[])})
  stats[str(shard)]={'sources':len(a),'states':dict(local),
                     'third_pass_inputs':len(c)}
 if source!=11903 or sum(status.values())!=11903:
  raise ValueError('not all 11903 source files accounted for')
 return {'schema_version':1,'stage':'PLA_1.1.1_full_BNTX_readback',
  'total_sources':11903,'native_texture_states':dict(status),
  'baseline_verified':8947,'second_pass_new_verified':2898,
  'final_pass_new_verified':sum(int(v['states'].get('VERIFIED',0)) for v in stats.values())-11845,
  'remaining':11903-status['VERIFIED'],
  'remaining_native_format_codes':dict(sorted(formats.items())),
  'failures':failed,'shards':stats,'complete':status['VERIFIED']==11903}

def main()->int:
 p=argparse.ArgumentParser(description=__doc__)
 p.add_argument('--original',type=Path,required=True)
 p.add_argument('--first-retry',type=Path,required=True)
 p.add_argument('--final-retry',type=Path,required=True)
 p.add_argument('--out',type=Path,required=True)
 p.add_argument('--strict',action='store_true')
 a=p.parse_args()
 try:
  result=audit(a.original,a.first_retry,a.final_retry)
  a.out.parent.mkdir(parents=True,exist_ok=True)
  a.out.write_text(json.dumps(result,ensure_ascii=False,indent=2)+'\n',encoding='utf8')
  print(json.dumps({k:result[k] for k in
   ('native_texture_states','final_pass_new_verified','remaining','remaining_native_format_codes','complete')},
   ensure_ascii=False),flush=True)
  return int(a.strict and not result['complete'])
 except Exception as e:
  print('BNTX_THREE_STAGE_AUDIT_FAILED:',e,file=sys.stderr)
  return 1
if __name__=='__main__':raise SystemExit(main())
