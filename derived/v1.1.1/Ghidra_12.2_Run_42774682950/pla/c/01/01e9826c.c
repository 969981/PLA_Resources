/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e9826c; name: FUN_01e9826c
 */


bool FUN_01e9826c(long param_1)

{
  if (*(char *)(param_1 + 0x4dc) == '\0') {
    return *(char *)(param_1 + 0x4da) != '\0';
  }
  return true;
}


