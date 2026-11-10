/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c5330; name: FUN_004c5330
 */


uint FUN_004c5330(long param_1,uint param_2)

{
  param_2 = *(uint *)(param_1 + 0x128) | param_2;
  *(uint *)(param_1 + 0x128) = param_2;
  return param_2;
}


