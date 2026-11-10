/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011573b0; name: FUN_011573b0
 */


int FUN_011573b0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = *param_2;
  lVar4 = *param_1;
  uVar2 = *(long *)(lVar5 + 0x60) - *(long *)(lVar5 + 0x58);
  lVar3 = *param_3;
  uVar6 = *(long *)(lVar3 + 0x60) - *(long *)(lVar3 + 0x58);
  if (uVar2 < (ulong)(*(long *)(lVar4 + 0x60) - *(long *)(lVar4 + 0x58))) {
    if (uVar6 < uVar2) {
      *param_1 = lVar3;
      iVar1 = 1;
    }
    else {
      *param_1 = lVar5;
      *param_2 = lVar4;
      lVar5 = *param_3;
      if ((ulong)(*(long *)(lVar4 + 0x60) - *(long *)(lVar4 + 0x58)) <=
          (ulong)(*(long *)(lVar5 + 0x60) - *(long *)(lVar5 + 0x58))) {
        iVar1 = 1;
        goto LAB_01157418;
      }
      iVar1 = 2;
      *param_2 = lVar5;
    }
    *param_3 = lVar4;
    lVar5 = lVar4;
  }
  else if (uVar6 < uVar2) {
    *param_2 = lVar3;
    *param_3 = lVar5;
    lVar3 = *param_2;
    lVar4 = *param_1;
    if ((ulong)(*(long *)(lVar3 + 0x60) - *(long *)(lVar3 + 0x58)) <
        (ulong)(*(long *)(lVar4 + 0x60) - *(long *)(lVar4 + 0x58))) {
      *param_1 = lVar3;
      iVar1 = 2;
      *param_2 = lVar4;
      lVar5 = *param_3;
    }
    else {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = 0;
    lVar5 = lVar3;
  }
LAB_01157418:
  lVar3 = *param_4;
  if ((ulong)(*(long *)(lVar3 + 0x60) - *(long *)(lVar3 + 0x58)) <
      (ulong)(*(long *)(lVar5 + 0x60) - *(long *)(lVar5 + 0x58))) {
    *param_3 = lVar3;
    *param_4 = lVar5;
    lVar5 = *param_3;
    lVar3 = *param_2;
    if ((ulong)(*(long *)(lVar3 + 0x60) - *(long *)(lVar3 + 0x58)) <=
        (ulong)(*(long *)(lVar5 + 0x60) - *(long *)(lVar5 + 0x58))) {
      return iVar1 + 1;
    }
    *param_2 = lVar5;
    *param_3 = lVar3;
    lVar3 = *param_2;
    lVar5 = *param_1;
    if ((ulong)(*(long *)(lVar5 + 0x60) - *(long *)(lVar5 + 0x58)) <=
        (ulong)(*(long *)(lVar3 + 0x60) - *(long *)(lVar3 + 0x58))) {
      return iVar1 + 2;
    }
    iVar1 = iVar1 + 3;
    *param_1 = lVar3;
    *param_2 = lVar5;
  }
  return iVar1;
}


