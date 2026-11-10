/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010976d0; name: FUN_010976d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010976d0(long *param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  long *local_48;
  
  if ((((*param_3 == 0) && (param_3[1] == 0)) && (param_3[2] == 0)) && (param_3[3] == 0)) {
    param_1 = (long *)*param_1;
    local_48 = param_1;
    if (param_1 == (long *)0x0) {
      FUN_01097c50(&local_48,param_2,param_4);
      return;
    }
    plVar8 = param_1 + 10;
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_01097c50(&local_48,param_2,param_4);
    if (param_1 == (long *)0x0) {
      return;
    }
    plVar8 = param_1 + 10;
    do {
      iVar9 = (int)*plVar8 + -1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar9;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 != 0) {
      return;
    }
    goto LAB_01097b10;
  }
  FUN_02c60a58(*param_1,0);
  FUN_02c60a58(*param_1,1);
  FUN_02c60a58(*param_1,2);
  FUN_02c60a58(*param_1,3);
  plVar8 = (long *)*param_1;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  iVar9 = *param_3;
  if ((iVar9 == 0) || (iVar6 = FUN_02c6087c(plVar8,iVar9), iVar6 != 0)) {
    if (plVar8 != (long *)0x0) goto LAB_01097860;
  }
  else if (plVar8 == (long *)0x0) {
    for (lVar7 = 0; (&DAT_03a84b1c)[lVar7] != iVar9; lVar7 = lVar7 + 2) {
      if (lVar7 == 0x3c) goto LAB_01097c3c;
      if ((&DAT_03a84b20)[lVar7] == iVar9) {
        lVar7 = lVar7 + 1;
        break;
      }
    }
    FUN_02c870fc(_DAT_00000098,lVar7,1);
LAB_01097c3c:
    FUN_02c628f8(0,iVar9);
  }
  else {
    plVar1 = plVar8 + 10;
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    for (lVar7 = 0; (&DAT_03a84b1c)[lVar7] != iVar9; lVar7 = lVar7 + 2) {
      if (lVar7 == 0x3c) goto LAB_01097840;
      if ((&DAT_03a84b20)[lVar7] == iVar9) {
        lVar7 = lVar7 + 1;
        break;
      }
    }
    FUN_02c870fc(plVar8[0x13],lVar7,1);
LAB_01097840:
    FUN_02c628f8(plVar8,iVar9);
    do {
      iVar9 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar9;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
LAB_01097860:
    plVar1 = plVar8 + 10;
    do {
      iVar9 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar9;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  iVar9 = param_3[1];
  cVar2 = *(char *)((long)param_3 + 0x11);
  plVar8 = (long *)*param_1;
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
  if (iVar9 == 0) {
    iVar6 = 3;
    iVar9 = 3;
    if (plVar8 != (long *)0x0) goto LAB_0109793c;
joined_r0x01097958:
    if (iVar9 == 1) {
      return;
    }
  }
  else {
    iVar6 = FUN_02c6087c(plVar8,iVar9);
    if (iVar6 != 0) {
      iVar9 = iVar6;
      if (plVar8 == (long *)0x0) goto joined_r0x01097958;
LAB_0109793c:
      plVar1 = plVar8 + 10;
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      iVar9 = iVar6;
      if (iVar5 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
      goto joined_r0x01097958;
    }
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
    if (cVar2 != '\0') {
      for (lVar7 = 0; (&DAT_03a84b1c)[lVar7] != iVar9; lVar7 = lVar7 + 2) {
        if (lVar7 == 0x3c) goto LAB_01097918;
        if ((&DAT_03a84b20)[lVar7] == iVar9) {
          lVar7 = lVar7 + 1;
          break;
        }
      }
      FUN_02c870fc(plVar8[0x13],lVar7,1);
    }
LAB_01097918:
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 10;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar7 == 1) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
      iVar6 = 0;
      goto LAB_0109793c;
    }
  }
  iVar9 = param_3[2];
  cVar2 = *(char *)((long)param_3 + 0x12);
  plVar8 = (long *)*param_1;
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
  if (iVar9 == 0) {
    iVar6 = 3;
    iVar9 = 3;
    if (plVar8 != (long *)0x0) goto LAB_01097a20;
joined_r0x01097a3c:
    if (iVar9 == 1) {
      return;
    }
  }
  else {
    iVar6 = FUN_02c6087c(plVar8,iVar9);
    if (iVar6 != 0) {
      iVar9 = iVar6;
      if (plVar8 == (long *)0x0) goto joined_r0x01097a3c;
LAB_01097a20:
      plVar1 = plVar8 + 10;
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      iVar9 = iVar6;
      if (iVar5 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
      goto joined_r0x01097a3c;
    }
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
    if (cVar2 != '\0') {
      for (lVar7 = 0; (&DAT_03a84b1c)[lVar7] != iVar9; lVar7 = lVar7 + 2) {
        if (lVar7 == 0x3c) goto LAB_010979fc;
        if ((&DAT_03a84b20)[lVar7] == iVar9) {
          lVar7 = lVar7 + 1;
          break;
        }
      }
      FUN_02c870fc(plVar8[0x13],lVar7,1);
    }
LAB_010979fc:
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 10;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar7 == 1) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
      iVar6 = 0;
      goto LAB_01097a20;
    }
  }
  iVar9 = param_3[3];
  cVar2 = *(char *)((long)param_3 + 0x13);
  param_1 = (long *)*param_1;
  if (param_1 != (long *)0x0) {
    plVar8 = param_1 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if ((iVar9 == 0) || (iVar6 = FUN_02c6087c(param_1,iVar9), iVar6 != 0)) {
    if (param_1 == (long *)0x0) {
      return;
    }
  }
  else {
    if (param_1 != (long *)0x0) {
      plVar8 = param_1 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (cVar2 != '\0') {
      for (lVar7 = 0; (&DAT_03a84b1c)[lVar7] != iVar9; lVar7 = lVar7 + 2) {
        if (lVar7 == 0x3c) goto LAB_01097adc;
        if ((&DAT_03a84b20)[lVar7] == iVar9) {
          lVar7 = lVar7 + 1;
          break;
        }
      }
      FUN_02c870fc(param_1[0x13],lVar7,1);
    }
LAB_01097adc:
    if (param_1 == (long *)0x0) {
      return;
    }
    plVar8 = param_1 + 10;
    do {
      iVar9 = (int)*plVar8 + -1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar9;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*param_1 + 0x10))(param_1);
    }
  }
  plVar8 = param_1 + 10;
  do {
    iVar9 = (int)*plVar8 + -1;
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *(int *)plVar8 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 != 0) {
    return;
  }
LAB_01097b10:
                    /* WARNING: Could not recover jumptable at 0x01097b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}


