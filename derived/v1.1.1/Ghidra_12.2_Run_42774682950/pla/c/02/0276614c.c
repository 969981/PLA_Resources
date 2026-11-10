/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0276614c; name: FUN_0276614c
 */


void FUN_0276614c(int *param_1,long param_2,undefined8 param_3)

{
  int local_28 [2];
  
  FUN_027661a4(local_28);
  if (local_28[0] == 0) {
    FUN_027662fc(param_1,param_2 + 10,param_3);
  }
  else {
    *param_1 = local_28[0];
  }
  return;
}


