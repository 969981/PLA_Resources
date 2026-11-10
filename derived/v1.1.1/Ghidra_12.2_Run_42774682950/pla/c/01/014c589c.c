/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c589c; name: FUN_014c589c
 */


void FUN_014c589c(long param_1,ulong param_2)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if ((param_2 & 1) == 0) {
    local_40 = 0xe0947fa5ea333e44;
    pcStack_38 = "anime_L_scr_04_memo_switch_text_egg";
    local_30 = 0x23;
    local_28 = (long *)0x0;
    FUN_00d2e2d0(param_1 + 0x180,&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    local_40 = 0x10a6e393976491a6;
    pcStack_38 = "anime_L_scr_04_memo_switch_text_poke";
    local_30 = 0x24;
  }
  else {
    local_40 = 0x10a6e393976491a6;
    pcStack_38 = "anime_L_scr_04_memo_switch_text_poke";
    local_30 = 0x24;
    local_28 = (long *)0x0;
    FUN_00d2e2d0(param_1 + 0x180,&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    local_40 = 0xe0947fa5ea333e44;
    pcStack_38 = "anime_L_scr_04_memo_switch_text_egg";
    local_30 = 0x23;
  }
  local_28 = (long *)0x0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_40);
  }
  return;
}


