"""Synthetic-only tests: do not embed copyrighted ROM data."""
import struct
import sys
import unittest
from pathlib import Path

sys.path.insert(0,str(Path(__file__).resolve().parents[1]/"scripts"))
from audit_pla_static_gifts import FlatTable, parse_gifts, parse_events, pkhex_static_keys, analyze, validate_mon


def fake_gift():
    b=bytearray(400)
    struct.pack_into("<I",b,0,20)
    struct.pack_into("<HHH",b,12,6,8,4)
    struct.pack_into("<iI",b,20,8,8)  # root vector at 32
    struct.pack_into("<II",b,32,1,124) # table at 160
    struct.pack_into("<HH",b,80,72,16)
    struct.pack_into("<H",b,80+4+2*1,4)  # species
    struct.pack_into("<H",b,80+4+2*5,8)  # level
    struct.pack_into("<i",b,160,80)
    struct.pack_into("<i",b,164,722)
    struct.pack_into("<i",b,168,5)
    return bytes(b)


def fake_event():
    b=bytearray(500)
    struct.pack_into("<I",b,0,20)
    struct.pack_into("<HHH",b,12,6,8,4)
    struct.pack_into("<iI",b,20,8,8)
    struct.pack_into("<II",b,32,1,124) # event group at 160
    struct.pack_into("<HH",b,80,12,16)
    struct.pack_into("<HH",b,84,4,0)
    struct.pack_into("<H",b,90,8)       # group field 3: nested slots vector
    struct.pack_into("<i",b,160,80)
    struct.pack_into("<I",b,164,276)    # encounter string at 440
    struct.pack_into("<I",b,168,56)     # nested vector at 224
    struct.pack_into("<II",b,224,1,132) # child at 360
    struct.pack_into("<HH",b,264,82,16)
    struct.pack_into("<HH",b,268,4,0)   # child species field 0
    struct.pack_into("<H",b,276,8)      # child level field 4
    struct.pack_into("<i",b,360,96)
    struct.pack_into("<i",b,364,722)
    struct.pack_into("<i",b,368,5)
    struct.pack_into("<I",b,440,5)
    b[444:450]=b"testA\x00"
    return bytes(b)


class TestPLAStaticGift(unittest.TestCase):
    def test_decode_synthetic_gift(self):
        data=parse_gifts(fake_gift())
        self.assertEqual(len(data),1)
        self.assertEqual(data[0]["species"],722)
        self.assertEqual(data[0]["level"],5)
        self.assertEqual(data[0]["shiny"],0)
        self.assertFalse(data[0]["alpha"])

    def test_decode_synthetic_event(self):
        groups=parse_events(fake_event())
        self.assertEqual(len(groups),1)
        self.assertEqual(groups[0]["encounter_name"],"testA")
        self.assertEqual(groups[0]["slots"][0]["species"],722)
        self.assertEqual(groups[0]["classification"],"scripted_encounter_needs_trigger_verification")

    def test_schema_safety(self):
        with self.assertRaises(ValueError):
            parse_gifts(b"abc")
        with self.assertRaises(ValueError):
            parse_events(b"")

    def test_parse_pkhex_species_form_level(self):
        src="    new(722,000,05,127,127) { Location = 006 }, // Rowlet\n    new(483,000,65) { Location = 109 },"
        result=pkhex_static_keys(src)
        self.assertEqual(len(result),2)
        self.assertIn("722:0:5",result)
        self.assertIn("483:0:65",result)

    def test_candidates_not_asserted_legal(self):
        gift={"species":722,"form":0,"level":5}
        group={"classification":"battle_template_not_proven_catchable","encounter_name":"mut_test",
               "source_group_index":0,"slots":[{"species":722,"form":0,"level":5,"source_slot_index":0}]}
        report=analyze([{"source_record_index":0,"event_id":"starter",**gift}],[group],
                       "new(722,000,05,127,127) { Location = 006 },")
        self.assertEqual(report["syntactic_candidate_matches"],2)
        self.assertTrue(all(x["status"]=="SPECIES_FORM_LEVEL_ONLY" for x in report["candidate_matches"]))
        self.assertEqual(report["event_groups_by_classification"]["battle_template_not_proven_catchable"],1)

    def test_invalid_shiny_or_level_rejected(self):
        for key,value in (("shiny",5),("level",101),("species",0),("gender",9)):
            row={"species":100,"form":0,"level":30,"shiny":2,"gender":-1,"flawless_ivs":0}
            row[key]=value
            with self.subTest(field=key),self.assertRaises(ValueError):
                validate_mon(row,"test")


if __name__=="__main__":
    unittest.main()
