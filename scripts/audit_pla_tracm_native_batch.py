#!/usr/bin/env python3
"""Independent four-shard original-SHA continuity audit of native PLA TRACM typed resources."""
from __future__ import annotations
import argparse,json,sys
from collections import Counter
from pathlib import Path
EXPECTED={0:4631,1:5058,2:4810,3:4947}
ACCEPTED={'VERIFIED','PARSED_NO_PLAYBACK'}
def read(path):
 if not path.is_file():raise ValueError('Missing expected TRACM evidence '+str(path))
 rows=[json.loads(x) for x in path.read_text(encoding='utf8').splitlines() if x.strip()]
 result={x['native_path']:x for x in rows}
 if len(result)!=len(rows):raise ValueError('Duplicate native TRACM paths in '+str(path))
 return result
def audit(root):
 states=Counter();track_counts=Counter();fps=Counter();seen=set();fails=[]
 for shard,expected in EXPECTED.items():
  src=root/f'pla-tracm-typed-shard-{shard}'
  originals=read(src/'preflight.jsonl')
  decoded=read(src/f'tracm-{shard}.jsonl')
  if len(originals)!=expected or len(decoded)!=expected or set(originals)!=set(decoded):
   raise ValueError(f'Incomplete TRACM shard {shard} expected {expected}')
  for name,row in decoded.items():
   if name in seen:raise ValueError('TRACM path seen on two source shards: '+name)
   seen.add(name)
   state=row['state'];states[state]+=1
   if state not in ACCEPTED:
    if len(fails)<100:fails.append({'name':name,'state':state,'error':row.get('error')})
    continue
   if originals[name].get('sha256','').lower()!=row.get('raw_sha256','').lower():
    raise ValueError('Native source SHA changed: '+name)
   fps[str(row.get('fps',0))]+=1
   for kind in ('tracks','material_tracks','blendshape_tracks','visibility_tracks'):
    track_counts[kind]+=int(row.get(kind,0))
 count=sum(states.values())
 if count!=19446:raise ValueError(f'Expected 19446 inputs, got {count}')
 passed=sum(states[k] for k in ACCEPTED)
 return dict(schema_version=1,game='PLA',version='1.1.1',stage='TRACM_flatsharp_typed_material_tracks',
  source_count=count,typed_parsed=passed,states=dict(states),
  track_counts=dict(track_counts),fps_counts=dict(fps),
  failures=fails,all_source_sha256_preserved=True,typed_complete=passed==19446)
def main():
 p=argparse.ArgumentParser(description=__doc__)
 p.add_argument('--root',type=Path,required=True)
 p.add_argument('--out',type=Path,required=True)
 p.add_argument('--strict',action='store_true')
 a=p.parse_args()
 try:
  result=audit(a.root)
  a.out.parent.mkdir(parents=True,exist_ok=True)
  a.out.write_text(json.dumps(result,ensure_ascii=False,indent=2)+'\n',encoding='utf8')
  print(json.dumps({k:result[k] for k in ('source_count','typed_parsed','states','track_counts','typed_complete')},ensure_ascii=False),flush=True)
  return int(a.strict and not result['typed_complete'])
 except Exception as e:
  print('TRACM_FULL_COVERAGE_FAILED',e,file=sys.stderr)
  return 1
if __name__=='__main__':raise SystemExit(main())
