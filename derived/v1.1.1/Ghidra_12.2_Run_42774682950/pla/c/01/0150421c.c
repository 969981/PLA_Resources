/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0150421c; name: FUN_0150421c
 */


/* WARNING: Removing unreachable block (ram,0x015042c4) */
/* WARNING: Removing unreachable block (ram,0x015042c8) */
/* WARNING: Removing unreachable block (ram,0x015042d0) */
/* WARNING: Removing unreachable block (ram,0x015042d8) */
/* WARNING: Removing unreachable block (ram,0x015045cc) */

void FUN_0150421c(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  undefined1 *local_60;
  char *local_58;
  undefined8 local_50;
  long *local_48;
  undefined1 *local_40;
  char *local_38;
  undefined8 local_30;
  long *local_28;
  
  FUN_014fa360(&local_80,*(undefined8 *)(param_1 + 8));
  plVar8 = local_80;
  local_80 = (long *)0x0;
  lVar6 = *(long *)(param_1 + 0x5e0);
  *(long **)(param_1 + 0x5e0) = plVar8;
  if (lVar6 == 0) {
    *(long **)(param_1 + 0x5f8) = local_68;
    *(long **)(param_1 + 0x5f0) = local_70;
    *(long **)(param_1 + 0x5e8) = local_78;
  }
  else {
    FUN_01500404(param_1 + 0x5e8);
    plVar8 = local_80;
    *(long **)(param_1 + 0x5f8) = local_68;
    *(long **)(param_1 + 0x5f0) = local_70;
    *(long **)(param_1 + 0x5e8) = local_78;
    local_80 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      FUN_01500404(&local_78);
    }
  }
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  local_78 = (long *)0x0;
  local_60 = &DAT_cbf29ce484222645;
  local_58 = "";
  local_50 = 0;
  local_48 = (long *)0x0;
  local_40 = &DAT_cbf29ce484222645;
  local_38 = "";
  local_30 = 0;
  local_28 = (long *)0x0;
  local_80 = *(long **)(param_1 + 0x2c8);
  if (local_80 != (long *)0x0) {
    plVar8 = local_80 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_00d37c90(&local_a0,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb0),0);
  plVar8 = local_78;
  plVar7 = (long *)local_a0[0xd];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_78 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  local_78 = plVar7;
  if (local_a0 != (long *)0x0) {
    lVar6 = local_a0[0xb];
    piVar2 = (int *)(lVar6 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_a0 + 0x20))();
    }
  }
  FUN_00d37c90(&local_a0,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb0),1);
  plVar8 = local_70;
  plVar7 = (long *)local_a0[0xd];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_70 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  local_70 = plVar7;
  if (local_a0 != (long *)0x0) {
    lVar6 = local_a0[0xb];
    piVar2 = (int *)(lVar6 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_a0 + 0x20))();
      plVar8 = *(long **)(param_1 + 0x510);
      plVar7 = local_68;
      goto joined_r0x015043e4;
    }
  }
  plVar8 = *(long **)(param_1 + 0x510);
  plVar7 = local_68;
joined_r0x015043e4:
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_68 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = local_48;
  local_48 = (long *)0x0;
  local_60 = (undefined1 *)0x927f57e34bc07a0f;
  local_58 = "anime_info_w_wake";
  local_50 = 0x11;
  local_68 = plVar8;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  plVar8 = local_28;
  local_28 = (long *)0x0;
  local_48 = (long *)0x0;
  local_40 = (undefined1 *)0x6347a4a1075f2065;
  local_38 = "anime_info_w_close";
  local_30 = 0x12;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  local_28 = (long *)0x0;
  local_a0 = (long *)0xd13d8cea3cc1c53b;
  pcStack_98 = "L_info_w_00";
  local_90 = 0xb;
  local_88 = (long *)0x0;
  FUN_014f2260(*(undefined8 *)(param_1 + 0x5e0),&local_a0,&local_80);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    plVar8 = local_68 + 10;
    do {
      iVar5 = (int)*plVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 10;
    do {
      iVar5 = (int)*plVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  if (local_78 != (long *)0x0) {
    plVar8 = local_78 + 10;
    do {
      iVar5 = (int)*plVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
  }
  if (local_80 != (long *)0x0) {
    plVar8 = local_80 + 10;
    do {
      iVar5 = (int)*plVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
  }
  return;
}


