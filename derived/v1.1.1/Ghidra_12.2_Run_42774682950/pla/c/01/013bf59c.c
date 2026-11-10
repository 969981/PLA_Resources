/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013bf59c; name: FUN_013bf59c
 */


undefined8 FUN_013bf59c(long param_1,uint param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  undefined8 local_48;
  long *local_38;
  
  if ((*(long *)(param_1 + 0x5c0) == 0) || (*(uint *)(*(long *)(param_1 + 0x5c0) + 0xb0) <= param_2)
     ) {
    uVar6 = 0;
  }
  else {
    plVar7 = *(long **)(param_1 + 0x2c8);
    if (plVar7 != (long *)0x0) {
      plVar8 = plVar7 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar8 = (long *)plVar7[0x37];
    if (plVar8 != (long *)0x0) {
      lVar9 = plVar8[0xb];
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_013bf9d4;
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar6;
      }
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar9 = plVar8[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
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
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar8 + 0x20))(plVar8);
      }
    }
    plVar2 = plVar7 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    FUN_02c35c98(plVar8);
    lVar9 = *(long *)(*(long *)(param_1 + 0x5c0) + 0xa8);
    local_50 = (long *)0x0;
    local_48 = 0;
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    plVar7 = *(long **)(param_1 + 0x2c8);
    if (plVar7 != (long *)0x0) {
      plVar8 = plVar7 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_68 = (long *)plVar7[0x39];
    if (local_68 == (long *)0x0) {
      local_68 = (long *)0x0;
    }
    else {
      plVar8 = local_68 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
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
        (**(code **)(*local_68 + 0x10))();
      }
    }
    plVar8 = plVar7 + 10;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      plVar7 = *(long **)(param_1 + 0x2c8);
    }
    else {
      plVar7 = *(long **)(param_1 + 0x2c8);
    }
    if (plVar7 != (long *)0x0) {
      plVar8 = plVar7 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_60 = (long *)plVar7[0x38];
    if (local_60 == (long *)0x0) {
      local_60 = (long *)0x0;
    }
    else {
      plVar8 = local_60 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
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
        (**(code **)(*local_60 + 0x10))();
      }
    }
    plVar8 = plVar7 + 10;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    local_48 = *(undefined8 *)(lVar9 + (ulong)param_2 * 0x78);
    uVar6 = FUN_00d40878(param_1);
    local_88 = 0x9bf1d120b9d1525;
    pcStack_80 = "common/mystery.dat";
    local_78 = 0x12;
    local_70 = (long *)0x0;
    FUN_00d37bb4(&local_38,uVar6,&local_88,10);
    local_58 = (long *)local_38[0xd];
    if (local_58 == (long *)0x0) {
      local_58 = (long *)0x0;
    }
    else {
      plVar7 = local_58 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *(int *)plVar7 = (int)*plVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
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
        (**(code **)(*local_58 + 0x10))();
      }
    }
    if (local_38 != (long *)0x0) {
      lVar9 = local_38[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
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
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
      }
    }
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    plVar7 = *(long **)(param_1 + 0x2c8);
    if (plVar7 != (long *)0x0) {
      plVar8 = plVar7 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar8 = (long *)plVar7[0x37];
    if (plVar8 == (long *)0x0) {
      local_50 = (long *)0x0;
    }
    else {
      lVar9 = plVar8[0xb];
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
LAB_013bf9d4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar6;
      }
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar9 = plVar8[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      local_50 = plVar8;
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar8 + 0x20))(plVar8);
      }
    }
    plVar8 = plVar7 + 10;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    FUN_013bd4b0(&local_68);
    uVar6 = FUN_02c2f268(local_68);
  }
  return uVar6;
}


