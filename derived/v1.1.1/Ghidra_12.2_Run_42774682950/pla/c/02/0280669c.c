/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0280669c; name: FUN_0280669c
 */


void FUN_0280669c(long param_1,ulong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  if ((param_2 & 1) != 0) {
    local_50 = 0xd8bd1fa4b54234bc;
    pcStack_48 = "anime_menu_out";
    local_40 = 0xe;
    local_38 = (long *)0x0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_50);
    }
    if ((param_3 == 0xc) || (param_3 == 0)) {
      local_50 = 0x2a9a0d45e9528c0d;
      pcStack_48 = "anime_title_out";
      local_40 = 0xf;
      local_38 = (long *)0x0;
      if (*(long *)(param_1 + 0x2c8) != 0) {
        FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_50);
      }
    }
    FUN_02806290(param_1,param_3);
    return;
  }
  local_50 = 0xae852831d0165d97;
  pcStack_48 = "anime_menu_in";
  local_40 = 0xd;
  local_38 = (long *)0x0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_50);
  }
  local_50 = 0xe2a06d3a0634e918;
  pcStack_48 = "grid_panel";
  local_40 = 10;
  local_38 = (long *)0x0;
  lVar4 = FUN_00d2ec48(param_1 + 0x180,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  lVar4 = *(long *)(lVar4 + 0x468);
  iVar1 = *(int *)(lVar4 + 8);
  if (*(int *)(lVar4 + 0x1c) == 0) {
    iVar2 = *(int *)(lVar4 + 0xc);
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = iVar1 / iVar2;
    }
    iVar2 = iVar1 - iVar3 * iVar2;
  }
  else {
    iVar2 = 0;
    if (*(int *)(lVar4 + 0x10) != 0) {
      iVar2 = iVar1 / *(int *)(lVar4 + 0x10);
    }
  }
  FUN_02804ac0(param_1,iVar2);
  if ((param_3 == 0xc) || (param_3 == 0)) {
    local_50 = 0x49d565de9da67ee8;
    pcStack_48 = "anime_title_in";
    local_40 = 0xe;
    local_38 = (long *)0x0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_50);
    }
  }
  return;
}


