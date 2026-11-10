/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032af29c; name: FUN_032af29c
 */


size_t FUN_032af29c(long *param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (param_1[1] - *param_1 < (long)param_3) {
    sVar1 = FUN_033216f4(param_1,param_2,param_3);
    return sVar1;
  }
  memcpy(param_2,(void *)*param_1,param_3);
  *param_1 = *param_1 + param_3;
  return param_3;
}


