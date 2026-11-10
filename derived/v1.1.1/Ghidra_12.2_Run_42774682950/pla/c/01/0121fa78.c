/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0121fa78; name: FUN_0121fa78
 */


void FUN_0121fa78(undefined8 param_1)

{
  ulong uVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  FUN_00d52940();
  FUN_00d55250(param_1);
  uVar1 = FUN_00d54910(param_1);
  if ((uVar1 & 1) == 0) {
    local_40 = 0x1f7e1ba02170001c;
    pcStack_38 = "PLAY_UI_COMMON_RELEASE";
    local_30 = 0x16;
    local_28 = (long *)0x0;
    FUN_028354b0(&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
  }
  else {
    local_40 = 0x898ac1bbdbe7b512;
    pcStack_38 = "PLAY_UI_COMMON_CATCH";
    local_30 = 0x14;
    local_28 = (long *)0x0;
    FUN_028354b0(&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    FUN_0121c924(param_1,1);
  }
  return;
}


