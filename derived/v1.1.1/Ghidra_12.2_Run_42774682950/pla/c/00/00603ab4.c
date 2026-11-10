/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00603ab4; name: FUN_00603ab4
 */


ulong FUN_00603ab4(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar6 = (ulong)uVar2;
  if ((int)uVar2 < 1) {
    bVar3 = *(byte *)(param_1 + 8);
  }
  else {
    uVar5 = 0;
    do {
      pbVar4 = (byte *)FUN_0032b79c(param_1 + 0x10,uVar5);
      uVar1 = (ulong)(*pbVar4 >> 1);
      if ((*pbVar4 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar4 + 8);
      }
      uVar5 = uVar5 + 1;
      uVar6 = uVar1 + uVar6 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (uVar2 != uVar5);
    bVar3 = *(byte *)(param_1 + 8);
  }
  if ((bVar3 & 1) == 0) {
    *(int *)(param_1 + 0x28) = (int)uVar6;
    return uVar6;
  }
  uVar6 = FUN_0031a310(param_1 + 8,uVar6,param_1 + 0x28);
  return uVar6;
}


