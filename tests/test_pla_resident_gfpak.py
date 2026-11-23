"""Synthetic GFPak and LZ4 fixtures only — no PLA resource bytes."""
import struct
import sys
import unittest
import zlib
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'scripts'))
from extract_pla_resident import GFPak, MAGIC, fnv64, lz4_block_decode


def synth_pack(plain: bytes, packed: bytes, mode: int = 0):
    """One-file synthetic archive: header / pointers / hashes / folder / filetable."""
    path = 'bin/field/resident/AreaSettings.bin'
    b = bytearray(112)
    struct.pack_into('<8sIIii', b, 0, MAGIC, 0x1000, 0, 1, 1)
    struct.pack_into('<qqq', b, 24, 88, 48, 56)
    struct.pack_into('<Q', b, 48, fnv64(path))
    struct.pack_into('<QiI', b, 56, fnv64('bin/field/resident'), 1, 0)
    struct.pack_into('<QiI', b, 72, fnv64('AreaSettings.bin'), 0, 0)
    struct.pack_into('<HHiiIiI', b, 88, 9, mode, len(plain), len(packed), 0, 112, 0)
    return bytes(b) + packed


class TestPLAResidentGFPak(unittest.TestCase):
    def test_none_roundtrip(self):
        blob = synth_pack(b'flatbuffer!', b'flatbuffer!')
        pak = GFPak(blob)
        self.assertEqual(pak.get_data('bin/field/resident/AreaSettings.bin'), b'flatbuffer!')
        self.assertEqual(len(pak.entries), 1)
        self.assertEqual(len(pak.folders), 1)

    def test_zlib_roundtrip(self):
        raw = b'x' * 30
        pak = GFPak(synth_pack(raw, zlib.compress(raw), 1))
        self.assertEqual(pak.get_data('bin/field/resident/AreaSettings.bin'), raw)

    def test_lz4_literals_and_repeated_match(self):
        self.assertEqual(lz4_block_decode(b'\x30abc', 3), b'abc')
        self.assertEqual(lz4_block_decode(b'\x11a\x01\x00', 6), b'aaaaaa')
        self.assertEqual(GFPak(synth_pack(b'abc', b'\x30abc', 2))
                         .get_data('bin/field/resident/AreaSettings.bin'), b'abc')

    def test_unknown_compression_explicit_failure(self):
        obj = GFPak(synth_pack(b'abc', b'abc', 3))
        with self.assertRaises(NotImplementedError):
            obj.get_data('bin/field/resident/AreaSettings.bin')

    def test_bad_magic(self):
        with self.assertRaises(ValueError):
            GFPak(b'bad')
        with self.assertRaises(ValueError):
            GFPak(b'garbage!'+synth_pack(b'a', b'a')[8:])

    def test_path_not_guessed(self):
        obj = GFPak(synth_pack(b'abc', b'abc'))
        with self.assertRaises(KeyError):
            obj.get_data('unknown')
        

if __name__ == '__main__':
    unittest.main()
