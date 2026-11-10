/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bbf250; name: FUN_02bbf250
 */


undefined8 FUN_02bbf250(uint *param_1,uint *param_2,uint *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  
  lVar10 = *param_4;
  uVar1 = *param_2;
  uVar9 = (ulong)uVar1;
  uVar2 = *param_1;
  uVar8 = (ulong)uVar2;
  lVar11 = *(long *)(lVar10 + 0x88);
  iVar3 = *(int *)(lVar11 + uVar9 * 0x30 + 0x20);
  iVar4 = *(int *)(lVar11 + uVar8 * 0x30 + 0x20);
  if (iVar3 == iVar4) {
    fVar12 = *(float *)(lVar11 + uVar9 * 0x30 + 0x24);
    fVar13 = *(float *)(lVar11 + uVar8 * 0x30 + 0x24);
    if (fVar12 == fVar13) {
      bVar6 = uVar1 < uVar2;
    }
    else {
      bVar6 = fVar13 < fVar12;
      if (*(int *)(lVar10 + 0x198) == 2) {
        bVar6 = fVar12 < fVar13;
      }
    }
  }
  else {
    bVar6 = iVar3 < iVar4;
  }
  uVar5 = *param_3;
  iVar4 = *(int *)(lVar11 + (ulong)uVar5 * 0x30 + 0x20);
  if (iVar4 == iVar3) {
    fVar12 = *(float *)(lVar11 + (ulong)uVar5 * 0x30 + 0x24);
    fVar13 = *(float *)(lVar11 + uVar9 * 0x30 + 0x24);
    if (fVar12 == fVar13) {
      bVar7 = uVar5 < uVar1;
    }
    else {
      bVar7 = fVar13 < fVar12;
      if (*(int *)(lVar10 + 0x198) == 2) {
        bVar7 = fVar12 < fVar13;
      }
    }
  }
  else {
    bVar7 = iVar4 < iVar3;
  }
  if (bVar6) {
    if (bVar7) {
      *param_1 = uVar5;
      *param_3 = uVar2;
      return 1;
    }
    *param_1 = uVar1;
    *param_2 = uVar2;
    uVar1 = *param_3;
    lVar10 = *(long *)(*param_4 + 0x88);
    iVar3 = *(int *)(lVar10 + (ulong)uVar1 * 0x30 + 0x20);
    iVar4 = *(int *)(lVar10 + uVar8 * 0x30 + 0x20);
    if (iVar3 == iVar4) {
      fVar12 = *(float *)(lVar10 + (ulong)uVar1 * 0x30 + 0x24);
      fVar13 = *(float *)(lVar10 + uVar8 * 0x30 + 0x24);
      if (fVar12 == fVar13) {
        if (uVar1 < uVar2) goto LAB_02bbf418;
      }
      else if (*(int *)(*param_4 + 0x198) == 2) {
        if (fVar12 < fVar13) {
LAB_02bbf418:
          *param_2 = uVar1;
          *param_3 = uVar2;
          return 2;
        }
      }
      else if (fVar13 < fVar12) goto LAB_02bbf418;
    }
    else if (iVar3 < iVar4) goto LAB_02bbf418;
  }
  else {
    if (!bVar7) {
      return 0;
    }
    *param_2 = uVar5;
    *param_3 = uVar1;
    uVar1 = *param_2;
    uVar2 = *param_1;
    lVar10 = *(long *)(*param_4 + 0x88);
    iVar3 = *(int *)(lVar10 + (ulong)uVar1 * 0x30 + 0x20);
    iVar4 = *(int *)(lVar10 + (ulong)uVar2 * 0x30 + 0x20);
    if (iVar3 == iVar4) {
      fVar12 = *(float *)(lVar10 + (ulong)uVar1 * 0x30 + 0x24);
      fVar13 = *(float *)(lVar10 + (ulong)uVar2 * 0x30 + 0x24);
      if (fVar12 == fVar13) {
        if (uVar1 < uVar2) goto LAB_02bbf404;
      }
      else if (*(int *)(*param_4 + 0x198) == 2) {
        if (fVar12 < fVar13) {
LAB_02bbf404:
          *param_1 = uVar1;
          *param_2 = uVar2;
          return 2;
        }
      }
      else if (fVar13 < fVar12) goto LAB_02bbf404;
    }
    else if (iVar3 < iVar4) goto LAB_02bbf404;
  }
  return 1;
}


