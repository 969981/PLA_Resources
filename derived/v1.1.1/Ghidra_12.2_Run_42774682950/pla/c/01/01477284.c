/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01477284; name: FUN_01477284
 */


void FUN_01477284(long param_1)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  FUN_00d469b4(*(undefined8 *)(param_1 + 0x68),param_1,0);
  FUN_00d42438(param_1,1,1);
  *(undefined2 *)(param_1 + 0x5ab) = 0;
  FUN_00d42690(param_1,1,1);
  local_40 = 0xca879a697d0cc79c;
  pcStack_38 = "PLAY_UI_COMMON_HUD_SLIDE_IN";
  local_30 = 0x1b;
  local_28 = (long *)0x0;
  FUN_028354b0(&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  FUN_00d7331c(param_1,0);
  local_40 = 0x3b8f5513c2470901;
  pcStack_38 = "anime_keep";
  local_30 = 10;
  local_28 = (long *)0x0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_40);
  }
  return;
}


