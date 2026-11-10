/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013cf9a0; name: FUN_013cf9a0
 */


void FUN_013cf9a0(long param_1,uint param_2)

{
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  if (7 < param_2) {
    return;
  }
  switch(param_2) {
  case 0:
    local_30 = 0x357b59958922ce60;
    pcStack_28 = "anime_L_icon_offline_00_swtich_on";
    local_20 = 0x21;
    break;
  case 1:
    local_30 = 0x3826f18063b2d7a;
    pcStack_28 = "anime_L_icon_offline_00_swtich_off";
    goto LAB_013cf9e8;
  case 2:
    local_30 = 0x27a0071d04ca50bb;
    pcStack_28 = "anime_L_button_switch_01_switch_on";
    goto LAB_013cf9e8;
  case 3:
    local_30 = 0x1f21c34f23b04e3f;
    pcStack_28 = "anime_L_button_switch_01_switch_off";
    goto LAB_013cfa28;
  case 4:
    local_30 = 0xf97a388d1987fd38;
    pcStack_28 = "anime_L_button_switch_00_switch_on";
LAB_013cf9e8:
    local_20 = 0x22;
    break;
  case 5:
    local_30 = 0x729045c261fc6d72;
    pcStack_28 = "anime_L_button_switch_00_switch_off";
LAB_013cfa28:
    local_20 = 0x23;
    break;
  case 6:
    local_30 = 0xad53885396c4d3a8;
    pcStack_28 = "anime_switch_top";
    local_20 = 0x10;
    break;
  case 7:
    local_30 = 0x38a4e793cc753a64;
    pcStack_28 = "anime_switch_password";
    local_20 = 0x15;
  }
  local_18 = (long *)0x0;
  FUN_00d2df7c(param_1 + 0x180,&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


