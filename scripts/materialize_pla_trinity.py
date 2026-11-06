#!/usr/bin/env python3
"""Recover exact hash-mapped Trinity files from verified native member manifests."""
from __future__ import annotations
import argparse
from collections import Counter
import hashlib
import json
from pathlib import Path
import shutil
import sys
from recover_pla_model_hashes import expected_candidates

def sha(path:Path)->str:
 h=hashlib.sha256()
 with path.open('rb') as stream:
  for block in iter(lambda:stream.read(1<<20),b''):h.update(block)
 return h.hexdigest()

def materialize(root:Path,out:Path,limit:int=0)->dict:
 manifests=sorted(root.rglob('_manifest.json'))
 found=recovered=failed=0
 bytype=Counter()
 results=[]
 for mf in manifests:
  name=mf.parent.parent.name
  paths=expected_candidates('bin/archive/pokemon/'+name)
  if not paths:continue
  if limit and found>=limit:break
  found+=1
  report={'archive':name,'matched':0,'failures':[]}
  try:
   data=json.loads(mf.read_text(encoding='utf-8'))
   for m in data['members']:
    native=paths.get(m['full_path_hash'].upper())
    if not native:continue
    source=mf.parent/m['path']
    if not source.is_file() or source.stat().st_size!=int(m['decoded_size']) or sha(source)!=m['sha256']:
     report['failures'].append({'member':m['path'],'reason':'size or SHA mismatch'})
     continue
    dst=out/native
    dst.parent.mkdir(parents=True,exist_ok=True)
    if dst.exists() and sha(dst)!=m['sha256']:
     report['failures'].append({'member':m['path'],'reason':'conflicting native filename'})
     continue
    if not dst.exists():shutil.copy2(source,dst)
    report['matched']+=1
    recovered+=1
    bytype[dst.suffix.lower()]+=1
  except (KeyError,ValueError,OSError) as e:
   report['failures'].append({'reason':str(e)})
  if report['failures']:failed+=1
  results.append(report)
 return dict(schema_version=1,source_archives=found,matched_members=recovered,
   failed_archives=failed,extensions=dict(bytype),reports=results,complete=failed==0)

def main()->int:
 p=argparse.ArgumentParser(description=__doc__)
 p.add_argument('--root',type=Path,required=True)
 p.add_argument('--out',type=Path,required=True)
 p.add_argument('--report',type=Path,required=True)
 p.add_argument('--limit',type=int,default=0)
 p.add_argument('--min-models',type=int,default=1)
 a=p.parse_args()
 try:
  result=materialize(a.root,a.out,a.limit)
  a.report.parent.mkdir(parents=True,exist_ok=True)
  a.report.write_text(json.dumps(result,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
  print(json.dumps({k:result[k] for k in ('source_archives','matched_members','failed_archives','extensions','complete')},ensure_ascii=False))
  return int(result['failed_archives']>0 or result['extensions'].get('.trmdl',0)<a.min_models)
 except Exception as e:
  print('TRINITY MATERIALIZE FAILED:',e,file=sys.stderr)
  return 1

if __name__=='__main__':raise SystemExit(main())
