#!/usr/bin/env python3
"""Inspect verified PLA TRMDL references in special forms without inventing glTF geometry."""
from __future__ import annotations
import argparse,hashlib,json,struct
from pathlib import Path
from collections import Counter

def u32(b,o):
 if o<0 or o+4>len(b):raise ValueError('u32 outside file')
 return struct.unpack_from('<I',b,o)[0]
def i32(b,o):
 if o<0 or o+4>len(b):raise ValueError('i32 outside file')
 return struct.unpack_from('<i',b,o)[0]
def u16(b,o):
 if o<0 or o+2>len(b):raise ValueError('u16 outside file')
 return struct.unpack_from('<H',b,o)[0]
def field(b,table,slot):
 vtable=table-i32(b,table)
 length=u16(b,vtable)
 if length<4 or length>256 or vtable+length>len(b):raise ValueError('bad vtable length')
 at=vtable+4+slot*2
 if at+2>vtable+length:return 0
 n=u16(b,at)
 return table+n if n else 0
def deref(b,offset):return offset+u32(b,offset)
def string(b,offset):
 if not offset:return ''
 ptr=deref(b,offset);size=u32(b,ptr)
 if size>10000 or ptr+4+size>len(b):raise ValueError('bad string payload')
 return b[ptr+4:ptr+4+size].decode('utf8')
def vector_table(b,offset):
 if not offset:return []
 vec=deref(b,offset);count=u32(b,vec)
 if count>200:raise ValueError('invalid model reference count')
 return [deref(b,vec+4+4*i) for i in range(count)]
def inspect(path):
 data=path.read_bytes()
 root=u32(data,0)
 meshes=[string(data,field(data,t,0)) for t in vector_table(data,field(data,root,1))]
 skelptr=field(data,root,2)
 skeleton=string(data,field(data,deref(data,skelptr),0)) if skelptr else ''
 matsfield=field(data,root,3)
 material_paths=[]
 if matsfield:
  vec=deref(data,matsfield);n=u32(data,vec)
  if n>200:raise ValueError('invalid material count')
  material_paths=[string(data,vec+4+4*i) for i in range(n)]
 return dict(model=path.stem,model_bytes=len(data),
  sha256=hashlib.sha256(data).hexdigest(),mesh_references=meshes,
  skeleton_reference=skeleton,material_references=material_paths,
  mesh_ref_count=len(meshes),state='NATIVE_REFERENCES_PARSED')

def main():
 p=argparse.ArgumentParser(description=__doc__)
 p.add_argument('--files',nargs='+',type=Path,required=True)
 p.add_argument('--out',type=Path,required=True)
 args=p.parse_args()
 try:
  rows=[inspect(path) for path in args.files]
  if len({x['model'] for x in rows})!=len(rows):raise ValueError('duplicate models')
  result=dict(schema_version=1,stage='PLA_special_form_trmdl_dependency_audit',
   models=len(rows),states=dict(Counter(x['state'] for x in rows)),
   references_with_meshes=sum(x['mesh_ref_count']>0 for x in rows),entries=rows,
   complete=all(x['mesh_ref_count']>0 for x in rows))
  args.out.parent.mkdir(parents=True,exist_ok=True)
  args.out.write_text(json.dumps(result,ensure_ascii=False,indent=2)+'\n',encoding='utf8')
  print(json.dumps(result,ensure_ascii=False),flush=True)
  return 0 if result['complete'] else 1
 except Exception as e:
  print('TRMDL_DEPENDENCY_AUDIT_FAILED:',e,flush=True)
  return 1
if __name__=='__main__':raise SystemExit(main())
