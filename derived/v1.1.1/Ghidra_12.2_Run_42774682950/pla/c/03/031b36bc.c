/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b36bc; name: FUN_031b36bc
 */


uint FUN_031b36bc(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  uVar1 = param_2 & 0x3fffff;
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + (ulong)(param_2 >> 0x16) * 0xf0) + 0x20);
  uVar3 = uVar1 - *(int *)(lVar2 + 0x20);
  if ((int)uVar1 < *(int *)(lVar2 + 0x20)) {
    if (*(int *)(lVar2 + 0x98) == 0) {
      uVar3 = uVar1;
    }
    else {
      uVar3 = *(uint *)(*(long *)(lVar2 + 0x90) + (ulong)uVar1 * 4);
      if (uVar3 == 0xffffffff) {
        lVar2 = *(long *)(lVar2 + 0x18) + (ulong)uVar1 * 0x10;
        goto LAB_031b3710;
      }
    }
    lVar2 = *(long *)(lVar2 + 0xb0);
  }
  else {
    lVar2 = *(long *)(lVar2 + 0xd0);
  }
  lVar2 = lVar2 + (long)(int)uVar3 * 0x10;
LAB_031b3710:
  uVar1 = 0xffffffff;
  if (*(short *)(lVar2 + 0xc) != -1) {
    uVar1 = (int)*(short *)(lVar2 + 0xc) | param_2 & 0xffc00000;
  }
  return uVar1;
}


