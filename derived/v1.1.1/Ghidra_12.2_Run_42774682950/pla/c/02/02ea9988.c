/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea9988; name: FUN_02ea9988
 */


undefined4 * FUN_02ea9988(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  
  if (*(long *)(param_1 + 4) != 0) {
    FUN_02e771a8();
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  piVar1 = *(int **)(param_2 + 4);
  *(int **)(param_1 + 4) = piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  return param_1;
}


