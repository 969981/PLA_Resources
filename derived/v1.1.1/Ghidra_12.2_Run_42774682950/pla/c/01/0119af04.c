/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0119af04; name: FUN_0119af04
 */


void FUN_0119af04(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  undefined8 local_98;
  char *local_90;
  undefined8 uStack_88;
  long *local_80;
  undefined8 uStack_78;
  char *local_70;
  undefined8 uStack_68;
  long *local_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  
  plVar8 = *(long **)(param_1 + 0x2c8);
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_0119f420(&local_b0,*(undefined8 *)(param_1 + 8));
  plVar9 = local_b0;
  local_b0 = (long *)0x0;
  lVar7 = *(long *)(param_1 + 0x1680);
  *(long **)(param_1 + 0x1680) = plVar9;
  if (lVar7 == 0) {
    *(undefined8 *)(param_1 + 0x1698) = local_98;
    *(long **)(param_1 + 0x1690) = local_a0;
    *(long **)(param_1 + 0x1688) = local_a8;
  }
  else {
    FUN_011a5268(param_1 + 0x1688);
    plVar9 = local_b0;
    *(undefined8 *)(param_1 + 0x1698) = local_98;
    *(long **)(param_1 + 0x1690) = local_a0;
    *(long **)(param_1 + 0x1688) = local_a8;
    local_b0 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      FUN_011a5268(&local_a8);
    }
  }
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar9 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x18);
  local_b0 = plVar8;
  if (plVar9 != (long *)0x0) {
    lVar7 = plVar9[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) goto LAB_0119b294;
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_a8 = (long *)plVar9[0xd];
  if (local_a8 != (long *)0x0) {
    plVar2 = local_a8 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar7 = plVar9[0xb];
  piVar1 = (int *)(lVar7 + 0xc);
  do {
    iVar3 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar3 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar3 + -1 == 0) {
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  plVar9 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x30);
  if (plVar9 != (long *)0x0) {
    lVar7 = plVar9[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
LAB_0119b294:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_a0 = (long *)plVar9[0xd];
  if (local_a0 != (long *)0x0) {
    plVar2 = local_a0 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar7 = plVar9[0xb];
  piVar1 = (int *)(lVar7 + 0xc);
  do {
    iVar3 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar3 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar3 + -1 == 0) {
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  local_98 = 0x359d7369956a758e;
  local_80 = (long *)0x0;
  uStack_78 = 0x6032b4144c5366db;
  local_90 = "pane_L_info_item_00";
  uStack_88 = 0x13;
  local_70 = "L_info_item_00";
  uStack_68 = 0xe;
  local_60 = (long *)0x0;
  uStack_58 = 0x2fbbd6c3987ace2d;
  local_50 = &DAT_cbf29ce484222645;
  puStack_48 = &DAT_cbf29ce484222645;
  local_40 = &DAT_cbf29ce484222645;
  puStack_38 = &DAT_cbf29ce484222645;
  FUN_02851628(*(undefined8 *)(param_1 + 0x1680),&local_b0);
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_a0 != (long *)0x0) {
    plVar9 = local_a0 + 10;
    do {
      iVar3 = (int)*plVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
  }
  if (local_a8 != (long *)0x0) {
    plVar9 = local_a8 + 10;
    do {
      iVar3 = (int)*plVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_a8 + 0x10))();
    }
  }
  if (local_b0 != (long *)0x0) {
    plVar9 = local_b0 + 10;
    do {
      iVar3 = (int)*plVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_b0 + 0x10))();
    }
  }
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 10;
    do {
      iVar3 = (int)*plVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  return;
}


