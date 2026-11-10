/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015065d4; name: FUN_015065d4
 */


void FUN_015065d4(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined4 uVar10;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  plVar8 = *(long **)(param_1 + 0x2c8);
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar9 = (long *)plVar8[0x37];
  if (plVar9 != (long *)0x0) {
    lVar7 = plVar9[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar3 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar3;
    }
    piVar6 = (int *)(lVar7 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = *piVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uVar5 = *(ulong *)(*(long *)(param_1 + 0x630) + 0xb0);
  if ((int)uVar5 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    uVar5 = uVar5 & 0xffffffff;
    piVar6 = (int *)(param_1 + 0x648);
    do {
      if (*piVar6 != 0) {
        iVar4 = piVar6[-1] + iVar4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  FUN_02c395d0(plVar9,0,iVar4,8,0,1);
  if (plVar9 != (long *)0x0) {
    lVar7 = plVar9[0xb];
    piVar6 = (int *)(lVar7 + 0xc);
    do {
      iVar4 = *piVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *(int *)plVar9 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  local_50 = 0x9cb19469667df30f;
  pcStack_48 = "anime_L_btn_total_00_switch_safe_over";
  local_40 = 0x25;
  local_38 = (long *)0x0;
  FUN_00d2df7c(param_1 + 0x180,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  uVar5 = FUN_01507a28(param_1);
  if ((uVar5 & 1) == 0) {
    local_50 = 0x894ae692774b97a0;
    pcStack_48 = "pane_L_btn_total_00_T_p_total_01";
    local_40 = 0x20;
    local_38 = (long *)0x0;
    FUN_015054fc(param_1,0xd0f6b6d5c64de8f7,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    uVar10 = 0x3f800000;
  }
  else {
    local_50 = 0x894ae792774b9953;
    pcStack_48 = "pane_L_btn_total_00_T_p_total_00";
    local_40 = 0x20;
    local_38 = (long *)0x0;
    FUN_015054fc(param_1,0xd0f6b6d5c64de8f7,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    uVar10 = 0;
  }
  pcStack_48 = "anime_L_btn_total_00_switch_safe_over";
  local_50 = 0x9cb19469667df30f;
  local_40 = 0x25;
  local_38 = (long *)0x0;
  FUN_00d2e4b8(uVar10,param_1 + 0x180,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


