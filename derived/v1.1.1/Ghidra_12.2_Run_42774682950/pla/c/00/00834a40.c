/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00834a40; name: FUN_00834a40
 */


bool FUN_00834a40(long param_1)

{
  if (*(int *)(param_1 + 0x98) == 2) {
    return *(int *)(param_1 + 0x68) - 2U < 3;
  }
  return false;
}


