/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4040c; name: FUN_02f4040c
 */


void FUN_02f4040c(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfb | (param_2 & 1) << 2;
  return;
}


