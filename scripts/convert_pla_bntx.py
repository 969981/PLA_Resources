#!/usr/bin/env python3
"""Extract genuine BNTX texels to verified PNGs from already-extracted GFPak members.

Unsupported encodings remain PARTIAL rather than being copied or renamed.
"""
from __future__ import annotations
import argparse
from concurrent.futures import ProcessPoolExecutor, as_completed
from collections import Counter
import hashlib
import json
import os
from pathlib import Path
import shutil
import subprocess
import tempfile

def digest(path:Path)->str:
 h=hashlib.sha256()
 with path.open('rb') as f:
  for b in iter(lambda:f.read(1<<20),b''):h.update(b)
 return h.hexdigest()

def detect(root:Path)->list[Path]:
 result=[]
 for path in root.rglob('*'):
  if not path.is_file() or path.name.startswith('_') or path.stat().st_size<4:continue
  with path.open('rb') as f:
   if f.read(4)==b'BNTX':result.append(path)
 return sorted(result)

def work(args:tuple)->dict:
 path,root,dest,cli,dotnet,timeout,astcenc=args
 relative=path.relative_to(root).as_posix()
 final=dest/relative/'converted'
 record={'source_member':relative,'source_sha256':digest(path),'stage':'convert_bntx'}
 final.parent.mkdir(parents=True,exist_ok=True)
 with tempfile.TemporaryDirectory(prefix='.bntx-',dir=final.parent) as temp:
  staged=Path(temp)
  command=([dotnet,str(cli)] if cli.suffix.lower()=='.dll' else [str(cli)])+[str(path),str(staged)]+([str(astcenc)] if astcenc else [])
  try:
   cp=subprocess.run(command,capture_output=True,text=True,timeout=timeout,check=False)
   manifest=staged/'conversion.json'
   if not manifest.is_file(): raise RuntimeError(f'CLI exit {cp.returncode}: {cp.stderr[-300:]}')
   meta=json.loads(manifest.read_text(encoding='utf-8'))
   if meta['source_sha256']!=record['source_sha256']:
    raise RuntimeError('source hash mismatch')
   status=meta['state']
   if status not in ('VERIFIED','PARTIAL'):raise RuntimeError('unexpected native conversion state')
   for item in meta['textures']:
    if item['state']!='VERIFIED':continue
    name=item['output_name']
    dst=staged/name
    if name!=Path(name).name or not dst.is_file() or dst.stat().st_size<=0 or digest(dst)!=item['output_sha256']:
     raise RuntimeError('output PNG hash validation failed')
    if 'hdr_rgb32f_file' in item:
     hdr=item['hdr_rgb32f_file']
     hf=staged/hdr
     if hdr!=Path(hdr).name or not hf.is_file() or hf.stat().st_size!=int(item['width'])*int(item['height'])*12:
      raise RuntimeError('HDR float32 pixel payload missing or wrong size')
     if digest(hf)!=item['hdr_rgb32f_sha256']:
      raise RuntimeError('HDR float32 pixel SHA mismatch')
    if 'layers' in item:
     layers=item['layers']
     if len(layers)!=int(item['array_layers']):raise RuntimeError('incomplete array layers')
     for layer in layers:
      for namekey,hashkey in (('png_file','png_sha256'),('native_decoded_file','native_decoded_sha256')):
       fname=layer[namekey]
       sf=staged/fname
       if fname!=Path(fname).name or not sf.is_file() or digest(sf)!=layer[hashkey]:
        raise RuntimeError('layer output SHA mismatch: '+str(fname))
      raw=staged/layer['native_decoded_file']
      if raw.stat().st_size!=int(layer['native_decoded_bytes']):
       raise RuntimeError('layer high-precision raw byte count mismatch')
   if final.exists():shutil.rmtree(final)
   shutil.copytree(staged,final)
   record.update(state=status,textures=meta['texture_count'],
                 verified=meta['verified'],unsupported=meta['unsupported'],
                 native_formats=dict(Counter(str(x.get('native_format','Unknown')) for x in meta['textures'])),
                 unsupported_formats=dict(Counter(str(x.get('native_format','Unknown')) for x in meta['textures'] if x.get('state')!='VERIFIED')),
                 errors=[{'index':x.get('index'), 'format':x.get('native_format'),'reason':x.get('reason')} for x in meta['textures'] if x.get('state')!='VERIFIED'],
                 output=str(final))
  except (OSError,KeyError,ValueError,RuntimeError,subprocess.TimeoutExpired) as ex:
   record.update(state='FAILED',error=str(ex))
 return record

