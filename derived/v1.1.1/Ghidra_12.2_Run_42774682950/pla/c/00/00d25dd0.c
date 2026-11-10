/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d25dd0; name: FUN_00d25dd0
 */


void FUN_00d25dd0(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined1 *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  long *local_48;
  
  FUN_00d260d0();
  *param_1 = &PTR_LAB_041ea8b0;
  param_1[9] = &PTR_LAB_041ea8e0;
  plVar7 = param_1 + 10;
  *plVar7 = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 2;
  plVar4 = (long *)FUN_00d26a68(param_2);
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *(int *)plVar5 = (int)*plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar5 = (long *)FUN_00d26a68(param_2);
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  local_60 = &DAT_121d7307bd58c49b;
  puStack_58 = &DAT_03a81ce8;
  local_50 = 0x1f;
  local_48 = (long *)0x0;
  FUN_00d20684(plVar4,"bin/appli/fade/bin/fade_common_00.arc",param_2,&local_60);
  FUN_00d20684(plVar5,"bin/appli/fade/bin/fade_common_00.arc",param_2,&local_60);
  if (plVar4 != (long *)0x0) {
    plVar6 = plVar4 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar6 = (long *)*plVar7;
  *plVar7 = (long)plVar4;
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 10;
    do {
      iVar3 = (int)*plVar7 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  if (plVar4 != (long *)0x0) {
    plVar7 = plVar4 + 10;
    do {
      iVar3 = (int)*plVar7 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  if (plVar5 != (long *)0x0) {
    plVar7 = plVar5 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar7 = (long *)param_1[0xb];
  param_1[0xb] = plVar5;
  if (plVar7 != (long *)0x0) {
    plVar6 = plVar7 + 10;
    do {
      iVar3 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  if (plVar5 != (long *)0x0) {
    plVar7 = plVar5 + 10;
    do {
      iVar3 = (int)*plVar7 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      plVar7 = (long *)param_1[10];
      goto joined_r0x00d2609c;
    }
  }
  plVar7 = (long *)param_1[10];
joined_r0x00d2609c:
  if ((plVar7 != (long *)0x0) && (uVar8 = (**(code **)(*plVar7 + 0x30))(), (uVar8 & 1) != 0)) {
    (**(code **)(*(long *)param_1[10] + 0x60))((long *)param_1[10],0,2);
  }
  if (((long *)param_1[0xb] != (long *)0x0) &&
     (uVar8 = (**(code **)(*(long *)param_1[0xb] + 0x30))(), (uVar8 & 1) != 0)) {
    (**(code **)(*(long *)param_1[0xb] + 0x60))((long *)param_1[0xb],0,2);
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (plVar5 != (long *)0x0) {
    plVar7 = plVar5 + 10;
    do {
      iVar3 = (int)*plVar7 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  if (plVar4 != (long *)0x0) {
    plVar7 = plVar4 + 10;
    do {
      iVar3 = (int)*plVar7 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return;
}


