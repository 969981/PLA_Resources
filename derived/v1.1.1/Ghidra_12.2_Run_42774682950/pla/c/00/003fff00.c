/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fff00; name: FUN_003fff00
 */


bool FUN_003fff00(long param_1)

{
  if (*(int *)(param_1 + 0x1b0) != 0) {
    return false;
  }
  if (*(long *)(param_1 + 0x150) == 0) {
    return *(long *)(param_1 + 600) != 0;
  }
  return true;
}


