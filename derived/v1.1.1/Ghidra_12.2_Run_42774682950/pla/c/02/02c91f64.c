/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c91f64; name: FUN_02c91f64
 */


void FUN_02c91f64(long param_1,byte param_2)

{
  *(byte *)(*(long *)(param_1 + 0x268) + 0xb0) = param_2 & 1;
  return;
}


