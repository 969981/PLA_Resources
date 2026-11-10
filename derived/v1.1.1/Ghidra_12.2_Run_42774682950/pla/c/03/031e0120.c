/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e0120; name: FUN_031e0120
 */


void FUN_031e0120(long param_1,long param_2,long param_3,undefined8 param_4,long *param_5,
                 long *param_6)

{
  undefined4 *puVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  int *local_68;
  
  uVar13 = param_2 - param_1;
  lVar3 = tpidr_el0;
  uVar12 = uVar13 >> 3;
  iVar11 = (int)uVar12;
  if (iVar11 == 0) {
    local_68 = (int *)0x0;
    bVar2 = false;
    goto LAB_031e025c;
  }
  lVar5 = *(long *)(lVar3 + 0x38d490);
  if (lVar5 == 0) {
    lVar5 = FUN_0333d16c(0,1);
    *(long *)(lVar3 + 0x38d490) = lVar5;
  }
  lVar5 = *(long *)(lVar5 + 8);
  uVar4 = (long)(uVar13 * 0x80000000 + 0x7f00000000) >> 0x20 & 0xffffffffffffff80;
  if (*(ulong *)(lVar5 + 0x10) < uVar4) {
LAB_031e03c4:
    local_68 = (int *)FUN_032ce670();
  }
  else {
    local_68 = *(int **)(lVar5 + 0x18);
    uVar4 = uVar4 + (long)local_68;
    if (*(ulong *)(lVar5 + 0x20) < uVar4) goto LAB_031e03c4;
    *(ulong *)(lVar5 + 0x18) = uVar4;
  }
  if (iVar11 < 1) {
    bVar2 = false;
  }
  else {
    uVar6 = uVar13 >> 3 & 0xffffffff;
    uVar4 = uVar13 >> 3 & 3;
    if (uVar6 - 1 < 3) {
      uVar8 = 0;
      uVar6 = 0;
    }
    else {
      uVar8 = 0;
      piVar7 = local_68 + 2;
      do {
        iVar10 = (int)uVar8;
        piVar7[-2] = iVar10;
        piVar7[-1] = iVar10 + 1;
        uVar8 = uVar8 + 4;
        *piVar7 = iVar10 + 2;
        piVar7[1] = iVar10 + 3;
        piVar7 = piVar7 + 4;
      } while (uVar6 - uVar4 != uVar8);
      uVar6 = uVar8 & 0xffffffff;
    }
    if (uVar4 != 0) {
      piVar7 = local_68 + uVar8;
      do {
        *piVar7 = (int)uVar6;
        uVar6 = (ulong)((int)uVar6 + 1);
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 1;
      } while (uVar4 != 0);
    }
    if (1 < iVar11) {
      FUN_031e0e00(local_68,0,iVar11 + -1,param_3);
    }
    bVar2 = true;
  }
LAB_031e025c:
  if ((int)(*(uint *)((long)param_5 + 0xc) & 0x3fffffff) < iVar11) {
    lVar5 = FUN_031d6208(PTR_PTR_0434a090,uVar12 & 0xffffffff,*param_5,(int)param_5[1]);
    *param_5 = lVar5;
  }
  if ((int)param_5[1] != iVar11) {
    *(int *)(param_5 + 1) = iVar11;
  }
  if ((int)(*(uint *)((long)param_6 + 0xc) & 0x3fffffff) < iVar11) {
    lVar5 = FUN_031e0d70(PTR_PTR_0434a090,uVar12 & 0xffffffff,*param_6,(int)param_6[1]);
    *param_6 = lVar5;
  }
  if ((int)param_6[1] != iVar11) {
    *(int *)(param_6 + 1) = iVar11;
  }
  if (bVar2) {
    lVar5 = 0;
    uVar12 = uVar13 >> 3 & 0xffffffff;
    piVar7 = local_68;
    do {
      puVar1 = (undefined4 *)(param_1 + (long)*piVar7 * 8);
      lVar9 = *param_5;
      *(undefined4 *)(lVar9 + lVar5) = *puVar1;
      ((undefined4 *)(lVar9 + lVar5))[1] = puVar1[1];
      uVar12 = uVar12 - 1;
      *(undefined8 *)(*param_6 + lVar5) = *(undefined8 *)(param_3 + (long)*piVar7 * 8);
      lVar5 = lVar5 + 8;
      piVar7 = piVar7 + 1;
    } while (uVar12 != 0);
  }
  lVar5 = *(long *)(lVar3 + 0x38d490);
  if (lVar5 == 0) {
    lVar5 = FUN_0333d16c(0,1);
    *(long *)(lVar3 + 0x38d490) = lVar5;
  }
  lVar3 = *(long *)(lVar5 + 8);
  uVar12 = (long)(uVar13 * 0x80000000 + 0x7f00000000) >> 0x20 & 0xffffffffffffff80;
  if (((*(ulong *)(lVar3 + 0x10) < uVar12) || (*(long *)(lVar3 + 0x18) != (long)local_68 + uVar12))
     || (*(int **)(lVar3 + 0x28) == local_68)) {
    FUN_032cedf0(lVar3,local_68);
    return;
  }
  *(int **)(lVar3 + 0x18) = local_68;
  return;
}


