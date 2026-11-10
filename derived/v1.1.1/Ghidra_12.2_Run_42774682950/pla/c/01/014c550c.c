/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c550c; name: FUN_014c550c
 */


void FUN_014c550c(long param_1,uint param_2,int *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  FUN_014c589c(param_1,0);
  local_50 = 0x6878cd3fe0fc1885;
  pcStack_48 = "pane_L_scr_04_memo_T_trmemo_01_01";
  local_40 = 0x21;
  local_38 = (long *)0x0;
  FUN_014c1468(param_1,2,*(undefined8 *)(&DAT_03a7bf58 + (ulong)param_2 * 8),&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (*(char *)(*(long *)(param_1 + 0x5b0) + 0x19) != '\0') goto LAB_014c5634;
  uVar4 = FUN_010a2f70(param_3[9]);
  if ((uVar4 & 1) != 0) {
    bVar3 = (char)param_3[10] == '\0';
    iVar5 = 0x12;
    iVar6 = 0x10;
    goto LAB_014c55f4;
  }
  uVar4 = FUN_010a2f50(param_3[9]);
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_010a2f60(param_3[9]);
    if ((uVar4 & 1) == 0) {
      iVar5 = 0xc;
      iVar6 = 0xe;
    }
    else {
      iVar5 = 0x18;
      iVar6 = 0x1a;
    }
    if ((char)param_3[10] == '\0') {
      iVar6 = iVar5;
    }
  }
  else if ((char)param_3[10] == '\0') {
    if (param_3[4] == 0) {
      iVar5 = 0xc;
      if (*param_3 != 0x7542) {
        iVar5 = 0;
      }
      bVar3 = *param_3 == 0x7532;
      iVar6 = 2;
      goto LAB_014c55f4;
    }
    iVar6 = 4;
    if (60000 < (uint)param_3[4]) {
      iVar6 = 6;
    }
  }
  else if (*param_3 == 0x7542) {
    iVar6 = 0xe;
  }
  else {
    bVar3 = param_3[4] == 0;
    iVar5 = 10;
    iVar6 = 8;
LAB_014c55f4:
    if (!bVar3) {
      iVar6 = iVar5;
    }
  }
  local_50 = 0x435de7ccca6cf4a8;
  pcStack_48 = "pane_L_scr_04_memo_T_trmemo_03_01_00";
  local_40 = 0x24;
  local_38 = (long *)0x0;
  FUN_014c59a0(param_1,param_3,&local_50,iVar6 + (*(byte *)((long)param_3 + 0x29) ^ 1));
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
LAB_014c5634:
  plVar7 = *(long **)(param_1 + 0x2c8);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_50 = 0x435de7ccca6cf4a8;
  pcStack_48 = "pane_L_scr_04_memo_T_trmemo_03_01_00";
  local_40 = 0x24;
  local_38 = (long *)0x0;
  FUN_0283b11c(plVar7,&local_50,*(char *)(*(long *)(param_1 + 0x5b0) + 0x19) == '\0');
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  return;
}


