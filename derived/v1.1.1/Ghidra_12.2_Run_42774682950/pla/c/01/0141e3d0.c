/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0141e3d0; name: FUN_0141e3d0
 */


void FUN_0141e3d0(long param_1)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if (*(char *)(param_1 + 0x5e1) == '\0') {
    if (*(char *)(param_1 + 0x5e0) != '\0') {
      local_40 = 0x6cebcecbf447d28d;
      pcStack_38 = "anime_vfx_gauge_max";
      local_30 = 0x13;
      local_28 = (long *)0x0;
      FUN_00d2df7c(param_1 + 0x180,&local_40);
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x20))();
      }
      local_40 = 0x61b387f4bd5ebd11;
      pcStack_38 = "PLAY_UI_COMMON_PICBOOK_GAUGE_MAX";
      local_30 = 0x20;
      local_28 = (long *)0x0;
      FUN_028354b0(&local_40);
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x20))();
      }
    }
    *(undefined1 *)(param_1 + 0x5e1) = 1;
  }
  return;
}


