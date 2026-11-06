#!/usr/bin/env python3
"""Verify and persist one native GFPak shard as uncompressed small Git files.

Each shard is written to an independent data branch to avoid competing pushes
and to preserve the original raw ROM tree and code branches unchanged.
"""
from __future__ import annotations
import argparse
import hashlib
import json
import os
from pathlib import Path, PurePosixPath
import shutil
import subprocess
import sys

EXPECTED={
 0:(159,21110,1789093988),
 1:(177,26985,2000771795),
 2:(170,22124,1557821192),
 3:(172,32233,1983382432),
}

def sha(path:Path)->str:
 h=hashlib.sha256()
 with path.open('rb') as f:
  for block in iter(lambda:f.read(1<<20),b''):h.update(block)
 return h.hexdigest()

def run(*cmd:str,cwd:Path,quiet:bool=False)->str:
 completed=subprocess.run(cmd,cwd=cwd,check=True,text=True,
                          stdout=subprocess.PIPE if quiet else None)
 return completed.stdout.strip() if quiet else ''

def source_path_safe(value:str)->bool:
 p=PurePosixPath(value)
 return bool(value) and not value.startswith('/') and '\\' not in value and ':' not in value and all(
  x not in ('.','..') for x in p.parts)

def audit(source:Path,shard:int)->dict:
 expected_packs,expected_files,expected_bytes=EXPECTED[shard]
 manifests=sorted(source.rglob('_manifest.json'))
 if len(manifests)!=expected_packs:
  raise ValueError(f'expected {expected_packs} native packs, got {len(manifests)}')
 seen=set()
 count=total=largest=0
 for manifest in manifests:
  pack=manifest.parent.parent.relative_to(source).as_posix()
  if not source_path_safe(pack) or not pack.lower().endswith('.gfpak'):
   raise ValueError(f'invalid native archive: {pack}')
  data=json.loads(manifest.read_text(encoding='utf-8'))
  if data['parser']!='pkNX.Containers.GFPack' or data['schema_version']!=1:
   raise ValueError(f'unrecognized native parser: {manifest}')
  if data['extracted_count']!=len(data['members']):raise ValueError(f'incomplete pack: {pack}')
  for m in data['members']:
   rel=m['path']
   if not source_path_safe(rel):raise ValueError(f'unsafe member path: {rel}')
   key=(pack+'/'+rel).casefold()
   if key in seen:raise ValueError(f'duplicate member: {key}')
   seen.add(key)
   file=manifest.parent/rel
   n=int(m['decoded_size'])
   if not file.is_file() or file.stat().st_size!=n or sha(file)!=m['sha256'].lower():
    raise ValueError(f'member bytes mismatch: {file}')
   if n>90_000_000:
    raise ValueError(f'single member too large for direct Git (>90MB): {file}')
   largest=max(largest,n)
   count+=1;total+=n
 if (count,total)!=(expected_files,expected_bytes):
  raise ValueError(f'coverage differs: ({count},{total}) != ({expected_files},{expected_bytes})')
 return dict(schema_version=1,shard=shard,archive_count=len(manifests),
  verified_member_count=count,verified_member_bytes=total,largest_file_bytes=largest,
  native_source_run=42160235620,state='VERIFIED',
  warning='Per-member hashes are derived from the source game container; independently trusted original ROM SHA is unavailable.')

