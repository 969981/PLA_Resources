/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011aaa40; name: FUN_011aaa40
 */


void FUN_011aaa40(long param_1,int param_2,int param_3)

{
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (param_3 < 0) {
    if (param_2 == 0) {
      local_30 = 0x663bc49d49f73f72;
      pcStack_28 = "anime_tab_shift_left_list_in_L";
      goto LAB_011aaa94;
    }
    local_30 = 0x2e5d872d39e82b53;
    pcStack_28 = "anime_tab_shift_right_list_in_L";
  }
  else {
    if (param_2 == 0) {
      local_30 = 0x663bd69d49f75e08;
      pcStack_28 = "anime_tab_shift_left_list_in_R";
LAB_011aaa94:
      local_20 = 0x1e;
      goto LAB_011aaa9c;
    }
    local_30 = 0x2e5da52d39e85e4d;
    pcStack_28 = "anime_tab_shift_right_list_in_R";
  }
  local_20 = 0x1f;
LAB_011aaa9c:
  uStack_18 = 0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_30);
  }
  return;
}


