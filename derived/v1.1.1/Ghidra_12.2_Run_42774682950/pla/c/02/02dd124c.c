/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dd124c; name: FUN_02dd124c
 */


void FUN_02dd124c(long param_1,uint param_2)

{
  *(uint *)(*(long *)(param_1 + 0x90) + 0xf0) = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  return;
}


