/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02761960; name: FUN_02761960
 */


void FUN_02761960(int *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_38;
  int local_28 [2];
  
  local_38 = 0xb;
  FUN_027619cc(local_28,&local_38);
  if (local_28[0] == 0) {
    FUN_02761a28(param_1,param_2,param_3);
  }
  else {
    *param_1 = local_28[0];
  }
  return;
}


