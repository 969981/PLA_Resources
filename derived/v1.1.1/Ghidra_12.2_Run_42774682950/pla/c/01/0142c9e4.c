/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0142c9e4; name: FUN_0142c9e4
 */


void FUN_0142c9e4(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  long local_60;
  undefined1 local_58;
  
  local_88 = (long *)0xeec282e7db164280;
  local_80 = (long *)0x38fed88;
  local_78 = (long *)0xe;
  local_70 = (long *)0x0;
  lVar4 = FUN_00d2ec48(param_1 + 0x180,&local_88);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  lVar9 = *(long *)(*(long *)(*(long *)(lVar4 + 0x468) + 0x40) + 0x20);
  *(ulong *)(lVar9 + 0x20) =
       *(ulong *)(lVar9 + 0x20) & 0xfffffffffffffffe |
       (ulong)(*(long *)(*(long *)(param_1 + 0x5b0) + 0x70) != 0);
  lVar9 = *(long *)(lVar4 + 0x468);
  if (*(int *)(lVar9 + 0x1c) == 0) {
    uVar10 = *(uint *)(lVar9 + 0xc);
  }
  else {
    uVar10 = 1;
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0x40) + 0x20) + (ulong)uVar10 * 0x28;
  *(ulong *)(lVar9 + 0x20) =
       *(ulong *)(lVar9 + 0x20) & 0xfffffffffffffffe |
       (ulong)(*(long *)(*(long *)(param_1 + 0x5b0) + 0x78) != 0);
  lVar9 = *(long *)(lVar4 + 0x468);
  if (*(int *)(lVar9 + 0x1c) == 0) {
    uVar10 = *(int *)(lVar9 + 0xc) << 1;
  }
  else {
    uVar10 = 2;
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0x40) + 0x20) + (ulong)uVar10 * 0x28;
  *(ulong *)(lVar9 + 0x20) =
       *(ulong *)(lVar9 + 0x20) & 0xfffffffffffffffe |
       (ulong)(*(long *)(*(long *)(param_1 + 0x5b0) + 0x80) != 0);
  lVar9 = *(long *)(lVar4 + 0x468);
  if (*(int *)(lVar9 + 0x1c) == 0) {
    uVar10 = *(int *)(lVar9 + 0xc) * 3;
  }
  else {
    uVar10 = 3;
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0x40) + 0x20) + (ulong)uVar10 * 0x28;
  *(ulong *)(lVar9 + 0x20) =
       *(ulong *)(lVar9 + 0x20) & 0xfffffffffffffffe |
       (ulong)(*(long *)(*(long *)(param_1 + 0x5b0) + 0x88) != 0);
  lVar9 = *(long *)(lVar4 + 0x468);
  if (*(int *)(lVar9 + 0x1c) == 0) {
    uVar10 = *(int *)(lVar9 + 0xc) << 2;
  }
  else {
    uVar10 = 4;
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0x40) + 0x20) + (ulong)uVar10 * 0x28;
  *(ulong *)(lVar9 + 0x20) =
       *(ulong *)(lVar9 + 0x20) & 0xfffffffffffffffe |
       (ulong)(*(long *)(*(long *)(param_1 + 0x5b0) + 0x90) != 0);
  lVar4 = *(long *)(lVar4 + 0x468);
  if (*(int *)(lVar4 + 0x1c) == 0) {
    uVar10 = *(int *)(lVar4 + 0xc) * 5;
  }
  else {
    uVar10 = 5;
  }
  lVar9 = *(long *)(*(long *)(lVar4 + 0x40) + 0x20) + (ulong)uVar10 * 0x28;
  lVar4 = 0;
  *(ulong *)(lVar9 + 0x20) =
       *(ulong *)(lVar9 + 0x20) & 0xfffffffffffffffe |
       (ulong)(*(long *)(*(long *)(param_1 + 0x5b0) + 0x98) != 0);
  do {
    local_68 = (long *)0x0;
    local_60 = 0;
    local_70 = (long *)0x0;
    local_58 = (undefined1)lVar4;
    local_88 = *(long **)(param_1 + 8);
    local_80 = *(long **)(param_1 + 0x2c8);
    if (local_80 == (long *)0x0) {
      local_80 = (long *)0x0;
    }
    else {
      plVar11 = local_80 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *(int *)plVar11 = (int)*plVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        iVar8 = (int)*plVar11 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *(int *)plVar11 = iVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*local_80 + 0x10))();
      }
    }
    plVar11 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x18);
    if (plVar11 != (long *)0x0) {
      lVar9 = plVar11[0xb];
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_0142d494;
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar5 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar5;
      }
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_78 = (long *)plVar11[0xd];
    if (local_78 == (long *)0x0) {
      local_78 = (long *)0x0;
    }
    else {
      plVar12 = local_78 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *(int *)plVar12 = (int)*plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        iVar8 = (int)*plVar12 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *(int *)plVar12 = iVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*local_78 + 0x10))();
      }
    }
    lVar9 = plVar11[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
    plVar11 = local_70;
    local_68 = (long *)(*(long *)(param_1 + 0x448) + lVar4 * 0xd0);
    plVar12 = *(long **)(param_1 + 0x508);
    if (plVar12 != (long *)0x0) {
      plVar13 = plVar12 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *(int *)plVar13 = (int)*plVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_70 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      plVar13 = plVar11 + 10;
      do {
        iVar8 = (int)*plVar13 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *(int *)plVar13 = iVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar11 + 0x10))();
      }
    }
    local_60 = *(long *)(param_1 + 0x4c8) + lVar4 * 0xc0;
    lVar9 = param_1 + lVar4 * 0x40 + 0x5b8;
    local_70 = plVar12;
    FUN_014212cc(lVar9,&local_88);
    if (*(long *)(param_1 + 0x5b0) != 0) {
      FUN_0142148c(lVar9,*(undefined8 *)(*(long *)(param_1 + 0x5b0) + lVar4 * 8 + 0x70));
    }
    if (local_70 != (long *)0x0) {
      plVar11 = local_70 + 10;
      do {
        iVar8 = (int)*plVar11 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *(int *)plVar11 = iVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 6);
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  local_88 = *(long **)(param_1 + 0x2c8);
  if (local_88 == (long *)0x0) {
    local_88 = (long *)0x0;
  }
  else {
    plVar11 = local_88 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      iVar8 = (int)*plVar11 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *(int *)plVar11 = iVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
  }
  plVar11 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x18);
  if (plVar11 != (long *)0x0) {
    lVar4 = plVar11[0xb];
    if (*(undefined8 **)(lVar4 + 0x18) == (undefined8 *)0x0) goto LAB_0142d494;
    if (*(long *)(lVar4 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar4 + 0x18))();
      *(undefined8 *)(lVar4 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar4 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_80 = (long *)plVar11[0xd];
  if (local_80 == (long *)0x0) {
    local_80 = (long *)0x0;
  }
  else {
    plVar12 = local_80 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      iVar8 = (int)*plVar12 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = iVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
  }
  lVar4 = plVar11[0xb];
  piVar1 = (int *)(lVar4 + 0xc);
  do {
    iVar8 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 + -1 == 0) {
    *(undefined8 *)(lVar4 + 0x18) = 0;
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  plVar11 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x30);
  if (plVar11 != (long *)0x0) {
    lVar4 = plVar11[0xb];
    if (*(undefined8 **)(lVar4 + 0x18) == (undefined8 *)0x0) goto LAB_0142d494;
    if (*(long *)(lVar4 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar4 + 0x18))();
      *(undefined8 *)(lVar4 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar4 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_78 = (long *)plVar11[0xd];
  if (local_78 == (long *)0x0) {
    local_78 = (long *)0x0;
  }
  else {
    plVar12 = local_78 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      iVar8 = (int)*plVar12 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = iVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
  }
  lVar4 = plVar11[0xb];
  piVar1 = (int *)(lVar4 + 0xc);
  do {
    iVar8 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 + -1 == 0) {
    *(undefined8 *)(lVar4 + 0x18) = 0;
    (**(code **)(*plVar11 + 0x20))(plVar11);
    plVar11 = *(long **)(param_1 + 0x510);
    plVar12 = local_70;
  }
  else {
    plVar11 = *(long **)(param_1 + 0x510);
    plVar12 = local_70;
  }
  if (plVar11 != (long *)0x0) {
    plVar13 = plVar11 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_70 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar13 = plVar12 + 10;
    do {
      iVar8 = (int)*plVar13 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *(int *)plVar13 = iVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  plVar12 = local_68;
  plVar13 = *(long **)(param_1 + 0x520);
  if (plVar13 != (long *)0x0) {
    plVar7 = plVar13 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_68 = (long *)0x0;
  local_70 = plVar11;
  if (plVar12 != (long *)0x0) {
    plVar11 = plVar12 + 10;
    do {
      iVar8 = (int)*plVar11 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *(int *)plVar11 = iVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  local_68 = plVar13;
  FUN_0141ed50(param_1 + 0x738,&local_88);
  if (local_68 != (long *)0x0) {
    plVar11 = local_68 + 10;
    do {
      iVar8 = (int)*plVar11 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *(int *)plVar11 = iVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  if (local_70 != (long *)0x0) {
    plVar11 = local_70 + 10;
    do {
      iVar8 = (int)*plVar11 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *(int *)plVar11 = iVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_88 = (long *)&DAT_e2c06acab97c29c2;
  local_80 = (long *)0x388e1b1;
  local_78 = (long *)0xf;
  local_70 = (long *)0x0;
  uVar5 = FUN_00d6adf4(param_1 + 0x180,&local_88);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  plVar11 = *(long **)(param_1 + 0x2c8);
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar12 = (long *)plVar11[0x38];
  if (plVar12 != (long *)0x0) {
    plVar13 = plVar12 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar13 = plVar11 + 10;
  do {
    iVar8 = (int)*plVar13 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *(int *)plVar13 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar11 + 0x10))();
  }
  plVar11 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x18);
  if (plVar11 != (long *)0x0) {
    lVar4 = plVar11[0xb];
    if (*(undefined8 **)(lVar4 + 0x18) == (undefined8 *)0x0) goto LAB_0142d494;
    if (*(long *)(lVar4 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar4 + 0x18))();
      *(undefined8 *)(lVar4 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar4 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar13 = (long *)plVar11[0xd];
  if (plVar13 != (long *)0x0) {
    plVar7 = plVar13 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = plVar11[0xb];
  piVar1 = (int *)(lVar4 + 0xc);
  do {
    iVar8 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 + -1 == 0) {
    *(undefined8 *)(lVar4 + 0x18) = 0;
    (**(code **)(*plVar11 + 0x20))(plVar11);
    lVar4 = *(long *)(param_1 + 0x5b0);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x5b0);
  }
  if (lVar4 == 0) goto LAB_0142d274;
  FUN_02814e04(uVar5);
  iVar8 = *(int *)(*(long *)(param_1 + 0x5b0) + 0x68);
  if (iVar8 == 3) goto LAB_0142d274;
  if (iVar8 == 1) {
    lVar4 = plVar13[0x16];
    if (lVar4 != 0) {
      plVar11 = *(long **)(lVar4 + 0x270);
      if (plVar11 != *(long **)(lVar4 + 0x278)) {
        iVar8 = 0;
        do {
          plVar7 = (long *)PTR_DAT_04379c88;
          if (*plVar11 != 0) {
            plVar7 = (long *)(*plVar11 + 0x58);
          }
          if (*plVar7 == -0x1d9a584d2467f0bd) goto LAB_0142d144;
          plVar11 = plVar11 + 1;
          iVar8 = iVar8 + 1;
        } while (*(long **)(lVar4 + 0x278) != plVar11);
      }
    }
    iVar8 = 0;
LAB_0142d144:
    FUN_02c2e33c(plVar13,iVar8,plVar12);
    if (plVar12 != (long *)0x0) {
      plVar11 = plVar12 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *(int *)plVar11 = (int)*plVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_90 = plVar12;
    FUN_02814858(uVar5,0,1,&local_90);
    if (local_90 != (long *)0x0) {
      plVar11 = local_90 + 10;
      do {
        iVar8 = (int)*plVar11 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *(int *)plVar11 = iVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
        plVar7 = local_90;
      } while (cVar2 != '\0');
LAB_0142d264:
      if (iVar8 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
  }
  else {
    if (iVar8 != 2) {
LAB_0142d494:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    lVar4 = plVar13[0x16];
    if (lVar4 != 0) {
      plVar11 = *(long **)(lVar4 + 0x270);
      if (plVar11 != *(long **)(lVar4 + 0x278)) {
        iVar8 = 0;
        do {
          plVar7 = (long *)PTR_DAT_04379c88;
          if (*plVar11 != 0) {
            plVar7 = (long *)(*plVar11 + 0x58);
          }
          if (*plVar7 == -0x1d9a514d2467e4d8) goto LAB_0142d20c;
          plVar11 = plVar11 + 1;
          iVar8 = iVar8 + 1;
        } while (*(long **)(lVar4 + 0x278) != plVar11);
      }
    }
    iVar8 = 0;
LAB_0142d20c:
    FUN_02c2e33c(plVar13,iVar8,plVar12);
    if (plVar12 != (long *)0x0) {
      plVar11 = plVar12 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *(int *)plVar11 = (int)*plVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_98 = plVar12;
    FUN_02814858(uVar5,0,1,&local_98);
    if (local_98 != (long *)0x0) {
      plVar11 = local_98 + 10;
      do {
        iVar8 = (int)*plVar11 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *(int *)plVar11 = iVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
        plVar7 = local_98;
      } while (cVar2 != '\0');
      goto LAB_0142d264;
    }
  }
  FUN_02814a44(uVar5,1);
LAB_0142d274:
  if (plVar13 != (long *)0x0) {
    plVar11 = plVar13 + 10;
    do {
      iVar8 = (int)*plVar11 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *(int *)plVar11 = iVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  if (plVar12 != (long *)0x0) {
    plVar11 = plVar12 + 10;
    do {
      iVar8 = (int)*plVar11 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *(int *)plVar11 = iVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  return;
}


