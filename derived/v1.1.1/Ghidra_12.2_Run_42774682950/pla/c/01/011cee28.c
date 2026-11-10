/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011cee28; name: FUN_011cee28
 */


void FUN_011cee28(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  lVar7 = *(long *)(param_1 + 0x448);
  lVar8 = *(long *)(param_1 + 0x5b8);
  lVar10 = *(long *)(param_1 + 0x5b0);
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
  local_70 = 0x48e134b3c6e6224e;
  pcStack_68 = "pane_L_pokeicon_00";
  local_60 = 0x12;
  local_58 = (long *)0x0;
  FUN_0283b11c(plVar6,&local_70,0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (plVar6 == (long *)0x0) {
LAB_011ceed4:
    plVar6 = *(long **)(param_1 + 0x2c8);
  }
  else {
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
    if (iVar4 != 0) goto LAB_011ceed4;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    plVar6 = *(long **)(param_1 + 0x2c8);
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
  local_70 = 0x48e135b3c6e62401;
  pcStack_68 = "pane_L_pokeicon_01";
  local_60 = 0x12;
  local_58 = (long *)0x0;
  FUN_0283b11c(plVar6,&local_70,0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (plVar6 == (long *)0x0) {
LAB_011cef54:
    plVar6 = *(long **)(param_1 + 0x2c8);
  }
  else {
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
    if (iVar4 != 0) goto LAB_011cef54;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    plVar6 = *(long **)(param_1 + 0x2c8);
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
  local_70 = 0x48e132b3c6e61ee8;
  pcStack_68 = "pane_L_pokeicon_02";
  local_60 = 0x12;
  local_58 = (long *)0x0;
  FUN_0283b11c(plVar6,&local_70,0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (plVar6 == (long *)0x0) {
LAB_011cefd4:
    plVar6 = *(long **)(param_1 + 0x2c8);
  }
  else {
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
    if (iVar4 != 0) goto LAB_011cefd4;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    plVar6 = *(long **)(param_1 + 0x2c8);
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
  local_70 = 0x48e133b3c6e6209b;
  pcStack_68 = "pane_L_pokeicon_03";
  local_60 = 0x12;
  local_58 = (long *)0x0;
  FUN_0283b11c(plVar6,&local_70,0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (plVar6 == (long *)0x0) {
LAB_011cf054:
    plVar6 = *(long **)(param_1 + 0x2c8);
  }
  else {
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
    if (iVar4 != 0) goto LAB_011cf054;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    plVar6 = *(long **)(param_1 + 0x2c8);
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
  local_70 = 0x48e138b3c6e6291a;
  pcStack_68 = "pane_L_pokeicon_04";
  local_60 = 0x12;
  local_58 = (long *)0x0;
  FUN_0283b11c(plVar6,&local_70,0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
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
      plVar6 = *(long **)(param_1 + 0x2c8);
      goto joined_r0x011cf0d8;
    }
  }
  plVar6 = *(long **)(param_1 + 0x2c8);
joined_r0x011cf0d8:
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
  local_70 = 0x48e139b3c6e62acd;
  pcStack_68 = "pane_L_pokeicon_05";
  local_60 = 0x12;
  local_58 = (long *)0x0;
  lVar8 = lVar8 - lVar10;
  FUN_0283b11c(plVar6,&local_70,0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
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
  if (lVar8 != 0) {
    uVar9 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x5b0) + uVar9 * 0x40) != 0) {
        FUN_00931ef4();
        uVar5 = FUN_0295083c();
        FUN_0284eef8(lVar7 + uVar9 * 0xd0,uVar5,0);
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
        local_70 = (&DAT_041f7bb8)[uVar9 * 3];
        pcStack_68 = (&PTR_s_pane_L_pokeicon_00_041f7bc0)[uVar9 * 3];
        local_60 = (&DAT_041f7bc8)[uVar9 * 3];
        local_58 = (long *)0x0;
        FUN_0283b11c(plVar6,&local_70,1);
        if (local_58 != (long *)0x0) {
          (**(code **)(*local_58 + 0x20))();
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
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(lVar8 >> 6));
  }
  return;
}


