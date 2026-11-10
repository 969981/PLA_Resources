/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003bd5f8; name: FUN_003bd5f8
 */


long FUN_003bd5f8(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  
  lVar2 = FUN_0033b68c(param_1 + 0x18);
  if (lVar2 == 0) {
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    uVar5 = (uint)lVar2;
    if ((int)uVar5 < 0) {
      uVar6 = 0xb;
    }
    else {
      uVar6 = (ulong)((((uint)LZCOUNT(uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1);
    }
  }
  lVar2 = uVar6 + lVar2;
  *(uint *)(param_1 + 0x28) = uVar5;
  lVar3 = FUN_0033b68c(param_1 + 0x30);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)lVar3;
    if ((int)uVar5 < 0) {
      uVar6 = 0xb;
    }
    else {
      uVar6 = (ulong)((((uint)LZCOUNT(uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1);
    }
    lVar2 = uVar6 + lVar2;
  }
  *(uint *)(param_1 + 0x40) = uVar5;
  uVar5 = *(uint *)(param_1 + 0x50);
  lVar2 = lVar2 + lVar3 + (ulong)uVar5;
  if (0 < (int)uVar5) {
    uVar7 = 0;
    do {
      pbVar4 = (byte *)FUN_0032b79c(param_1 + 0x48,uVar7);
      uVar6 = (ulong)(*pbVar4 >> 1);
      if ((*pbVar4 & 1) != 0) {
        uVar6 = *(ulong *)(pbVar4 + 8);
      }
      uVar7 = uVar7 + 1;
      lVar2 = uVar6 + lVar2 + (ulong)(((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (uVar5 != uVar7);
  }
  uVar5 = *(uint *)(param_1 + 0x10);
  if ((uVar5 & 3) != 0) {
    if ((uVar5 & 1) != 0) {
      bVar1 = **(byte **)(param_1 + 0x60);
      uVar6 = (ulong)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar6 = *(ulong *)(*(byte **)(param_1 + 0x60) + 8);
      }
      lVar2 = lVar2 + uVar6 + (ulong)(((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar5 >> 1 & 1) != 0) {
      bVar1 = **(byte **)(param_1 + 0x68);
      uVar6 = (ulong)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar6 = *(ulong *)(*(byte **)(param_1 + 0x68) + 8);
      }
      lVar2 = lVar2 + uVar6 + (ulong)(((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x14) = (int)lVar2;
    return lVar2;
  }
  lVar2 = FUN_0031a310((byte *)(param_1 + 8),lVar2,param_1 + 0x14);
  return lVar2;
}


