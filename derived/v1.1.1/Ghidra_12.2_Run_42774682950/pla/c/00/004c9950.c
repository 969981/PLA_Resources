/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c9950; name: FUN_004c9950
 */


bool FUN_004c9950(long param_1)

{
  if (*(int *)(param_1 + 0x5c) == 0) {
    return *(int *)(param_1 + 0x48) == 0;
  }
  return false;
}


