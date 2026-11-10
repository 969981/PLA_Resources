/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5f940; name: FUN_00d5f940
 */


undefined8 FUN_00d5f940(long *param_1)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long *local_48;
  long *local_38;
  
  switch((int)param_1[0x2c7]) {
  case 0:
    lVar15 = FUN_00d73cb0(param_1[1]);
    param_1[0x2c6] = lVar15;
    goto LAB_00d5f994;
  case 1:
    break;
  case 2:
    goto switchD_00d5f97c_caseD_2;
  case 3:
    iVar9 = (int)param_1[0xdb];
    iVar12 = 0;
    if (iVar9 != 2) {
      iVar12 = iVar9;
    }
    lVar15 = FUN_00d2ee28(param_1 + 0x30,&DAT_043ab7d8 + (long)iVar12 * 0x28);
    lVar15 = *(long *)(lVar15 + 0x8b0);
    iVar12 = *(int *)(lVar15 + 0x10);
    iVar3 = *(int *)(lVar15 + 0x14);
    piVar2 = (int *)(lVar15 + 0x20);
    if (*(int *)(lVar15 + 0x28) != 0) {
      piVar2 = (int *)(lVar15 + 0x24);
    }
    iVar4 = *piVar2;
    plVar14 = (long *)param_1[0x59];
    if (plVar14 != (long *)0x0) {
      plVar16 = plVar14 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *(int *)plVar16 = (int)*plVar16 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_48 = (long *)plVar14[0x39];
    if (local_48 != (long *)0x0) {
      plVar16 = local_48 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *(int *)plVar16 = (int)*plVar16 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar16 = plVar14 + 10;
    do {
      iVar8 = (int)*plVar16 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *(int *)plVar16 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar14 + 0x10))();
    }
    (**(code **)(*param_1 + 0xb8))(param_1,iVar9,iVar3 + iVar4 * iVar12,&local_48);
    if (local_48 != (long *)0x0) {
      plVar14 = local_48 + 10;
      do {
        iVar12 = (int)*plVar14 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *(int *)plVar14 = iVar12;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
    *(int *)(param_1 + 0x2c7) = (int)param_1[0x2c7] + 1;
  case 4:
    FUN_00d73e80(param_1[0x2c6]);
    lVar15 = FUN_00d73f40();
    param_1[0x2c6] = lVar15;
    *(undefined4 *)(param_1 + 0x2c7) = 0;
    return 1;
  default:
    return 0;
  }
  uVar13 = FUN_00d73e20(param_1[0x2c6]);
  if ((uVar13 & 1) == 0) {
    return 0;
  }
  *(int *)(param_1 + 0x2c7) = (int)param_1[0x2c7] + 1;
switchD_00d5f97c_caseD_2:
  iVar12 = (int)param_1[0xdb];
  iVar9 = iVar12;
  if (iVar12 == 2) {
    iVar9 = 0;
  }
  lVar15 = FUN_00d2ee28(param_1 + 0x30,&DAT_043ab7d8 + (long)iVar9 * 0x28);
  lVar15 = *(long *)(lVar15 + 0x8b0);
  piVar2 = (int *)(lVar15 + 0x20);
  if (*(int *)(lVar15 + 0x28) != 0) {
    piVar2 = (int *)(lVar15 + 0x24);
  }
  lVar15 = (**(code **)(*param_1 + 0x1e8))
                     (param_1,iVar12,*(int *)(lVar15 + 0x14) + *piVar2 * *(int *)(lVar15 + 0x10));
  if (lVar15 == 0) {
    *(undefined4 *)(param_1 + 0x2c7) = 4;
    return 0;
  }
  plVar14 = (long *)param_1[0x59];
  if (plVar14 != (long *)0x0) {
    plVar16 = plVar14 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *(int *)plVar16 = (int)*plVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar16 = (long *)plVar14[0x39];
  if (plVar16 != (long *)0x0) {
    plVar1 = plVar16 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar1 = plVar14 + 10;
  do {
    iVar12 = (int)*plVar1 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *(int *)plVar1 = iVar12;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
  FUN_02c3041c(plVar16);
  lVar17 = param_1[0x2c6];
  if (plVar16 != (long *)0x0) {
    plVar14 = plVar16 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_38 = plVar16;
  uVar10 = FUN_02c5be48(lVar15);
  uVar11 = FUN_02c624c8(lVar15);
  uVar13 = FUN_00d74aa0(lVar17,&local_38,uVar10,uVar11);
  if (local_38 != (long *)0x0) {
    plVar14 = local_38 + 10;
    do {
      iVar12 = (int)*plVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  if (((uVar13 & 0x180000000) == 0x100000000) && (iVar12 = FUN_02c30040(plVar16), iVar12 != 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    *(undefined4 *)(param_1 + 0x2c7) = 4;
  }
  if (plVar16 != (long *)0x0) {
    plVar14 = plVar16 + 10;
    do {
      iVar12 = (int)*plVar14 + -1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar7) {
        *(int *)plVar14 = iVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      if (bVar6) {
        return 0;
      }
      goto LAB_00d5f994;
    }
  }
  if (bVar6) {
    return 0;
  }
LAB_00d5f994:
  *(int *)(param_1 + 0x2c7) = (int)param_1[0x2c7] + 1;
  return 0;
}


