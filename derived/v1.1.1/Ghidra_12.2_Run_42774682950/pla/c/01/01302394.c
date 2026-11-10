/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01302394; name: FUN_01302394
 */


undefined8 FUN_01302394(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  
  lVar18 = param_1 + (long)*(int *)(param_1 + 0x164c) * 0x38;
  lVar17 = *(long *)(lVar18 + 0x1650);
  if (lVar17 == *(long *)(lVar18 + 0x1658)) {
LAB_01302540:
    uVar15 = 0;
  }
  else {
    lVar17 = lVar17 + (param_2 & 0xffffffff) * 0x30;
    uVar4 = *(undefined2 *)(lVar17 + 4);
    uVar5 = *(undefined2 *)(lVar17 + 8);
    uVar13 = *(uint *)(lVar17 + 0xc);
    uVar6 = *(undefined2 *)(lVar17 + 0x10);
    uVar14 = *(uint *)(lVar17 + 0x14);
    uVar7 = *(undefined2 *)(lVar17 + 0x18);
    uVar1 = *(uint *)(lVar17 + 0x1c);
    uVar8 = *(undefined2 *)(lVar17 + 0x20);
    uVar2 = *(uint *)(lVar17 + 0x24);
    uVar9 = *(undefined2 *)(lVar17 + 0x28);
    uVar3 = *(uint *)(lVar17 + 0x2c);
    if (*(int *)(param_1 + 0x1648) == 0) {
      iVar10 = FUN_012f0290(uVar5);
      iVar11 = FUN_012f0944(uVar5);
      uVar12 = iVar11 + iVar10;
    }
    else {
      if (*(int *)(param_1 + 0x1648) != 1) goto LAB_0130262c;
      uVar12 = FUN_012f0290(uVar5);
    }
    if (uVar13 <= uVar12) {
      if (*(int *)(param_1 + 0x1648) == 0) {
        iVar10 = FUN_012f0290(uVar6);
        iVar11 = FUN_012f0944(uVar6);
        uVar13 = iVar11 + iVar10;
      }
      else {
        if (*(int *)(param_1 + 0x1648) != 1) goto LAB_0130262c;
        uVar13 = FUN_012f0290(uVar6);
      }
      if (uVar14 <= uVar13) {
        if (*(int *)(param_1 + 0x1648) == 0) {
          iVar10 = FUN_012f0290(uVar7);
          iVar11 = FUN_012f0944(uVar7);
          uVar13 = iVar11 + iVar10;
        }
        else {
          if (*(int *)(param_1 + 0x1648) != 1) goto LAB_0130262c;
          uVar13 = FUN_012f0290(uVar7);
        }
        if (uVar1 <= uVar13) {
          if (*(int *)(param_1 + 0x1648) == 0) {
            iVar10 = FUN_012f0290(uVar8);
            iVar11 = FUN_012f0944(uVar8);
            uVar13 = iVar11 + iVar10;
          }
          else {
            if (*(int *)(param_1 + 0x1648) != 1) goto LAB_0130262c;
            uVar13 = FUN_012f0290(uVar8);
          }
          if (uVar2 <= uVar13) {
            if (*(int *)(param_1 + 0x1648) == 0) {
              iVar10 = FUN_012f0290(uVar9);
              iVar11 = FUN_012f0944(uVar9);
              uVar13 = iVar11 + iVar10;
            }
            else {
              if (*(int *)(param_1 + 0x1648) != 1) {
LAB_0130262c:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl("","","",0);
              }
              uVar13 = FUN_012f0290(uVar9);
            }
            if (uVar3 <= uVar13) {
              iVar10 = *(int *)(param_1 + 0x1648);
              if (iVar10 == 1) {
                uVar13 = FUN_012f0290(uVar4);
                uVar16 = FUN_012f07c0();
                if ((uVar13 == 0) && ((uVar16 & 1) == 0)) {
                  return 2;
                }
                uVar14 = FUN_012f03c4(uVar4);
                if (uVar14 <= uVar13) {
                  return 3;
                }
                iVar10 = *(int *)(param_1 + 0x1648);
              }
              if ((iVar10 == 0) && (iVar10 = FUN_012f0944(uVar4), iVar10 == 999)) {
                uVar13 = FUN_012f0290(uVar4);
                uVar16 = FUN_012f07c0();
                if ((uVar13 == 0) && ((uVar16 & 1) == 0)) {
                  return 4;
                }
                uVar14 = FUN_012f03c4(uVar4);
                if (uVar14 <= uVar13) {
                  return 5;
                }
              }
              goto LAB_01302540;
            }
          }
        }
      }
    }
    uVar15 = 1;
  }
  return uVar15;
}


