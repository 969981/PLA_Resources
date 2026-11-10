/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03070a40; name: FUN_03070a40
 */


void FUN_03070a40(long param_1,long param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  undefined1 (*pauVar8) [12];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int *piVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  bVar5 = *(byte *)(param_2 + 0x14);
  *(byte *)(param_2 + 0x9c) = bVar5 & 0xc3;
  if ((bVar5 & 3) == 2) {
    if ((bVar5 & 0xc0) == 0x80) {
      *(undefined2 *)(param_2 + 0x9d) = *(undefined2 *)(param_2 + 0x10);
    }
    lVar3 = param_2 + (ulong)(bVar5 >> 6);
    bVar5 = *(byte *)(lVar3 + 0x10);
    *(byte *)(param_2 + 0x9f) = *(byte *)(param_2 + 0x9f) & 0xf0 | bVar5 & 0xf;
    cVar6 = *(char *)(lVar3 + 0x11);
    *(undefined1 *)(param_2 + 0x99) = 0x80;
    *(byte *)(param_2 + 0x9f) = bVar5 & 0xf | cVar6 << 4;
  }
  else {
    *(undefined1 *)(param_2 + 0x99) = 0x80;
    if ((bVar5 & 3) == 3) {
      return;
    }
  }
  piVar12 = (int *)(*(long *)(param_1 + 0x360) + 0x48);
  iVar7 = *piVar12;
  pauVar2 = (undefined1 (*) [12])(param_1 + 0x50);
  uVar13 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20);
  pauVar8 = (undefined1 (*) [12])(param_1 + 0x60);
  uVar17 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20);
  pauVar1 = (undefined1 (*) [12])(param_1 + 0x70);
  uVar18 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
  auVar20._12_4_ = uVar17;
  auVar20._0_12_ = *pauVar8;
  auVar9._12_4_ = uVar17;
  auVar9._0_12_ = *pauVar8;
  auVar20 = NEON_ext(auVar20,auVar9,8,1);
  auVar19._12_4_ = uVar13;
  auVar19._0_12_ = *pauVar2;
  auVar21._12_4_ = uVar13;
  auVar21._0_12_ = *pauVar2;
  auVar19 = NEON_ext(auVar19,auVar21,8,1);
  auVar10._12_4_ = uVar18;
  auVar10._0_12_ = *pauVar1;
  auVar11._12_4_ = uVar18;
  auVar11._0_12_ = *pauVar1;
  auVar21 = NEON_ext(auVar10,auVar11,8,1);
  puVar4 = (undefined8 *)0x0;
  if (iVar7 != 0) {
    puVar4 = (undefined8 *)((long)iVar7 + (long)piVar12);
  }
  fVar16 = (float)puVar4[1];
  fVar14 = (float)*puVar4;
  fVar15 = (float)((ulong)*puVar4 >> 0x20);
  if (0.9999 <= ABS((float)*param_3 *
                    (auVar19._0_4_ * fVar16 +
                    (float)*(undefined8 *)*pauVar2 * fVar14 +
                    (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20) * fVar15) +
                    (float)((ulong)*param_3 >> 0x20) *
                    (auVar20._0_4_ * fVar16 +
                    (float)*(undefined8 *)*pauVar8 * fVar14 +
                    (float)((ulong)*(undefined8 *)*pauVar8 >> 0x20) * fVar15) +
                    (float)param_3[1] *
                    (auVar21._0_4_ * fVar16 +
                    (float)*(undefined8 *)*pauVar1 * fVar14 +
                    (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20) * fVar15))) {
    *(undefined1 *)(param_2 + 0x9c) = 0x43;
  }
  return;
}


