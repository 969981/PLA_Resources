/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031dd080; name: FUN_031dd080
 */


ulong FUN_031dd080(long param_1,int param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  long *plVar13;
  int *piVar14;
  long lVar15;
  long *plVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  
  FUN_033299e0(0x78a702c4);
  if (param_2 == 1) {
    *param_3 = param_1;
    return 1;
  }
  iVar7 = param_2;
  if (param_2 < 0) {
    iVar7 = param_2 + 1;
  }
  iVar7 = iVar7 >> 1;
  iVar5 = FUN_031dd080(param_1,iVar7,param_4,param_3);
  lVar2 = param_4 + (long)iVar7 * 8;
  iVar6 = FUN_031dd080(param_1 + (long)iVar7 * 0x10,param_2 - iVar7,lVar2,param_3);
  iVar7 = 0;
  if (iVar5 < 1) {
    uVar20 = 0;
    uVar19 = 0;
    uVar9 = 0;
    if (iVar5 < 1) goto LAB_031dd278;
  }
  else {
    uVar20 = 0;
    uVar9 = 0;
    if (0 < iVar6) {
      uVar20 = 0;
      uVar9 = 0;
      iVar7 = 0;
      do {
        piVar11 = *(int **)(param_4 + (long)(int)uVar9 * 8);
        iVar18 = *piVar11;
        piVar14 = *(int **)(lVar2 + (long)iVar7 * 8);
        iVar17 = *piVar14;
        if (iVar18 == iVar17) {
          iVar17 = piVar14[1];
          iVar18 = piVar11[1];
          if (iVar18 != iVar17) goto LAB_031dd1c4;
          uVar3 = *(ushort *)(piVar14 + 2);
          uVar4 = *(ushort *)(piVar11 + 2);
          if (uVar4 != uVar3) {
LAB_031dd1d8:
            if (uVar3 <= uVar4) goto LAB_031dd1e0;
            goto LAB_031dd1cc;
          }
          uVar3 = *(ushort *)((long)piVar14 + 10);
          uVar4 = *(ushort *)((long)piVar11 + 10);
          if (uVar4 != uVar3) goto LAB_031dd1d8;
          uVar9 = uVar9 + 1;
LAB_031dd1e0:
          param_3[uVar20] = (long)piVar14;
          iVar7 = iVar7 + 1;
        }
        else {
LAB_031dd1c4:
          if (iVar17 <= iVar18) goto LAB_031dd1e0;
LAB_031dd1cc:
          param_3[uVar20] = (long)piVar11;
          uVar9 = uVar9 + 1;
        }
        uVar20 = uVar20 + 1;
      } while ((iVar7 < iVar6) && ((int)uVar9 < iVar5));
    }
    uVar19 = (uint)uVar20;
    if (iVar5 <= (int)uVar9) goto LAB_031dd278;
  }
  lVar15 = (long)(int)uVar9;
  uVar12 = (ulong)uVar19;
  uVar19 = (uVar19 + iVar5) - uVar9;
  uVar20 = (ulong)uVar19;
  if ((iVar5 - uVar9 & 1) != 0) {
    lVar1 = lVar15 * 8;
    lVar15 = lVar15 + 1;
    param_3[uVar12] = *(long *)(param_4 + lVar1);
    uVar12 = uVar12 + 1;
  }
  if (~uVar9 + iVar5 != 0) {
    iVar5 = uVar19 - (int)uVar12;
    plVar13 = param_3 + uVar12 + 1;
    plVar16 = (long *)(param_4 + lVar15 * 8 + 8);
    do {
      plVar13[-1] = plVar16[-1];
      iVar5 = iVar5 + -2;
      *plVar13 = *plVar16;
      plVar13 = plVar13 + 2;
      plVar16 = plVar16 + 2;
    } while (iVar5 != 0);
  }
LAB_031dd278:
  if (iVar7 < iVar6) {
    uVar12 = (ulong)iVar7;
    uVar10 = uVar20 & 0xffffffff;
    uVar8 = ~uVar12;
    if ((iVar6 - iVar7 & 1U) != 0) {
      lVar15 = uVar12 * 8;
      uVar20 = uVar10 + 1;
      uVar12 = uVar12 + 1;
      param_3[uVar10] = *(long *)(lVar2 + lVar15);
      uVar10 = uVar20;
    }
    if (uVar8 + (long)iVar6 != 0) {
      lVar15 = (long)iVar6 - uVar12;
      plVar13 = param_3 + uVar10 + 1;
      plVar16 = (long *)(lVar2 + uVar12 * 8 + 8);
      uVar20 = uVar10;
      do {
        plVar13[-1] = plVar16[-1];
        uVar20 = uVar20 + 2;
        lVar15 = lVar15 + -2;
        *plVar13 = *plVar16;
        plVar13 = plVar13 + 2;
        plVar16 = plVar16 + 2;
      } while (lVar15 != 0);
    }
  }
  FUN_033299e0(0xb17fc73d);
  return uVar20 & 0xffffffff;
}


