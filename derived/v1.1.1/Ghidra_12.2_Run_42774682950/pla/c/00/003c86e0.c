/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c86e0; name: FUN_003c86e0
 */


undefined8 FUN_003c86e0(long *param_1,long param_2)

{
  *param_1 = param_2;
  if (*(int *)(param_2 + 8) == 0) {
    param_1[1] = param_2;
    *(undefined4 *)(param_1 + 2) = 0;
    return 1;
  }
  return 1;
}


