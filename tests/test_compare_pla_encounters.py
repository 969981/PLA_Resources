import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "scripts"))
from pla_encounter_pkl import encode_pkl
from compare_pla_encounters import compare


class TestPLAEncounterCompare(unittest.TestCase):
    def test_equal_and_differing(self):
        x = [{'locations': [7], 'type': 0, 'slots': [
            {'species': 25, 'form': 0, 'alpha': 0, 'level_min': 10,
             'level_max': 12, 'gender': 2, 'flawless_ivs': 0}]}]
        same = compare(encode_pkl(x), encode_pkl(x))
        self.assertTrue(same['semantic_multiset_equal'])
        self.assertEqual(same['native_only_area_records'], 0)
        y = [dict(x[0], type=1)]
        changed = compare(encode_pkl(x), encode_pkl(y))
        self.assertFalse(changed['semantic_multiset_equal'])
        self.assertEqual(changed['native_only_area_records'], 1)


if __name__ == '__main__':
    unittest.main()
