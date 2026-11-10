/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a1c90; name: FUN_031a1c90
 */


void FUN_031a1c90(long *param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  uint uVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  
  lVar4 = (long)(int)param_1[1] + -1;
  iVar3 = (int)param_2;
  if ((int)lVar4 == iVar3) {
    *(int *)(param_1 + 1) = iVar3;
    return;
  }
  lVar7 = *param_1;
  uVar11 = -(param_2 >> 0x1f & 1) & 0xfffffff800000000 | (param_2 & 0xffffffff) << 3;
  piVar5 = *(int **)(lVar7 + lVar4 * 8);
  fVar14 = (float)piVar5[1];
  fVar15 = *(float *)(*(long *)(lVar7 + uVar11) + 4);
  *(int **)(lVar7 + uVar11) = piVar5;
  *piVar5 = iVar3;
  iVar2 = (int)param_1[1] + -1;
  *(int *)(param_1 + 1) = iVar2;
  if (fVar14 < fVar15) {
    if (0 < iVar3) {
      do {
        lVar4 = *param_1;
        iVar3 = (int)param_2;
        uVar6 = iVar3 - 1;
        lVar7 = *(long *)(lVar4 + (long)((int)uVar6 >> 1) * 8);
        puVar8 = *(undefined4 **)(lVar4 + (long)iVar3 * 8);
        if (*(float *)(lVar7 + 4) < (float)puVar8[1]) {
          return;
        }
        param_2 = (ulong)(uint)((int)uVar6 >> 1);
        *(long *)(lVar4 + (long)iVar3 * 8) = lVar7;
        *(undefined4 **)(lVar4 + ((long)((ulong)uVar6 << 0x20) >> 0x21) * 8) = puVar8;
        puVar12 = *(undefined4 **)(lVar4 + (long)iVar3 * 8);
        uVar1 = *puVar12;
        *puVar12 = *puVar8;
        *puVar8 = uVar1;
      } while (1 < (int)uVar6);
    }
  }
  else {
    uVar11 = (long)(iVar3 << 1) | 1;
    lVar4 = (long)(iVar3 << 1) + 2;
    uVar10 = (uint)lVar4;
    uVar6 = (uint)uVar11;
    if ((int)uVar10 < iVar2) {
      if (*(float *)(*(long *)(*param_1 + lVar4 * 8) + 4) <=
          *(float *)(*(long *)(*param_1 + uVar11 * 8) + 4)) {
        uVar6 = uVar10;
      }
      uVar11 = (ulong)uVar6;
    }
    while ((int)uVar6 < iVar2) {
      lVar4 = *param_1;
      iVar3 = (int)uVar11;
      lVar7 = *(long *)(lVar4 + (long)iVar3 * 8);
      puVar8 = *(undefined4 **)(lVar4 + (long)(int)param_2 * 8);
      if ((float)puVar8[1] <= *(float *)(lVar7 + 4)) {
        return;
      }
      lVar13 = (long)(int)param_2 * 8;
      *(long *)(lVar4 + lVar13) = lVar7;
      *(undefined4 **)(lVar4 + (long)iVar3 * 8) = puVar8;
      puVar12 = *(undefined4 **)(lVar4 + lVar13);
      uVar1 = *puVar12;
      *puVar12 = *puVar8;
      *puVar8 = uVar1;
      uVar9 = (long)(iVar3 << 1) | 1;
      lVar4 = (long)(iVar3 << 1) + 2;
      uVar6 = (uint)lVar4;
      if ((int)uVar6 < (int)param_1[1]) {
        uVar10 = (uint)uVar9;
        if (*(float *)(*(long *)(*param_1 + lVar4 * 8) + 4) <=
            *(float *)(*(long *)(*param_1 + uVar9 * 8) + 4)) {
          uVar10 = uVar6;
        }
        uVar9 = (ulong)uVar10;
      }
      param_2 = uVar11 & 0xffffffff;
      uVar11 = uVar9;
      uVar6 = (uint)uVar9;
    }
  }
  return;
}


