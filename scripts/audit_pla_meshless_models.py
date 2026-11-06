#!/usr/bin/env python3
"""Prove intentionally meshless PLA .trmdl variants from the original byte stream.

Do not fabricate a glTF model for an FBS model table whose Meshes vector is
null or empty. The test checks native GFPak member SHA256 first.
"""
from __future__ import annotations
import argparse
from collections import Counter
import hashlib
import json
from pathlib import Path
import sys
from recover_pla_model_hashes import fnv64
from batch_pla_trinity_gltf import native_mesh_count

def sha(f:Path)->str:
 h=hashlib.sha256()
 with f.open('rb') as s:
  for chunk in iter(lambda:s.read(1<<20),b''):h.update(chunk)
 return h.hexdigest()

def audit(root:Path,model_names:list[str])->dict:
 manifest_map={p.parent.parent.name:p for p in root.rglob('_manifest.json')}
 entries=[]
 for name in model_names:
  gf=name+'.gfpak'
  archive=manifest_map.get(gf)
  record={'model':name,'status':'FAILED'}
  if not archive:
   record['reason']='missing original pack'
   entries.append(record);continue
  src=json.loads(archive.read_text(encoding='utf8'))
  native=f'bin/pokemon/{name[:6]}/{name}/mdl/{name}.trmdl'
  key=fnv64(native)
  member=next((m for m in src['members'] if m.get('full_path_hash','').upper()==key),None)
  if not member:
   record['reason']='unmatched Trinity model hash'
   entries.append(record);continue
  path=archive.parent/member['path']
  if not path.is_file() or path.stat().st_size!=int(member['decoded_size']) or sha(path)!=member['sha256']:
   record['reason']='native model SHA256/length does not match extractor manifest'
   entries.append(record);continue
  count=native_mesh_count(path)
  record.update(native_path=native,source_sha256=member['sha256'],
      source_bytes=path.stat().st_size,mesh_references=count,
      status='NATIVE_NO_MESHES' if count==0 else 'FAILED')
  if count!=0:record['reason']='unexpected mesh references or invalid layout'
  entries.append(record)
 return {'schema_version':1,'stage':'trmdl_no_geometry_audit',
   'expected_models':len(model_names),'counts':dict(Counter(x['status'] for x in entries)),
   'entries':entries,'complete':all(x['status']=='NATIVE_NO_MESHES' for x in entries)}

def main()->int:
 p=argparse.ArgumentParser(description=__doc__)
 p.add_argument('--root',type=Path,required=True)
 p.add_argument('--models',nargs='+',required=True)
 p.add_argument('--out',type=Path,required=True)
 a=p.parse_args()
 try:
  report=audit(a.root,a.models)
  a.out.parent.mkdir(parents=True,exist_ok=True)
  a.out.write_text(json.dumps(report,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
  print(json.dumps(report,ensure_ascii=False),flush=True)
  return int(not report['complete'])
 except Exception as e:
  print(f'NO_MESH_AUDIT_FAILED: {e}',file=sys.stderr)
  return 1
if __name__=='__main__':raise SystemExit(main())
