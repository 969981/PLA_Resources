/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00327990; name: FUN_00327990
 */


void FUN_00327990(long param_1)

{
  if (0 < *(int *)(param_1 + 4)) {
    if (*(long *)(*(long *)(param_1 + 8) + -8) == 0) {
      FUN_002ee710();
      return;
    }
  }
  return;
}


