"""Synthetic tests: no game data and no third-party asset fixtures."""
import hashlib
import json
import struct
import tempfile
import unittest
from pathlib import Path
import sys

sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'scripts'))
from census_pla_extracted import classify,possible_flatbuffer,safe_relative,census

class TestPLASecondaryCensus(unittest.TestCase):
 def test_signature_provenance(self):
  self.assertEqual(classify(b'BNTX'+bytes(40),44)[:3],
                   ('bntx','texture','CONFIRMED_MAGIC'))
  self.assertEqual(classify(b'GFLXPACK'+bytes(40),48)[0],'gfpak')
  self.assertEqual(classify(b'ABCD1234',8)[0],'unknown')
 def test_flatbuffer_is_candidate_not_verified_schema(self):
  b=bytearray(32)
  struct.pack_into('<I',b,0,16)
  struct.pack_into('<i',b,16,8)
  struct.pack_into('<HH',b,8,4,8)
  self.assertTrue(possible_flatbuffer(b,len(b)))
  self.assertEqual(classify(b,len(b))[2],'CANDIDATE')
 def test_paths(self):
  self.assertTrue(safe_relative('entry_00001.nested/entry_00002.bin'))
  for p in ('../x','/x','C:/x','a/../b',r'C:\temp'):
   self.assertFalse(safe_relative(p))
 def test_hashes_and_coverage(self):
  with tempfile.TemporaryDirectory() as tmp:
   root=Path(tmp)
   extracted=root/'bin/archive/pokemon/example.gfpak/extracted'
   extracted.mkdir(parents=True)
   members=[]
   for i, data in enumerate((b'BNTX'+bytes(12), b'ordinary blob')):
    name=f'entry_{i:05}.bin'
    (extracted/name).write_bytes(data)
    members.append(dict(path=name,index=i,depth=0,decoded_size=len(data),
      sha256=hashlib.sha256(data).hexdigest(),magic_hex=data[:8].hex().upper(),
      nested_gfpak=False,folder_mappings=[],compression='None'))
   (extracted/'_manifest.json').write_text(json.dumps(dict(
    schema_version=1,parser='pkNX.Containers.GFPack',
    extracted_count=2,members=members,source_sha256='ABC')))
   c=census(root,root/'reports',2,1,True)
   self.assertTrue(c['complete'])
   self.assertEqual(c['formats']['bntx'],1)
   self.assertEqual(c['formats']['unknown'],1)
   (extracted/'entry_00001.bin').write_bytes(b'changed')
   bad=census(root,root/'reports2',2,1,True)
   self.assertFalse(bad['complete'])
   self.assertEqual(bad['states']['FAILED'],1)

if __name__=='__main__':unittest.main()
