/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282d688; name: FUN_0282d688
 */


bool FUN_0282d688(long param_1,int *param_2)

{
  int *piVar1;
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
  int iVar12;
  
  iVar3 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x14);
  iVar7 = *param_2;
  iVar2 = param_2[1];
  if (iVar3 == 0) {
    iVar9 = *(int *)(param_1 + 0x20);
    iVar8 = 0;
    if (iVar9 != 0) {
      iVar8 = iVar4 / iVar9;
    }
    iVar9 = iVar4 - iVar8 * iVar9;
    iVar6 = iVar2;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x24);
    iVar9 = 0;
    if (iVar8 != 0) {
      iVar9 = iVar4 / iVar8;
    }
    iVar8 = iVar4 - iVar9 * iVar8;
    iVar6 = iVar7;
  }
  if (iVar3 != 0) {
    iVar8 = iVar9;
  }
  iVar9 = *(int *)(param_1 + 0xc);
  if (iVar9 < 1) {
    iVar5 = *(int *)(param_1 + 8) + -1;
    if (iVar3 == 0) {
      iVar11 = *(int *)(param_1 + 0x20);
      iVar10 = 0;
      if (iVar11 != 0) {
        iVar10 = iVar5 / iVar11;
      }
      iVar11 = iVar5 - iVar10 * iVar11;
    }
    else {
      iVar10 = *(int *)(param_1 + 0x24);
      iVar11 = 0;
      if (iVar10 != 0) {
        iVar11 = iVar5 / iVar10;
      }
      iVar10 = iVar5 - iVar11 * iVar10;
    }
    if (iVar3 != 0) {
      iVar10 = iVar11;
    }
  }
  else {
    piVar1 = (int *)(param_1 + 0x24);
    if (iVar3 != 0) {
      piVar1 = (int *)(param_1 + 0x20);
    }
    iVar10 = *piVar1 + -1;
  }
  iVar5 = *(int *)(param_1 + 0x10);
  if ((0 < iVar6) && (iVar8 == iVar10 && iVar5 == iVar9)) {
    return true;
  }
  if (iVar3 == 0) {
    iVar10 = *(int *)(param_1 + 0x20);
    iVar8 = 0;
    if (iVar10 != 0) {
      iVar8 = iVar4 / iVar10;
    }
    iVar10 = iVar4 - iVar8 * iVar10;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x24);
    iVar10 = 0;
    if (iVar8 != 0) {
      iVar10 = iVar4 / iVar8;
    }
    iVar8 = iVar4 - iVar10 * iVar8;
  }
  if (iVar3 != 0) {
    iVar8 = iVar10;
  }
  if (iVar9 < 1) {
    iVar11 = *(int *)(param_1 + 8) + -1;
    if (iVar3 == 0) {
      iVar12 = *(int *)(param_1 + 0x20);
      iVar10 = 0;
      if (iVar12 != 0) {
        iVar10 = iVar11 / iVar12;
      }
      iVar12 = iVar11 - iVar10 * iVar12;
    }
    else {
      iVar10 = *(int *)(param_1 + 0x24);
      iVar12 = 0;
      if (iVar10 != 0) {
        iVar12 = iVar11 / iVar10;
      }
      iVar10 = iVar11 - iVar12 * iVar10;
    }
    if (iVar3 != 0) {
      iVar10 = iVar12;
      goto LAB_0282d79c;
    }
  }
  else {
    piVar1 = (int *)(param_1 + 0x24);
    if (iVar3 != 0) {
      piVar1 = (int *)(param_1 + 0x20);
    }
    iVar10 = *piVar1 + -1;
    if (iVar3 != 0) {
LAB_0282d79c:
      iVar11 = *(int *)(param_1 + 0x20);
      iVar12 = *(int *)(param_1 + 0x24);
      iVar7 = iVar2 + iVar12 * iVar7;
      goto LAB_0282d744;
    }
  }
  iVar11 = *(int *)(param_1 + 0x20);
  iVar12 = *(int *)(param_1 + 0x24);
  iVar7 = iVar7 + iVar11 * iVar2;
LAB_0282d744:
  if ((iVar6 < 1) || (iVar8 != iVar10 + -1)) {
    return false;
  }
  if (iVar3 != 0) {
    iVar11 = iVar12;
  }
  return iVar5 == iVar9 && *(int *)(param_1 + 8) <= iVar7 + iVar4 + iVar11 * iVar5;
}


