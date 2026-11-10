/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02765e20; name: FUN_02765e20
 */


void FUN_02765e20(int *param_1,long param_2,long *param_3)

{
  char cVar1;
  int local_28 [2];
  
  FUN_02765ea0(local_28);
  if (local_28[0] == 0) {
    cVar1 = *(char *)(*param_3 + param_3[2]);
    param_3[2] = param_3[2] + 1;
    if (cVar1 == -0x47) {
      FUN_0276638c(param_1,param_2 + 0x1c,param_3);
    }
    else {
      *param_1 = 1;
    }
  }
  else {
    *param_1 = local_28[0];
  }
  return;
}


