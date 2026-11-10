/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086edf0; name: FUN_0086edf0
 */


undefined8 FUN_0086edf0(long param_1)

{
  if (((*(int *)(param_1 + 1000) == 0) || (*(int *)(param_1 + 0x408) == 0)) ||
     (*(int *)(param_1 + 0x428) == 0)) {
    return 0;
  }
  return 1;
}


