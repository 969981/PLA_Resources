/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fd65b0; name: FUN_02fd65b0
 */


undefined2 FUN_02fd65b0(long param_1,uint param_2)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  
  lVar8 = *(long *)(param_1 + 0x48);
  lVar2 = 0;
  if (lVar8 != 0) {
    lVar2 = lVar8 + param_1 + 0x48;
  }
  piVar1 = (int *)(lVar2 + 0x40);
  if (*(int *)(lVar2 + 0x44) == 2) {
    return *(undefined2 *)((long)piVar1 + (long)*piVar1 + 4);
  }
  iVar5 = *piVar1;
  iVar7 = 0;
  iVar9 = *(int *)(lVar2 + 0x44) + -1;
  while( true ) {
    uVar3 = iVar9 + iVar7;
    if ((int)uVar3 < 0) {
      uVar3 = uVar3 + 1;
    }
    uVar4 = (int)uVar3 >> 1;
    lVar8 = (long)((ulong)uVar3 << 0x20) >> 0x21;
    uVar3 = *(uint *)((long)piVar1 +
                     (-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3) +
                     (long)iVar5);
    lVar2 = lVar8 + 1;
    if ((uVar3 <= param_2) && (param_2 < *(uint *)((long)piVar1 + lVar2 * 8 + (long)iVar5))) break;
    iVar6 = (int)lVar2;
    if (param_2 <= uVar3) {
      iVar9 = uVar4 - 1;
      iVar6 = iVar7;
    }
    iVar7 = iVar6;
  }
  return *(undefined2 *)((long)piVar1 + lVar8 * 8 + (long)iVar5 + 4);
}


