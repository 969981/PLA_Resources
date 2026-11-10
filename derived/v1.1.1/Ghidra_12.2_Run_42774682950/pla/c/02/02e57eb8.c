/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e57eb8; name: FUN_02e57eb8
 */


void FUN_02e57eb8(undefined4 *param_1,undefined4 *param_2)

{
  param_1[4] = param_2[4];
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *param_1 = *param_2;
  param_2[4] = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  *param_2 = 0;
  FUN_02e56b44(param_1 + 6);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  return;
}


