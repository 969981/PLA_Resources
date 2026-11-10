/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282d908; name: FUN_0282d908
 */


undefined8 FUN_0282d908(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar4 = *(int *)(param_1 + 0x14);
  iVar9 = *(int *)(param_1 + 0x20);
  iVar8 = 0;
  if (iVar9 != 0) {
    iVar8 = iVar4 / iVar9;
  }
  iVar2 = *(int *)(param_1 + 0x24);
  iVar5 = *(int *)(param_1 + 0x28);
  if (iVar5 == 0) {
    iVar10 = iVar4 - iVar8 * iVar9;
    iVar11 = iVar8;
    iVar6 = iVar9;
  }
  else {
    iVar10 = 0;
    if (iVar2 != 0) {
      iVar10 = iVar4 / iVar2;
    }
    iVar11 = iVar4 - iVar10 * iVar2;
    iVar6 = iVar2;
  }
  iVar6 = iVar6 * *(int *)(param_1 + 0x10);
  iVar3 = *param_2;
  iVar1 = iVar3;
  if (iVar5 != 0) {
    iVar1 = param_2[1];
  }
  if (iVar1 < 1) {
    if (iVar5 != 0) {
      iVar10 = iVar11;
    }
    if (((iVar6 != -iVar4) || (iVar1 == 0)) || (-1 < iVar1 + iVar10)) goto LAB_0282d984;
  }
  else if (iVar6 + iVar4 != *(int *)(param_1 + 8) + -1) goto LAB_0282d984;
  if (*(char *)(param_1 + 0x2c) != '\0') {
    return 1;
  }
LAB_0282d984:
  if (iVar5 == 0) {
    iVar9 = iVar4 - iVar8 * iVar9;
    iVar3 = param_2[1];
  }
  else {
    iVar9 = 0;
    if (iVar2 != 0) {
      iVar9 = iVar4 / iVar2;
    }
    iVar8 = iVar4 - iVar9 * iVar2;
  }
  if (iVar5 != 0) {
    iVar8 = iVar9;
  }
  if ((iVar3 < 0) && (iVar8 == 0 && *(int *)(param_1 + 0x10) == 0)) {
    return 1;
  }
  uVar7 = FUN_0282d688();
  return uVar7;
}


