/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013cf79c; name: FUN_013cf79c
 */


void FUN_013cf79c(long param_1)

{
  long *plVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  FUN_00d42438(param_1,0,1);
  FUN_00d428c4(param_1);
  local_40 = 0x20b4a3ce93c6338;
  pcStack_38 = "grid_cursor";
  local_30 = 0xb;
  local_28 = (long *)0x0;
  plVar1 = (long *)thunk_FUN_00d2f008(param_1 + 0x180,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if ((plVar1 != (long *)0x0) && (*(char *)((long)plVar1 + 0xa3) != '\0')) {
    *(undefined1 *)((long)plVar1 + 0xa3) = 0;
    (**(code **)(*plVar1 + 0xa0))(plVar1,0);
  }
  local_40 = 0xe2a06d3a0634e918;
  pcStack_38 = "grid_panel";
  local_30 = 10;
  local_28 = (long *)0x0;
  plVar1 = (long *)FUN_00d2ec48(param_1 + 0x180,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if ((plVar1 != (long *)0x0) && (*(char *)((long)plVar1 + 0xa2) != '\0')) {
    *(undefined1 *)((long)plVar1 + 0xa2) = 0;
    (**(code **)(*plVar1 + 0x98))(plVar1,0);
  }
  return;
}


