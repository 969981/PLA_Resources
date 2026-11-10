/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d5e40; name: FUN_003d5e40
 */


void FUN_003d5e40(long *param_1,long *param_2)

{
  *param_2 = *param_2 + *param_1;
  *param_1 = 0;
  param_2[1] = param_2[1] + param_1[1];
  param_1[1] = 0;
  param_2[2] = param_2[2] + param_1[2];
  param_1[2] = 0;
  param_2[3] = param_2[3] + param_1[3];
  param_1[3] = 0;
  param_2[4] = param_2[4] + param_1[4];
  param_1[4] = 0;
  param_2[5] = param_2[5] + param_1[5];
  param_1[5] = 0;
  return;
}


