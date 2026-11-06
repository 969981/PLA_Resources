#!/usr/bin/env python3
"""Audit all 19932 native PLA TRANM typed results with SHA continuity and bone-binding distinctions."""
from __future__ import annotations
import argparse,json
from collections import Counter
from pathlib import Path
import sys

SIZES={0:4721,1:5187,2:4990,3:5034}
PARSED={'VERIFIED','AUXILIARY_ONLY','BONE_UNMATCHED','PARSED_NO_SKELETON','EMPTY_TRACKS'}

def lines(path:Path):
 if not path.is_file():raise ValueError('Missing mandatory source ledger '+str(path))
 return [json.loads(line) for line in path.read_text(encoding='utf8').splitlines() if line.strip()]

def audit(root:Path)->dict:
 global_states=Counter();frames=Counter();samples=[]
 seen=set();track_sum=0;channels=Counter();shards={}
 for shard,expected in SIZES.items():
  folder=root/f'pla-tranm-typed-shard-{shard}'
  before=lines(folder/'preflight.jsonl')
  after=lines(folder/f'shard-{shard}.jsonl')
  if len(before)!=expected or len(after)!=expected:
   raise ValueError(f'shard {shard} count differs from original census: {len(before)}/{len(after)} expected={expected}')
  originals={x['native_path']:x for x in before}
  if len(originals)!=expected:raise ValueError('Duplicate source path in preflight')
  processed={x['native_path']:x for x in after}
  if len(processed)!=expected or set(originals)!=set(processed):
   raise ValueError(f'Partial or duplicate native coverage in shard {shard}')
  local=Counter()
  for path,rec in processed.items():
   if path in seen:raise ValueError('Duplicate path across shards: '+path)
   seen.add(path)
   state=rec['state'];local[state]+=1;global_states[state]+=1
   if state not in PARSED:
    if len(samples)<100:samples.append({'native_path':path,'state':state,'error':rec.get('error')})
    continue
   if rec.get('animation_sha256','').lower()!=originals[path].get('source_sha256','').lower():
    raise ValueError('Source SHA mismatch in typed output '+path)
   if rec.get('frames',0)<1 or rec.get('fps',0)<1:
    raise ValueError('Parsed motion has no valid playback frame rate '+path)
   frames[str(rec['fps'])]+=1
   track_sum+=rec.get('animated_bones',0)
   for field in ('matched_bones','helper_tracks','non_skeleton_tracks','scale_channels','rotation_channels','translation_channels'):
    channels[field]+=int(rec.get(field,0))
   if state!='VERIFIED' and len(samples)<100:
    samples.append({'native_path':path,'state':state,
      'unmatched_count':len(rec.get('unmatched_bones',[])),
      'unmatched_example':rec.get('unmatched_bones',[])[:8]})
  shards[str(shard)]={'expected':expected,'states':dict(local)}
 total=len(seen)
 if total!=19932:raise ValueError('Expected 19932 native unique motions')
 typed=sum(global_states[k] for k in PARSED)
 return dict(schema_version=1,stage='PLA_v1.1.1_tranm_native_typed_coverage',
  expected_sources=19932,unique_sources=total,typed_parsed=typed,
  native_bone_bound=global_states['VERIFIED'],
  auxiliary_control_motion_files=global_states['AUXILIARY_ONLY'],
  motion_files_with_non_skeleton_targets=global_states['BONE_UNMATCHED'],
  verified_without_local_skeleton=global_states['PARSED_NO_SKELETON'],
  native_total_tracks=track_sum,
  channel_counts=dict(channels),fps_counts=dict(frames),states=dict(global_states),
  shards=shards,non_fully_bound_examples=samples,
  parsed_complete=typed==19932,bone_bind_complete=global_states['VERIFIED']==19932)

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
  print(json.dumps({k:result[k] for k in ('unique_sources','typed_parsed','states','native_total_tracks','parsed_complete','bone_bind_complete')},ensure_ascii=False),flush=True)
  return int(a.strict and not result['parsed_complete'])
 except Exception as e:
  print('TRANM_TYPED_AUDIT_FAILED:',e,file=sys.stderr)
  return 1
if __name__=='__main__':raise SystemExit(main())
