/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013ccb14; name: FUN_013ccb14
 */


void FUN_013ccb14(long param_1,int param_2)

{
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0x8158e72a82381501;
  if (param_2 != 1) {
    local_30 = 0x8158d12a8237ef9f;
  }
  pcStack_28 = "anime_slide_out_l";
  if (param_2 != 1) {
    pcStack_28 = "anime_slide_out_r";
  }
  local_20 = 0x11;
  local_18 = (long *)0x0;
  FUN_00d2df7c(param_1 + 0x180,&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


