/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01807048; name: FUN_01807048
 */


bool FUN_01807048(long param_1)

{
  return (*(byte *)(param_1 + 8) & 7) != 0;
}


