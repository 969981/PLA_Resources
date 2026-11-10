/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fbb84; name: FUN_007fbb84
 */


bool FUN_007fbb84(long param_1)

{
  if (*(int *)(param_1 + 0x1148) == 9) {
    return *(int *)(param_1 + 0x1118) - 2U < 3;
  }
  return false;
}


