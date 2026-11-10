/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03261390; name: FUN_03261390
 */


void FUN_03261390(long *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  
  uVar3 = *(uint *)(param_1 + 1);
  uVar19 = (ulong)uVar3;
  lVar9 = *param_1;
  if ((int)uVar3 < 2) {
    iVar11 = 0;
  }
  else {
    if (uVar3 == 2) {
      lVar14 = 1;
      iVar12 = 0;
    }
    else {
      lVar18 = 0;
      iVar12 = 0;
      do {
        lVar14 = lVar18;
        lVar18 = lVar9 + lVar14 * 4;
        if (*(uint *)(lVar18 + 4) < *(uint *)(lVar9 + (long)iVar12 * 4)) {
          iVar12 = (int)lVar14 + 1;
        }
        iVar11 = (int)lVar14 + 2;
        if (*(uint *)(lVar9 + (long)iVar12 * 4) <= *(uint *)(lVar18 + 8)) {
          iVar11 = iVar12;
        }
        lVar18 = lVar14 + 2;
        iVar12 = iVar11;
      } while (~((ulong)(uVar3 - 1) & 1) + uVar19 != lVar14 + 2);
      lVar14 = lVar14 + 3;
      if ((uVar3 - 1 & 1) == 0) goto LAB_032613d4;
    }
    iVar11 = (int)lVar14;
    if (*(uint *)(lVar9 + (long)iVar12 * 4) <= *(uint *)(lVar9 + lVar14 * 4)) {
      iVar11 = iVar12;
    }
  }
LAB_032613d4:
  FUN_03261660(lVar9,uVar19,uVar3 - iVar11);
  piVar15 = (int *)*param_1;
  uVar13 = 1;
  iVar11 = *piVar15;
  if (1 < (int)uVar3) {
    do {
      if (piVar15[uVar13] == iVar11) break;
      uVar13 = uVar13 + 1;
    } while (uVar19 != uVar13);
  }
  uVar10 = (uint)uVar13;
  if ((int)(uVar10 + 1) < (int)uVar3) {
    uVar19 = uVar13 & 0xffffffff;
    while( true ) {
      if (piVar15[uVar19 + 1] != iVar11) {
        piVar15[(int)uVar13] = piVar15[uVar19 + 1];
        uVar13 = (ulong)((int)uVar13 + 1);
      }
      uVar10 = (uint)uVar13;
      if (uVar3 - 2 == (int)uVar19) break;
      piVar15 = (int *)*param_1;
      uVar19 = uVar19 + 1;
    }
  }
  if (*(uint *)(param_1 + 1) != uVar10) {
    *(uint *)(param_1 + 1) = uVar10;
  }
  piVar15 = (int *)*param_1;
  piVar16 = piVar15 + 1;
  iVar11 = *piVar15;
  if (0 < (int)(uVar10 - 1)) {
    uVar19 = 0;
    iVar12 = *piVar16;
    do {
      iVar17 = 0;
      while( true ) {
        uVar19 = uVar19 + 1;
        piVar15 = piVar15 + 1;
        piVar16[iVar17] = iVar12;
        if (uVar19 == uVar10 - 1) {
          if ((int)uVar10 < 3) goto LAB_032615d8;
          uVar19 = 2;
          uVar13 = 2;
          goto LAB_03261540;
        }
        iVar12 = piVar16[uVar19];
        if (uVar19 == 0) break;
        iVar17 = iVar12 - iVar11;
        iVar17 = (iVar17 * 2 & 0x10000U) + iVar17;
        iVar1 = iVar17 >> 0x10;
        iVar17 = (int)(short)iVar17;
        lVar9 = 0;
        do {
          iVar5 = piVar15[lVar9] - iVar11;
          iVar5 = (iVar5 * 2 & 0x10000U) + iVar5;
          iVar2 = iVar5 >> 0x10;
          iVar6 = (int)(short)iVar5;
          iVar5 = iVar2 * iVar17;
          iVar4 = iVar6 * iVar1;
          bVar7 = SBORROW4(iVar5,iVar4);
          bVar8 = iVar5 - iVar4 < 0;
          if (iVar5 == iVar4) {
            bVar7 = SBORROW4(iVar1,iVar2);
            bVar8 = iVar1 - iVar2 < 0;
            if (iVar1 == iVar2) {
              bVar7 = SBORROW4(iVar17,iVar6);
              bVar8 = iVar17 - iVar6 < 0;
            }
          }
          lVar18 = lVar9;
          if (bVar8 == bVar7) break;
          lVar18 = lVar9 + -1;
          piVar15[lVar9 + 1] = piVar15[lVar9];
          lVar9 = lVar18;
        } while (0 < (long)(uVar19 + lVar18));
        iVar17 = (int)uVar19 + (int)lVar18;
      }
    } while( true );
  }
LAB_032615d8:
  iVar11 = 2;
LAB_032615dc:
  if ((int)param_1[1] != iVar11) {
    *(int *)(param_1 + 1) = iVar11;
  }
  return;
LAB_03261540:
  do {
    lVar9 = *param_1;
    iVar12 = (int)uVar13;
    iVar11 = *(int *)(lVar9 + uVar19 * 4);
    if (iVar11 != *(int *)(lVar9 + (long)iVar12 * 4 + -4)) {
      *(int *)(lVar9 + (long)iVar12 * 4) = iVar11;
      uVar13 = (ulong)(iVar12 + 1U);
      if (2 < iVar12) {
        uVar13 = (ulong)(int)(iVar12 + 1U);
        do {
          lVar9 = *param_1 + uVar13 * 4;
          iVar11 = *(int *)(lVar9 + -8) - *(int *)(lVar9 + -0xc);
          iVar12 = *(int *)(lVar9 + -4) - *(int *)(lVar9 + -0xc);
          iVar11 = (iVar11 * 2 & 0x10000U) + iVar11;
          iVar12 = (iVar12 * 2 & 0x10000U) + iVar12;
          if ((iVar12 >> 0x10) * (int)(short)iVar11 <= (int)(short)iVar12 * (iVar11 >> 0x10)) break;
          uVar13 = uVar13 - 1;
          *(int *)(lVar9 + -8) = *(int *)(lVar9 + -4);
        } while (3 < (long)uVar13);
      }
    }
    iVar11 = (int)uVar13;
    uVar19 = uVar19 + 1;
  } while (uVar19 != uVar10);
  goto LAB_032615dc;
}


