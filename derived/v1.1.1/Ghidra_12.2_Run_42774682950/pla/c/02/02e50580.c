/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e50580; name: FUN_02e50580
 */


bool FUN_02e50580(long param_1)

{
  if (*(char *)(param_1 + 0x38) != '\0') {
    return true;
  }
  if (*(long *)(param_1 + 0x78) == 0) {
    return false;
  }
  return *(char *)(*(long *)(param_1 + 0x78) + 0x4c) != '\0';
}


