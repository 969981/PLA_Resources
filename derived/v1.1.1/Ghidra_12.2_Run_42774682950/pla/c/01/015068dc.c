/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015068dc; name: FUN_015068dc
 */


void FUN_015068dc(long param_1)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0x1c128de5cab86fb2;
  pcStack_38 = "waza_shop_list";
  local_30 = 0xe;
  local_28 = (long *)0x0;
  thunk_FUN_00d2ee28(param_1 + 0x180,&local_40);
  FUN_0280787c();
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  FUN_015050c4(param_1,0);
  local_40 = 0xa1dd1316bf836295;
  pcStack_38 = "anime_info_add_wake";
  local_30 = 0x13;
  local_28 = (long *)0x0;
  FUN_00d2df7c(param_1 + 0x180,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  *(undefined1 *)(param_1 + 0x638) = 1;
  return;
}


