/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0137a030; name: FUN_0137a030
 */


void FUN_0137a030(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 local_9c;
  int local_98;
  undefined1 local_94;
  long *local_90;
  char *local_88;
  char *local_80;
  long *local_78;
  long *local_70;
  long local_68;
  
  local_9c = 0;
  if ((param_2 & 1) != 0) {
    FUN_0137c1b0(param_1,param_1 + 0x2188,&local_9c);
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x7e8) + 0xb0);
  if (lVar5 != 0) {
    *(long *)(*(long *)(param_1 + 0x7e8) + 0xb0) = lVar5 - ((lVar5 << 3) >> 3);
  }
  lVar5 = 0x1178;
  if (*(int *)(param_1 + 0x2188) != 0) {
    lVar5 = 0x1980;
  }
  iVar3 = *(int *)(param_1 + lVar5);
  if (iVar3 == 0) {
    local_90 = (long *)0x71a74e4f5eb1df05;
    local_88 = "anime_switch_list";
    local_80 = (char *)0x11;
    local_78 = (long *)0x0;
    FUN_00d2e4b8(0x3f800000,param_1 + 0x180,&local_90);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    uVar6 = 0;
  }
  else {
    iVar7 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0x7e8);
      local_94 = 0;
      uVar2 = *(ulong *)(lVar5 + 0xb0);
      local_98 = iVar7;
      if (uVar2 < *(ulong *)(lVar5 + 0xb8)) {
        FUN_011d216c(lVar5 + 0x88,*(long *)(lVar5 + 0xa8) + uVar2 * 8,&local_98);
        *(long *)(lVar5 + 0xb0) = *(long *)(lVar5 + 0xb0) + 1;
      }
      else {
        local_90 = (long *)(*(long *)(lVar5 + 0xa8) + uVar2 * 8);
        FUN_011d20a4(&local_68,lVar5 + 0x88,&local_90,1,&local_98);
      }
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
    local_90 = (long *)0x71a74e4f5eb1df05;
    local_88 = "anime_switch_list";
    local_80 = (char *)0x11;
    local_78 = (long *)0x0;
    FUN_00d2e4b8(0,param_1 + 0x180,&local_90);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    uVar6 = 1;
  }
  lVar5 = param_1 + 0x180;
  FUN_0137a998(param_1,uVar6,0,0,0,0);
  local_90 = (long *)&DAT_ec034b23cfd86628;
  local_88 = "list_panel";
  local_80 = (char *)0xa;
  local_78 = (long *)0x0;
  uVar4 = FUN_00d2ee28(lVar5,&local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  lVar1 = param_1 + (long)*(int *)(param_1 + 0x2188) * 8;
  FUN_0281e390(uVar4,*(undefined4 *)(lVar1 + 0x2190));
  FUN_0281e380(uVar4,*(undefined4 *)(lVar1 + 0x218c),0);
  FUN_0281857c(uVar4);
  if ((param_2 & 1) != 0) {
    FUN_0281a3b8(uVar4,local_9c,1);
  }
  local_90 = &local_68;
  local_88 = (char *)0x1513dced4360a77f;
  local_80 = "list_panel_cursor";
  local_70 = (long *)0x0;
  local_68 = 0;
  local_78 = (long *)0x11;
  FUN_00d36f04(uVar4,&local_90,0);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_68 != 0) {
    FUN_028077c0(local_68,uVar6);
  }
  local_90 = (long *)0x615d9ae82e9c53fe;
  local_88 = "anime_L_tab_00_select";
  local_80 = (char *)0x15;
  local_78 = (long *)0x0;
  FUN_00d2e2d0(lVar5,&local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  local_90 = (long *)0x84570819905fde5f;
  local_88 = "anime_L_tab_01_select";
  local_80 = (char *)0x15;
  local_78 = (long *)0x0;
  FUN_00d2e2d0(lVar5,&local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  local_90 = (long *)0x99808cac6b95bc6d;
  local_88 = "anime_L_tab_00_unselect";
  local_80 = (char *)0x17;
  local_78 = (long *)0x0;
  FUN_00d2e2d0(lVar5,&local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  local_90 = (long *)0x30a271c3430e7808;
  local_88 = "anime_L_tab_01_unselect";
  local_80 = (char *)0x17;
  local_78 = (long *)0x0;
  FUN_00d2e2d0(lVar5,&local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (*(int *)(param_1 + 0x2188) == 0) {
    local_90 = (long *)0x615d9ae82e9c53fe;
    local_88 = "anime_L_tab_00_select";
    local_80 = (char *)0x15;
    local_78 = (long *)0x0;
    FUN_00d2df7c(lVar5,&local_90);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    local_90 = (long *)0x30a271c3430e7808;
    local_88 = "anime_L_tab_01_unselect";
    local_80 = (char *)0x17;
  }
  else {
    local_90 = (long *)0x99808cac6b95bc6d;
    local_88 = "anime_L_tab_00_unselect";
    local_80 = (char *)0x17;
    local_78 = (long *)0x0;
    FUN_00d2df7c(lVar5,&local_90);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    local_80 = (char *)0x15;
    local_90 = (long *)0x84570819905fde5f;
    local_88 = "anime_L_tab_01_select";
  }
  local_78 = (long *)0x0;
  FUN_00d2df7c(lVar5,&local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (*(code **)(param_1 + 0x8f0) != (code *)0x0) {
    local_90 = (long *)CONCAT71(local_90._1_7_,uVar6);
    (**(code **)(param_1 + 0x8f0))(param_1 + 0x910,&local_90);
  }
  return;
}


