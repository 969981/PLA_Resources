/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282d4d4; name: FUN_0282d4d4
 */


bool FUN_0282d4d4(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar7 = *(int *)(param_1 + 0xc);
  if (iVar7 < 1) {
    return false;
  }
  iVar1 = *(int *)(param_1 + 0x24);
  iVar4 = *(int *)(param_1 + 0x28);
  iVar8 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar5 = *(int *)(param_1 + 0x14);
  iVar9 = iVar8;
  if (iVar4 != 0) {
    iVar9 = iVar1;
  }
  iVar3 = *param_2;
  iVar6 = param_2[1];
  iVar9 = iVar5 + iVar9 * iVar2;
  if (iVar4 == 0) {
    iVar10 = 0;
    if (iVar8 != 0) {
      iVar10 = iVar9 / iVar8;
    }
    iVar11 = iVar9 - iVar10 * iVar8;
    iVar9 = 0;
    if (iVar8 != 0) {
      iVar9 = (iVar3 + iVar5 + (iVar6 + iVar2) * iVar8) / iVar8;
    }
  }
  else {
    iVar11 = 0;
    if (iVar1 != 0) {
      iVar11 = iVar9 / iVar1;
    }
    iVar10 = iVar9 - iVar11 * iVar1;
    iVar9 = 0;
    if (iVar1 != 0) {
      iVar9 = (iVar6 + iVar5 + (iVar3 + iVar2) * iVar1) / iVar1;
    }
  }
  if (iVar4 != 0) {
    iVar10 = iVar11;
  }
  if (iVar10 < iVar9) {
    if (iVar2 == iVar7) {
      return false;
    }
    if (iVar9 <= *(int *)(param_1 + 0x1c) + iVar2) {
      return false;
    }
  }
  else {
    if (iVar10 <= iVar9) {
      return false;
    }
    if (iVar2 == 0) {
      return false;
    }
    if (*(int *)(param_1 + 0x18) + iVar2 <= iVar9) {
      return false;
    }
  }
  if (iVar4 != 0) {
    iVar6 = iVar3;
  }
  if (iVar6 < 1) {
    return 0 < iVar2 && iVar6 != 0;
  }
  return iVar2 < iVar7;
}