def main()->int:
 p=argparse.ArgumentParser(description=__doc__)
 p.add_argument('--root',type=Path,required=True)
 p.add_argument('--dest',type=Path,required=True)
 p.add_argument('--cli',type=Path,required=True)
 p.add_argument('--dotnet',default='dotnet')
 p.add_argument('--astcenc',type=Path)
 p.add_argument('--only-previous-partial',type=Path)
 p.add_argument('--expected-selected',type=int)
 p.add_argument('--jobs',type=int,default=min(os.cpu_count() or 2,3))
 p.add_argument('--limit',type=int,default=0)
 p.add_argument('--expected-bntx',type=int)
 p.add_argument('--timeout',type=int,default=300)
 p.add_argument('--ledger',type=Path,required=True)
 p.add_argument('--require-found',action='store_true')
 p.add_argument('--strict',action='store_true')
 a=p.parse_args()
 if a.jobs<1 or a.limit<0 or a.timeout<1:p.error('invalid jobs,limit,timeout')
 if not a.cli.is_file():p.error('compiled CLI absent')
 if a.astcenc and not a.astcenc.is_file():p.error('astcenc binary absent')
 files=detect(a.root.resolve())
 if a.expected_bntx is not None and len(files)!=a.expected_bntx:
  print(f'BNTX census mismatch: discovered={len(files)} expected={a.expected_bntx}')
  return 1
 if a.only_previous_partial:
  if not a.only_previous_partial.is_file():p.error('previous partial ledger missing')
  sources={json.loads(line)['source_member'].replace('\\','/') for line in a.only_previous_partial.read_text(encoding='utf-8').splitlines() if line.strip() and json.loads(line)['state']=='PARTIAL'}
  files=[p for p in files if p.relative_to(a.root.resolve()).as_posix() in sources]
  if len(files)!=len(sources):p.error(f'found {len(files)} original PARTIAL sources, expected {len(sources)}')
 if a.expected_selected is not None and len(files)!=a.expected_selected:
  p.error(f'selected count={len(files)} expected={a.expected_selected}')
 if a.limit: files=files[:a.limit]
 a.ledger.parent.mkdir(parents=True,exist_ok=True)
 states={}
 with a.ledger.open('w',encoding='utf-8') as f,ProcessPoolExecutor(max_workers=a.jobs) as pool:
  tasks=[(x,a.root.resolve(),a.dest.resolve(),a.cli.resolve(),a.dotnet,a.timeout,a.astcenc.resolve() if a.astcenc else None) for x in files]
  future={pool.submit(work,t):t[0] for t in tasks}
  for item in as_completed(future):
   try:rec=item.result()
   except Exception as ex:rec={'source_member':str(future[item]),'state':'FAILED','error':str(ex)}
   f.write(json.dumps(rec,ensure_ascii=False)+'\n');f.flush()
   states[rec['state']]=states.get(rec['state'],0)+1
   print(rec['state'],rec['source_member'],flush=True)
 print(json.dumps({'detected_bntx':len(files),'states':states},ensure_ascii=False))
 return int((a.require_found and not files) or (a.strict and any(k!='VERIFIED' for k in states)))

if __name__=='__main__':raise SystemExit(main())
