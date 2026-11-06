#!/usr/bin/env python3
"""Byte-backed census of extracted PLA GFPak members. Unknown != converted."""
from __future__ import annotations
import argparse
from collections import Counter
from concurrent.futures import ThreadPoolExecutor
import csv
import hashlib
import json
from pathlib import Path, PurePosixPath
import struct
import sys

SIGNATURES = (
 (b'GFLXPACK','gfpak','container'), (b'BNTX','bntx','texture'),
 (b'BNSH','bnsh','shader'), (b'FRES','bfres','model'),
 (b'SARC','sarc','container'), (b'AHTB','ahtb','table'),
 (b'BFSAR','bfsar','audio'), (b'FSAR','fsar','audio'),
 (b'FWAV','fwav','audio'), (b'FSTM','fstm','audio'),
 (b'RIFF','riff','audio'), (b'RIFX','rifx','audio'),
 (b'BKHD','wwise_bnk','audio'), (b'AKPK','wwise_pck','audio'),
 (b'DDS ','dds','texture'), (b'\x89PNG\r\n\x1a\n','png','texture'),
 (b'\xabKTX 11\xbb\r\n\x1a\n','ktx1','texture'),
 (b'\xabKTX 20\xbb\r\n\x1a\n','ktx2','texture'),
 (b'\x7fELF','elf','exefs'),
)
HEADERS=['source_gfpak','archive_sha256','member_path','index','depth','full_path_hash',
 'folder_hashes','filename_hashes','compression','size_bytes','sha256',
 'format','family','confidence','magic_hex','flatbuffer_candidate',
 'nested_gfpak','status','error']


def sha256_file(path: Path) -> str:
 h=hashlib.sha256()
 with path.open('rb') as stream:
  for block in iter(lambda:stream.read(1<<20), b''):
   h.update(block)
 return h.hexdigest()


def possible_flatbuffer(data: bytes, length: int) -> bool:
 if length<12 or len(data)<12: return False
 root=struct.unpack_from('<I',data,0)[0]
 if root<4 or root+4>min(len(data),length): return False
 back=struct.unpack_from('<i',data,root)[0]
 if back==0: return False
 vt=root-back
 if vt<4 or vt+4>min(len(data),length): return False
 vtlen,objlen=struct.unpack_from('<HH',data,vt)
 return vtlen>=4 and vtlen%2==0 and objlen>=4 and vt+vtlen<=length and root+objlen<=length


def classify(head: bytes, size: int) -> tuple[str,str,str,bool]:
 for magic,fmt,family in SIGNATURES:
  if head.startswith(magic): return fmt,family,'CONFIRMED_MAGIC',False
 if head.startswith(b'sarc'): return 'sarc','container','CONFIRMED_MAGIC',False
 if len(head)>=8 and head[4:8]==b'BFBS':
  return 'bfbs','schema','CONFIRMED_MAGIC',True
 if possible_flatbuffer(head,size):
  return 'flatbuffer_candidate','structured','CANDIDATE',True
 return 'unknown','unknown','UNKNOWN',False


def possible_flatbuffer_file(path:Path,size:int)->bool:
 # FlatBuffers permits signed offsets to a shared vtable after the object.
 # Read vtable by position, not just in the first 64 KiB of a large member.
 if size<12:return False
 try:
  with path.open('rb') as stream:
   raw=stream.read(4)
   if len(raw)!=4:return False
   root=struct.unpack('<I',raw)[0]
   if root<4 or root+4>size:return False
   stream.seek(root)
   back=struct.unpack('<i',stream.read(4))[0]
   if back==0:return False
   vt=root-back
   if vt<4 or vt+4>size:return False
   stream.seek(vt)
   vtlen,objlen=struct.unpack('<HH',stream.read(4))
   return 4<=vtlen<=2048 and vtlen%2==0 and objlen>=4 and vt+vtlen<=size and root+objlen<=size
 except (OSError,ValueError,struct.error):
  return False


def safe_relative(path: str) -> bool:
 return bool(path) and not path.startswith('/') and '\\' not in path and ':' not in path and all(
  p not in ('.','..') for p in PurePosixPath(path).parts)


