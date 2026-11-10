/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ea6530; name: FUN_01ea6530
 */


bool FUN_01ea6530(long param_1)

{
  if (*(char *)(param_1 + 0x4df) == '\0') {
    return 0xb < *(uint *)(param_1 + 0x5e0);
  }
  return false;
}


