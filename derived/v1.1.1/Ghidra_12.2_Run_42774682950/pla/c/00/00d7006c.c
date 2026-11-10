/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d7006c; name: FUN_00d7006c
 */


void FUN_00d7006c(long param_1)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if (*(int *)(param_1 + 0x5b0) == 0) {
    local_40 = 0x5d66ab460490467e;
    pcStack_38 = "PLAY_UI_COMMON_TIPS_WINDOW";
    local_30 = 0x1a;
    local_28 = (long *)0x0;
    FUN_028354b0(&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
  }
  FUN_00d7331c(param_1,0);
  return;
}


