"""Synthetic-only tests; no proprietary source bytes needed."""
import csv
import json
import subprocess
import sys
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'scripts'))
from audit_pla_inventory import audit_csv, classify
from plan_pla_unpack import task_for


class TestPLAR0(unittest.TestCase):
    def test_classification(self):
        nca = 'b38cd4c18831237d85312886f3a377b5_NCA'
        self.assertEqual(classify(f'{nca}/0/main'), 'ExeFS')
        self.assertEqual(classify(f'{nca}/1/bin/archive/ai/ai.gfpak'), 'RomFS')
        self.assertEqual(classify('arceus_1.1.1.txt'), 'Other')

    def test_planner(self):
        nca = 'b38cd4c18831237d85312886f3a377b5_NCA'
        t = task_for({'RelativePath': f'{nca}/1/bin/archive/ai/ai.gfpak', 'Module': 'archive', 'SizeBytes': '42'})
        self.assertEqual(t['operation'], 'extract_gfpak')
        self.assertEqual(t['status'], 'PLANNED')
        self.assertEqual(t['source_verified'], 'false')
        self.assertEqual(t['shard'], task_for({'RelativePath': t['source_relative_path'], 'Module':'archive'}, 1)['shard'])
        self.assertIsNone(task_for({'RelativePath': 'arceus_1.1.1.txt'}))

    def test_synthetic_inventory(self):
        nca = 'b38cd4c18831237d85312886f3a377b5_NCA'
        with tempfile.TemporaryDirectory() as temp:
            path = Path(temp) / 'inventory.csv'
            fields = ['RelativePath','FileName','Section','Module','SizeBytes']
            rows = [
                [f'{nca}/0/main','main','ExeFS','ExeFS','15'],
                [f'{nca}/1/bin/archive/ai/ai.gfpak','ai.gfpak','RomFS','archive','20'],
                ['arceus_1.1.1.txt','arceus_1.1.1.txt','Other','Other','2'],
            ]
            with path.open('w', newline='', encoding='utf-8-sig') as f:
                w=csv.writer(f);w.writerow(fields);w.writerows(rows)
            receipt = audit_csv(path)
            self.assertEqual(receipt['nca_files'], 2)
            self.assertEqual(receipt['listed_bytes'], 37)
            self.assertFalse(receipt['errors'])
            plan = Path(temp) / 'plan.csv'
            r = subprocess.run([sys.executable, str(ROOT/'scripts/plan_pla_unpack.py'),str(path),'--out',str(plan)], capture_output=True, text=True)
            self.assertEqual(r.returncode, 0, r.stderr)
            with plan.open('r',newline='',encoding='utf-8-sig') as f:
                planned=list(csv.DictReader(f))
            self.assertEqual(len(planned), 2)

    def test_duplicate_is_error(self):
        nca = 'b38cd4c18831237d85312886f3a377b5_NCA'
        with tempfile.TemporaryDirectory() as temp:
            f=Path(temp)/'a.csv'
            with f.open('w',newline='',encoding='utf-8') as out:
                w=csv.writer(out);w.writerow(['RelativePath','FileName','Section','Module','SizeBytes']);
                for _ in range(2):w.writerow([f'{nca}/0/main','main','ExeFS','ExeFS','15'])
            self.assertTrue(any('duplicate' in x for x in audit_csv(f)['errors']))


if __name__ == '__main__':
    unittest.main()
