/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01258898; name: FUN_01258898
 */


void FUN_01258898(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *local_30;
  long *local_28;
  
  uVar6 = FUN_012586b4();
  FUN_00d37c90(&local_30,*(undefined8 *)(param_1 + 0x690),0);
  local_28 = (long *)local_30[0xd];
  if (local_28 != (long *)0x0) {
    plVar1 = local_28 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_0125a820(uVar6,&local_28);
  if (local_28 != (long *)0x0) {
    plVar1 = local_28 + 10;
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
      (**(code **)(*local_28 + 0x10))();
    }
  }
  if (local_30 != (long *)0x0) {
    lVar7 = local_30[0xb];
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_30 + 0x20))();
    }
  }
  return;
}


