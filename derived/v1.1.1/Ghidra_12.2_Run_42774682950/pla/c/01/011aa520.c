/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011aa520; name: FUN_011aa520
 */


void FUN_011aa520(long param_1,int param_2,int param_3)

{
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (param_3 < 0) {
    if (param_2 != 0) {
      local_30 = 0x48b0821a07790306;
      pcStack_28 = "anime_tab_shift_right_list_out_L";
      goto LAB_011aa574;
    }
    local_30 = 0xf2e960d070fadce1;
    pcStack_28 = "anime_tab_shift_left_list_out_L";
  }
  else {
    if (param_2 != 0) {
      local_30 = 0x48b09c1a07792f34;
      pcStack_28 = "anime_tab_shift_right_list_out_R";
LAB_011aa574:
      local_20 = 0x20;
      goto LAB_011aa57c;
    }
    local_30 = 0xf2e94ad070fab77f;
    pcStack_28 = "anime_tab_shift_left_list_out_R";
  }
  local_20 = 0x1f;
LAB_011aa57c:
  uStack_18 = 0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_30);
  }
  return;
}


