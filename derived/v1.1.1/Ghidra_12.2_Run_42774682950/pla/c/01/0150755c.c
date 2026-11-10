/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0150755c; name: FUN_0150755c
 */


void FUN_0150755c(long param_1,long param_2,uint param_3)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *local_78;
  long *local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  local_70 = (long *)&DAT_e2c06acab97c29c2;
  pcStack_68 = "CommonOptionBar";
  local_60 = 0xf;
  local_58 = (long *)0x0;
  uVar7 = FUN_00d6adf4(param_1 + 0x180,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  FUN_00d37c90(&local_70,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb0),0);
  plVar10 = (long *)local_70[0xd];
  if (plVar10 != (long *)0x0) {
    plVar8 = plVar10 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (local_70 != (long *)0x0) {
    lVar9 = local_70[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
      plVar8 = *(long **)(param_1 + 0x2c8);
      goto joined_r0x01507628;
    }
  }
  plVar8 = *(long **)(param_1 + 0x2c8);
joined_r0x01507628:
  if (plVar8 != (long *)0x0) {
    plVar11 = plVar8 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar11 = (long *)plVar8[0x38];
  if (plVar11 != (long *)0x0) {
    plVar2 = plVar11 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar2 = plVar8 + 10;
  do {
    iVar3 = (int)*plVar2 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *(int *)plVar2 = iVar3;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar3 == 0) {
    (**(code **)(*plVar8 + 0x10))();
  }
  FUN_02814e04(uVar7);
  plVar8 = plVar11 + 10;
  if (plVar11 == (long *)0x0) {
    FUN_02c2e7d0(plVar10,param_2,0);
    local_78 = (long *)0x0;
    FUN_02814858(uVar7,0,*(undefined4 *)(param_2 + 8),&local_78);
    if (local_78 != (long *)0x0) {
      plVar2 = local_78 + 10;
      do {
        iVar3 = (int)*plVar2 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = iVar3;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_78 + 0x10))();
      }
    }
    if (param_3 != 1) {
      FUN_02c2e7d0(plVar10,param_2 + 0x10,0);
      local_78 = (long *)0x0;
      FUN_02814858(uVar7,1,*(undefined4 *)(param_2 + 0x18),&local_78);
      if (local_78 != (long *)0x0) {
        plVar2 = local_78 + 10;
        do {
          iVar3 = (int)*plVar2 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = iVar3;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 == 0) {
          (**(code **)(*local_78 + 0x10))();
        }
      }
      if (param_3 != 2) {
        uVar12 = 2;
        do {
          lVar9 = param_2 + uVar12 * 0x10;
          FUN_02c2e7d0(plVar10,lVar9,0);
          local_78 = (long *)0x0;
          FUN_02814858(uVar7,uVar12 & 0xffffffff,*(undefined4 *)(lVar9 + 8),&local_78);
          if (local_78 != (long *)0x0) {
            plVar2 = local_78 + 10;
            do {
              iVar3 = (int)*plVar2 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar6) {
                *(int *)plVar2 = iVar3;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar3 == 0) {
              (**(code **)(*local_78 + 0x10))();
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != param_3);
      }
    }
  }
  else {
    FUN_02c2e7d0(plVar10,param_2,plVar11);
    uVar4 = *(undefined4 *)(param_2 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    local_78 = plVar11;
    FUN_02814858(uVar7,0,uVar4,&local_78);
    if (local_78 != (long *)0x0) {
      plVar2 = local_78 + 10;
      do {
        iVar3 = (int)*plVar2 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = iVar3;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_78 + 0x10))();
      }
    }
    if (param_3 != 1) {
      FUN_02c2e7d0(plVar10,param_2 + 0x10,plVar11);
      uVar4 = *(undefined4 *)(param_2 + 0x18);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      local_78 = plVar11;
      FUN_02814858(uVar7,1,uVar4,&local_78);
      if (local_78 != (long *)0x0) {
        plVar2 = local_78 + 10;
        do {
          iVar3 = (int)*plVar2 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = iVar3;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 == 0) {
          (**(code **)(*local_78 + 0x10))();
        }
      }
      if (param_3 != 2) {
        uVar12 = 2;
        do {
          lVar9 = param_2 + uVar12 * 0x10;
          FUN_02c2e7d0(plVar10,lVar9,plVar11);
          uVar4 = *(undefined4 *)(lVar9 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar6) {
              *(int *)plVar8 = (int)*plVar8 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          local_78 = plVar11;
          FUN_02814858(uVar7,uVar12 & 0xffffffff,uVar4,&local_78);
          if (local_78 != (long *)0x0) {
            plVar2 = local_78 + 10;
            do {
              iVar3 = (int)*plVar2 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar6) {
                *(int *)plVar2 = iVar3;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar3 == 0) {
              (**(code **)(*local_78 + 0x10))();
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != param_3);
      }
    }
  }
  FUN_02814a44(uVar7,1);
  if (plVar11 != (long *)0x0) {
    do {
      iVar3 = (int)*plVar8 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *(int *)plVar8 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  if (plVar10 != (long *)0x0) {
    plVar8 = plVar10 + 10;
    do {
      iVar3 = (int)*plVar8 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *(int *)plVar8 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  return;
}


