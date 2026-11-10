/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0120e13c; name: FUN_0120e13c
 */


void FUN_0120e13c(long param_1)

{
  undefined8 uVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_28 = (long *)0x0;
  local_40 = 0x917389f633874ee9;
  pcStack_38 = "search_sub_list";
  local_30 = 0xf;
  uVar1 = thunk_FUN_00d2ee28(param_1 + 0x180,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  FUN_0280779c(uVar1,0);
  FUN_0280787c(uVar1);
  return;
}


