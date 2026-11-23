"""Synthetic-only fixtures; no game content."""
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'scripts'))
from pla_encounter_pkl import decode_pkl, encode_pkl, summarize


class TestPLAEncounterPKL(unittest.TestCase):
    def setUp(self):
        self.areas = [{'locations': [5, 7], 'type': 0,
                       'slots': [{'species': 25, 'form': 0, 'alpha': 1,
                                  'level_min': 20, 'level_max': 30, 'gender': 2,
                                  'flawless_ivs': 0}]},
                      {'locations': [8, 9, 10], 'type': 4,
                       'slots': [{'species': 201, 'form': 3, 'alpha': 2,
                                  'level_min': 35, 'level_max': 35, 'gender': 1,
                                  'flawless_ivs': 3}]}]

    def test_roundtrip(self):
        data = encode_pkl(self.areas)
        self.assertEqual(data[:4], b'la\x02\x00')
        self.assertEqual(decode_pkl(data), self.areas)
        self.assertEqual(summarize(self.areas)['slots'], 2)

    def test_empty_pack(self):
        self.assertEqual(decode_pkl(encode_pkl([])), [])

    def test_bad_header(self):
        with self.assertRaises(ValueError):
            decode_pkl(b'zz\x00\x00\x08\x00\x00\x00')

    def test_corrupt_offsets(self):
        data = bytearray(encode_pkl(self.areas))
        data[4] = 0xff
        with self.assertRaises(ValueError):
            decode_pkl(bytes(data))

    def test_bad_level_range(self):
        self.areas[0]['slots'][0]['level_min'] = 99
        with self.assertRaisesRegex(ValueError, 'reversed level'):
            encode_pkl(self.areas)

    def test_bad_gender(self):
        self.areas[0]['slots'][0]['gender'] = 3
        with self.assertRaisesRegex(ValueError, 'gender'):
            encode_pkl(self.areas)


if __name__ == '__main__':
    unittest.main()
