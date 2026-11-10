/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013cae50; name: FUN_013cae50
 */


void FUN_013cae50(long param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  plVar5 = *(long **)(param_1 + 0x2c8);
  if (plVar5 == (long *)0x0) {
    return;
  }
  plVar1 = plVar5 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
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
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if (param_2 == 0) {
    local_40 = 0x31d4bebb1b8ed8a9;
    pcStack_38 = "anime_L_tab_00_L_tab_disp_00_select";
    local_30 = 0x23;
    local_28 = (long *)0x0;
    FUN_0283b1e8(plVar5,&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    local_40 = 0x4c124b1a39da606b;
    pcStack_38 = "anime_L_tab_00_L_tab_disp_01_unselect";
    local_30 = 0x25;
  }
  else {
    if (param_2 != 1) {
      return;
    }
    local_40 = 0x744a106fb4a0a43e;
    pcStack_38 = "anime_L_tab_00_L_tab_disp_00_unselect";
    local_30 = 0x25;
    local_28 = (long *)0x0;
    FUN_0283b1e8(plVar5,&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    local_40 = 0xa2f2536aed1e20;
    pcStack_38 = "anime_L_tab_00_L_tab_disp_01_select";
    local_30 = 0x23;
  }
  local_28 = (long *)0x0;
  FUN_0283b1e8(plVar5,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


