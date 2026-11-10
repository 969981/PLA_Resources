/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01158a30; name: FUN_01158a30
 */


undefined8 FUN_01158a30(long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  lVar9 = *param_2;
  lVar11 = *param_1;
  iVar2 = *(int *)(lVar9 + 0x94);
  iVar3 = *(int *)(*(long *)*param_4 + 0xcc);
  iVar4 = *(int *)(lVar11 + 0x94);
  iVar6 = 0;
  if (iVar3 != 0) {
    iVar6 = iVar2 / iVar3;
  }
  iVar5 = *(int *)param_4[1];
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar4 / iVar3;
  }
  iVar6 = iVar5 + iVar6 * iVar3;
  iVar7 = iVar5 + iVar7 * iVar3;
  if ((iVar4 == iVar7) || (iVar2 != iVar6)) {
    bVar1 = (iVar4 != iVar7 || iVar2 == iVar6) &&
            (ulong)(*(long *)(lVar9 + 0x60) - *(long *)(lVar9 + 0x58)) <
            (ulong)(*(long *)(lVar11 + 0x60) - *(long *)(lVar11 + 0x58));
  }
  else {
    bVar1 = true;
  }
  lVar12 = *param_3;
  iVar4 = *(int *)(lVar12 + 0x94);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar4 / iVar3;
  }
  iVar5 = iVar5 + iVar7 * iVar3;
  if ((iVar2 == iVar6) || (iVar4 != iVar5)) {
    bVar8 = (iVar2 != iVar6 || iVar4 == iVar5) &&
            (ulong)(*(long *)(lVar12 + 0x60) - *(long *)(lVar12 + 0x58)) <
            (ulong)(*(long *)(lVar9 + 0x60) - *(long *)(lVar9 + 0x58));
  }
  else {
    bVar8 = true;
  }
  if (bVar1) {
    if (bVar8) {
      *param_1 = lVar12;
      uVar10 = 1;
    }
    else {
      *param_1 = lVar9;
      *param_2 = lVar11;
      lVar9 = *param_3;
      iVar2 = *(int *)(*(long *)*param_4 + 0xcc);
      iVar3 = *(int *)(lVar9 + 0x94);
      iVar4 = 0;
      if (iVar2 != 0) {
        iVar4 = iVar3 / iVar2;
      }
      iVar4 = *(int *)param_4[1] + iVar4 * iVar2;
      iVar6 = *(int *)(lVar11 + 0x94);
      iVar5 = 0;
      if (iVar2 != 0) {
        iVar5 = iVar6 / iVar2;
      }
      iVar2 = *(int *)param_4[1] + iVar5 * iVar2;
      if ((iVar3 != iVar4) || (iVar6 == iVar2)) {
        if (iVar3 != iVar4 && iVar6 == iVar2) {
          return 1;
        }
        if ((ulong)(*(long *)(lVar11 + 0x60) - *(long *)(lVar11 + 0x58)) <=
            (ulong)(*(long *)(lVar9 + 0x60) - *(long *)(lVar9 + 0x58))) {
          return 1;
        }
      }
      uVar10 = 2;
      *param_2 = lVar9;
    }
    *param_3 = lVar11;
  }
  else {
    if (!bVar8) {
      return 0;
    }
    *param_2 = lVar12;
    *param_3 = lVar9;
    lVar9 = *param_2;
    iVar2 = *(int *)(*(long *)*param_4 + 0xcc);
    iVar3 = *(int *)(lVar9 + 0x94);
    iVar4 = 0;
    if (iVar2 != 0) {
      iVar4 = iVar3 / iVar2;
    }
    lVar11 = *param_1;
    iVar4 = *(int *)param_4[1] + iVar4 * iVar2;
    iVar6 = *(int *)(lVar11 + 0x94);
    iVar5 = 0;
    if (iVar2 != 0) {
      iVar5 = iVar6 / iVar2;
    }
    iVar2 = *(int *)param_4[1] + iVar5 * iVar2;
    if (((iVar3 == iVar4) && (iVar6 != iVar2)) ||
       ((uVar10 = 1, iVar3 == iVar4 || iVar6 != iVar2 &&
        ((ulong)(*(long *)(lVar9 + 0x60) - *(long *)(lVar9 + 0x58)) <
         (ulong)(*(long *)(lVar11 + 0x60) - *(long *)(lVar11 + 0x58)))))) {
      *param_1 = lVar9;
      *param_2 = lVar11;
      return 2;
    }
  }
  return uVar10;
}


