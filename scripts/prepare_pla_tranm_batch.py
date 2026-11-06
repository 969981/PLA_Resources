#!/usr/bin/env python3
"""Build byte-verified PLA TRANM batch entries with their matching native TRSKL.

Motion paths come from the 51,830 FNV64-verified resource index. No guessed
motion names or fallback skeletons are accepted.
"""
from __future__ import annotations
import argparse,csv,hashlib,json
from collections import Counter
from pathlib import Path
from recover_pla_model_hashes import fnv64

def digest(path:Path)->str:
 h=hashlib.sha256()
 with path.open('rb') as f:
  for b in iter(lambda:f.read(1<<20),b''):h.update(b)
 return h.hexdigest()

def prepare(root:Path,index:Path,out:Path)->dict:
 packs={}
 for mp in root.rglob('_manifest.json'):
  if mp.parent.name!='extracted':continue
  rel=mp.parent.parent.relative_to(root).as_posix()
  if rel in packs:raise ValueError('duplicate native pack '+rel)
  data=json.loads(mp.read_text(encoding='utf8'))
  packs[rel]=(mp.parent,{m['full_path_hash'].upper():m for m in data['members']})
 rows=[]
 with index.open(newline='',encoding='utf8') as f:
  for item in csv.DictReader(f):
   if item['format']=='.tranm' and item['source_gfpak'] in packs:rows.append(item)
 status=Counter();entries=[]
 cache={}
 for item in rows:
  pack=item['source_gfpak']
  base,members=packs[pack]
  name=Path(pack).stem
  motion=members.get(item['native_path_hash'].upper())
  record={'native_path':item['native_path'],'source_pack':pack,'state':'SOURCE_MISSING'}
  if not motion:
   record['reason']='native TRANM FNV64 absent';status[record['state']]+=1;entries.append(record);continue
  raw=base/motion['path']
  if not raw.is_file() or raw.stat().st_size!=int(motion['decoded_size']) or digest(raw)!=motion['sha256']:
   record.update(state='SOURCE_HASH_MISMATCH',reason='original member mismatch')
   status[record['state']]+=1;entries.append(record);continue
  skeleton_key=fnv64(f'bin/pokemon/{name[:6]}/{name}/mdl/{name}.trskl')
  skl=members.get(skeleton_key)
  if skl is None:
   record.update(state='SKELETON_NOT_FOUND',source_sha256=motion['sha256'],
      motion_path=str(raw.resolve()),source_bytes=int(motion['decoded_size']))
   status[record['state']]+=1;entries.append(record);continue
  sklpath=base/skl['path']
  skey=sklpath.as_posix()
  if skey not in cache:
   cache[skey]=(sklpath.is_file() and sklpath.stat().st_size==int(skl['decoded_size'])
    and digest(sklpath)==skl['sha256'])
  if not cache[skey]:
   record.update(state='SKELETON_HASH_MISMATCH')
   status[record['state']]+=1;entries.append(record);continue
  record.update(state='READY',source_sha256=motion['sha256'],
     motion_path=str(raw.resolve()),skeleton_path=str(sklpath.resolve()),
     skeleton_sha256=skl['sha256'],source_bytes=int(motion['decoded_size']))
  status[record['state']]+=1;entries.append(record)
 out.parent.mkdir(parents=True,exist_ok=True)
 with out.open('w',encoding='utf8') as f:
  for e in entries:f.write(json.dumps(e,ensure_ascii=False)+'\n')
 report=dict(schema_version=1,stage='PLA_TRANM_SKELETON_PREFLIGHT',
  source_packs=len(packs),expected_in_shard=len(rows),states=dict(status),
  unique_skeletons=len(cache),ledger=str(out))
 print(json.dumps({k:report[k] for k in ('source_packs','expected_in_shard','states','unique_skeletons')},ensure_ascii=False),flush=True)
 return report

def main()->int:
 p=argparse.ArgumentParser(description=__doc__)
 p.add_argument('--root',type=Path,required=True)
 p.add_argument('--index',type=Path,required=True)
 p.add_argument('--out',type=Path,required=True)
 p.add_argument('--expected',type=int)
 p.add_argument('--require-ready',action='store_true')
 a=p.parse_args()
 try:
  result=prepare(a.root,a.index,a.out)
  if a.expected is not None and result['expected_in_shard']!=a.expected:
   raise ValueError(f"expected {a.expected}, actual {result['expected_in_shard']}")
  if a.require_ready and result['states'].get('READY',0)!=result['expected_in_shard']:
   raise ValueError('some native motion members could not be paired to original skeleton')
  return 0
 except Exception as e:
  print('TRANM_PREFLIGHT_FAILED:',e,flush=True)
  return 1
if __name__=='__main__':raise SystemExit(main())
