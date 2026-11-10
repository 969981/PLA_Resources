/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011da948; name: FUN_011da948
 */


void FUN_011da948(long param_1,ulong param_2,ulong param_3)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if ((param_2 & 1) != 0) {
    if ((param_3 & 1) == 0) {
      local_40 = 0x5816c8754365e6d2;
      pcStack_38 = "PLAY_UI_BATTLE_OPEN";
      local_30 = 0x13;
    }
    else {
      local_40 = 0x371c8bc1efb44380;
      pcStack_38 = "PLAY_UI_BATTLE_OPEN_NUSHI";
      local_30 = 0x19;
    }
    local_28 = (long *)0x0;
    FUN_028354b0(&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
  }
  local_40 = 0x994cd76cf26dfc40;
  pcStack_38 = "anime_wake";
  local_30 = 10;
  local_28 = (long *)0x0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_40);
  }
  FUN_00d42690(param_1,1,1);
  *(undefined1 *)(param_1 + 0x5ab) = 1;
  return;
}