def examine(arg:tuple) -> dict:
 base,m,archive,archive_sha,verify=arg
 rel=m.get('path','')
 row=dict(source_gfpak=archive, archive_sha256=archive_sha,member_path=rel,
  index=m.get('index',''),depth=m.get('depth',''),
  full_path_hash=m.get('full_path_hash',''),
  folder_hashes='|'.join(str(x.get('folder_hash','')) for x in m.get('folder_mappings',[])),
  filename_hashes='|'.join(str(x.get('filename_hash','')) for x in m.get('folder_mappings',[])),
  compression=m.get('compression',''),size_bytes=m.get('decoded_size',''),
  sha256=m.get('sha256',''),format='',family='',confidence='',magic_hex='',
  flatbuffer_candidate='',nested_gfpak=m.get('nested_gfpak',False),status='FAILED',error='')
 try:
  if not safe_relative(rel): raise ValueError('unsafe member path')
  file=(base/rel).resolve()
  if not file.is_relative_to(base.resolve()) or not file.is_file():
   raise ValueError('missing member or path traversal')
  size=file.stat().st_size
  if size!=int(m['decoded_size']): raise ValueError('size mismatch')
  with file.open('rb') as stream: head=stream.read(65536)
  if verify and sha256_file(file)!=str(m['sha256']).lower():
   raise ValueError('SHA-256 mismatch')
  if not verify and head[:8].hex().upper()!=str(m.get('magic_hex','')).upper():
   raise ValueError('magic differs from native manifest')
  fmt,family,confidence,flat=classify(head,size)
  if fmt=='unknown' and possible_flatbuffer_file(file,size):
   fmt,family,confidence,flat=('flatbuffer_candidate','structured','CANDIDATE',True)
  if bool(m.get('nested_gfpak',False))!=(fmt=='gfpak'):
   raise ValueError('nested magic mismatch')
  row.update(format=fmt,family=family,confidence=confidence,
   flatbuffer_candidate=flat,magic_hex=head[:8].hex().upper(),status='VERIFIED')
 except (OSError,ValueError,KeyError) as e: row['error']=str(e)
 return row


def census(root: Path,out:Path,jobs:int=4,expected_packs:int|None=None,verify:bool=True)->dict:
 manifests=sorted(root.rglob('_manifest.json'))
 if not manifests: raise ValueError('no extracted manifests')
 if expected_packs is not None and len(manifests)!=expected_packs:
  raise ValueError(f'manifest count={len(manifests)} expected={expected_packs}')
 work=[]
 archives=set()
 for src in manifests:
  base=src.parent
  if base.name!='extracted' or base.parent.suffix.lower()!='.gfpak':
   raise ValueError(f'bad native output path: {src}')
  rel=base.parent.relative_to(root).as_posix()
  if rel.casefold() in archives: raise ValueError(f'duplicate archive: {rel}')
  archives.add(rel.casefold())
  meta=json.loads(src.read_text(encoding='utf-8'))
  members=meta.get('members')
  if meta.get('schema_version')!=1 or meta.get('parser')!='pkNX.Containers.GFPack':
   raise ValueError(f'unsupported native extractor manifest: {src}')
  if not isinstance(members,list) or not members or meta.get('extracted_count')!=len(members):
   raise ValueError(f'bad member count: {src}')
  names=[m.get('path','').casefold() for m in members]
  if len(names)!=len(set(names)): raise ValueError(f'duplicate member path: {src}')
  for m in members: work.append((base,m,rel,meta.get('source_sha256',''),verify))
 out.mkdir(parents=True,exist_ok=True)
 formats=Counter()
 families=Counter()
 states=Counter()
 errors=[]
 unknown=[]
 size=0
 with (out/'members.csv').open('w',encoding='utf-8',newline='') as fh:
  writer=csv.DictWriter(fh,fieldnames=HEADERS)
  writer.writeheader()
  with ThreadPoolExecutor(max_workers=jobs) as pool:
   for row in pool.map(examine,work):
    writer.writerow(row)
    states[row['status']]+=1
    if row['status']=='VERIFIED':
     formats[row['format']]+=1
     families[row['family']]+=1
     size+=int(row['size_bytes'])
     if row['format']=='unknown' and len(unknown)<50:
      unknown.append({k:row[k] for k in ('source_gfpak','member_path','size_bytes','magic_hex')})
    else:
     errors.append({k:row[k] for k in ('source_gfpak','member_path','error')})
 result=dict(schema_version=1,stage='member_format_census',source='pkNX verified member bytes',
  original_archives=len(manifests),expected_archives=expected_packs,
  expected_members=len(work),recorded_members=sum(states.values()),
  states=dict(states),formats=dict(sorted(formats.items())),
  families=dict(sorted(families.items())),decoded_member_bytes=size,
  unknown_examples=unknown,errors=errors,sha256_verified=verify,
  complete=not errors and sum(states.values())==len(work))
 (out/'census.json').write_text(json.dumps(result,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
 (out/'failures.jsonl').write_text(''.join(json.dumps(e,ensure_ascii=False)+'\n' for e in errors),encoding='utf-8')
 print(json.dumps({k:result[k] for k in ('original_archives','expected_members','states','formats','complete')},ensure_ascii=False),flush=True)
 return result


def main()->int:
 p=argparse.ArgumentParser(description=__doc__)
 p.add_argument('--root',required=True,type=Path)
 p.add_argument('--out',required=True,type=Path)
 p.add_argument('--expected-packs',type=int)
 p.add_argument('--jobs',type=int,default=4)
 p.add_argument('--skip-sha256',action='store_true')
 p.add_argument('--strict',action='store_true')
 a=p.parse_args()
 if a.jobs<1: p.error('--jobs >= 1')
 try: r=census(a.root,a.out,a.jobs,a.expected_packs,not a.skip_sha256)
 except Exception as ex:
  print(f'CENSUS FAILED: {ex}',file=sys.stderr)
  return 1
 return int(a.strict and not r['complete'])

if __name__=='__main__': raise SystemExit(main())
