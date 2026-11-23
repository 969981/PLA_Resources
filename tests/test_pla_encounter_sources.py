"""Synthetic minimal FlatBuffers, no redistributed native resource bytes."""
import sys
import struct
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'scripts'))
from audit_pla_encounter_sources import FlatBuffer, audit_one


class TestPLAFlatBuffersAudit(unittest.TestCase):
    @staticmethod
    def make_flatbuffer():
        # root(0) -> table(20), table vtable(12), vector(28), child(48).
        b = bytearray(64)
        struct.pack_into('<I', b, 0, 20)
        struct.pack_into('<HHH', b, 12, 6, 8, 4)
        struct.pack_into('<iI', b, 20, 8, 4)
        struct.pack_into('<II', b, 28, 1, 16)
        struct.pack_into('<i', b, 48, 8)
        struct.pack_into('<HH', b, 40, 4, 4)
        return bytes(b)

    def test_root_vector(self):
        f = FlatBuffer(self.make_flatbuffer())
        self.assertEqual(f.root_tables(), [48])

    def test_sample_audit(self):
        r = audit_one('huge_outbreak.bin', self.make_flatbuffer())
        self.assertEqual(r['root_records'], 1)
        self.assertEqual(r['sample'][0]['spawn_min'], 0)

    def test_reject_short_file(self):
        with self.assertRaises(ValueError):
            audit_one('huge_outbreak.bin', b'\x00\x00\x00')


if __name__ == '__main__':
    unittest.main()
