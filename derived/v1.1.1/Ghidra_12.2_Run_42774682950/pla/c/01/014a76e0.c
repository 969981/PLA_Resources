/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014a76e0; name: FUN_014a76e0
 */


void FUN_014a76e0(long param_1)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_28 = (long *)0x0;
  local_40 = 0x41e6422dedb92bb6;
  pcStack_38 = "anime_L_money_00_money_sub";
  param_1 = param_1 + 0x180;
  local_30 = 0x1a;
  FUN_00d2df7c(param_1,&local_40);
  FUN_00d2e5c8(param_1,&local_40);
  FUN_00d2e4b8(param_1,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


