/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315bf58; name: FUN_0315bf58
 */


long FUN_0315bf58(long param_1,int *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  long lVar2;
  undefined2 *puVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  int *piVar15;
  int local_70 [2];
  int local_68 [2];
  
  iVar6 = *(int *)(param_1 + 0x30);
  iVar11 = *(int *)(*(long *)(param_1 + 0x70) + (long)*param_2 * 4);
  if (iVar11 == -1) {
    iVar11 = *(int *)(param_1 + 0x88);
    *(int *)(*(long *)(param_1 + 0x70) + (long)*param_2 * 4) = iVar11;
    iVar9 = *(int *)(param_1 + 0x88);
    iVar10 = iVar9 + 1;
    lVar8 = *(long *)(param_1 + 0x80);
    if ((int)(*(uint *)(param_1 + 0x8c) & 0x3fffffff) <= iVar9) {
      lVar8 = FUN_0315c798(PTR_PTR_0434a080,iVar10);
      iVar9 = *(int *)(param_1 + 0x88);
      *(long *)(param_1 + 0x80) = lVar8;
    }
    *(int *)(param_1 + 0x88) = iVar10;
    *(undefined8 *)(lVar8 + (long)iVar9 * 8) = 0xffffffff;
  }
  piVar1 = (int *)(*(long *)(param_1 + 0x80) + (long)iVar11 * 8);
  piVar15 = piVar1 + 1;
  FUN_0315bc90(local_68,param_1,*piVar15 + 1);
  iVar11 = *(int *)(param_1 + 0x30);
  iVar9 = local_68[0] - iVar11;
  lVar8 = *(long *)(param_1 + 0x90) + (long)iVar9 * 8;
  iVar10 = *piVar15;
  lVar2 = *(long *)(param_1 + 0xb0) + (long)iVar9 * 4;
  if (0 < iVar10) {
    lVar12 = 0;
    lVar14 = 0;
    while( true ) {
      iVar13 = (int)lVar14;
      iVar10 = iVar13 + *piVar1;
      lVar5 = 0x28;
      if (iVar11 <= iVar10) {
        lVar5 = 0x90;
      }
      iVar4 = 0;
      if (iVar11 <= iVar10) {
        iVar4 = iVar11;
      }
      puVar3 = (undefined2 *)(*(long *)(param_1 + lVar5) + (long)(iVar13 + (*piVar1 - iVar4)) * 8);
      *(undefined2 *)(lVar8 + lVar12) = *puVar3;
      uVar7 = *(undefined4 *)(puVar3 + 1);
      lVar5 = lVar8 + lVar14 * 8;
      *(undefined2 *)(lVar5 + 6) = puVar3[3];
      *(undefined4 *)(lVar5 + 2) = uVar7;
      iVar10 = (iVar13 - iVar6) + *piVar1;
      *(undefined4 *)(lVar2 + lVar14 * 4) =
           *(undefined4 *)(*(long *)(param_1 + 0xb0) + (long)iVar10 * 4);
      iVar11 = *(int *)(param_1 + 0x58);
      memcpy((void *)(*(long *)(param_1 + 0xa0) + (long)(iVar11 * (iVar9 + iVar13)) * 4),
             (void *)(*(long *)(param_1 + 0xa0) + (long)(iVar11 * iVar10) * 4),(long)iVar11 << 2);
      iVar10 = *piVar15;
      lVar14 = lVar14 + 1;
      if (iVar10 <= lVar14) break;
      iVar11 = *(int *)(param_1 + 0x30);
      lVar12 = lVar12 + 8;
    }
  }
  if (param_3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x58) == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = *(long *)(param_1 + 0xa0) + (long)(*(int *)(param_1 + 0x58) * (iVar10 + iVar9)) * 4;
    }
    *param_3 = lVar14;
    iVar10 = *piVar15;
  }
  if (iVar10 != 0) {
    local_70[0] = *piVar1;
    FUN_0315c188(param_1,local_70);
  }
  if (param_4 != (long *)0x0) {
    *param_4 = lVar2 + (long)*piVar15 * 4;
  }
  *(undefined4 *)(lVar2 + (long)*piVar15 * 4) = 0;
  *piVar15 = *piVar15 + 1;
  *piVar1 = local_68[0];
  return lVar8 + (long)iVar10 * 8;
}


