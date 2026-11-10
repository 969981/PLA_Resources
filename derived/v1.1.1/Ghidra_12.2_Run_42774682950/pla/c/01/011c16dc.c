/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011c16dc; name: FUN_011c16dc
 */


void FUN_011c16dc(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_50 = 0x80e531f87fab5ae6;
  pcStack_48 = "anime_L_wazamode_info_00_switch";
  local_40 = 0x1f;
  local_38 = (long *)0x0;
  FUN_0283b1e8(*param_1,&local_50);
  if (param_2 == 1) {
    uVar1 = *param_1;
    uVar2 = 0x3f800000;
  }
  else {
    if (param_2 != 2) {
      return;
    }
    uVar1 = *param_1;
    uVar2 = 0;
  }
  local_50 = 0x80e531f87fab5ae6;
  pcStack_48 = "anime_L_wazamode_info_00_switch";
  local_40 = 0x1f;
  local_38 = (long *)0x0;
  FUN_0283b748(uVar2,uVar1,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


