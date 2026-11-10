/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027fc54c; name: FUN_027fc54c
 */


void FUN_027fc54c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *local_38;
  undefined1 auStack_28 [8];
  
  FUN_00d39c98(param_1,param_1 + 0x4d8,0x400000);
  uVar5 = FUN_00d39d00(param_1);
  lVar6 = FUN_0116001c(auStack_28,uVar5);
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x4c8);
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x4c8) = lVar6;
  *(undefined8 *)(lVar6 + 200) = *(undefined8 *)(param_1 + 0x340);
  *(undefined8 *)(lVar6 + 0xd0) = *(undefined8 *)(param_1 + 0x348);
  *(undefined8 *)(lVar6 + 0xd8) = *(undefined8 *)(param_1 + 0x350);
  plVar7 = *(long **)(param_1 + 0x358);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  plVar8 = *(long **)(lVar6 + 0xe0);
  *(long **)(lVar6 + 0xe0) = plVar7;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  plVar7 = *(long **)(param_1 + 0x4c8);
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      iVar4 = (int)*plVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  FUN_027fc6c8(param_1);
  FUN_027fc8a8(&local_38,param_1);
  if (local_38 != (long *)0x0) {
    lVar6 = local_38[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


