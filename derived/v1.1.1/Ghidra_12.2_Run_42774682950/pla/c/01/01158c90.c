/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01158c90; name: FUN_01158c90
 */


int FUN_01158c90(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  iVar5 = FUN_01158a30();
  lVar7 = *param_4;
  iVar1 = *(int *)(*(long *)*param_5 + 0xcc);
  iVar2 = *(int *)(lVar7 + 0x94);
  iVar4 = 0;
  if (iVar1 != 0) {
    iVar4 = iVar2 / iVar1;
  }
  lVar8 = *param_3;
  iVar4 = *(int *)param_5[1] + iVar4 * iVar1;
  iVar3 = *(int *)(lVar8 + 0x94);
  iVar6 = 0;
  if (iVar1 != 0) {
    iVar6 = iVar3 / iVar1;
  }
  iVar1 = *(int *)param_5[1] + iVar6 * iVar1;
  if ((iVar2 != iVar4) || (iVar3 == iVar1)) {
    if (iVar2 != iVar4 && iVar3 == iVar1) {
      return iVar5;
    }
    if ((ulong)(*(long *)(lVar8 + 0x60) - *(long *)(lVar8 + 0x58)) <=
        (ulong)(*(long *)(lVar7 + 0x60) - *(long *)(lVar7 + 0x58))) {
      return iVar5;
    }
  }
  *param_3 = lVar7;
  *param_4 = lVar8;
  lVar7 = *param_3;
  iVar1 = *(int *)(*(long *)*param_5 + 0xcc);
  iVar2 = *(int *)(lVar7 + 0x94);
  iVar4 = 0;
  if (iVar1 != 0) {
    iVar4 = iVar2 / iVar1;
  }
  lVar8 = *param_2;
  iVar4 = *(int *)param_5[1] + iVar4 * iVar1;
  iVar3 = *(int *)(lVar8 + 0x94);
  iVar6 = 0;
  if (iVar1 != 0) {
    iVar6 = iVar3 / iVar1;
  }
  iVar1 = *(int *)param_5[1] + iVar6 * iVar1;
  if (((iVar2 == iVar4) && (iVar3 != iVar1)) ||
     ((iVar6 = iVar5 + 1, iVar2 == iVar4 || iVar3 != iVar1 &&
      ((ulong)(*(long *)(lVar7 + 0x60) - *(long *)(lVar7 + 0x58)) <
       (ulong)(*(long *)(lVar8 + 0x60) - *(long *)(lVar8 + 0x58)))))) {
    *param_2 = lVar7;
    *param_3 = lVar8;
    lVar7 = *param_2;
    iVar1 = *(int *)(*(long *)*param_5 + 0xcc);
    iVar2 = *(int *)(lVar7 + 0x94);
    iVar4 = 0;
    if (iVar1 != 0) {
      iVar4 = iVar2 / iVar1;
    }
    lVar8 = *param_1;
    iVar4 = *(int *)param_5[1] + iVar4 * iVar1;
    iVar3 = *(int *)(lVar8 + 0x94);
    iVar6 = 0;
    if (iVar1 != 0) {
      iVar6 = iVar3 / iVar1;
    }
    iVar1 = *(int *)param_5[1] + iVar6 * iVar1;
    if (((iVar2 == iVar4) && (iVar3 != iVar1)) ||
       ((iVar6 = iVar5 + 2, iVar2 == iVar4 || iVar3 != iVar1 &&
        ((ulong)(*(long *)(lVar7 + 0x60) - *(long *)(lVar7 + 0x58)) <
         (ulong)(*(long *)(lVar8 + 0x60) - *(long *)(lVar8 + 0x58)))))) {
      iVar6 = iVar5 + 3;
      *param_1 = lVar7;
      *param_2 = lVar8;
    }
  }
  return iVar6;
}


