/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f26f0; name: FUN_001f26f0
 */


bool FUN_001f26f0(long param_1,long param_2)

{
  if (*(long **)(param_2 + 0x4a8) == (long *)0x0) {
    return false;
  }
  return **(long **)(param_2 + 0x4a8) == param_1;
}


