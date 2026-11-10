/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0141d60c; name: FUN_0141d60c
 */


void FUN_0141d60c(long param_1)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0x65551cbaec45b094;
  pcStack_38 = "anime_L_nextrank_progress_00_gauge_scale";
  local_30 = 0x28;
  local_28 = (long *)0x0;
  FUN_00d2df7c(param_1 + 0x180,&local_40);
  FUN_00d2e4b8(100.0 - *(float *)(param_1 + 0x5d0),param_1 + 0x180,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


