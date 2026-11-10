/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014fe33c; name: FUN_014fe33c
 */


void FUN_014fe33c(long param_1,ulong param_2)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0x8a692e786012cb88;
  pcStack_38 = "anime_shift_confirm_close";
  param_1 = param_1 + 0x180;
  local_30 = 0x19;
  local_28 = (long *)0x0;
  FUN_00d2df7c(param_1,&local_40);
  if ((param_2 & 1) != 0) {
    FUN_00d2e5c8(param_1,&local_40);
    FUN_00d2e4b8(param_1,&local_40);
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


