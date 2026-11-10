/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012ffe68; name: FUN_012ffe68
 */


uint FUN_012ffe68(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  
  lVar17 = *(long *)(param_1 + (long)*(int *)(param_1 + 0x164c) * 0x38 + 0x1650) +
           (ulong)*(uint *)(param_1 + 0x1f80) * 0x30;
  uVar18 = *(uint *)(lVar17 + 0x14);
  uVar4 = *(undefined2 *)(lVar17 + 4);
  sVar5 = *(short *)(lVar17 + 8);
  uVar1 = *(uint *)(lVar17 + 0xc);
  sVar6 = *(short *)(lVar17 + 0x10);
  sVar7 = *(short *)(lVar17 + 0x18);
  uVar15 = *(uint *)(lVar17 + 0x1c);
  sVar8 = *(short *)(lVar17 + 0x20);
  uVar2 = *(uint *)(lVar17 + 0x24);
  sVar9 = *(short *)(lVar17 + 0x28);
  uVar3 = *(uint *)(lVar17 + 0x2c);
  if (*(int *)(param_1 + 0x1648) == 1) {
    iVar10 = FUN_012f03c4(uVar4);
    iVar12 = FUN_012f0290(uVar4);
    uVar19 = iVar10 - iVar12;
  }
  else {
    iVar10 = FUN_012f0290();
    if (iVar10 == 0) {
      uVar16 = FUN_012f07c0();
      if ((uVar16 & 1) == 0) {
        iVar10 = FUN_012f0944(uVar4);
        uVar19 = 999 - iVar10;
        goto LAB_012fff1c;
      }
      iVar12 = FUN_012f03c4(uVar4);
      iVar10 = FUN_012f0944(uVar4);
      iVar12 = iVar12 - iVar10;
    }
    else {
      iVar11 = FUN_012f03c4(uVar4);
      iVar12 = FUN_012f0944(uVar4);
      iVar12 = (iVar11 - iVar10) - iVar12;
    }
    uVar19 = iVar12 + 999;
  }
LAB_012fff1c:
  uVar14 = 999;
  if (sVar5 != 0) {
    if (*(int *)(param_1 + 0x1648) == 0) {
      iVar10 = FUN_012f0290(sVar5);
      iVar12 = FUN_012f0944(sVar5);
      uVar13 = iVar12 + iVar10;
    }
    else {
      if (*(int *)(param_1 + 0x1648) != 1) goto LAB_0130011c;
      uVar13 = FUN_012f0290(sVar5);
    }
    uVar14 = 0;
    if (uVar1 != 0) {
      uVar14 = uVar13 / uVar1;
    }
    if (0x3e6 < uVar14) {
      uVar14 = 999;
    }
  }
  uVar1 = uVar14;
  if (sVar6 != 0) {
    if (*(int *)(param_1 + 0x1648) == 0) {
      iVar10 = FUN_012f0290(sVar6);
      iVar12 = FUN_012f0944(sVar6);
      uVar13 = iVar12 + iVar10;
    }
    else {
      if (*(int *)(param_1 + 0x1648) != 1) goto LAB_0130011c;
      uVar13 = FUN_012f0290(sVar6);
    }
    uVar1 = 0;
    if (uVar18 != 0) {
      uVar1 = uVar13 / uVar18;
    }
    if (uVar14 <= uVar1) {
      uVar1 = uVar14;
    }
  }
  uVar18 = uVar1;
  if (sVar7 != 0) {
    if (*(int *)(param_1 + 0x1648) == 0) {
      iVar10 = FUN_012f0290(sVar7);
      iVar12 = FUN_012f0944(sVar7);
      uVar14 = iVar12 + iVar10;
    }
    else {
      if (*(int *)(param_1 + 0x1648) != 1) goto LAB_0130011c;
      uVar14 = FUN_012f0290(sVar7);
    }
    uVar18 = 0;
    if (uVar15 != 0) {
      uVar18 = uVar14 / uVar15;
    }
    if (uVar1 <= uVar18) {
      uVar18 = uVar1;
    }
  }
  uVar1 = uVar18;
  if (sVar8 != 0) {
    if (*(int *)(param_1 + 0x1648) == 0) {
      iVar10 = FUN_012f0290(sVar8);
      iVar12 = FUN_012f0944(sVar8);
      uVar15 = iVar12 + iVar10;
    }
    else {
      if (*(int *)(param_1 + 0x1648) != 1) goto LAB_0130011c;
      uVar15 = FUN_012f0290(sVar8);
    }
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = uVar15 / uVar2;
    }
    if (uVar18 <= uVar1) {
      uVar1 = uVar18;
    }
  }
  uVar18 = uVar1;
  if (sVar9 != 0) {
    if (*(int *)(param_1 + 0x1648) == 0) {
      iVar10 = FUN_012f0290(sVar9);
      iVar12 = FUN_012f0944(sVar9);
      uVar15 = iVar12 + iVar10;
    }
    else {
      if (*(int *)(param_1 + 0x1648) != 1) {
LAB_0130011c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      uVar15 = FUN_012f0290(sVar9);
    }
    uVar18 = 0;
    if (uVar3 != 0) {
      uVar18 = uVar15 / uVar3;
    }
    if (uVar1 <= uVar18) {
      uVar18 = uVar1;
    }
  }
  if (0x3e6 < uVar19) {
    uVar19 = 999;
  }
  if ((int)uVar18 <= (int)uVar19) {
    uVar19 = uVar18;
  }
  return uVar19;
}


