/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c01970; name: FUN_01c01970
 */


bool FUN_01c01970(long param_1,int param_2)

{
  if (*(char *)(param_1 + 0x10d0) == '\0') {
    return false;
  }
  return *(int *)(param_1 + 0x10d4) == param_2;
}


