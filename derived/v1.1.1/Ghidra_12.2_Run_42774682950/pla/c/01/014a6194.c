/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014a6194; name: FUN_014a6194
 */


void FUN_014a6194(long param_1)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  undefined8 local_a8;
  char *local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined8 uStack_88;
  char *local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 *puStack_48;
  
  plVar11 = *(long **)(param_1 + 0x2c8);
  if (plVar11 != (long *)0x0) {
    plVar13 = plVar11 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_0119f420(&local_c0,*(undefined8 *)(param_1 + 8));
  plVar13 = local_c0;
  local_c0 = (long *)0x0;
  lVar8 = *(long *)(param_1 + 0x1658);
  *(long **)(param_1 + 0x1658) = plVar13;
  if (lVar8 == 0) {
    *(undefined8 *)(param_1 + 0x1670) = local_a8;
    *(long **)(param_1 + 0x1668) = local_b0;
    *(long **)(param_1 + 0x1660) = local_b8;
  }
  else {
    FUN_011a5268(param_1 + 0x1660);
    plVar13 = local_c0;
    *(undefined8 *)(param_1 + 0x1670) = local_a8;
    *(long **)(param_1 + 0x1668) = local_b0;
    *(long **)(param_1 + 0x1660) = local_b8;
    local_c0 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      FUN_011a5268(&local_b8);
    }
  }
  if (plVar11 != (long *)0x0) {
    plVar13 = plVar11 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar13 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x18);
  local_c0 = plVar11;
  if (plVar13 != (long *)0x0) {
    lVar8 = plVar13[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_014a6604;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    piVar2 = (int *)(lVar8 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_b8 = (long *)plVar13[0xd];
  if (local_b8 != (long *)0x0) {
    plVar12 = local_b8 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar8 = plVar13[0xb];
  piVar2 = (int *)(lVar8 + 0xc);
  do {
    iVar3 = *piVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = iVar3 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar3 + -1 == 0) {
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  plVar13 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x30);
  if (plVar13 != (long *)0x0) {
    lVar8 = plVar13[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
LAB_014a6604:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    piVar2 = (int *)(lVar8 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_b0 = (long *)plVar13[0xd];
  if (local_b0 != (long *)0x0) {
    plVar12 = local_b0 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar8 = plVar13[0xb];
  piVar2 = (int *)(lVar8 + 0xc);
  do {
    iVar3 = *piVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = iVar3 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar3 + -1 == 0) {
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  local_a8 = 0x359d7369956a758e;
  local_90 = (long *)0x0;
  uStack_88 = 0x6032b4144c5366db;
  local_a0 = "pane_L_info_item_00";
  uStack_98 = 0x13;
  local_80 = "L_info_item_00";
  uStack_78 = 0xe;
  local_70 = (long *)0x0;
  uStack_68 = 0xe954b007421590b4;
  local_60 = 0xe22db3d23f73f51a;
  uStack_58 = 0xe22db2d23f73f367;
  local_50 = 0x901ff3edfac4710d;
  puStack_48 = &DAT_cbf29ce484222645;
  FUN_02851628(*(undefined8 *)(param_1 + 0x1658),&local_c0);
  lVar9 = *(long *)(param_1 + 0x1658);
  lVar14 = *(long *)(lVar9 + 0x88);
  plVar13 = *(long **)(*(long *)(lVar9 + 8) + 0x148);
  lVar8 = *(long *)(*(long *)(lVar9 + 8) + 0x150);
  plVar12 = *(long **)(lVar9 + 0xa0);
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  plVar6 = plVar13;
  if ((lVar8 != 0) && (*plVar13 != lVar14)) {
    lVar9 = lVar8 * 0x30;
    plVar10 = plVar13 + lVar8 * 6;
    do {
      lVar9 = lVar9 + -0x30;
      plVar6 = plVar10;
      if (lVar9 == 0) break;
      plVar1 = plVar13 + 6;
      plVar13 = plVar13 + 6;
      plVar6 = plVar13;
    } while (*plVar1 != lVar14);
  }
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  *(byte *)(plVar6[4] + 0x58) = *(byte *)(plVar6[4] + 0x58) & 0xfe;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_b0 != (long *)0x0) {
    plVar13 = local_b0 + 10;
    do {
      iVar3 = (int)*plVar13 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *(int *)plVar13 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_b0 + 0x10))();
    }
  }
  if (local_b8 != (long *)0x0) {
    plVar13 = local_b8 + 10;
    do {
      iVar3 = (int)*plVar13 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *(int *)plVar13 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_b8 + 0x10))();
    }
  }
  if (local_c0 != (long *)0x0) {
    plVar13 = local_c0 + 10;
    do {
      iVar3 = (int)*plVar13 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *(int *)plVar13 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  if (plVar11 != (long *)0x0) {
    plVar13 = plVar11 + 10;
    do {
      iVar3 = (int)*plVar13 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *(int *)plVar13 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  return;
}


