/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027f8400; name: FUN_027f8400
 */


void FUN_027f8400(long param_1,ulong param_2)

{
  undefined1 uVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if ((param_2 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x179) = 1;
    local_40 = 0xd2b7481b82583848;
    pcStack_38 = "PLAY_UI_COMMON_TRANSITION";
    local_30 = 0x19;
    local_28 = (long *)0x0;
    FUN_028354b0(&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    uVar1 = FUN_027f82d8(param_1);
    local_40 = CONCAT71(local_40._1_7_,uVar1);
    FUN_02835650(&local_40);
    FUN_027f5e14(*(undefined8 *)(param_1 + 200),4);
  }
  else {
    *(undefined4 *)(param_1 + 0x174) = 4;
    *(undefined1 *)(param_1 + 0x179) = 1;
    local_40 = 0xd2b7481b82583848;
    pcStack_38 = "PLAY_UI_COMMON_TRANSITION";
    local_30 = 0x19;
    local_28 = (long *)0x0;
    FUN_028354b0(&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    local_40 = CONCAT71(local_40._1_7_,0xc);
    FUN_02835968(&local_40);
    FUN_027f5d8c(*(undefined8 *)(param_1 + 200),1,0xc);
  }
  return;
}


