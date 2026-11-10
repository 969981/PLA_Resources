/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085dae0; name: FUN_0085dae0
 */


undefined8 FUN_0085dae0(long param_1)

{
  if (*(int **)(param_1 + 0x13a0) != (int *)0x0) {
    if (2 < **(int **)(param_1 + 0x13a0) - 2U) {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x13a0) = 0;
  }
  return 1;
}


