/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00699984; name: FUN_00699984
 */


ulong FUN_00699984(long param_1)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar6 = (ulong)uVar1;
  if ((int)uVar1 < 1) {
    uVar4 = *(ulong *)(param_1 + 8);
  }
  else {
    uVar5 = 0;
    do {
      pbVar3 = (byte *)FUN_0032b79c(param_1 + 0x10,uVar5);
      uVar4 = (ulong)(*pbVar3 >> 1);
      if ((*pbVar3 & 1) != 0) {
        uVar4 = *(ulong *)(pbVar3 + 8);
      }
      uVar5 = uVar5 + 1;
      uVar6 = uVar4 + uVar6 + (ulong)(((uint)LZCOUNT((uint)uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (uVar1 != uVar5);
    uVar4 = *(ulong *)(param_1 + 8);
  }
  if ((uVar4 & 1) != 0) {
    bVar2 = *(byte *)((uVar4 & 0xfffffffffffffffe) + 8);
    if ((bVar2 & 1) == 0) {
      uVar4 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar4 = *(ulong *)((uVar4 & 0xfffffffffffffffe) + 0x10);
    }
    uVar6 = uVar4 + uVar6;
  }
  *(int *)(param_1 + 0x28) = (int)uVar6;
  return uVar6;
}


