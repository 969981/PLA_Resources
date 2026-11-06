#!/usr/bin/env python3
"""Recover PLA Pokemon model members by exact 64-bit native FNV1a path hashes.

Only matched hashes are named; no guessed filename is promoted as evidence.
"""
from __future__ import annotations
import argparse
from collections import Counter
import csv
import json
from pathlib import Path
import re
import sys

MASK=(1<<64)-1
REGEX=re.compile(r'^bin/archive/pokemon/(pm[0-9]{4}_[0-9]{2}_[0-9]{2})\.gfpak$')

def fnv64(text:str)->str:
 h=0xCBF29CE484222645
 for ch in text:
  h=((h^ord(ch))*0x100000001b3)&MASK
 return f'{h:016X}'

def expected_candidates(archive:str)->dict[str,str]:
 m=REGEX.fullmatch(archive)
 if m is None:return {}
 stem=m.group(1)
 base=f'bin/pokemon/{stem[:6]}/{stem}/'
 mdl=base+'mdl/'
 paths=[base+stem+'.trpokecfg']
 paths += [mdl+stem+ext for ext in (
  '.trmdl','.trmmt','.trmsh','.trmtr','.trskl','.trmbf')]
 for i in range(1,5):
  paths += [mdl+stem+f'_lod{i}.trmsh',mdl+stem+f'_lod{i}.trmbf']
 # Additional names are candidates until native FNV hash comparison succeeds.
 return {fnv64(p):p for p in paths}

def recover(csv_files:list[Path],out:Path)->dict:
 if len(csv_files)<1:raise ValueError('need source CSV files')
 out.mkdir(parents=True,exist_ok=True)
 matched=[]
 count=Counter()
 paths_seen=set()
 pokemon_archives=set()
 for source_csv in csv_files:
  with source_csv.open(encoding='utf-8',newline='') as f:
   reader=csv.DictReader(f)
   required={'source_gfpak','member_path','full_path_hash','format','status'}
   if not required.issubset(reader.fieldnames or []):raise ValueError(f'missing columns: {source_csv}')
   for row in reader:
    archive=row['source_gfpak'].replace('\\','/')
    if not REGEX.fullmatch(archive):continue
    pokemon_archives.add(archive)
    if row['status']!='VERIFIED':raise ValueError(f'unverified original member: {archive}')
    cand=expected_candidates(archive)
    key=row['full_path_hash'].upper()
    if key not in cand:continue
    name=cand[key]
    id=(archive,row['member_path'])
    if id in paths_seen:raise ValueError(f'duplicate recovered member: {id}')
    paths_seen.add(id)
    ext=Path(name).suffix.lower()
    matched.append({'archive':archive,'original_member':row['member_path'],
                    'native_path':name,'native_hash':key,'extension':ext,
                    'sha256':row.get('sha256',''),'original_format_guess':row['format'],
                    'evidence':'CONFIRMED_FNV64_PATH_HASH'})
    count[ext]+=1
 with (out/'resolved_paths.csv').open('w',newline='',encoding='utf-8') as f:
  writer=csv.DictWriter(f,fieldnames=['archive','original_member','native_path',
     'native_hash','extension','sha256','original_format_guess','evidence'])
  writer.writeheader()
  writer.writerows(sorted(matched,key=lambda x:(x['archive'],x['native_member'] if 'native_member' in x else x['native_path'])))
 summary={'schema_version':1,'game':'PLA','version':'1.1.1',
  'method':'exact FNV1a64 match against pkNX native model path templates',
  'pokemon_archives':len(pokemon_archives),'confirmed_member_paths':len(matched),
  'extensions':dict(sorted(count.items())),'state':'CONFIRMED_HASH',
  'warning':'Only matched paths are confirmed; animation names outside templates remain unknown'}
 (out/'summary.json').write_text(json.dumps(summary,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
 print(json.dumps(summary,ensure_ascii=False))
 return summary

def main()->int:
 p=argparse.ArgumentParser(description=__doc__)
 p.add_argument('--csv',type=Path,nargs='+',required=True)
 p.add_argument('--out',type=Path,required=True)
 p.add_argument('--min-confirmed',type=int,default=1)
 a=p.parse_args()
 try:s=recover(a.csv,a.out)
 except Exception as e:print(str(e),file=sys.stderr);return 1
 return int(s['confirmed_member_paths']<a.min_confirmed)

if __name__=='__main__':raise SystemExit(main())
