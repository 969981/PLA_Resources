/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002515b0; name: FUN_002515b0
 */


void FUN_002515b0(float param_1,float param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  *(int *)(param_4 + 1) = (int)param_1;
  *(int *)((long)param_4 + 0xc) = (int)param_2;
  *param_3 = 0;
  *(float *)(param_3 + 1) = param_1;
  *(float *)((long)param_3 + 0xc) = param_2;
  return;
}


