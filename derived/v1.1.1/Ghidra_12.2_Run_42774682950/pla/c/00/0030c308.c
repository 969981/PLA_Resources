/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030c308; name: FUN_0030c308
 */


long FUN_0030c308(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(ulong *)(param_1 + 0x10) == 0) {
    lVar2 = 0;
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  else {
    lVar2 = ((LZCOUNT(*(ulong *)(param_1 + 0x10) | 1) ^ 0x3fU) * 9 + 0x49 >> 6) + 1;
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  if (uVar1 != 0) {
    if ((int)uVar1 < 0) {
      uVar3 = 0xb;
    }
    else {
      uVar3 = (ulong)((((uint)LZCOUNT(uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1);
    }
    lVar2 = uVar3 + lVar2;
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x1c) = (int)lVar2;
    return lVar2;
  }
  lVar2 = FUN_0031a310((byte *)(param_1 + 8),lVar2,param_1 + 0x1c);
  return lVar2;
}


