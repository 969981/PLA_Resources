/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012979bc; name: FUN_012979bc
 */


void FUN_012979bc(long param_1,int param_2)

{
  long lVar1;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  lVar1 = param_1 + 0x180;
  if (param_2 == 1) {
    local_50 = 0x615d9ae82e9c53fe;
    pcStack_48 = "anime_L_tab_00_select";
    local_40 = 0x15;
    local_38 = (long *)0x0;
    FUN_00d2e2d0(lVar1,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0x99808cac6b95bc6d;
    pcStack_48 = "anime_L_tab_00_unselect";
    local_40 = 0x17;
    local_38 = (long *)0x0;
    FUN_00d2df7c(lVar1,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0x30a271c3430e7808;
    pcStack_48 = "anime_L_tab_01_unselect";
    local_40 = 0x17;
    local_38 = (long *)0x0;
    FUN_00d2e2d0(lVar1,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0x84570819905fde5f;
    pcStack_48 = "anime_L_tab_01_select";
    local_40 = 0x15;
  }
  else {
    if (param_2 != 0) {
      return;
    }
    local_50 = 0x99808cac6b95bc6d;
    pcStack_48 = "anime_L_tab_00_unselect";
    local_40 = 0x17;
    local_38 = (long *)0x0;
    FUN_00d2e2d0(lVar1,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0x615d9ae82e9c53fe;
    pcStack_48 = "anime_L_tab_00_select";
    local_40 = 0x15;
    local_38 = (long *)0x0;
    FUN_00d2df7c(lVar1,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0x84570819905fde5f;
    pcStack_48 = "anime_L_tab_01_select";
    local_40 = 0x15;
    local_38 = (long *)0x0;
    FUN_00d2e2d0(lVar1,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0x30a271c3430e7808;
    pcStack_48 = "anime_L_tab_01_unselect";
    local_40 = 0x17;
  }
  local_38 = (long *)0x0;
  FUN_00d2df7c(lVar1,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  *(int *)(param_1 + 0x5ac) = param_2;
  return;
}


