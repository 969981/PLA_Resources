/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0122f5e4; name: FUN_0122f5e4
 */


void FUN_0122f5e4(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0x801e693dd9658f72;
  pcStack_38 = "scroll_panel_00";
  local_30 = 0xf;
  local_28 = (long *)0x0;
  uVar1 = thunk_FUN_00d2ee28(param_1 + 0x180,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (param_2 == -2) {
    param_2 = FUN_0281a514(uVar1);
  }
  FUN_0281efbc(uVar1,param_2);
  return;
}


