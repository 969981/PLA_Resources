/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282d9cc; name: FUN_0282d9cc
 */


undefined4 FUN_0282d9cc(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x14);
  iVar6 = *(int *)(param_1 + 0x20);
  iVar16 = 0;
  if (iVar6 != 0) {
    iVar16 = iVar3 / iVar6;
  }
  iVar2 = *(int *)(param_1 + 0x24);
  iVar4 = *(int *)(param_1 + 0x28);
  if (iVar4 == 0) {
    iVar10 = iVar3 - iVar16 * iVar6;
    iVar15 = iVar16;
    iVar7 = iVar6;
  }
  else {
    iVar10 = 0;
    if (iVar2 != 0) {
      iVar10 = iVar3 / iVar2;
    }
    iVar15 = iVar3 - iVar10 * iVar2;
    iVar7 = iVar2;
  }
  iVar14 = *param_2;
  iVar5 = param_2[1];
  iVar7 = iVar7 * iVar1;
  iVar11 = iVar14;
  if (iVar4 != 0) {
    iVar11 = iVar5;
  }
  if (iVar11 < 1) {
    if (iVar4 != 0) {
      iVar10 = iVar15;
    }
    if ((((iVar11 != 0) && (iVar11 + iVar10 < 0)) && (iVar7 == -iVar3)) &&
       (*(char *)(param_1 + 0x2c) != '\0')) {
      return 5;
    }
    iVar10 = *(int *)(param_1 + 8);
    iVar15 = iVar10 + -1;
  }
  else {
    iVar10 = *(int *)(param_1 + 8);
    iVar15 = iVar10 + -1;
    if (iVar7 + iVar3 == iVar10 + -1) {
      if (*(char *)(param_1 + 0x2c) != '\0') {
        return 6;
      }
      iVar15 = iVar7 + iVar3;
    }
  }
  if (iVar4 == 0) {
    iVar11 = iVar3 - iVar16 * iVar6;
    iVar13 = iVar16;
    iVar8 = iVar5;
  }
  else {
    iVar11 = 0;
    if (iVar2 != 0) {
      iVar11 = iVar3 / iVar2;
    }
    iVar13 = iVar3 - iVar11 * iVar2;
    iVar8 = iVar14;
  }
  if (iVar4 != 0) {
    iVar13 = iVar11;
  }
  if ((iVar8 < 0) && (iVar13 == 0 && iVar1 == 0)) {
    uVar9 = FUN_0282d884(param_1);
    uVar12 = 1;
    if ((uVar9 & 1) != 0) {
      uVar12 = 2;
    }
  }
  else {
    uVar9 = FUN_0282d688(param_1);
    if ((uVar9 & 1) == 0) {
      uVar12 = 0;
    }
    else {
      if (iVar4 == 0) {
        iVar11 = iVar3 - iVar16 * iVar6;
      }
      else {
        iVar11 = 0;
        if (iVar2 != 0) {
          iVar11 = iVar3 / iVar2;
        }
        iVar16 = iVar3 - iVar11 * iVar2;
      }
      if (iVar4 != 0) {
        iVar16 = iVar11;
      }
      if (*(int *)(param_1 + 0xc) < 1) {
        if (iVar4 == 0) {
          iVar11 = 0;
          if (iVar6 != 0) {
            iVar11 = iVar15 / iVar6;
          }
          iVar13 = iVar15 - iVar11 * iVar6;
        }
        else {
          iVar13 = 0;
          if (iVar2 != 0) {
            iVar13 = iVar15 / iVar2;
          }
          iVar11 = iVar15 - iVar13 * iVar2;
        }
        if (iVar4 != 0) {
          iVar11 = iVar13;
        }
      }
      else {
        iVar11 = iVar2;
        if (iVar4 != 0) {
          iVar11 = iVar6;
        }
        iVar11 = iVar11 + -1;
      }
      uVar12 = 3;
      if ((0 < iVar8) && (iVar16 == iVar11 + -1)) {
        if (iVar4 == 0) {
          iVar14 = iVar14 + iVar5 * iVar6;
        }
        else {
          iVar14 = iVar5 + iVar14 * iVar2;
        }
        uVar12 = 3;
        if (iVar1 == *(int *)(param_1 + 0xc) && iVar10 <= iVar7 + iVar3 + iVar14) {
          uVar12 = 4;
        }
      }
    }
  }
  return uVar12;
}


