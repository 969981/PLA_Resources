/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014dec10; name: FUN_014dec10
 */


void FUN_014dec10(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *local_38;
  long *local_30;
  long *local_28;
  long *local_18;
  
  switch(*(undefined4 *)(param_1 + 0x78)) {
  case 1:
    (**(code **)(**(long **)(param_1 + 0x90) + 0xa0))();
    FUN_00d6a4e4(*(undefined8 *)(param_1 + 0xa8));
    uVar7 = *(undefined8 *)(param_1 + 0xa8);
    local_18 = *(long **)(param_1 + 0x270);
    if (local_18 != (long *)0x0) {
      plVar5 = local_18 + 10;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *(int *)plVar5 = (int)*plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_00d6a464(uVar7,0,1,&local_18);
    if (local_18 != (long *)0x0) {
      plVar5 = local_18 + 10;
      do {
        iVar3 = (int)*plVar5 + -1;
        bVar4 = iVar3 == 0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *(int *)plVar5 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar8 = local_18;
      } while (cVar1 != '\0');
LAB_014dee90:
      if (bVar4) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    break;
  default:
    goto switchD_014dec48_caseD_2;
  case 3:
    FUN_014dbe68(*(undefined8 *)(param_1 + 0x98),0);
    plVar5 = *(long **)(param_1 + 0x98);
    goto LAB_014dec50;
  case 4:
    FUN_014dbe68(*(undefined8 *)(param_1 + 0x98),1);
    (**(code **)(**(long **)(param_1 + 0x98) + 0xa0))();
    FUN_00d6a4e4(*(undefined8 *)(param_1 + 0xa8));
    uVar7 = *(undefined8 *)(param_1 + 0xa8);
    local_28 = *(long **)(param_1 + 0x270);
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
    FUN_00d6a464(uVar7,0,1,&local_28);
    if (local_28 != (long *)0x0) {
      plVar5 = local_28 + 10;
      do {
        iVar3 = (int)*plVar5 + -1;
        bVar4 = iVar3 == 0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *(int *)plVar5 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar8 = local_28;
      } while (cVar1 != '\0');
      goto LAB_014dee90;
    }
    break;
  case 5:
    FUN_014dbe68(*(undefined8 *)(param_1 + 0x98),2);
    (**(code **)(**(long **)(param_1 + 0x98) + 0xa0))();
    FUN_00d6a4e4(*(undefined8 *)(param_1 + 0xa8));
    uVar7 = *(undefined8 *)(param_1 + 0xa8);
    local_30 = *(long **)(param_1 + 0x270);
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
    FUN_00d6a464(uVar7,0,1,&local_30);
    if (local_30 != (long *)0x0) {
      plVar5 = local_30 + 10;
      do {
        iVar3 = (int)*plVar5 + -1;
        bVar4 = iVar3 == 0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *(int *)plVar5 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar8 = local_30;
      } while (cVar1 != '\0');
      goto LAB_014dee90;
    }
    break;
  case 7:
    if (*(undefined8 **)(param_1 + 0x70) != (undefined8 *)0x0) {
      uVar6 = (**(code **)**(undefined8 **)(param_1 + 0x70))();
      FUN_014dcd00(*(undefined8 *)(param_1 + 0xa0),uVar6,uVar6 >> 0x10 & 0xffff);
    }
    (**(code **)(**(long **)(param_1 + 0xa0) + 0xa0))();
    FUN_00d6a4e4(*(undefined8 *)(param_1 + 0xa8));
    uVar7 = *(undefined8 *)(param_1 + 0xa8);
    local_38 = *(long **)(param_1 + 0x270);
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
    FUN_00d6a464(uVar7,0,1,&local_38);
    if (local_38 != (long *)0x0) {
      plVar5 = local_38 + 10;
      do {
        iVar3 = (int)*plVar5 + -1;
        bVar4 = iVar3 == 0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *(int *)plVar5 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar8 = local_38;
      } while (cVar1 != '\0');
      goto LAB_014dee90;
    }
    break;
  case 8:
  case 9:
  case 10:
    plVar5 = *(long **)(param_1 + 0xa0);
LAB_014dec50:
    (**(code **)(*plVar5 + 0xa0))();
    FUN_00d6a4e4(*(undefined8 *)(param_1 + 0xa8));
  }
  FUN_00d6a4d8(*(undefined8 *)(param_1 + 0xa8));
  if (*(char *)(param_1 + 0xb0) == '\0') {
    FUN_00d6a4ec(*(undefined8 *)(param_1 + 0xa8));
    *(undefined1 *)(param_1 + 0xb0) = 1;
  }
switchD_014dec48_caseD_2:
  return;
}


