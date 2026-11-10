/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013c8684; name: FUN_013c8684
 */


void FUN_013c8684(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  plVar8 = *(long **)(param_1 + 0x2c8);
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
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      lVar7 = *(long *)(param_1 + 0x5c8);
    }
    else {
      lVar7 = *(long *)(param_1 + 0x5c8);
    }
    if (lVar7 != 0) {
      for (lVar2 = *(long *)(lVar7 + 8); lVar2 != *(long *)(lVar7 + 0x10); lVar2 = lVar2 + 0x4c) {
        if (*(char *)(lVar2 + 0x49) != '\0') {
          uVar6 = 1;
          lVar7 = *(long *)(param_1 + 0x5e8);
          goto joined_r0x013c87c4;
        }
      }
    }
    uVar6 = 0;
    lVar7 = *(long *)(param_1 + 0x5e8);
joined_r0x013c87c4:
    if (lVar7 != 0) {
      for (lVar2 = *(long *)(lVar7 + 8); lVar2 != *(long *)(lVar7 + 0x10); lVar2 = lVar2 + 0x4c) {
        if (*(char *)(lVar2 + 0x49) != '\0') {
          uVar9 = 1;
          goto LAB_013c8720;
        }
      }
    }
    uVar9 = 0;
LAB_013c8720:
    local_40 = 0x5e2bb7b98cbc3dd;
    pcStack_38 = "pane_L_tab_00_L_tab_disp_00_P_check_00";
    local_30 = 0x26;
    local_28 = (long *)0x0;
    FUN_0283b11c(plVar8,&local_40,uVar6);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    local_40 = 0x337687819f67eaf4;
    pcStack_38 = "pane_L_tab_00_L_tab_disp_01_P_check_00";
    local_30 = 0x26;
    local_28 = (long *)0x0;
    FUN_0283b11c(plVar8,&local_40,uVar9);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


