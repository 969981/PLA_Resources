/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003bee94; name: FUN_003bee94
 */


long FUN_003bee94(long param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar3 = FUN_0033b68c(param_1 + 0x18);
  if (uVar3 == 0) {
    uVar2 = 0;
    uVar5 = 0;
  }
  else {
    uVar2 = (uint)uVar3;
    uVar5 = 0xb;
    if ((uVar3 & 0x80000000) == 0) {
      uVar5 = (ulong)((((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1);
    }
  }
  *(uint *)(param_1 + 0x28) = uVar2;
  lVar4 = uVar5 + uVar3;
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 7) != 0) {
    if ((uVar2 & 1) != 0) {
      bVar1 = **(byte **)(param_1 + 0x30);
      uVar3 = (ulong)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar3 = *(ulong *)(*(byte **)(param_1 + 0x30) + 8);
      }
      lVar4 = lVar4 + uVar3 + (ulong)(((uint)LZCOUNT((uint)uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      if ((int)*(uint *)(param_1 + 0x38) < 0) {
        lVar4 = lVar4 + 0xb;
      }
      else {
        lVar4 = (ulong)((((uint)LZCOUNT(*(uint *)(param_1 + 0x38) | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1)
                + lVar4;
      }
    }
    if ((uVar2 >> 2 & 1) != 0) {
      if ((int)*(uint *)(param_1 + 0x3c) < 0) {
        uVar3 = 0xb;
      }
      else {
        uVar3 = (ulong)((((uint)LZCOUNT(*(uint *)(param_1 + 0x3c) | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1)
        ;
      }
      lVar4 = uVar3 + lVar4;
    }
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x14) = (int)lVar4;
    return lVar4;
  }
  lVar4 = FUN_0031a310((byte *)(param_1 + 8),lVar4,param_1 + 0x14);
  return lVar4;
}


