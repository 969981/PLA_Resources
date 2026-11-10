/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010974d0; name: FUN_010974d0
 */


void FUN_010974d0(long *param_1,undefined8 param_2,undefined8 *param_3,long *param_4,
                 undefined8 param_5)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  long *plVar9;
  uint uVar10;
  long *local_40;
  long *local_38;
  long *local_28;
  
  pcVar8 = (char *)*param_3;
  if (pcVar8 == (char *)0x0) {
    return;
  }
  lVar7 = *param_4;
  if (lVar7 == 0) {
    return;
  }
  if (*pcVar8 == '\0') {
    plVar9 = (long *)*param_1;
    local_40 = plVar9;
    if (plVar9 == (long *)0x0) {
      FUN_01098500(&local_40,lVar7);
      goto LAB_0109754c;
    }
    plVar1 = plVar9 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_01098500(&local_40,*param_4);
    if (plVar9 == (long *)0x0) goto LAB_0109754c;
    plVar1 = plVar9 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else if (pcVar8[1] == '\0') {
    plVar9 = (long *)*param_1;
    local_38 = plVar9;
    if (plVar9 == (long *)0x0) {
      FUN_01097c50(&local_38,param_2,param_5);
      goto LAB_0109754c;
    }
    plVar1 = plVar9 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_01097c50(&local_38,param_2,param_5);
    if (plVar9 == (long *)0x0) goto LAB_0109754c;
    plVar1 = plVar9 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    plVar9 = (long *)*param_1;
    local_28 = plVar9;
    if (plVar9 == (long *)0x0) {
      FUN_010976d0(&local_28,param_2,lVar7,param_5);
      goto LAB_0109754c;
    }
    plVar1 = plVar9 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_010976d0(&local_28,param_2,*param_4,param_5);
    if (plVar9 == (long *)0x0) goto LAB_0109754c;
    plVar1 = plVar9 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (iVar5 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
LAB_0109754c:
  lVar7 = *param_1;
  iVar5 = FUN_02c6b1c0(*(undefined8 *)(lVar7 + 0x98),0);
  iVar6 = FUN_02c6b1c0(*(undefined8 *)(lVar7 + 0x98),1);
  uVar10 = 2;
  if (iVar5 == 0) {
    uVar10 = 1;
  }
  uVar2 = (uint)(iVar5 != 0);
  if (iVar6 != 0) {
    uVar2 = uVar10;
  }
  iVar5 = FUN_02c6b1c0(*(undefined8 *)(lVar7 + 0x98),2);
  if (iVar5 != 0) {
    uVar2 = uVar2 + 1;
  }
  iVar5 = FUN_02c6b1c0(*(undefined8 *)(lVar7 + 0x98),3);
  if (uVar2 == -(uint)(iVar5 != 0)) {
    FUN_02c5b610(*param_1);
    return;
  }
  return;
}


