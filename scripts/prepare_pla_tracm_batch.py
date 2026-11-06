#!/usr/bin/env python3
"""Preflight SHA256 and FNV64 for all PLA TRACM material/visibility/blendshape tracks."""
from __future__ import annotations
import argparse,csv,hashlib,json
from pathlib import Path
from collections import Counter

def sha(path):
 h=hashlib.sha256()
 with path.open('rb') as f:
  for b in iter(lambda:f.read(1<<20),b''):h.update(b)
 return h.hexdigest()
def run(root,index,out,expected):
 meta={}
 for file in root.rglob('_manifest.json'):
  if file.parent.name!='extracted':continue
  name=file.parent.parent.relative_to(root).as_posix()
  if name in meta:raise ValueError('duplicate native archive '+name)
  entries=json.loads(file.read_text(encoding='utf8'))['members']
  meta[name]=(file.parent,{m['full_path_hash'].upper():m for m in entries})
 rows=[]
 with index.open(newline='',encoding='utf8') as f:
  for item in csv.DictReader(f):
   if item['format']=='.tracm' and item['source_gfpak'] in meta:rows.append(item)
 if len(rows)!=expected:raise ValueError(f'original archive TRACM count {len(rows)} expected={expected}')
 seen=set();states=Counter();out.parent.mkdir(parents=True,exist_ok=True)
 with out.open('w',encoding='utf8') as f:
  for item in rows:
   path=item['native_path']
   if path in seen:raise ValueError('duplicate native animation '+path)
   seen.add(path)
   base,mapping=meta[item['source_gfpak']]
   native=mapping.get(item['native_path_hash'])
   record=dict(native_path=path,source_archive=item['source_gfpak'],state='FAILED')
   if native:
    file=base/native['path']
    if file.is_file() and file.stat().st_size==int(native['decoded_size']) and sha(file)==native['sha256']:
     record.update(state='READY',path=str(file.resolve()),sha256=native['sha256'])
   states[record['state']]+=1
   f.write(json.dumps(record)+'\n')
 summary=dict(source_archives=len(meta),native_tracm=len(rows),states=dict(states))
 print(json.dumps(summary),flush=True)
 return summary
def main():
 p=argparse.ArgumentParser(description=__doc__)
 p.add_argument('--root',type=Path,required=True)
 p.add_argument('--index',type=Path,required=True)
 p.add_argument('--out',type=Path,required=True)
 p.add_argument('--expected',type=int,required=True)
 a=p.parse_args()
 try:
  r=run(a.root,a.index,a.out,a.expected)
  return int(r['states'].get('READY',0)!=a.expected)
 except Exception as e:
  print('TRACM_SOURCE_PREFLIGHT_FAILED:',e,flush=True)
  return 1
if __name__=='__main__':raise SystemExit(main())
