/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01312f90; name: FUN_01312f90
 */


float FUN_01312f90(long param_1)

{
  if (*(char *)(param_1 + 0x1e08) == '\0') {
    return ((*(float *)(param_1 + 0xd60) + 468.0) / 936.0) * 2000.0 + -1000.0;
  }
  return *(float *)(param_1 + 0xd60);
}


