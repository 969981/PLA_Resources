/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bbf480; name: FUN_02bbf480
 */


int FUN_02bbf480(uint *param_1,uint *param_2,uint *param_3,uint *param_4,long *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  
  iVar6 = FUN_02bbf250();
  uVar1 = *param_4;
  uVar2 = *param_3;
  lVar7 = *(long *)(*param_5 + 0x88);
  iVar3 = *(int *)(lVar7 + (ulong)uVar1 * 0x30 + 0x20);
  iVar4 = *(int *)(lVar7 + (ulong)uVar2 * 0x30 + 0x20);
  if (iVar3 == iVar4) {
    fVar8 = *(float *)(lVar7 + (ulong)uVar1 * 0x30 + 0x24);
    fVar9 = *(float *)(lVar7 + (ulong)uVar2 * 0x30 + 0x24);
    if (fVar8 == fVar9) {
      if (uVar2 <= uVar1) {
        return iVar6;
      }
    }
    else if (*(int *)(*param_5 + 0x198) == 2) {
      if (fVar9 <= fVar8) {
        return iVar6;
      }
    }
    else if (fVar8 <= fVar9) {
      return iVar6;
    }
  }
  else if (iVar4 <= iVar3) {
    return iVar6;
  }
  *param_3 = uVar1;
  iVar3 = iVar6 + 1;
  *param_4 = uVar2;
  uVar1 = *param_3;
  uVar2 = *param_2;
  lVar7 = *(long *)(*param_5 + 0x88);
  iVar4 = *(int *)(lVar7 + (ulong)uVar1 * 0x30 + 0x20);
  iVar5 = *(int *)(lVar7 + (ulong)uVar2 * 0x30 + 0x20);
  if (iVar4 == iVar5) {
    fVar8 = *(float *)(lVar7 + (ulong)uVar1 * 0x30 + 0x24);
    fVar9 = *(float *)(lVar7 + (ulong)uVar2 * 0x30 + 0x24);
    if (fVar8 == fVar9) {
      if (uVar2 <= uVar1) {
        return iVar3;
      }
    }
    else if (*(int *)(*param_5 + 0x198) == 2) {
      if (fVar9 <= fVar8) {
        return iVar3;
      }
    }
    else if (fVar8 <= fVar9) {
      return iVar3;
    }
  }
  else if (iVar5 <= iVar4) {
    return iVar3;
  }
  *param_2 = uVar1;
  iVar3 = iVar6 + 2;
  *param_3 = uVar2;
  uVar1 = *param_2;
  uVar2 = *param_1;
  lVar7 = *(long *)(*param_5 + 0x88);
  iVar4 = *(int *)(lVar7 + (ulong)uVar1 * 0x30 + 0x20);
  iVar5 = *(int *)(lVar7 + (ulong)uVar2 * 0x30 + 0x20);
  if (iVar4 == iVar5) {
    fVar8 = *(float *)(lVar7 + (ulong)uVar1 * 0x30 + 0x24);
    fVar9 = *(float *)(lVar7 + (ulong)uVar2 * 0x30 + 0x24);
    if (fVar8 == fVar9) {
      if (uVar2 <= uVar1) {
        return iVar3;
      }
    }
    else if (*(int *)(*param_5 + 0x198) == 2) {
      if (fVar9 <= fVar8) {
        return iVar3;
      }
    }
    else if (fVar8 <= fVar9) {
      return iVar3;
    }
  }
  else if (iVar5 <= iVar4) {
    return iVar3;
  }
  *param_1 = uVar1;
  *param_2 = uVar2;
  return iVar6 + 3;
}


