/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0335b874; name: FUN_0335b874
 */


void FUN_0335b874(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 auStack_138 [256];
  int local_38;
  long *local_30;
  undefined8 local_28;
  
  local_28 = 0;
  local_38 = 0;
  local_30 = param_3;
  FUN_0335b8c8(param_1,param_2,auStack_138);
  if (0 < local_38) {
    (**(code **)(*local_30 + 0x10))(local_30,auStack_138,local_38,local_28);
  }
  return;
}


