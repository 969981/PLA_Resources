/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013c8c28; name: FUN_013c8c28
 */


void FUN_013c8c28(long param_1,ulong param_2)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  plVar9 = *(long **)(param_1 + 0x2c8);
  if (plVar9 == (long *)0x0) {
LAB_013c8ff4:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  plVar1 = plVar9 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  local_60 = (long *)&DAT_e2c06acab97c29c2;
  pcStack_58 = "CommonOptionBar";
  local_50 = 0xf;
  local_48 = (long *)0x0;
  lVar6 = FUN_0118c80c(*(undefined8 *)(param_1 + 0x68),&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (lVar6 == 0) goto LAB_013c8ff4;
  FUN_00d37c90(&local_60,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb0),1);
  plVar10 = (long *)local_60[0xd];
  if (plVar10 != (long *)0x0) {
    plVar11 = plVar10 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (local_60 != (long *)0x0) {
    lVar8 = local_60[0xb];
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
      (**(code **)(*local_60 + 0x20))();
    }
  }
  if (plVar10 == (long *)0x0) goto LAB_013c8ff4;
  FUN_00d6a4e4(lVar6);
  if ((param_2 & 1) == 0) {
    local_60 = (long *)0x6d7929ef0d6b0c0e;
    plVar11 = (long *)plVar9[0x38];
    if (plVar11 == (long *)0x0) {
      FUN_02c2e7d0(plVar10,&local_60,0);
    }
    else {
      plVar7 = plVar11 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *(int *)plVar7 = (int)*plVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_02c2e7d0(plVar10,&local_60,plVar11);
      do {
        iVar3 = (int)*plVar7 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *(int *)plVar7 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    local_70 = (long *)plVar9[0x38];
    if (local_70 != (long *)0x0) {
      plVar11 = local_70 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = (int)*plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_00d6a464(lVar6,0,1,&local_70);
    if (local_70 != (long *)0x0) {
      plVar11 = local_70 + 10;
      do {
        iVar3 = (int)*plVar11 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
    local_60 = (long *)0x6d6b96ef0d5f87e9;
    plVar11 = (long *)plVar9[0x38];
    if (plVar11 == (long *)0x0) {
      FUN_02c2e7d0(plVar10,&local_60,0);
    }
    else {
      plVar7 = plVar11 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *(int *)plVar7 = (int)*plVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_02c2e7d0(plVar10,&local_60,plVar11);
      do {
        iVar3 = (int)*plVar7 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *(int *)plVar7 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    local_78 = (long *)plVar9[0x38];
    if (local_78 != (long *)0x0) {
      plVar11 = local_78 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = (int)*plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_00d6a464(lVar6,1,3,&local_78);
    if (local_78 == (long *)0x0) goto LAB_013c8f00;
    plVar11 = local_78 + 10;
    do {
      iVar3 = (int)*plVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
      plVar7 = local_78;
    } while (cVar4 != '\0');
  }
  else {
    local_60 = (long *)0x6d7929ef0d6b0c0e;
    plVar11 = (long *)plVar9[0x38];
    if (plVar11 == (long *)0x0) {
      FUN_02c2e7d0(plVar10,&local_60,0);
    }
    else {
      plVar7 = plVar11 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *(int *)plVar7 = (int)*plVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_02c2e7d0(plVar10,&local_60,plVar11);
      do {
        iVar3 = (int)*plVar7 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *(int *)plVar7 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    local_68 = (long *)plVar9[0x38];
    if (local_68 != (long *)0x0) {
      plVar11 = local_68 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = (int)*plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_00d6a464(lVar6,0,1,&local_68);
    if (local_68 == (long *)0x0) goto LAB_013c8f00;
    plVar11 = local_68 + 10;
    do {
      iVar3 = (int)*plVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
      plVar7 = local_68;
    } while (cVar4 != '\0');
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar7 + 0x10))();
  }
LAB_013c8f00:
  FUN_00d6a4d8(lVar6);
  FUN_00d42438(lVar6,0,1);
  plVar11 = plVar10 + 10;
  do {
    iVar3 = (int)*plVar11 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar5) {
      *(int *)plVar11 = iVar3;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar3 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  do {
    iVar3 = (int)*plVar1 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar3;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar3 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  return;
}


