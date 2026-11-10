/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ba3a14; name: FUN_01ba3a14
 */


void FUN_01ba3a14(long param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  
  uVar1 = 1L << (param_2 & 0x3f);
  if ((param_3 & 1) == 0) {
    *(ulong *)(param_1 + 0xad8) = *(ulong *)(param_1 + 0xad8) & (uVar1 ^ 0xffffffffffffffff);
    return;
  }
  *(ulong *)(param_1 + 0xad8) = *(ulong *)(param_1 + 0xad8) | uVar1;
  return;
}


