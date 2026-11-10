/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02765c5c; name: FUN_02765c5c
 */


void FUN_02765c5c(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int local_38 [2];
  long local_28;
  
  local_28 = 0;
  FUN_02765cd8(local_38,&local_28);
  if (local_38[0] == 0) {
    if (local_28 == 0xb) {
      FUN_02765d14(param_1,param_2,param_3);
    }
    else {
      *param_1 = 5;
    }
  }
  else {
    *param_1 = local_38[0];
  }
  return;
}


