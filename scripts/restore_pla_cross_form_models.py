#!/usr/bin/env python3
"""Repair five PLA special models using original base-form geometry, without renaming source bytes.

All imported members are located by exact FNV64 path hashes in native GFPak manifests.
Copies retain source SHA256, size, pack identity and original filename in a ledger.
"""
from __future__ import annotations
import argparse,hashlib,json,shutil
from pathlib import Path
from recover_pla_model_hashes import fnv64

SHARDS={
 'pm0549_71_41':('pm0549_00_41',0,3),
 'pm1002_71_00':('pm1002_00_00',0,0),
 'pm0751_71_41':('pm0751_00_41',1,3),
 'pm0059_71_41':('pm0059_00_41',2,1),
 'pm0101_71_41':('pm0101_00_41',2,1),
}
BASE_SUFFIX=['.trmsh','_lod1.trmsh','_lod2.trmsh','.trmbf','_lod1.trmbf',
 '_lod2.trmbf','.trskl','.trmmt']
SPECIAL_SUFFIX=['.trmdl','.trmtr']

def sha(path):
 h=hashlib.sha256()
 with path.open('rb') as f:
  for b in iter(lambda:f.read(1<<20),b''):h.update(b)
 return h.hexdigest()

def extract(shard_root,form,suffix,target):
 folder=shard_root/'Unpack'/'v1.1.1'/'romfs'/'bin'/'archive'/'pokemon'/(form+'.gfpak')/'extracted'
 meta=json.loads((folder/'_manifest.json').read_text(encoding='utf8'))
 native=f'bin/pokemon/{form[:6]}/{form}/mdl/{form}{suffix}'
 match=fnv64(native)
 entries=[m for m in meta['members'] if m['full_path_hash'].upper()==match]
 if len(entries)!=1:raise ValueError(f'Expected exact native hash for {native}, found {len(entries)}')
 m=entries[0];src=folder/m['path']
 if not src.is_file() or src.stat().st_size!=int(m['decoded_size']) or sha(src)!=m['sha256']:
  raise ValueError('Native SHA256 failed for '+native)
 target.parent.mkdir(parents=True,exist_ok=True)
 shutil.copyfile(src,target)
 if sha(target)!=m['sha256']:raise ValueError('Copied native file SHA mismatch '+native)
 return dict(native_path=native,original_archive=form,original_member=m['path'],
  sha256=m['sha256'],destination=target.as_posix(),bytes=src.stat().st_size,
  evidence='FNV64_MATCH_PLUS_SHA256_RECHECK')

def restore(roots,dest):
 results=[]
 for special,(base,special_shard,base_shard) in SHARDS.items():
  group=dest/'bin'/'pokemon'/special[:6]/special/'mdl'
  records=[]
  for s in SPECIAL_SUFFIX:
   records.append(extract(roots[special_shard],special,s,group/(special+s)))
  for s in BASE_SUFFIX:
   records.append(extract(roots[base_shard],base,s,group/(base+s)))
  results.append(dict(form=special,donor_form=base,restored_resources=len(records),sources=records,
    expected_model=str(group/(special+'.trmdl'))))
 return dict(schema_version=1,game='PLA',version='1.1.1',
  stage='cross_form_350_base_mesh_material_skeleton_restore',
  model_count=len(results),resource_count=sum(x['restored_resources'] for x in results),
  forms=results,complete=True)

def main():
 p=argparse.ArgumentParser(description=__doc__)
 for i in range(4):p.add_argument(f'--shard-{i}',type=Path,required=True)
 p.add_argument('--dest',type=Path,required=True)
 p.add_argument('--report',type=Path,required=True)
 a=p.parse_args()
 try:
  roots=[getattr(a,f'shard_{i}') for i in range(4)]
  result=restore(roots,a.dest)
  a.report.parent.mkdir(parents=True,exist_ok=True)
  a.report.write_text(json.dumps(result,ensure_ascii=False,indent=2)+'\n',encoding='utf8')
  print(json.dumps(dict(forms=[x['form'] for x in result['forms']],
    recovered_resources=result['resource_count'],complete=result['complete']),ensure_ascii=False),flush=True)
  return 0
 except Exception as e:
  print('CROSS_FORM_RESOURCE_RESTORE_FAILED',e,flush=True)
  return 1
if __name__=='__main__':raise SystemExit(main())
