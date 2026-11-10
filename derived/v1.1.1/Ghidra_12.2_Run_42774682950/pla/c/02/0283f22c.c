/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283f22c; name: FUN_0283f22c
 */


void FUN_0283f22c(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  long *local_40;
  long *local_38;
  
  if (*(char *)(param_1 + 0x112) == '\0') {
    plVar5 = (long *)*param_2;
    local_50 = plVar5;
    if (plVar5 == (long *)0x0) {
      FUN_02841400(param_1,&local_50,param_1 + 0x58);
      pcVar6 = *(code **)(param_1 + 0x90);
      goto joined_r0x0283f564;
    }
    plVar8 = plVar5 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_02841400(param_1,&local_50,param_1 + 0x58);
    if (plVar5 != (long *)0x0) {
      plVar8 = plVar5 + 10;
      do {
        iVar4 = (int)*plVar8 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *(int *)plVar8 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto joined_r0x0283f54c;
    }
  }
  else {
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379678), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar7 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar7;
    plVar8 = *(long **)(lVar7 + 0xd0);
    if (plVar8 != (long *)0x0) {
      plVar5 = plVar8 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *(int *)plVar5 = (int)*plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar5 = (long *)plVar8[0x20];
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar1 = plVar8 + 10;
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
      (**(code **)(*plVar8 + 0x10))();
    }
    local_40 = (long *)*param_2;
    if (local_40 != (long *)0x0) {
      plVar8 = local_40 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_48 = plVar5;
    if (plVar5 == (long *)0x0) {
      FUN_0284016c(&local_40,param_1 + 0x58,&local_48);
    }
    else {
      plVar8 = plVar5 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      FUN_0284016c(&local_40,param_1 + 0x58,&local_48);
      if (plVar5 != (long *)0x0) {
        plVar8 = plVar5 + 10;
        do {
          iVar4 = (int)*plVar8 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *(int *)plVar8 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if (local_40 != (long *)0x0) {
      plVar8 = local_40 + 10;
      do {
        iVar4 = (int)*plVar8 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *(int *)plVar8 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_40 + 0x10))();
      }
    }
    if (plVar5 != (long *)0x0) {
      plVar8 = plVar5 + 10;
      do {
        iVar4 = (int)*plVar8 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *(int *)plVar8 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
joined_r0x0283f54c:
      if (iVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        pcVar6 = *(code **)(param_1 + 0x90);
        goto joined_r0x0283f564;
      }
    }
  }
  pcVar6 = *(code **)(param_1 + 0x90);
joined_r0x0283f564:
  if (pcVar6 != (code *)0x0) {
    plVar8 = (long *)*param_2;
    if (plVar8 == (long *)0x0) {
      local_38 = (long *)0x0;
    }
    else {
      plVar5 = plVar8 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *(int *)plVar5 = (int)*plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *(int *)plVar5 = (int)*plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pcVar6 = *(code **)(param_1 + 0x90);
      local_38 = plVar8;
    }
    (*pcVar6)(param_1 + 0xb0,&local_38);
    if (local_38 != (long *)0x0) {
      plVar5 = local_38 + 10;
      do {
        iVar4 = (int)*plVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *(int *)plVar5 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
    if (plVar8 != (long *)0x0) {
      plVar5 = plVar8 + 10;
      do {
        iVar4 = (int)*plVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *(int *)plVar5 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  plVar8 = (long *)*param_2;
  local_58 = plVar8;
  if (plVar8 == (long *)0x0) {
    FUN_028403b8(param_1,&local_58,param_1 + 0x58,0x80,0);
  }
  else {
    plVar5 = plVar8 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *(int *)plVar5 = (int)*plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_028403b8(param_1,&local_58,param_1 + 0x58,0x80,0);
    if (plVar8 != (long *)0x0) {
      plVar5 = plVar8 + 10;
      do {
        iVar4 = (int)*plVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *(int *)plVar5 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  lVar7 = param_1 + 0x58;
  plVar8 = (long *)*param_2;
  local_60 = plVar8;
  if (plVar8 == (long *)0x0) {
    FUN_02840934(param_1,&local_60,lVar7);
  }
  else {
    plVar5 = plVar8 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *(int *)plVar5 = (int)*plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_02840934(param_1,&local_60,lVar7);
    if (plVar8 != (long *)0x0) {
      plVar5 = plVar8 + 10;
      do {
        iVar4 = (int)*plVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *(int *)plVar5 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  param_2 = (long *)*param_2;
  local_68 = param_2;
  if (param_2 == (long *)0x0) {
    FUN_02840ea4(&local_68,lVar7);
  }
  else {
    plVar8 = param_2 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_02840ea4(&local_68,lVar7);
    if (param_2 != (long *)0x0) {
      plVar8 = param_2 + 10;
      do {
        iVar4 = (int)*plVar8 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *(int *)plVar8 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
      }
    }
  }
  return;
}


