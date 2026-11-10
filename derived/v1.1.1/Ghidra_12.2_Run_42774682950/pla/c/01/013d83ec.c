/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013d83ec; name: FUN_013d83ec
 */


void FUN_013d83ec(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  
  FUN_00d2d000(param_1 + 0x180,0);
  *(undefined1 *)(param_1 + 0x5ab) = 1;
  FUN_02850d5c(*(undefined8 *)(param_1 + 0x5b0));
  plVar5 = *(long **)(param_1 + 0x5b0);
  *(undefined8 *)(param_1 + 0x5b0) = 0;
  if (plVar5 != (long *)0x0) {
    plVar7 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  plVar5 = *(long **)(param_1 + 0x5f0);
  *(undefined8 *)(param_1 + 0x5f0) = 0;
  if (plVar5 != (long *)0x0) {
    plVar7 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  FUN_009847ac(param_1 + 0x5c0);
  puVar6 = (undefined8 *)FUN_02ad8108();
  plVar5 = (long *)*puVar6;
  if (plVar5 != (long *)0x0) {
    plVar7 = plVar5 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_02b21610(plVar5);
  plVar7 = *(long **)(param_1 + 0x5b8);
  *(undefined8 *)(param_1 + 0x5b8) = 0;
  if (plVar7 != (long *)0x0) {
    lVar8 = plVar7[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  if (plVar5 != (long *)0x0) {
    plVar7 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x013d8514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))(plVar5);
      return;
    }
  }
  return;
}


