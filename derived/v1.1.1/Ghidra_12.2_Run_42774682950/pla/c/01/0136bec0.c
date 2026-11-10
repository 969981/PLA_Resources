/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0136bec0; name: FUN_0136bec0
 */


void FUN_0136bec0(long param_1)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  FUN_00d42690(param_1,1,1);
  local_40 = 0x994cd76cf26dfc40;
  pcStack_38 = "anime_wake";
  param_1 = param_1 + 0x180;
  local_30 = 10;
  local_28 = (long *)0x0;
  FUN_00d2df7c(param_1,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x3b8f5513c2470901;
  pcStack_38 = "anime_keep";
  local_30 = 10;
  local_28 = (long *)0x0;
  FUN_00d2df7c(param_1,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x9ae6b4f95d2c5825;
  pcStack_38 = "anime_L_mngm_time_00_keep";
  local_30 = 0x19;
  local_28 = (long *)0x0;
  FUN_00d2df7c(param_1,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


