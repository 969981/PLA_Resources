/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01271108; name: FUN_01271108
 */


void FUN_01271108(long param_1,int param_2)

{
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  if (param_2 == 1) {
    local_30 = 0x6733d5f3d31c9b4b;
    pcStack_28 = "anime_L_hair_tab_00_L_cursor_r_00_key_select";
  }
  else {
    if (param_2 != 0) {
      return;
    }
    local_30 = 0x674170c73ad8a59;
    pcStack_28 = "anime_L_hair_tab_00_L_cursor_l_00_key_select";
  }
  local_20 = 0x2c;
  local_18 = (long *)0x0;
  FUN_00d2df7c(param_1 + 0x180,&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


