/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0120f25c; name: FUN_0120f25c
 */


void FUN_0120f25c(long param_1)

{
  long *plVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0x917389f633874ee9;
  pcStack_38 = "search_sub_list";
  local_30 = 0xf;
  local_28 = (long *)0x0;
  plVar1 = (long *)thunk_FUN_00d2ee28(param_1 + 0x180,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  FUN_0280779c(plVar1,1);
  (**(code **)(*plVar1 + 0x58))(plVar1);
  local_40 = 0x1f1620f8536596a7;
  pcStack_38 = "search_sub_cursor";
  local_30 = 0x11;
  local_28 = (long *)0x0;
  FUN_0120d780(param_1,&local_40,1);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


