/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031dba30; name: FUN_031dba30
 */


void FUN_031dba30(long param_1,uint *param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  undefined *puVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  int iVar18;
  int *piVar19;
  long lVar20;
  long lVar21;
  undefined4 local_70 [2];
  uint local_68 [2];
  
  local_68[0] = *param_2;
  uVar17 = 0xffffffff;
  local_70[0] = 0xffffffff;
  FUN_031dbc7c(param_1,local_68,local_70,param_3);
  uVar16 = (ulong)(int)*param_2;
  lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x18) + uVar16 * 0x10;
  sVar6 = *(short *)(lVar10 + 8);
  sVar7 = *(short *)(lVar10 + 10);
  lVar10 = FUN_031dd758((long *)(param_1 + 0x50),param_2);
  puVar9 = PTR_PTR_0434a080;
  if (lVar10 == 0) {
    uVar12 = 0;
  }
  else {
    uVar17 = *(uint *)(lVar10 + 4);
    uVar12 = ((int)lVar10 - (int)*(undefined8 *)(param_1 + 0x60)) * 0x20000000;
  }
  lVar10 = *(long *)(param_1 + 0x50);
  piVar19 = (int *)(lVar10 + (long)(int)(uVar17 | uVar12) * 0x18 + 0x10);
  if (*piVar19 < 1) {
    return;
  }
  lVar20 = 0;
  iVar1 = (int)sVar7 + (int)sVar6;
  lVar21 = 0;
  do {
    lVar14 = *(long *)(lVar10 + (long)(int)(uVar17 | uVar12) * 0x18 + 8);
    uVar2 = iVar1 + (int)lVar21;
    sVar6 = (short)uVar2;
    iVar18 = *(int *)(lVar14 + lVar20);
    iVar15 = (int)uVar16;
    if (iVar18 == iVar15) {
      iVar18 = *(int *)(lVar14 + lVar20 + 4);
      if (lVar21 < iVar18) {
        uVar3 = iVar18 + iVar1;
        sVar7 = (short)uVar3;
        sVar5 = sVar7;
        if ((uVar3 & 0xffff) <= (uVar2 & 0xffff)) {
          sVar5 = sVar6;
          sVar6 = sVar7;
        }
        lVar14 = *param_3;
        iVar11 = (int)param_3[1];
        iVar18 = iVar11 + 1;
        if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar11) {
          lVar14 = FUN_031dcbe0(puVar9,iVar18,lVar14,iVar11,(long)param_3 + 0xc);
          *param_3 = lVar14;
          iVar11 = (int)param_3[1];
        }
        piVar13 = (int *)(lVar14 + (long)iVar11 * 0x10);
        *piVar13 = iVar15;
        piVar13[1] = iVar15;
        *(short *)(piVar13 + 2) = sVar6;
        *(short *)((long)piVar13 + 10) = sVar5;
LAB_031dbc30:
        *(undefined1 *)(piVar13 + 3) = 3;
        *(int *)(param_3 + 1) = iVar18;
      }
    }
    else if (-1 < iVar18) {
      iVar11 = iVar15;
      iVar8 = iVar18;
      if (iVar18 <= iVar15) {
        iVar11 = iVar18;
        iVar8 = iVar15;
      }
      lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x18) + (long)iVar18 * 0x10;
      sVar7 = *(short *)(lVar4 + 10) + *(short *)(lVar4 + 8) +
              (short)*(undefined4 *)(lVar14 + lVar20 + 4);
      sVar5 = sVar6;
      if (iVar18 <= iVar15) {
        sVar5 = sVar7;
        sVar7 = sVar6;
      }
      lVar14 = *param_3;
      iVar15 = (int)param_3[1];
      iVar18 = iVar15 + 1;
      if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar15) {
        lVar14 = FUN_031dcbe0(puVar9,iVar18,lVar14,iVar15,(long)param_3 + 0xc);
        *param_3 = lVar14;
        iVar15 = (int)param_3[1];
      }
      piVar13 = (int *)(lVar14 + (long)iVar15 * 0x10);
      *piVar13 = iVar11;
      piVar13[1] = iVar8;
      *(short *)(piVar13 + 2) = sVar5;
      *(short *)((long)piVar13 + 10) = sVar7;
      goto LAB_031dbc30;
    }
    lVar21 = lVar21 + 1;
    if (*piVar19 <= lVar21) {
      return;
    }
    uVar16 = (ulong)*param_2;
    lVar20 = lVar20 + 8;
  } while( true );
}


