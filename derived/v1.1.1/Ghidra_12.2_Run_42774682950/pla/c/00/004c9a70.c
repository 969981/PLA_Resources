/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c9a70; name: FUN_004c9a70
 */


bool FUN_004c9a70(long param_1)

{
  if (((*(int *)(param_1 + 0x6f0) == 1) && (*(int *)(param_1 + 0x38) != 0)) &&
     (*(int *)(param_1 + 0x5c) == 0x2e)) {
    return *(int *)(param_1 + 0x4d8) != 2;
  }
  return false;
}


