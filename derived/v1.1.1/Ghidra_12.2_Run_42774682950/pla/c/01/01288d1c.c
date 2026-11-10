/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01288d1c; name: FUN_01288d1c
 */


void FUN_01288d1c(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
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
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  undefined8 uStack_38;
  
  FUN_0119f420(&local_b0,*(undefined8 *)(param_1 + 8));
  plVar8 = local_b0;
  local_b0 = (long *)0x0;
  lVar7 = *(long *)(param_1 + 0x1650);
  *(long **)(param_1 + 0x1650) = plVar8;
  if (lVar7 == 0) {
    *(undefined8 *)(param_1 + 0x1668) = local_98;
    *(long **)(param_1 + 0x1660) = local_a0;
    *(long **)(param_1 + 0x1658) = local_a8;
  }
  else {
    FUN_011a5268(param_1 + 0x1658);
    plVar8 = local_b0;
    *(undefined8 *)(param_1 + 0x1668) = local_98;
    *(long **)(param_1 + 0x1660) = local_a0;
    *(long **)(param_1 + 0x1658) = local_a8;
    local_b0 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      FUN_011a5268(&local_a8);
    }
  }
  local_b0 = *(long **)(param_1 + 0x2c8);
  if (local_b0 != (long *)0x0) {
    plVar8 = local_b0 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x18);
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) goto LAB_01289078;
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
  local_a8 = (long *)plVar8[0xd];
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
  lVar7 = plVar8[0xb];
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
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x30);
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
LAB_01289078:
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
  local_a0 = (long *)plVar8[0xd];
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
  lVar7 = plVar8[0xb];
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
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  local_98 = 0x359d7369956a758e;
  local_90 = "pane_L_info_item_00";
  uStack_88 = 0x13;
  local_70 = "L_info_item_00";
  uStack_68 = 0xe;
  local_60 = (long *)0x0;
  uStack_58 = 0xb05dbd7b5aa01ffb;
  local_50 = 0xb05a3e7b5a9d1257;
  uStack_48 = 0xb05a3e7b5a9d1257;
  local_80 = (long *)0x0;
  uStack_78 = 0x6032b4144c5366db;
  local_40 = &DAT_cbf29ce484222645;
  uStack_38 = 0xb05a347b5a9d0159;
  FUN_02851628(*(undefined8 *)(param_1 + 0x1650),&local_b0);
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_a0 != (long *)0x0) {
    plVar8 = local_a0 + 10;
    do {
      iVar3 = (int)*plVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
  }
  if (local_a8 != (long *)0x0) {
    plVar8 = local_a8 + 10;
    do {
      iVar3 = (int)*plVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_a8 + 0x10))();
    }
  }
  if (local_b0 != (long *)0x0) {
    plVar8 = local_b0 + 10;
    do {
      iVar3 = (int)*plVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_b0 + 0x10))();
    }
  }
  return;
}


