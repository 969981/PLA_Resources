#!/usr/bin/env python3
"""Parse actual PLA TRACN animation tables and recover their exact child hashes."""
from __future__ import annotations
import argparse,hashlib,json,struct
from pathlib import Path,PurePosixPath
import shutil,sys
from recover_pla_model_hashes import fnv64

def h(f):
 x=hashlib.sha256()
 with f.open('rb') as r:
  for buf in iter(lambda:r.read(1<<20),b''):x.update(buf)
 return x.hexdigest()
def u32(b,i):return struct.unpack_from('<I',b,i)[0]
def i32(b,i):return struct.unpack_from('<i',b,i)[0]
def u16(b,i):return struct.unpack_from('<H',b,i)[0]
def fld(b,t,n):
 vt=t-i32(b,t)
 if vt<0 or vt+4>len(b):raise ValueError('invalid native TRACN table')
 size=u16(b,vt)
 if size<4 or size>512 or vt+4+2*n>=vt+size:return 0
 off=u16(b,vt+4+2*n)
 return t+off if off else 0
def string(b,i):
 if not i:return ''
 p=i+u32(b,i);n=u32(b,p)
 if n>4096 or p+4+n>len(b):raise ValueError('invalid TRACN string')
 return b[p+4:p+4+n].decode('utf8')
def parse(b):
 root=u32(b,0);v=fld(b,root,0)
 if not v:raise ValueError('TRACN missing entries vector')
 v+=u32(b,v);count=u32(b,v)
 if count>1000:raise ValueError('TRACN absurd entry count')
 out=[]
 for n in range(count):
  p=v+4+n*4;t=p+u32(b,p)
  name=string(b,fld(b,t,0))
  filename=string(b,fld(b,t,1))
  if not filename or '..' in PurePosixPath(filename).parts or filename.startswith('/') or ':' in filename:
   raise ValueError('unsafe native animation child')
  out.append(dict(name=name,filename=filename))
 return out
def process(root,catalog,out):
 refs={a['path'] for m in catalog['models'] for a in m['animations']}
 candidates={fnv64(p):p for p in refs}
 tables=children=unresolved=0;entries=[]
 for mf in sorted(root.rglob('_manifest.json')):
  meta=json.loads(mf.read_text(encoding='utf8'))
  lookup={m['full_path_hash'].upper():m for m in meta['members']}
  for key,path in candidates.items():
   m=lookup.get(key)
   if not m:continue
   tables+=1
   row=dict(table=path,source_archive=meta.get('source'),files=[],status='VERIFIED')
   raw=mf.parent/m['path']
   try:
    if h(raw)!=m['sha256']:raise ValueError('TRACN SHA mismatch')
    stage=path.rsplit('/',1)[0]
    for e in parse(raw.read_bytes()):
     npath=stage+'/'+e['filename'];nhash=fnv64(npath)
     kid=lookup.get(nhash);rec=dict(name=e['name'],path=npath,hash=nhash,status='MISSING')
     if kid:
      source=mf.parent/kid['path']
      if source.stat().st_size==int(kid['decoded_size']) and h(source)==kid['sha256']:
       dest=out/npath
       dest.parent.mkdir(parents=True,exist_ok=True)
       if not dest.exists():shutil.copyfile(source,dest)
       rec.update(status='HASH_VERIFIED',sha256=kid['sha256']);children+=1
     if rec['status']!='HASH_VERIFIED':row['status']='PARTIAL';unresolved+=1
     row['files'].append(rec)
   except (OSError,ValueError,struct.error) as e:
    row.update(status='FAILED',error=str(e));unresolved+=1
   entries.append(row)
 return dict(schema_version=1,catalog_unique_animation_tables=len(refs),
             matched_native_tables=tables,verified_animation_children=children,
             unresolved=unresolved,complete=unresolved==0,entries=entries)
def main():
 p=argparse.ArgumentParser(description=__doc__)
 p.add_argument('--root',type=Path,required=True)
 p.add_argument('--catalog',type=Path,required=True)
 p.add_argument('--out',type=Path,required=True)
 p.add_argument('--report',type=Path,required=True)
 p.add_argument('--min-matches',type=int,default=1)
 a=p.parse_args()
 try:
  catalog=json.loads(a.catalog.read_text(encoding='utf8'))
  info=process(a.root,catalog,a.out)
  a.report.parent.mkdir(parents=True,exist_ok=True)
  a.report.write_text(json.dumps(info,ensure_ascii=False,indent=2)+'\n',encoding='utf8')
  print(json.dumps({k:info[k] for k in ('matched_native_tables','verified_animation_children','unresolved','complete')}),flush=True)
  return 0 if info['matched_native_tables']>=a.min_matches and info['unresolved']==0 else 1
 except Exception as e:
  print('TRACN_PARSE_FAILED:',e,file=sys.stderr)
  return 1
if __name__=='__main__':raise SystemExit(main())
