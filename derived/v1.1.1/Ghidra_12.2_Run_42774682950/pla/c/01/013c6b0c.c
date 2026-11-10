/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013c6b0c; name: FUN_013c6b0c
 */


void FUN_013c6b0c(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 uVar6;
  long *local_d0;
  long *local_c8;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long alStack_a0 [13];
  long *local_38;
  long *local_30;
  long *local_28;
  
  if (*(int *)(param_1 + 0x78) - 0x11U < 0x11) {
    FUN_013c1284(*(undefined8 *)(param_1 + 0xa0));
    plVar5 = *(long **)(param_1 + 0xa0);
LAB_013c6b3c:
                    /* WARNING: Could not recover jumptable at 0x013c6b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0xa0))();
    return;
  }
  switch(*(int *)(param_1 + 0x78)) {
  case 1:
    FUN_00d6a4e4(*(undefined8 *)(param_1 + 0x270));
    uVar6 = *(undefined8 *)(param_1 + 0x270);
    local_28 = *(long **)(param_1 + 0x288);
    if (local_28 != (long *)0x0) {
      plVar5 = local_28 + 10;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *(int *)plVar5 = (int)*plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_00d6a464(uVar6,0,1,&local_28);
    if (local_28 != (long *)0x0) {
      plVar5 = local_28 + 10;
      do {
        iVar3 = (int)*plVar5 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *(int *)plVar5 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
    FUN_00d6a4d8(*(undefined8 *)(param_1 + 0x270));
    if (*(char *)(param_1 + 0x278) == '\0') {
      FUN_00d6a4ec(*(undefined8 *)(param_1 + 0x270));
      *(undefined1 *)(param_1 + 0x278) = 1;
    }
    FUN_013cf8bc(*(undefined8 *)(param_1 + 0x90));
    return;
  case 2:
    FUN_00d6a4e4(*(undefined8 *)(param_1 + 0x270));
    uVar6 = *(undefined8 *)(param_1 + 0x270);
    local_30 = *(long **)(param_1 + 0x280);
    if (local_30 != (long *)0x0) {
      plVar5 = local_30 + 10;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *(int *)plVar5 = (int)*plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_00d6a464(uVar6,0,1,&local_30);
    if (local_30 != (long *)0x0) {
      plVar5 = local_30 + 10;
      do {
        iVar3 = (int)*plVar5 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *(int *)plVar5 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
    }
    FUN_00d6a4d8(*(undefined8 *)(param_1 + 0x270));
    if (*(char *)(param_1 + 0x278) == '\0') {
      FUN_00d6a4ec(*(undefined8 *)(param_1 + 0x270));
      *(undefined1 *)(param_1 + 0x278) = 1;
    }
    plVar5 = *(long **)(param_1 + 0x98);
    break;
  case 3:
    plVar5 = *(long **)(param_1 + 0x98);
    goto LAB_013c6b3c;
  default:
    goto switchD_013c6b74_caseD_4;
  case 9:
    FUN_00d6a4e4(*(undefined8 *)(param_1 + 0x270));
    uVar6 = *(undefined8 *)(param_1 + 0x270);
    local_38 = *(long **)(param_1 + 0x280);
    if (local_38 != (long *)0x0) {
      plVar5 = local_38 + 10;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *(int *)plVar5 = (int)*plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_00d6a464(uVar6,0,1,&local_38);
    if (local_38 != (long *)0x0) {
      plVar5 = local_38 + 10;
      do {
        iVar3 = (int)*plVar5 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *(int *)plVar5 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
    FUN_00d6a4d8(*(undefined8 *)(param_1 + 0x270));
    if (*(char *)(param_1 + 0x278) == '\0') {
      FUN_00d6a4ec(*(undefined8 *)(param_1 + 0x270));
      *(undefined1 *)(param_1 + 0x278) = 1;
    }
    local_c0 = &LAB_013c7990;
    local_b8 = FUN_013c7aa0;
    local_b0 = &LAB_013c7aa4;
    local_a8 = &LAB_013c7ab0;
    alStack_a0[0] = param_1;
    FUN_013c25c8(*(undefined8 *)(param_1 + 0xa8),&local_c0);
    pcVar4 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = (undefined1 *)0x0;
      local_a8 = (undefined1 *)0x0;
      local_c0 = (undefined1 *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar4)(alStack_a0);
    }
LAB_013c6dcc:
    plVar5 = *(long **)(param_1 + 0xa8);
    break;
  case 10:
    FUN_00d6a4e4(*(undefined8 *)(param_1 + 0x270));
    uVar6 = *(undefined8 *)(param_1 + 0x270);
    local_c8 = *(long **)(param_1 + 0x280);
    if (local_c8 != (long *)0x0) {
      plVar5 = local_c8 + 10;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *(int *)plVar5 = (int)*plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_00d6a464(uVar6,0,1,&local_c8);
    if (local_c8 != (long *)0x0) {
      plVar5 = local_c8 + 10;
      do {
        iVar3 = (int)*plVar5 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *(int *)plVar5 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_c8 + 0x10))();
      }
    }
    FUN_00d6a4d8(*(undefined8 *)(param_1 + 0x270));
    if (*(char *)(param_1 + 0x278) != '\0') goto LAB_013c6dcc;
    FUN_00d6a4ec(*(undefined8 *)(param_1 + 0x270));
    plVar5 = *(long **)(param_1 + 0xa8);
    *(undefined1 *)(param_1 + 0x278) = 1;
    break;
  case 0xd:
    (**(code **)(**(long **)(param_1 + 0x70) + 8))(&local_c0);
    FUN_013c39c8(*(undefined8 *)(param_1 + 0xb0),&local_c0);
    plVar5 = *(long **)(param_1 + 0xb0);
    break;
  case 0xe:
    FUN_00d6a4e4(*(undefined8 *)(param_1 + 0x270));
    uVar6 = *(undefined8 *)(param_1 + 0x270);
    local_d0 = *(long **)(param_1 + 0x280);
    if (local_d0 != (long *)0x0) {
      plVar5 = local_d0 + 10;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *(int *)plVar5 = (int)*plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_00d6a464(uVar6,0,1,&local_d0);
    if (local_d0 != (long *)0x0) {
      plVar5 = local_d0 + 10;
      do {
        iVar3 = (int)*plVar5 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *(int *)plVar5 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_d0 + 0x10))();
      }
    }
    FUN_00d6a4d8(*(undefined8 *)(param_1 + 0x270));
    if (*(char *)(param_1 + 0x278) == '\0') {
      FUN_00d6a4ec(*(undefined8 *)(param_1 + 0x270));
      *(undefined1 *)(param_1 + 0x278) = 1;
    }
    local_c0 = &LAB_013c7abc;
    local_b8 = FUN_013c7bcc;
    local_b0 = &LAB_013c7bd0;
    local_a8 = &LAB_013c7bdc;
    alStack_a0[0] = param_1;
    FUN_013be13c(*(undefined8 *)(param_1 + 0xb8),&local_c0);
    pcVar4 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = (undefined1 *)0x0;
      local_a8 = (undefined1 *)0x0;
      local_c0 = (undefined1 *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar4)(alStack_a0);
    }
    plVar5 = *(long **)(param_1 + 0xb8);
  }
  (**(code **)(*plVar5 + 0xa0))();
switchD_013c6b74_caseD_4:
  return;
}


