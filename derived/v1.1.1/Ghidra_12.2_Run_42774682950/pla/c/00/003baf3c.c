/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003baf3c; name: FUN_003baf3c
 */


long FUN_003baf3c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((~uVar2 & 3) == 0) {
    bVar3 = **(byte **)(param_1 + 0x18);
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = *(ulong *)(*(byte **)(param_1 + 0x18) + 8);
    }
    lVar4 = uVar1 + (((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 3;
    bVar3 = *(byte *)(param_1 + 8);
  }
  else {
    if ((uVar2 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      bVar3 = **(byte **)(param_1 + 0x18);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(*(byte **)(param_1 + 0x18) + 8);
      }
      lVar4 = uVar1 + (((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 & 2) != 0) {
      lVar4 = lVar4 + 2;
    }
    bVar3 = *(byte *)(param_1 + 8);
  }
  if ((bVar3 & 1) == 0) {
    *(int *)(param_1 + 0x14) = (int)lVar4;
    return lVar4;
  }
  lVar4 = FUN_0031a310(param_1 + 8,lVar4,param_1 + 0x14);
  return lVar4;
}


