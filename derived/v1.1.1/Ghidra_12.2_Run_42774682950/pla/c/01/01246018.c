/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01246018; name: FUN_01246018
 */


void FUN_01246018(undefined8 *param_1,int param_2,byte param_3)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  if (param_2 == 2) {
    FUN_012461a4(param_1);
    uVar1 = *param_1;
    local_50 = 0xc6b3d17f4d586aff;
    pcStack_48 = "pane_L_tab_06";
    local_40 = 0xd;
    bVar2 = 1;
  }
  else {
    if (param_2 == 0) {
      FUN_01246254(param_1);
    }
    else {
      FUN_01246318(param_1,param_3 & 1);
    }
    local_50 = 0xc9bbd86fa19aa066;
    pcStack_48 = "pane_L_dressup_tab_00";
    local_40 = 0x15;
    local_38 = (long *)0x0;
    FUN_0283b11c(*param_1,&local_50,param_2 == 0);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0x48a8298a6cf30494;
    pcStack_48 = "pane_L_buy_tab_00";
    local_40 = 0x11;
    local_38 = (long *)0x0;
    FUN_0283b11c(*param_1,&local_50,param_2 == 1 & param_3);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    uVar1 = *param_1;
    local_50 = 0x48a82a8a6cf30647;
    pcStack_48 = "pane_L_buy_tab_01";
    local_40 = 0x11;
    bVar2 = param_2 == 1 & (param_3 ^ 1);
  }
  local_38 = (long *)0x0;
  FUN_0283b11c(uVar1,&local_50,bVar2);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  FUN_01246450(param_1);
  return;
}


