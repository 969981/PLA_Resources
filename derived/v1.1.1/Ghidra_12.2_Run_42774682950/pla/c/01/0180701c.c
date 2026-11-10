/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0180701c; name: FUN_0180701c
 */


void FUN_0180701c(long param_1,uint param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = 1L << (param_3 & 0x3f);
  if ((param_2 & 1) == 0) {
    *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) & (uVar1 ^ 0xffffffffffffffff);
    return;
  }
  *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) | uVar1;
  return;
}


