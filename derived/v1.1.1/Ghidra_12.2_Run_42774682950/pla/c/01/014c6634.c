/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c6634; name: FUN_014c6634
 */


void FUN_014c6634(long param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0x55247f90b9dd4b32;
  pcStack_38 = "button_page_L";
  local_30 = 0xd;
  local_28 = (long *)0x0;
  uVar1 = thunk_FUN_00d2e944(param_1 + 0x180,&local_40);
  FUN_0280779c(uVar1,param_2 & 1);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x55249190b9dd69c8;
  pcStack_38 = "button_page_R";
  local_30 = 0xd;
  local_28 = (long *)0x0;
  uVar1 = thunk_FUN_00d2e944(param_1 + 0x180,&local_40);
  FUN_0280779c(uVar1,param_2 & 1);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


