import sys
import unittest
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'scripts'))
from recover_pla_model_hashes import fnv64,expected_candidates

class TestPLAModelHashRecovery(unittest.TestCase):
 def test_native_hash_from_actual_pknx_arceus_paths(self):
  archive='bin/archive/pokemon/pm0025_00_00.gfpak'
  names=expected_candidates(archive)
  self.assertEqual(names['132C0BBD4E633C28'],
   'bin/pokemon/pm0025/pm0025_00_00/pm0025_00_00.trpokecfg')
  self.assertEqual(names['0D20ABDDC2ACECFA'],
   'bin/pokemon/pm0025/pm0025_00_00/mdl/pm0025_00_00.trmdl')
  self.assertEqual(names['0D3FA1DDC2C78C8B'],
   'bin/pokemon/pm0025/pm0025_00_00/mdl/pm0025_00_00.trmmt')
  self.assertEqual(names['0D4689DDC2CD8271'],
   'bin/pokemon/pm0025/pm0025_00_00/mdl/pm0025_00_00.trmsh')
  self.assertEqual(names['0D578DDDC2DBFC70'],
   'bin/pokemon/pm0025/pm0025_00_00/mdl/pm0025_00_00.trmtr')
  self.assertEqual(names['92E44BDD7D2AF73F'],
   'bin/pokemon/pm0025/pm0025_00_00/mdl/pm0025_00_00.trskl')
 def test_unknown_filenames_not_claimed(self):
  self.assertEqual(expected_candidates('bin/archive/appli/map.gfpak'),{})
  self.assertNotIn('ABCDEF0000000000',expected_candidates('bin/archive/pokemon/pm0025_00_00.gfpak'))

if __name__=='__main__':unittest.main()
