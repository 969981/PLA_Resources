/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011e7868; name: FUN_011e7868
 */


void FUN_011e7868(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
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
  undefined1 *puStack_38;
  
  plVar6 = *(long **)(param_1 + 0x2c8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_0119f420(&local_b0,*(undefined8 *)(param_1 + 8));
  plVar1 = local_b0;
  local_b0 = (long *)0x0;
  lVar5 = *(long *)(param_1 + 0x1650);
  *(long **)(param_1 + 0x1650) = plVar1;
  if (lVar5 == 0) {
    *(undefined8 *)(param_1 + 0x1668) = local_98;
    *(long **)(param_1 + 0x1660) = local_a0;
    *(long **)(param_1 + 0x1658) = local_a8;
  }
  else {
    FUN_011a5268(param_1 + 0x1658);
    plVar1 = local_b0;
    *(undefined8 *)(param_1 + 0x1668) = local_98;
    *(long **)(param_1 + 0x1660) = local_a0;
    *(long **)(param_1 + 0x1658) = local_a8;
    local_b0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      FUN_011a5268(&local_a8);
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_b0 = plVar6;
  FUN_00d58a08(&local_a8,param_1,0);
  FUN_00d58a08(&local_a0,param_1,1);
  local_98 = 0x359d7369956a758e;
  local_80 = (long *)0x0;
  uStack_78 = 0x6032b4144c5366db;
  local_90 = "pane_L_info_item_00";
  uStack_88 = 0x13;
  local_70 = "L_info_item_00";
  uStack_68 = 0xe;
  local_60 = (long *)0x0;
  uStack_58 = 0xb8ae3b463fd6ee0;
  local_50 = 0xb8aeab463fd7ac5;
  uStack_48 = 0xb8aeab463fd7ac5;
  local_40 = &DAT_cbf29ce484222645;
  puStack_38 = &DAT_cbf29ce484222645;
  FUN_02851628(*(undefined8 *)(param_1 + 0x1650),&local_b0);
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_a0 != (long *)0x0) {
    plVar1 = local_a0 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
  }
  if (local_a8 != (long *)0x0) {
    plVar1 = local_a8 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_a8 + 0x10))();
    }
  }
  if (local_b0 != (long *)0x0) {
    plVar1 = local_b0 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_b0 + 0x10))();
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  return;
}


