/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011a1b54; name: FUN_011a1b54
 */


void FUN_011a1b54(long param_1,int param_2)

{
  ulong local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  if (param_2 < 0) {
    if (*(int *)(param_1 + 0x16c4) == 0) {
      pcStack_48 = "anime_tab_shift_left_list_in_L";
      local_50 = 0xc49d49f73f72;
      goto LAB_011a1bbc;
    }
    pcStack_48 = "anime_tab_shift_right_list_in_L";
    local_50 = 0x872d39e82b53;
  }
  else {
    if (*(int *)(param_1 + 0x16c4) == 0) {
      pcStack_48 = "anime_tab_shift_left_list_in_R";
      local_50 = 0xd69d49f75e08;
LAB_011a1bbc:
      local_50 = local_50 | 0x663b000000000000;
      local_40 = 0x1e;
      goto LAB_011a1bc8;
    }
    pcStack_48 = "anime_tab_shift_right_list_in_R";
    local_50 = 0xa52d39e85e4d;
  }
  local_50 = local_50 | 0x2e5d000000000000;
  local_40 = 0x1f;
LAB_011a1bc8:
  local_38 = (long *)0x0;
  FUN_00d2df7c(param_1 + 0x180,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  FUN_00d5f468(&local_50,param_1,0,param_2,1,0);
  FUN_00d2df7c(param_1 + 0x180,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  FUN_011aaa40(*(undefined8 *)(param_1 + 0x16b8),*(undefined4 *)(param_1 + 0x16c4),param_2);
  return;
}


