/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041cd60; name: FUN_0041cd60
 */


void FUN_0041cd60(long param_1,uint param_2)

{
  *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) & (long)(int)~param_2;
  return;
}


