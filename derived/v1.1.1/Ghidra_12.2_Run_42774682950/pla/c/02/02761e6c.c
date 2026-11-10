/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02761e6c; name: FUN_02761e6c
 */


void FUN_02761e6c(int *param_1,long param_2,undefined8 param_3)

{
  int local_28 [2];
  
  FUN_02761ec4(local_28);
  if (local_28[0] == 0) {
    FUN_02761ec4(param_1,param_2 + 4,param_3);
  }
  else {
    *param_1 = local_28[0];
  }
  return;
}


