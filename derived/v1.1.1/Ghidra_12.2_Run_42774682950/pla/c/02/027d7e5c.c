/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027d7e5c; name: FUN_027d7e5c
 */


bool FUN_027d7e5c(long param_1,short param_2)

{
  if ((*(long *)(param_1 + 0x70) == 0) || (*(char *)(param_1 + 0x90) == '\0')) {
    return false;
  }
  return *(short *)(param_1 + 0x92) == param_2;
}


