/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011cebc4; name: FUN_011cebc4
 */


void FUN_011cebc4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *local_50;
  undefined1 *local_48;
  char *pcStack_40;
  undefined8 local_38;
  long *local_30;
  long *local_28;
  
  FUN_011cee28();
  lVar6 = *(long *)(*(long *)(param_1 + 0x5b0) + (ulong)*(byte *)(param_1 + 0x658) * 0x40);
  if (lVar6 != 0) {
    FUN_011ca7b4(param_1 + 0x628,lVar6,*(byte *)(param_1 + 0x658) == 0);
  }
  FUN_011cf2f0(param_1);
  FUN_011cf3b4(param_1);
  FUN_011ce40c(param_1);
  plVar4 = *(long **)(param_1 + 0x2c8);
  if (plVar4 != (long *)0x0) {
    plVar8 = plVar4 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar8 = (long *)plVar4[0x38];
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar1 = plVar4 + 10;
  do {
    iVar5 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  FUN_011d24c4(&local_28);
  local_48 = &DAT_e2c06acab97c29c2;
  pcStack_40 = "CommonOptionBar";
  local_38 = 0xf;
  local_30 = (long *)0x0;
  lVar6 = FUN_00d6adf4(param_1 + 0x180,&local_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (lVar6 != 0) {
    FUN_02814e04(lVar6);
    lVar7 = local_28[0x16];
    if (lVar7 != 0) {
      plVar4 = *(long **)(lVar7 + 0x270);
      if (plVar4 != *(long **)(lVar7 + 0x278)) {
        iVar5 = 0;
        do {
          plVar1 = (long *)PTR_DAT_04379c88;
          if (*plVar4 != 0) {
            plVar1 = (long *)(*plVar4 + 0x58);
          }
          if (*plVar1 == -0x5c301afa8c0dd116) goto LAB_011ced30;
          plVar4 = plVar4 + 1;
          iVar5 = iVar5 + 1;
        } while (*(long **)(lVar7 + 0x278) != plVar4);
      }
    }
    iVar5 = 0;
LAB_011ced30:
    FUN_02c2e33c(local_28,iVar5,plVar8);
    if (plVar8 != (long *)0x0) {
      plVar4 = plVar8 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *(int *)plVar4 = (int)*plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_50 = plVar8;
    FUN_02814858(lVar6,0,1,&local_50);
    if (local_50 != (long *)0x0) {
      plVar4 = local_50 + 10;
      do {
        iVar5 = (int)*plVar4 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *(int *)plVar4 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_50 + 0x10))();
      }
    }
    FUN_02814a44(lVar6,1);
  }
  if (local_28 != (long *)0x0) {
    plVar4 = local_28 + 10;
    do {
      iVar5 = (int)*plVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *(int *)plVar4 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  if (plVar8 != (long *)0x0) {
    plVar4 = plVar8 + 10;
    do {
      iVar5 = (int)*plVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *(int *)plVar4 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  return;
}


