/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025772f8; name: FUN_025772f8
 */


void FUN_025772f8(long param_1)

{
  long lVar1;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  if (((*(int *)(param_1 + 0x750) != 2) && (*(char *)(param_1 + 0x5b4) != '\0')) &&
     (*(int *)(param_1 + 0x704) == 0)) {
    local_60 = 0x371b1c25a05c0892;
    pcStack_58 = "anime_switch_item";
    local_50 = 0x11;
    local_48 = (long *)0x0;
    lVar1 = 0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_60);
      lVar1 = *(long *)(param_1 + 0x2c8);
    }
    local_60 = 0xdab742ea2591a120;
    pcStack_58 = "anime_switch_poke";
    local_50 = 0x11;
    local_48 = (long *)0x0;
    if (lVar1 != 0) {
      FUN_0283b430(lVar1,&local_60);
    }
    if (*(int *)(param_1 + 0x5ac) == 0) {
      *(undefined4 *)(param_1 + 0x5ac) = 1;
      local_60 = 0xdab742ea2591a120;
      pcStack_58 = "anime_switch_poke";
      local_50 = 0x11;
      local_48 = (long *)0x0;
      if (*(long *)(param_1 + 0x2c8) != 0) {
        FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_60);
      }
      pcStack_58 = "PLAY_UI_COMMON_HUD_POKE";
      local_60 = 0xc605d67fc853b98;
    }
    else {
      *(undefined4 *)(param_1 + 0x5ac) = 0;
      local_60 = 0x371b1c25a05c0892;
      pcStack_58 = "anime_switch_item";
      local_50 = 0x11;
      local_48 = (long *)0x0;
      if (*(long *)(param_1 + 0x2c8) != 0) {
        FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_60);
      }
      pcStack_58 = "PLAY_UI_COMMON_HUD_ITEM";
      local_60 = 0x764197257d2a50ea;
    }
    local_50 = 0x17;
    local_48 = (long *)0x0;
    FUN_028354b0(&local_60);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    local_60 = 0x226c496911ce8776;
    pcStack_58 = "anime_L_btn_zr_00_key_select";
    local_50 = 0x1c;
    local_48 = (long *)0x0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_60);
    }
    FUN_0257b998(param_1);
    FUN_0257c070(param_1);
    FUN_0257c2d8(param_1);
    FUN_02579ebc(param_1);
  }
  return;
}


