/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014fd310; name: FUN_014fd310
 */


void FUN_014fd310(long param_1)

{
  long lVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  lVar1 = param_1 + 0x180;
  if (*(char *)(param_1 + 0x650) == '\0') {
    local_40 = 0x3e15d4fcf512bfb7;
    pcStack_38 = "waza_custom_list";
    local_30 = 0x10;
    local_28 = (long *)0x0;
    FUN_00d2ee28(lVar1,&local_40);
    FUN_0280787c();
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    local_40 = 0x97490c5fdbbdb8fe;
    pcStack_38 = "custom_list_cursor";
    local_30 = 0x12;
  }
  else {
    local_40 = 0xf4f2119844d295f9;
    pcStack_38 = "poke_waza_list";
    local_30 = 0xe;
    local_28 = (long *)0x0;
    FUN_00d2ee28(lVar1,&local_40);
    FUN_0280787c();
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    local_40 = 0x33666ec2888983b7;
    pcStack_38 = "poke_waza_cursor";
    local_30 = 0x10;
  }
  local_28 = (long *)0x0;
  FUN_014f9eb0(param_1,&local_40,0);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0xa1dd1316bf836295;
  pcStack_38 = "anime_info_add_wake";
  local_30 = 0x13;
  local_28 = (long *)0x0;
  FUN_00d2df7c(lVar1,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  *(undefined1 *)(param_1 + 0x65d) = 1;
  return;
}


