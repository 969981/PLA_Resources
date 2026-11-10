/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ea5fcc; name: FUN_01ea5fcc
 */


bool FUN_01ea5fcc(long param_1)

{
  if (*(int *)(param_1 + 0x5e0) == 0) {
    return *(char *)(param_1 + 0x632) != '\0';
  }
  return true;
}


