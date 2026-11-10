/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018e1ab8; name: FUN_018e1ab8
 */


bool FUN_018e1ab8(long param_1)

{
  if (*(char *)(param_1 + 0x75b) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x7a8) == '\0') {
    return *(char *)(param_1 + 0x7a9) != '\0';
  }
  return true;
}


