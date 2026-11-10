/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0141cce4; name: FUN_0141cce4
 */


void FUN_0141cce4(long param_1,uint param_2)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0x474c2d3829c41a0d;
  pcStack_38 = "pane_T_h_star_00";
  if (9 < param_2) {
    param_2 = 10;
  }
  local_30 = 0x10;
  local_28 = (long *)0x0;
  FUN_0141d814(param_1,1,*(undefined8 *)(&DAT_03a7bc28 + (ulong)param_2 * 8),&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x77914afc28312443;
  pcStack_38 = "anime_switch_rank";
  local_30 = 0x11;
  local_28 = (long *)0x0;
  FUN_00d2df7c(param_1 + 0x180,&local_40);
  FUN_00d2e4b8((float)param_2,param_1 + 0x180,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


