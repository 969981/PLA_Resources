/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01becb04; name: FUN_01becb04
 */


void FUN_01becb04(long param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  undefined1 *local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if (param_2 == 1) {
    local_60 = 0x18c123e546f96792;
    pcStack_58 = "anm_control_moveLeftEasingNormal";
  }
  else {
    if (param_2 != 2) goto LAB_01becbec;
    local_60 = 0x2b7484e168bf2166;
    pcStack_58 = "anm_control_moveLeftEasingStrife";
  }
  local_28 = (long *)0x0;
  local_30 = 0x11;
  pcStack_38 = "player_controller";
  local_40 = &DAT_817adb705f596ed9;
  local_50 = 0x20;
  local_48 = (long *)0x0;
  uVar1 = FUN_00ea3f80(&local_40,&local_60);
  *(undefined4 *)(param_1 + 0x350) = uVar1;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
LAB_01becbec:
  FUN_01a51334(param_1,param_1 + 0xc10,param_2);
  return;
}


