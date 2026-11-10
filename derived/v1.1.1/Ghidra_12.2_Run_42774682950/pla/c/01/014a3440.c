/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014a3440; name: FUN_014a3440
 */


bool FUN_014a3440(long param_1)

{
  if (*(long *)(param_1 + 0x80) == 0) {
    return false;
  }
  return *(char *)(*(long *)(param_1 + 0x80) + 0x1e1) != '\0';
}


