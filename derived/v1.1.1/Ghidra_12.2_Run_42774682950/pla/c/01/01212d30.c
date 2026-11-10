/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01212d30; name: FUN_01212d30
 */


undefined8 FUN_01212d30(long param_1)

{
  ulong uVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0xfe5f54723c2cbde6;
  pcStack_38 = "anime_sub_to_main";
  local_30 = 0x11;
  local_28 = (long *)0x0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    uVar1 = FUN_0283b5c4(*(long *)(param_1 + 0x2c8),&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  local_40 = 0x7788dc1eb6cdc49e;
  pcStack_38 = "search_main_cursor";
  local_30 = 0x12;
  local_28 = (long *)0x0;
  FUN_0120d780(param_1,&local_40,1);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0xb7df13b127374897;
  pcStack_38 = "anime_search_list_main";
  local_30 = 0x16;
  local_28 = (long *)0x0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_40);
  }
  FUN_0120d9f0(param_1);
  FUN_0120e0b8(param_1);
  FUN_00d42438(param_1,1,1);
  if (*(long *)(param_1 + 0x440) != 0) {
    FUN_02831440();
  }
  return 1;
}


