/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012989c0; name: FUN_012989c0
 */


void FUN_012989c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *local_48;
  undefined8 uStack_38;
  
  plVar7 = *(long **)(param_1 + 0x2c8);
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uStack_38 = param_2;
  FUN_00d37c90(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb0),0);
  plVar8 = (long *)local_48[0xd];
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (local_48 != (long *)0x0) {
    lVar6 = local_48[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
      plVar9 = (long *)plVar7[0x38];
      goto joined_r0x01298b3c;
    }
  }
  plVar9 = (long *)plVar7[0x38];
joined_r0x01298b3c:
  if (plVar9 == (long *)0x0) {
    FUN_02c2e7d0(plVar8,&uStack_38,0);
  }
  else {
    plVar2 = plVar9 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    FUN_02c2e7d0(plVar8,&uStack_38,plVar9);
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  FUN_0283d080(plVar7,param_3,10);
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 10;
    do {
      iVar3 = (int)*plVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  plVar8 = plVar7 + 10;
  do {
    iVar3 = (int)*plVar8 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *(int *)plVar8 = iVar3;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar3 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  return;
}


