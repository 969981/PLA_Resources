/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00840680; name: FUN_00840680
 */


void FUN_00840680(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 + 0x1f;
  if (-1 < (int)param_2) {
    uVar1 = param_2;
  }
  param_1 = param_1 + (long)((int)uVar1 >> 5) * 4;
  *(uint *)(param_1 + 0x5f0) = *(uint *)(param_1 + 0x5f0) | 1 << (ulong)(param_2 & 0x1f);
  return;
}


