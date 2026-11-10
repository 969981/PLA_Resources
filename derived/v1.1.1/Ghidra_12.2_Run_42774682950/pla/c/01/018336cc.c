/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018336cc; name: FUN_018336cc
 */


void FUN_018336cc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  strncpy((char *)(param_1 + 6),(char *)param_2[1],0x80);
  *param_1 = *param_2;
  param_1[3] = param_3[1];
  param_1[2] = *param_3;
  param_1[5] = param_4[1];
  param_1[4] = *param_4;
  return;
}


