#!/usr/bin/env python3
"""Exact-hash resolve PLA TRACR motion resource names from 370 real native index files."""
from __future__ import annotations
import argparse,csv,json,re,sys
from collections import Counter
from pathlib import Path
PATTERN=re.compile(rb'(?<![A-Za-z0-9_./-])([A-Za-z0-9_-]+\.(?:tranm|tracm|traef))\x00')
def fnv64(name):
 h=0xCBF29CE484222645
 for b in name.encode('utf8'):h=((h^b)*0x100000001b3)&0xFFFFFFFFFFFFFFFF
 return f'{h:016X}'
def run(census:list[Path],motion:Path,out:Path)->dict:
 source={}
 for file in census:
  with file.open(newline='',encoding='utf8') as f:
   for r in csv.DictReader(f):
    key=(r['source_gfpak'],r['full_path_hash'].upper())
    if key in source:raise ValueError('duplicate original member hash')
    if r['status']!='VERIFIED':raise ValueError('unverified original member')
    source[key]=r
 tables=sorted(motion.rglob('*.tracr'))
 if len(tables)!=370:raise ValueError(f'expected 370 real native TRACR; got {len(tables)}')
 seen=set();result=[];duplicates=0;kind=Counter()
 for file in tables:
  rel=file.relative_to(motion).as_posix()
  if not rel.startswith('bin/pokemon/') or '/anm/' not in rel:
   raise ValueError('invalid TRACR native path '+rel)
  form=rel.split('/')[3]
  pack=f'bin/archive/pokemon/{form}.gfpak'
  prefix=rel.rsplit('/',1)[0]
  names=[m.group(1).decode('ascii') for m in PATTERN.finditer(file.read_bytes())]
  if not names:raise ValueError('TRACR unexpectedly empty '+rel)
  for name in names:
   path=prefix+'/'+name
   if path in seen:
    duplicates+=1
    continue
   seen.add(path)
   key=(pack,fnv64(path))
   src=source.get(key)
   if src is None:raise ValueError('native FNV64 mismatch '+path)
   ext=Path(name).suffix.lower();kind[ext]+=1
   result.append(dict(source_tracr=rel,source_gfpak=pack,native_path=path,
    native_path_hash=key[1],member_path=src['member_path'],
    member_sha256=src['sha256'],member_bytes=src['size_bytes'],format=ext,
    status='HASH_VERIFIED'))
 if len(result)!=51830 or duplicates!=1260:
  raise ValueError(f'unexpected native motion members or repeated refs: {len(result)} / {duplicates}')
 out.mkdir(parents=True,exist_ok=True)
 with (out/'motion_paths.csv').open('w',encoding='utf8',newline='') as f:
  w=csv.DictWriter(f,fieldnames=list(result[0]));w.writeheader();w.writerows(result)
 summary=dict(schema_version=1,game='PLA',version='1.1.1',stage='tracr_native_motion_census',
  native_animation_indexes=len(tables),unique_motion_resources=len(result),
  duplicate_native_table_references=duplicates,total_table_references=len(result)+duplicates,
  member_formats=dict(kind),verified_against='Original GFPak native SHA256/FNV64 member manifests',
  state='HASH_VERIFIED',complete=True)
 (out/'summary.json').write_text(json.dumps(summary,ensure_ascii=False,indent=2)+'\n',encoding='utf8')
 print(json.dumps(summary,ensure_ascii=False),flush=True)
 return summary
def main()->int:
 p=argparse.ArgumentParser(description=__doc__)
 p.add_argument('--census',nargs='+',type=Path,required=True)
 p.add_argument('--motion-root',type=Path,required=True)
 p.add_argument('--out',type=Path,required=True)
 a=p.parse_args()
 try:run(a.census,a.motion_root,a.out);return 0
 except (OSError,ValueError,UnicodeError,KeyError) as ex:
  print('MOTION_CENSUS_FAILED',ex,file=sys.stderr);return 1
if __name__=='__main__':raise SystemExit(main())
