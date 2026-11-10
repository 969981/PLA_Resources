/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03193878; name: FUN_03193878
 */


void FUN_03193878(long param_1,int *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  
  lVar14 = *(long *)(param_1 + 0x20);
  iVar10 = *param_2;
  if (iVar10 < *(int *)(lVar14 + 0x20)) {
    lVar12 = *(long *)(lVar14 + 0x18);
    iVar4 = iVar10;
    if (*(int *)(lVar14 + 0x98) != 0) {
      iVar4 = *(int *)(*(long *)(lVar14 + 0x90) + (long)iVar10 * 4);
    }
    if (iVar4 == -1) goto LAB_031938b0;
    plVar11 = (long *)(lVar14 + 0xb0);
    iVar10 = iVar4;
  }
  else {
    plVar11 = (long *)(lVar14 + 0xd0);
    iVar10 = iVar10 - *(int *)(lVar14 + 0x20);
  }
  lVar12 = *plVar11;
LAB_031938b0:
  sVar2 = *(short *)(lVar12 + (long)iVar10 * 0x10 + 8);
  lVar9 = (long)sVar2;
  if (lVar9 < 1) {
    fVar16 = 0.0;
    fVar17 = 0.0;
    fVar18 = 0.0;
    fVar19 = 0.0;
  }
  else {
    lVar13 = (long)*(int *)(lVar14 + 0x30);
    iVar4 = *(int *)(lVar12 + (long)iVar10 * 0x10);
    lVar12 = (long)iVar4;
    iVar10 = *(int *)(lVar14 + 0x40);
    if (*(int *)(lVar14 + 0x78) == 0) {
      piVar5 = (int *)(*(long *)(lVar14 + 0xe0) + (lVar12 - lVar13) * 0x14);
      fVar18 = 0.0;
      fVar19 = 0.0;
      fVar16 = 0.0;
      fVar17 = 0.0;
      lVar15 = 0;
      lVar6 = lVar12;
      do {
        iVar4 = iVar4 + 1;
        piVar7 = piVar5;
        if (lVar6 < lVar13) {
          lVar8 = (lVar15 + lVar12) * 0x14;
          if (iVar4 == 0) {
            piVar7 = (int *)(*(long *)(lVar14 + 0x28) + lVar8);
          }
          else {
            piVar7 = (int *)(*(long *)(lVar14 + 0xc0) + lVar8);
          }
        }
        iVar3 = *piVar7;
        puVar1 = (undefined8 *)(*(long *)(lVar14 + 0x38) + (long)iVar3 * 0x10);
        if (iVar10 <= iVar3) {
          puVar1 = (undefined8 *)(*(long *)(lVar14 + 0xf0) + (long)(iVar3 - iVar10) * 0x10);
        }
        lVar9 = lVar9 + -1;
        fVar16 = fVar16 + (float)*puVar1;
        fVar17 = fVar17 + (float)((ulong)*puVar1 >> 0x20);
        fVar18 = fVar18 + (float)puVar1[1];
        fVar19 = fVar19 + (float)((ulong)puVar1[1] >> 0x20);
        lVar15 = lVar15 + 1;
        piVar5 = piVar5 + 5;
        lVar6 = lVar6 + 1;
      } while (lVar9 != 0);
    }
    else {
      piVar5 = (int *)(*(long *)(lVar14 + 0xe0) + (lVar12 - lVar13) * 0x14);
      fVar16 = 0.0;
      fVar17 = 0.0;
      fVar18 = 0.0;
      fVar19 = 0.0;
      lVar15 = 0;
      lVar6 = lVar12;
      do {
        piVar7 = piVar5;
        if (lVar6 < lVar13) {
          iVar4 = *(int *)(*(long *)(lVar14 + 0x70) + lVar6 * 4);
          if (iVar4 == -1) {
            piVar7 = (int *)(*(long *)(lVar14 + 0x28) + (lVar15 + lVar12) * 0x14);
          }
          else {
            piVar7 = (int *)(*(long *)(lVar14 + 0xc0) + (long)iVar4 * 0x14);
          }
        }
        iVar4 = *piVar7;
        puVar1 = (undefined8 *)(*(long *)(lVar14 + 0x38) + (long)iVar4 * 0x10);
        if (iVar10 <= iVar4) {
          puVar1 = (undefined8 *)(*(long *)(lVar14 + 0xf0) + (long)(iVar4 - iVar10) * 0x10);
        }
        lVar9 = lVar9 + -1;
        fVar16 = fVar16 + (float)*puVar1;
        fVar17 = fVar17 + (float)((ulong)*puVar1 >> 0x20);
        fVar18 = fVar18 + (float)puVar1[1];
        fVar19 = fVar19 + (float)((ulong)puVar1[1] >> 0x20);
        lVar15 = lVar15 + 1;
        piVar5 = piVar5 + 5;
        lVar6 = lVar6 + 1;
      } while (lVar9 != 0);
    }
  }
  uVar20 = NEON_scvtf(CONCAT44((int)sVar2,(int)sVar2),4);
  uVar22 = NEON_frecpe(uVar20,4);
  uVar24 = NEON_frecps(uVar20,uVar22,4);
  fVar21 = (float)uVar22 * (float)uVar24;
  fVar23 = (float)((ulong)uVar22 >> 0x20) * (float)((ulong)uVar24 >> 0x20);
  uVar20 = NEON_frecps(uVar20,CONCAT44(fVar23,fVar21),4);
  fVar21 = fVar21 * (float)uVar20;
  fVar23 = fVar23 * (float)((ulong)uVar20 >> 0x20);
  param_3[1] = CONCAT44(fVar19 * fVar23,fVar18 * fVar21);
  *param_3 = CONCAT44(fVar17 * fVar23,fVar16 * fVar21);
  return;
}


