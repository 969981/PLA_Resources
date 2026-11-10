/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d70f84; name: FUN_00d70f84
 */


void FUN_00d70f84(long param_1,int param_2)

{
  ulong local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if (param_2 < 0) {
    pcStack_38 = "button_page_L";
    local_40 = 0x7f90b9dd4b32;
  }
  else {
    pcStack_38 = "button_page_R";
    local_40 = 0x9190b9dd69c8;
  }
  local_40 = local_40 | 0x5524000000000000;
  local_30 = 0xd;
  local_28 = (long *)0x0;
  thunk_FUN_00d2e944(param_1 + 0x180,&local_40);
  FUN_02808d3c();
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  *(undefined1 *)(param_1 + 0x770) = 1;
  return;
}


