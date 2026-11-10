/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007bc6e8; name: FUN_007bc6e8
 */


void FUN_007bc6e8(long param_1)

{
  long *plVar1;
  
  plVar1 = operator_new(0x10);
  *plVar1 = (long)(PTR_DAT_04377128 + 0x10);
  plVar1[1] = *(long *)(param_1 + 8);
  return;
}


