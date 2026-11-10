/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e0e8c; name: FUN_001e0e8c
 */


undefined8 FUN_001e0e8c(void *param_1,size_t param_2,void *param_3)

{
  int iVar1;
  
  iVar1 = memcmp(param_1,param_3,param_2);
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}


