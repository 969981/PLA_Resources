#!/usr/bin/env python3
"""Verify the 4 remote Git data branches without downloading 7.33GB again."""
from __future__ import annotations
import argparse
import json
from pathlib import Path
import subprocess

EXPECTED={0:(159,21110,1789093988),1:(177,26985,2000771795),2:(170,22124,1557821192),3:(172,32233,1983382432)}
def audit(root:Path,shard:int)->dict:
 text=subprocess.check_output(['git','ls-tree','-r','-l','HEAD'],cwd=root,text=True)
 members=[]
 manifests=[]
 for line in text.splitlines():
  meta,path=line.split('\t',1)
  size=int(meta.split()[-1])
  if not path.startswith('Unpack/v1.1.1/romfs/bin/archive/'):continue
  if '/extracted/' in path and path.endswith('.bin'):members.append(size)
  if path.endswith('/extracted/_manifest.json'):manifests.append(path)
 exp=EXPECTED[shard]
 actual=(len(manifests),len(members),sum(members))
 if actual!=exp:raise ValueError(f'shard {shard}: remote Git tree count/bytes {actual} != {exp}')
 filename=f'Unpack/v1.1.1/_index/native-shard-{shard}-receipt.json'
 receipt=json.loads(subprocess.check_output(['git','show','HEAD:'+filename],cwd=root,text=True))
 if receipt['state']!='VERIFIED' or receipt['verified_member_count']!=exp[1] or receipt['verified_member_bytes']!=exp[2]:
  raise ValueError('inconsistent persisted native receipt')
 return dict(shard=shard,archive_count=len(manifests),member_count=len(members),
             decoded_bytes=sum(members),largest=max(members),state='GIT_VERIFIED')
def main()->int:
 p=argparse.ArgumentParser(description=__doc__)
 p.add_argument('--repo',type=Path,required=True)
 p.add_argument('--shard',type=int,choices=range(4),required=True)
 p.add_argument('--out',type=Path,required=True)
 a=p.parse_args()
 try:
  result=audit(a.repo,a.shard)
  a.out.parent.mkdir(parents=True,exist_ok=True)
  a.out.write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8')
  print(json.dumps(result),flush=True)
  return 0
 except Exception as e:
  print('GIT_AUDIT_FAILED:',e,flush=True)
  return 1
if __name__=='__main__':raise SystemExit(main())
