/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5c540; name: FUN_02e5c540
 */


void FUN_02e5c540(long param_1,long *param_2,long *param_3,long *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  *param_4 = param_2[0xd];
  *param_3 = 0;
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    uVar2 = 0;
    uVar3 = (uint)*(long *)(param_1 + 0xa8);
    if (uVar1 != 0) {
      uVar2 = uVar3 / uVar1;
    }
    for (lVar4 = *(long *)(*param_2 + (ulong)(uVar3 - uVar2 * uVar1) * 8); lVar4 != 0;
        lVar4 = *(long *)(lVar4 + 0x48)) {
      if (*(long *)(lVar4 + 0x40) == *(long *)(param_1 + 0xa8)) {
        *param_3 = lVar4;
        *param_4 = *(long *)(lVar4 + 0x78);
        goto LAB_02e5c558;
      }
    }
  }
  *param_3 = 0;
LAB_02e5c558:
  if ((*param_5 < 2) || (*(long *)(param_1 + 0x98) == -1)) {
LAB_02e5c61c:
    *param_5 = 1;
    return;
  }
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    uVar2 = 0;
    uVar3 = (uint)*(long *)(param_1 + 0xc0);
    if (uVar1 != 0) {
      uVar2 = uVar3 / uVar1;
    }
    for (lVar4 = *(long *)(*param_2 + (ulong)(uVar3 - uVar2 * uVar1) * 8); lVar4 != 0;
        lVar4 = *(long *)(lVar4 + 0x48)) {
      if (*(long *)(lVar4 + 0x40) == *(long *)(param_1 + 0xc0)) {
        param_3[1] = lVar4;
        if (*(long *)(lVar4 + 0x78) != *param_4) {
          param_4[1] = *(long *)(lVar4 + 0x78);
          *param_5 = 2;
          return;
        }
        goto LAB_02e5c61c;
      }
    }
  }
  param_3[1] = 0;
  *param_5 = 1;
  return;
}


