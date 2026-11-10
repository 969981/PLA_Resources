/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031dcd10; name: FUN_031dcd10
 */


ulong FUN_031dcd10(long param_1,int param_2,long *param_3,long param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  int iVar15;
  ulong uVar16;
  
  FUN_033299e0(0x78a702c4);
  if (param_2 == 1) {
    *param_3 = param_1;
    return 1;
  }
  iVar6 = param_2;
  if (param_2 < 0) {
    iVar6 = param_2 + 1;
  }
  iVar6 = iVar6 >> 1;
  iVar4 = FUN_031dcd10(param_1,iVar6,param_4,param_3);
  lVar1 = param_4 + (long)iVar6 * 8;
  iVar5 = FUN_031dcd10(param_1 + (long)iVar6 * 0xc,param_2 - iVar6,lVar1,param_3);
  iVar6 = 0;
  if (iVar4 < 1) {
    uVar16 = 0;
    iVar7 = 0;
    if (iVar4 < 1) goto LAB_031dcee8;
  }
  else {
    uVar16 = 0;
    iVar7 = 0;
    if (0 < iVar5) {
      iVar7 = 0;
      uVar16 = 0;
      iVar6 = 0;
      do {
        lVar10 = *(long *)(param_4 + (long)iVar7 * 8);
        iVar2 = *(int *)(lVar10 + 4);
        lVar12 = *(long *)(lVar1 + (long)iVar6 * 8);
        iVar3 = *(int *)(lVar12 + 4);
        iVar15 = (int)uVar16;
        if (iVar2 < iVar3) {
          param_3[iVar15] = lVar10;
          iVar7 = iVar7 + 1;
        }
        else {
          param_3[iVar15] = lVar12;
          if (iVar2 <= iVar3) {
            iVar7 = iVar7 + 1;
          }
          iVar6 = iVar6 + 1;
        }
        uVar16 = (ulong)(iVar15 + 1);
      } while ((iVar6 < iVar5) && (iVar7 < iVar4));
    }
    if (iVar4 <= iVar7) goto LAB_031dcee8;
  }
  uVar13 = (ulong)iVar7;
  uVar11 = (ulong)(int)uVar16;
  uVar8 = ~uVar13;
  if ((iVar4 - iVar7 & 1U) != 0) {
    lVar10 = uVar13 * 8;
    uVar16 = uVar11 + 1;
    uVar13 = uVar13 + 1;
    param_3[uVar11] = *(long *)(param_4 + lVar10);
    uVar11 = uVar16;
  }
  if (uVar8 + (long)iVar4 != 0) {
    lVar10 = (long)iVar4 - uVar13;
    plVar9 = (long *)(param_4 + uVar13 * 8 + 8);
    plVar14 = param_3 + uVar11 + 1;
    uVar16 = uVar11;
    do {
      plVar14[-1] = plVar9[-1];
      uVar16 = uVar16 + 2;
      lVar10 = lVar10 + -2;
      *plVar14 = *plVar9;
      plVar9 = plVar9 + 2;
      plVar14 = plVar14 + 2;
    } while (lVar10 != 0);
  }
LAB_031dcee8:
  if (iVar6 < iVar5) {
    uVar13 = (ulong)iVar6;
    uVar11 = (ulong)(int)uVar16;
    uVar8 = ~uVar13;
    if ((iVar5 - iVar6 & 1U) != 0) {
      lVar10 = uVar13 * 8;
      uVar16 = uVar11 + 1;
      uVar13 = uVar13 + 1;
      param_3[uVar11] = *(long *)(lVar1 + lVar10);
      uVar11 = uVar16;
    }
    if (uVar8 + (long)iVar5 != 0) {
      lVar10 = (long)iVar5 - uVar13;
      plVar9 = param_3 + uVar11 + 1;
      plVar14 = (long *)(lVar1 + uVar13 * 8 + 8);
      uVar16 = uVar11;
      do {
        plVar9[-1] = plVar14[-1];
        uVar16 = uVar16 + 2;
        lVar10 = lVar10 + -2;
        *plVar9 = *plVar14;
        plVar9 = plVar9 + 2;
        plVar14 = plVar14 + 2;
      } while (lVar10 != 0);
    }
  }
  FUN_033299e0(0xb17fc73d);
  return uVar16 & 0xffffffff;
}


