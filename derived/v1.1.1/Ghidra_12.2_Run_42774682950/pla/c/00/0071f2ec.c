/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0071f2ec; name: FUN_0071f2ec
 */


ulong FUN_0071f2ec(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  long local_60;
  uint *puStack_58;
  long local_40;
  uint *puStack_38;
  
  puStack_38 = *(uint **)(param_1 + 0x20);
  uVar6 = (ulong)*puStack_38;
  FUN_006fb578(&local_40,*(undefined8 *)(puStack_38 + 6));
  puStack_58 = puStack_38;
  local_60 = local_40;
  while (local_60 != 0) {
    pbVar4 = *(byte **)(local_60 + 8);
    uVar1 = (uint)(*pbVar4 >> 1);
    if ((*pbVar4 & 1) != 0) {
      uVar1 = *(uint *)(pbVar4 + 8);
    }
    lVar3 = FUN_0030c308(pbVar4 + 0x18);
    lVar3 = lVar3 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
            (long)(int)(uVar1 + (((uint)LZCOUNT(uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2);
    uVar6 = lVar3 + uVar6 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    FUN_006fb6e8(&local_60);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    bVar2 = *(byte *)(uVar5 + 8);
    if ((bVar2 & 1) == 0) {
      uVar5 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar5 = *(ulong *)(uVar5 + 0x10);
    }
    uVar6 = uVar5 + uVar6;
  }
  *(int *)(param_1 + 0x28) = (int)uVar6;
  return uVar6;
}


