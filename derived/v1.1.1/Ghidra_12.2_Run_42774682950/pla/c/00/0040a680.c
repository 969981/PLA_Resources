/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040a680; name: FUN_0040a680
 */


int FUN_0040a680(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1 - *param_2;
  if ((iVar1 == 0) &&
     (iVar1 = memcmp(*(void **)(param_1 + 2),*(void **)(param_2 + 2),(long)*param_1), iVar1 == 0)) {
    return param_1[1] - param_2[1];
  }
  return iVar1;
}


