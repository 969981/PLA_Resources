/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02945eb8; name: FUN_02945eb8
 */


void FUN_02945eb8(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  undefined1 *puVar7;
  long *plVar8;
  ulong uVar9;
  char cVar10;
  byte bVar11;
  long lVar12;
  long *local_50;
  long *local_48;
  long *local_40;
  long *local_38;
  
  bVar3 = *(byte *)(param_1 + 0x130);
  uVar9 = (ulong)bVar3;
  iVar2 = *(int *)(param_1 + 0x110);
  if (uVar9 == 0) {
    bVar6 = 0;
LAB_02945f5c:
    if (iVar2 == 2) {
LAB_02945f70:
      if (bVar3 < 5) {
        puVar7 = &DAT_03a7ebe0;
LAB_02945fac:
        cVar5 = puVar7[uVar9];
        goto LAB_02945fb0;
      }
    }
    else {
      if (iVar2 != 1) {
        if (iVar2 == 0) goto LAB_02945f70;
        cVar5 = '\x02';
        cVar10 = '\x02';
        goto LAB_02945fb4;
      }
      if (bVar3 < 5) {
        puVar7 = &DAT_03a7ebe5;
        goto LAB_02945fac;
      }
    }
    cVar10 = '\x01';
    cVar5 = '\x02';
LAB_02945fb4:
    lVar12 = 1;
    if (cVar5 == cVar10) {
      lVar12 = 2;
    }
  }
  else {
    if (iVar2 == 2) {
LAB_02945ef4:
      if (bVar3 < 5) {
        puVar7 = &DAT_03a7ebe0;
LAB_02945f38:
        cVar5 = puVar7[uVar9];
        cVar10 = '\0';
        goto LAB_02945f40;
      }
LAB_02945f18:
      cVar5 = '\x02';
      bVar6 = 1;
LAB_02945fb0:
      cVar10 = '\x01';
      goto LAB_02945fb4;
    }
    if (iVar2 == 1) {
      if (bVar3 < 5) {
        puVar7 = &DAT_03a7ebe5;
        goto LAB_02945f38;
      }
      goto LAB_02945f18;
    }
    if (iVar2 == 0) goto LAB_02945ef4;
    cVar5 = '\x02';
    cVar10 = '\x02';
LAB_02945f40:
    bVar6 = 1;
    if (cVar5 == cVar10) {
      bVar6 = 2;
    }
    if (bVar3 != 1) goto LAB_02945f5c;
    lVar12 = 0;
  }
  plVar8 = *(long **)(param_2 + (ulong)bVar6 * 8 + 0xb0);
  local_38 = plVar8;
  if (plVar8 == (long *)0x0) {
    FUN_029476a4(param_1,0,&local_38);
  }
  else {
    plVar1 = plVar8 + 10;
    do {
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    FUN_029476a4(param_1,0,&local_38);
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 10;
      do {
        iVar2 = (int)*plVar1 + -1;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar2;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  plVar8 = *(long **)(param_2 + lVar12 * 8 + 0xb0);
  local_40 = plVar8;
  if (plVar8 == (long *)0x0) {
    FUN_029476a4(param_1,1,&local_40);
  }
  else {
    plVar1 = plVar8 + 10;
    do {
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    FUN_029476a4(param_1,1,&local_40);
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 10;
      do {
        iVar2 = (int)*plVar1 + -1;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar2;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  bVar3 = *(byte *)(param_1 + 0x130);
  uVar9 = (ulong)bVar3;
  iVar2 = *(int *)(param_1 + 0x110);
  if (uVar9 == 2) {
    bVar6 = 0;
LAB_02946144:
    if (iVar2 != 2) {
      if (iVar2 == 1) {
        if (bVar3 < 5) {
          cVar5 = (&DAT_03a7ebe5)[uVar9];
          cVar10 = '\x01';
        }
        else {
          cVar10 = '\x01';
          cVar5 = '\x02';
        }
        goto LAB_0294618c;
      }
      if (iVar2 != 0) goto LAB_02946160;
    }
    if (bVar3 < 5) {
      cVar5 = (&DAT_03a7ebe0)[uVar9];
    }
    else {
LAB_02946160:
      cVar5 = '\x02';
    }
    cVar10 = '\x02';
  }
  else {
    if (iVar2 == 2) {
LAB_029460dc:
      bVar6 = 2;
      if (bVar3 < 5) {
        puVar7 = &DAT_03a7ebe0;
LAB_02946124:
        bVar11 = puVar7[uVar9];
LAB_02946128:
        bVar4 = bVar11 != bVar6;
        bVar6 = 2;
        if (bVar4) {
          bVar6 = 3;
        }
        if (bVar3 == 3) {
          lVar12 = 0;
          goto LAB_02946198;
        }
        goto LAB_02946144;
      }
      goto LAB_02946160;
    }
    if (iVar2 != 1) {
      if (iVar2 == 0) goto LAB_029460dc;
      bVar11 = 2;
      bVar6 = 2;
      goto LAB_02946128;
    }
    if (bVar3 < 5) {
      bVar6 = 0;
      puVar7 = &DAT_03a7ebe5;
      goto LAB_02946124;
    }
    cVar10 = '\x01';
    cVar5 = '\x02';
    bVar6 = 3;
  }
LAB_0294618c:
  lVar12 = 2;
  if (cVar5 != cVar10) {
    lVar12 = 3;
  }
LAB_02946198:
  plVar8 = *(long **)(param_2 + (ulong)bVar6 * 8 + 0xb0);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    local_48 = plVar8;
    FUN_029476a4(param_1,2,&local_48);
    if (local_48 != (long *)0x0) {
      plVar8 = local_48 + 10;
      do {
        iVar2 = (int)*plVar8 + -1;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar2;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar2 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
  }
  local_50 = *(long **)(param_2 + lVar12 * 8 + 0xb0);
  if (local_50 != (long *)0x0) {
    plVar8 = local_50 + 10;
    do {
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    FUN_029476a4(param_1,3,&local_50);
    if (local_50 != (long *)0x0) {
      plVar8 = local_50 + 10;
      do {
        iVar2 = (int)*plVar8 + -1;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar2;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02946290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*local_50 + 0x10))();
        return;
      }
    }
  }
  return;
}


