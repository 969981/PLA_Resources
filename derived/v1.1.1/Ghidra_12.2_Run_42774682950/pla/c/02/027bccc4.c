/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027bccc4; name: FUN_027bccc4
 */


void FUN_027bccc4(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  code *pcVar9;
  long *local_48;
  long *local_40;
  long *local_38;
  
  if (*param_2 != 0) {
    local_38 = (long *)*param_1;
    if (local_38 != (long *)0x0) {
      plVar8 = local_38 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_40 = (long *)param_1[1];
    if (local_40 != (long *)0x0) {
      plVar8 = local_40 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_48 = (long *)param_1[6];
    if (local_48 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = local_48 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar8 = local_48;
    }
    FUN_027bd064(param_2,&local_38,&local_40,&local_48,*(undefined8 *)(param_1[7] + 0x5b8));
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 10;
      do {
        iVar7 = (int)*plVar1 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    if (local_40 != (long *)0x0) {
      plVar8 = local_40 + 10;
      do {
        iVar7 = (int)*plVar8 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_40 + 0x10))();
      }
    }
    if (local_38 != (long *)0x0) {
      plVar8 = local_38 + 10;
      do {
        iVar7 = (int)*plVar8 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
  }
  param_1[8] = param_1[1];
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x52) = 1;
  FUN_00d428b0(param_1[7],0);
  plVar8 = (long *)(*(long *)(param_1[7] + 0x5b0) + 0x68);
  (**(code **)(*plVar8 + 8))(plVar8,1);
  FUN_00d67ea8(param_1[7],param_1 + 8);
  pcVar9 = (code *)param_1[0x15];
  if (pcVar9 != (code *)0x0) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (*pcVar9)(param_1 + 0x18);
  }
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,param_1 + 0x18);
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[3];
    param_1[0x16] = param_3[2];
    param_1[0x17] = uVar4;
    param_1[0x14] = uVar2;
    param_1[0x15] = uVar3;
  }
  *(undefined4 *)(param_1 + 0x34) = 1;
  return;
}


