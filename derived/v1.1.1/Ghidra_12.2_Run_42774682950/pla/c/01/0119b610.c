/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0119b610; name: FUN_0119b610
 */


void FUN_0119b610(long param_1,int param_2)

{
  long lVar1;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  lVar1 = param_1 + 0x180;
  if (param_2 == 0) {
    local_50 = 0xc6987dfd11ad810c;
    pcStack_48 = "anime_L_tab_disp_00_unselect";
    local_40 = 0x1c;
    local_38 = (long *)0x0;
    FUN_00d2e2d0(lVar1,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0xffbd7d3bbacc9423;
    pcStack_48 = "anime_L_tab_disp_00_select";
    local_40 = 0x1a;
    local_38 = (long *)0x0;
    FUN_00d2df7c(lVar1,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0xbbac3651d3db3812;
    pcStack_48 = "anime_L_tab_disp_01_select";
    local_40 = 0x1a;
    local_38 = (long *)0x0;
    FUN_00d2e2d0(lVar1,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0xdd0d083cfed72b61;
    pcStack_48 = "anime_L_tab_disp_01_unselect";
    local_40 = 0x1c;
  }
  else {
    if (param_2 != 1) {
      return;
    }
    local_50 = 0xffbd7d3bbacc9423;
    pcStack_48 = "anime_L_tab_disp_00_select";
    local_40 = 0x1a;
    local_38 = (long *)0x0;
    FUN_00d2e2d0(lVar1,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0xc6987dfd11ad810c;
    pcStack_48 = "anime_L_tab_disp_00_unselect";
    local_40 = 0x1c;
    local_38 = (long *)0x0;
    FUN_00d2df7c(lVar1,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0xdd0d083cfed72b61;
    pcStack_48 = "anime_L_tab_disp_01_unselect";
    local_40 = 0x1c;
    local_38 = (long *)0x0;
    FUN_00d2e2d0(lVar1,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0xbbac3651d3db3812;
    pcStack_48 = "anime_L_tab_disp_01_select";
    local_40 = 0x1a;
  }
  local_38 = (long *)0x0;
  FUN_00d2df7c(lVar1,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  *(int *)(param_1 + 0x16c4) = param_2;
  return;
}


