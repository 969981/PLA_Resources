/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282d5d0; name: FUN_0282d5d0
 */


bool FUN_0282d5d0(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = *(int *)(param_1 + 0x24);
  iVar3 = *(int *)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x14);
  iVar6 = iVar5;
  if (iVar3 != 0) {
    iVar6 = iVar1;
  }
  iVar6 = iVar4 + iVar6 * iVar2;
  if (iVar3 == 0) {
    iVar7 = 0;
    if (iVar5 != 0) {
      iVar7 = iVar6 / iVar5;
    }
    iVar8 = iVar6 - iVar7 * iVar5;
    iVar6 = 0;
    if (iVar5 != 0) {
      iVar6 = (*param_2 + iVar4 + (param_2[1] + iVar2) * iVar5) / iVar5;
    }
  }
  else {
    iVar8 = 0;
    if (iVar1 != 0) {
      iVar8 = iVar6 / iVar1;
    }
    iVar7 = iVar6 - iVar8 * iVar1;
    iVar6 = 0;
    if (iVar1 != 0) {
      iVar6 = (param_2[1] + iVar4 + (*param_2 + iVar2) * iVar1) / iVar1;
    }
  }
  if (iVar3 != 0) {
    iVar7 = iVar8;
  }
  if (iVar7 < iVar6) {
    if (*(int *)(param_1 + 0x1c) + iVar2 < iVar6) {
      return iVar2 != *(int *)(param_1 + 0xc);
    }
  }
  else if (iVar6 < iVar7) {
    return iVar2 != 0 && iVar6 < *(int *)(param_1 + 0x18) + iVar2;
  }
  return false;
}


