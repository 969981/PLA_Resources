/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ae710c; name: FUN_00ae710c
 */


bool FUN_00ae710c(long param_1)

{
  if ((*(char *)(param_1 + 0x2b0) == '\0') && (*(char *)(param_1 + 0x2e0) == '\0')) {
    return *(char *)(param_1 + 0x310) != '\0';
  }
  return true;
}


