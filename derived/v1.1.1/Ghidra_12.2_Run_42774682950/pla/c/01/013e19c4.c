/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013e19c4; name: thunk_FUN_00d42890
 */


bool thunk_FUN_00d42890(long param_1)

{
  if (*(long *)(param_1 + 0x440) == 0) {
    return false;
  }
  return *(char *)(*(long *)(param_1 + 0x440) + 0x60) != '\0';
}


