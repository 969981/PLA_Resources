/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01363370; name: FUN_01363370
 */


bool FUN_01363370(long param_1)

{
  if (*(int *)(param_1 + 0x54) == 4) {
    return *(char *)(param_1 + 0xc0) == '\0';
  }
  return false;
}


