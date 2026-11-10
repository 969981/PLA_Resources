/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025774e0; name: FUN_025774e0
 */


void FUN_025774e0(long param_1)

{
  char cVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if ((*(int *)(param_1 + 0x750) != 2) &&
     (((cVar1 = *(char *)(param_1 + 0x704), cVar1 == '\0' || (cVar1 == '\x04')) || (cVar1 == '\x02')
      ))) {
    if (*(int *)(param_1 + 0x5ac) == 0) {
      if (*(char *)(param_1 + 0x742) == '\0') {
        return;
      }
      FUN_025775ec(param_1);
      pcStack_38 = "PLAY_UI_COMMON_ITEMCHANGE";
      local_40 = 0x11387dead5311e78;
    }
    else {
      if (*(char *)(param_1 + 0x743) == '\0') {
        return;
      }
      FUN_025776dc(param_1);
      pcStack_38 = "PLAY_UI_COMMON_POKECHANGE";
      local_40 = 0x3aaf6f54168d1f9a;
    }
    local_30 = 0x19;
    local_28 = (long *)0x0;
    FUN_028354b0(&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    local_40 = 0x8c7f7cfb852c74ad;
    pcStack_38 = "anime_L_icon_key_l_00_key_select";
    local_30 = 0x20;
    local_28 = (long *)0x0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_40);
    }
    *(undefined4 *)(param_1 + 0x704) = 1;
  }
  return;
}


