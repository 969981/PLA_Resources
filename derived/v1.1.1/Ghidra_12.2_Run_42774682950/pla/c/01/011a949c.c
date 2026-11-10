/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011a949c; name: FUN_011a949c
 */


void FUN_011a949c(undefined8 param_1)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0x88f0022ddfa427ab;
  pcStack_38 = "pane_T_h_og_detail_00_1";
  local_30 = 0x17;
  local_28 = (long *)0x0;
  FUN_011ab12c(param_1,0xcf40feca234edc0d,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x88f0012ddfa425f8;
  pcStack_38 = "pane_T_h_og_detail_00_0";
  local_30 = 0x17;
  local_28 = (long *)0x0;
  FUN_011ab12c(param_1,0xcf40feca234edc0d,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x4ac81c154161b747;
  pcStack_38 = "pane_T_h_og_watch_00";
  local_30 = 0x14;
  local_28 = (long *)0x0;
  FUN_011ab12c(param_1,0xcf40f7ca234ed028,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


