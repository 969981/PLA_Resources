#!/usr/bin/env python3
"""Batch convert hash-confirmed PLA Trinity models using the verified SV R3 glTF bridge.

The exporter always verifies the GLTF structure, binary buffers and skin.
Missing external textures and animations are recorded, not hidden.
"""
from __future__ import annotations
import argparse
from collections import Counter
from concurrent.futures import ProcessPoolExecutor,as_completed
import json
import hashlib
import struct
from pathlib import Path
import subprocess
import os
import sys

def native_mesh_count(source:Path)->int|None:
 """Read TRMDL field 1 vector count, following the actual FlatSharp schema.
 Return None for invalid/unknown layout rather than claiming empty geometry.
 """
 try:
  b=source.read_bytes()
  if len(b)<16:return None
  root=struct.unpack_from('<I',b,0)[0]
  if root<4 or root+4>len(b):return None
  delta=struct.unpack_from('<i',b,root)[0]
  if not delta:return None
  vt=root-delta
  if vt<4 or vt+8>len(b):return None
  vtlen=struct.unpack_from('<H',b,vt)[0]
  if vtlen<8 or vtlen>256 or vt+vtlen>len(b):return None
  slot=vt+4+2 # TRMDL.FlatBufferItem(1) = Meshes
  off=struct.unpack_from('<H',b,slot)[0]
  if not off:return 0
  field=root+off
  if field<0 or field+4>len(b):return None
  vec=field+struct.unpack_from('<I',b,field)[0]
  if vec<0 or vec+4>len(b):return None
  count=struct.unpack_from('<I',b,vec)[0]
  return int(count) if count<10000 else None
 except (OSError,ValueError,struct.error):return None

def convert(arg:tuple)->dict:
 model,root,out,exe,timeout=arg
 rel=model.relative_to(root)
 target=out/rel.with_suffix('.gltf')
 target.parent.mkdir(parents=True,exist_ok=True)
 cmd=(['dotnet',str(exe)] if exe.suffix.lower()=='.dll' else [str(exe)])+[str(model),str(target)]
 row={'original_native_model':rel.as_posix(),'state':'FAILED'}
 try:
  p=subprocess.run(cmd,capture_output=True,text=True,timeout=timeout,check=False)
  if p.returncode:
   count=native_mesh_count(model)
   if count==0:
    row.update(state='NATIVE_NO_MESHES',native_mesh_ref_count=0,
               source_sha256=hashlib.sha256(model.read_bytes()).hexdigest(),
               evidence='TRMDL FlatBuffer field 1 is empty; no glTF geometry fabricated')
    return row
   raise RuntimeError(f'Native exporter exit {p.returncode}: {p.stderr[-1800:]}')
  if not target.is_file():raise ValueError('missing glTF output')
  data=json.loads(target.read_text(encoding='utf-8'))
  if data.get('asset',{}).get('version')!='2.0':raise ValueError('not glTF 2')
  meshes=data.get('meshes',[])
  skins=data.get('skins',[])
  materials=data.get('materials',[])
  buffers=data.get('buffers',[])
  if not meshes or not skins or not buffers:raise ValueError('missing geometry, skin or buffers')
  for b in buffers:
   uri=b.get('uri','')
   if not uri or '..' in Path(uri).parts:raise ValueError('invalid GLTF binary URI')
   bf=target.parent/uri
   if not bf.is_file() or bf.stat().st_size!=int(b['byteLength']):
    raise ValueError(f'glTF binary missing or wrong size {uri}')
  images=data.get('images',[])
  unresolved=[x.get('uri','') for x in images if 'uri' in x and not (target.parent/x['uri']).is_file()]
  row.update(state='VERIFIED_GEOMETRY',meshes=len(meshes),skins=len(skins),
   bones=sum(len(x.get('joints',[])) for x in skins),materials=len(materials),
   output=target.relative_to(out).as_posix(),unresolved_texture_paths=unresolved,
   animation_tracks=len(data.get('animations',[])))
 except (OSError,ValueError,RuntimeError,subprocess.TimeoutExpired,json.JSONDecodeError) as e:
  row['error']=str(e)
 return row

def main()->int:
 p=argparse.ArgumentParser(description=__doc__)
 p.add_argument('--root',type=Path,required=True)
 p.add_argument('--out',type=Path,required=True)
 p.add_argument('--exe',type=Path,required=True)
 p.add_argument('--ledger',type=Path,required=True)
 p.add_argument('--expected-models',type=int,required=True)
 p.add_argument('--jobs',type=int,default=min(os.cpu_count() or 2,3))
 p.add_argument('--timeout',type=int,default=180)
 p.add_argument('--strict',action='store_true')
 a=p.parse_args()
 if not a.exe.is_file() or a.jobs<1:p.error('invalid exporter or worker count')
 models=sorted(a.root.resolve().rglob('*.trmdl'))
 if len(models)!=a.expected_models:
  print(f'GLTF MODEL COVERAGE MISMATCH expected={a.expected_models} found={len(models)}',file=sys.stderr)
  return 1
 a.ledger.parent.mkdir(parents=True,exist_ok=True)
 states=Counter()
 with a.ledger.open('w',encoding='utf-8') as out,ProcessPoolExecutor(max_workers=a.jobs) as pool:
  args=[(f,a.root.resolve(),a.out.resolve(),a.exe.resolve(),a.timeout) for f in models]
  running=[pool.submit(convert,x) for x in args]
  for f in as_completed(running):
   rec=f.result()
   states[rec['state']]+=1
   print(rec['state'],rec['original_native_model'],flush=True)
   out.write(json.dumps(rec,ensure_ascii=False)+'\n')
 summary={'expected_models':len(models),'states':dict(states),
  'geometry_complete':states.get('VERIFIED_GEOMETRY',0)==len(models),
  'source_coverage_complete':states.get('VERIFIED_GEOMETRY',0)+states.get('NATIVE_NO_MESHES',0)==len(models)}
 print(json.dumps(summary),flush=True)
 return int(a.strict and not summary['source_coverage_complete'])
if __name__=='__main__':raise SystemExit(main())
