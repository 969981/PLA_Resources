/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004ca910; name: FUN_004ca910
 */


bool FUN_004ca910(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 0xa8) + 0x3d0) == 0) {
    return false;
  }
  return *(int *)(param_1 + 0x5c) != 0x24;
}


