/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00205b90; name: FUN_00205b90
 */


void * FUN_00205b90(void *param_1,void *param_2,size_t param_3)

{
  if (param_3 != 0) {
    memcpy(param_1,param_2,param_3);
    param_1 = (void *)((long)param_1 + param_3);
  }
  return param_1;
}


