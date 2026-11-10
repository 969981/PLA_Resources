/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d66018; name: FUN_00d66018
 */


void FUN_00d66018(long param_1)

{
  long lVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_28 = (long *)0x0;
  local_40 = 0xbf2bb2531b7cde14;
  pcStack_38 = "anime_out";
  local_30 = 9;
  FUN_00d2e2d0(param_1 + 0x180,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x8e89686f5660e8f;
  pcStack_38 = "anime_in";
  local_30 = 8;
  local_28 = (long *)0x0;
  lVar1 = 0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_40);
    lVar1 = *(long *)(param_1 + 0x2c8);
  }
  local_40 = 0x3b8f5513c2470901;
  pcStack_38 = "anime_keep";
  local_30 = 10;
  local_28 = (long *)0x0;
  if (lVar1 != 0) {
    FUN_0283b1e8(lVar1,&local_40);
  }
  local_40 = 0x18ce7f774c54f7c9;
  pcStack_38 = "PLAY_UI_COMMON_MENU_OPEN";
  local_30 = 0x18;
  local_28 = (long *)0x0;
  FUN_028354b0(&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


