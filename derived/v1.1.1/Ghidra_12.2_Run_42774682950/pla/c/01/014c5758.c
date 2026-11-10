/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c5758; name: FUN_014c5758
 */


void FUN_014c5758(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  FUN_014c589c(param_1,1);
  if (*(char *)(*(long *)(param_1 + 0x5b0) + 0x19) == '\0') {
    bVar4 = *(char *)(param_2 + 0x29) == '\0';
    local_50 = 0x4bd1df1a902855e;
    pcStack_48 = "pane_L_scr_04_memo_T_trmemo_01_T_01_01";
    uVar5 = 0x16;
    if (bVar4) {
      uVar5 = 0x17;
    }
    uVar6 = 0x14;
    if (bVar4) {
      uVar6 = 0x15;
    }
    if (*(char *)(param_2 + 0x28) != '\0') {
      uVar6 = uVar5;
    }
    local_40 = 0x26;
    local_38 = (long *)0x0;
    FUN_014c59a0(param_1,param_2,&local_50,uVar6);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
      plVar7 = *(long **)(param_1 + 0x2c8);
      goto joined_r0x014c5880;
    }
  }
  plVar7 = *(long **)(param_1 + 0x2c8);
joined_r0x014c5880:
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_50 = 0x4bd1df1a902855e;
  pcStack_48 = "pane_L_scr_04_memo_T_trmemo_01_T_01_01";
  local_40 = 0x26;
  local_38 = (long *)0x0;
  FUN_0283b11c(plVar7,&local_50,*(char *)(*(long *)(param_1 + 0x5b0) + 0x19) == '\0');
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      iVar3 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar3;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  return;
}


