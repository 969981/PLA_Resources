/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060aeb4; name: FUN_0060aeb4
 */


long FUN_0060aeb4(long param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  
  pbVar3 = *(byte **)(param_1 + 0x10);
  bVar1 = *pbVar3;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) {
LAB_0060aec8:
      uVar4 = (ulong)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar4 = *(ulong *)(pbVar3 + 8);
      }
      lVar2 = uVar4 + (((uint)LZCOUNT((uint)uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
      pbVar3 = *(byte **)(param_1 + 0x18);
      bVar1 = *pbVar3;
      goto joined_r0x0060af24;
    }
  }
  else if (*(long *)(pbVar3 + 8) != 0) goto LAB_0060aec8;
  lVar2 = 0;
  pbVar3 = *(byte **)(param_1 + 0x18);
  bVar1 = *pbVar3;
joined_r0x0060af24:
  if ((bVar1 & 1) == 0) {
    uVar4 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar4 = *(ulong *)(pbVar3 + 8);
  }
  if (uVar4 != 0) {
    uVar4 = (ulong)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      uVar4 = *(ulong *)(pbVar3 + 8);
    }
    lVar2 = lVar2 + uVar4 + (ulong)(((uint)LZCOUNT((uint)uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x20) = (int)lVar2;
    return lVar2;
  }
  lVar2 = FUN_0031a310((byte *)(param_1 + 8),lVar2,param_1 + 0x20);
  return lVar2;
}