def main()->int:
 p=argparse.ArgumentParser(description=__doc__)
 p.add_argument('--source',required=True,type=Path)
 p.add_argument('--workdir',required=True,type=Path)
 p.add_argument('--shard',required=True,type=int,choices=range(4))
 p.add_argument('--repo',default='969981/PLA_Resources')
 p.add_argument('--batch-mib',type=int,default=256)
 p.add_argument('--max-files-per-commit',type=int,default=6000)
 p.add_argument('--branch-prefix',default='data/pla-v1.1.1-native-shard-')
 p.add_argument('--dry-run',action='store_true')
 a=p.parse_args()
 if a.batch_mib<32 or a.batch_mib>512 or a.max_files_per_commit<1:
  p.error('batch size must be 32–512 MiB and file count must be positive')
 src=a.source.resolve()
 if not src.is_dir():p.error('source directory not found')
 try:
  audit_result=audit(src,a.shard)
  print('SOURCE_AUDIT:',json.dumps(audit_result),flush=True)
  if a.dry_run:return 0
  token=os.environ.get('GITHUB_TOKEN')
  if not token:raise ValueError('GITHUB_TOKEN required to push verified files')
  branch=a.branch_prefix+str(a.shard)
  repo=a.workdir.resolve()
  if repo.exists():raise ValueError(f'working Git directory already exists: {repo}')
  repo.mkdir(parents=True)
  run('git','init','-b',branch,str(repo),cwd=repo)
  run('git','config','user.name','github-actions[bot]',cwd=repo)
  run('git','config','user.email','41898282+github-actions[bot]@users.noreply.github.com',cwd=repo)
  # Avoid displaying the token in command logs, but let subprocess inherit it.
  remote=f'https://x-access-token:{token}@github.com/{a.repo}.git'
  run('git','remote','add','origin',remote,cwd=repo)
  existing=run('git','ls-remote','--heads','origin','refs/heads/'+branch,cwd=repo,quiet=True)
  if existing:raise ValueError(f'remote data branch already exists; refusing to overwrite {branch}')
  target=repo/'Unpack'/'v1.1.1'/'romfs'
  target.mkdir(parents=True)
  # Move the tree on the same runner filesystem rather than copying ~2 GB.
  if (src/'bin').is_dir():shutil.move(str(src/'bin'),str(target/'bin'))
  else:raise ValueError('GFPak native artifact does not contain bin/ tree')
  packs=sorted((target/'bin'/'archive').rglob('*.gfpak'))
  packs=[x for x in packs if x.is_dir() and (x/'extracted'/'_manifest.json').is_file()]
  if len(packs)!=audit_result['archive_count']:
   raise ValueError('archive enumeration changed while staging')
  count=bytes_staged=push_count=0
  byte_limit=a.batch_mib*1024*1024
  files_limit=a.max_files_per_commit
  def flush():
   nonlocal count,bytes_staged,push_count
   if count==0:return
   run('git','commit','-m',f'data(PLA): shard {a.shard} native members batch {push_count+1} ({count} files)',cwd=repo)
   run('git','-c','http.postBuffer=524288000','push','origin',
       f'HEAD:refs/heads/{branch}',cwd=repo)
   push_count+=1
   print(f'PUSH_OK shard={a.shard} batch={push_count} files={count} input_bytes={bytes_staged}',flush=True)
   count=bytes_staged=0
  for pack in packs:
   files=[x for x in pack.rglob('*') if x.is_file()]
   sz=sum(x.stat().st_size for x in files)
   if count and (bytes_staged+sz>byte_limit or count+len(files)>files_limit):flush()
   rel=pack.relative_to(repo).as_posix()
   run('git','add','-f','--',rel,cwd=repo)
   count+=len(files);bytes_staged+=sz
  # Add independent compact audit, in the same data branch.
  index=target.parent/'_index'/f'native-shard-{a.shard}-receipt.json'
  index.parent.mkdir(parents=True,exist_ok=True)
  index.write_text(json.dumps(audit_result,indent=2)+'\n',encoding='utf-8')
  if count and bytes_staged>byte_limit:flush()
  run('git','add','-f','--',index.relative_to(repo).as_posix(),cwd=repo)
  count+=1;bytes_staged+=index.stat().st_size
  flush()
  print('SUCCESS:',json.dumps(dict(branch=branch,batches=push_count,**audit_result)),flush=True)
  return 0
 except (OSError,ValueError,KeyError,subprocess.CalledProcessError) as ex:
  print(f'PERSIST_FAILED: {ex}',file=sys.stderr,flush=True)
  return 1

if __name__=='__main__':raise SystemExit(main())
