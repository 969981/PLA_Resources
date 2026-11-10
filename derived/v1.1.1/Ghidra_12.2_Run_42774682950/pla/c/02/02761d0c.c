/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02761d0c; name: FUN_02761d0c
 */


void FUN_02761d0c(int *param_1,long param_2,undefined8 param_3)

{
  int local_28 [2];
  
  FUN_02761d64(local_28);
  if (local_28[0] == 0) {
    FUN_02762004(param_1,param_2 + 0xd,param_3);
  }
  else {
    *param_1 = local_28[0];
  }
  return;
}


