/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019bd078; name: FUN_019bd078
 */


void FUN_019bd078(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 local_28;
  
  FUN_019bdd34(*(undefined8 *)PTR_DAT_0437acf0,*(undefined8 *)(param_1 + 8));
  FUN_019bddd0(&local_28,*(undefined8 *)(param_1 + 8));
  lVar7 = *(long *)(param_1 + 0x3b0);
  plVar5 = *(long **)(lVar7 + 0x1d8);
  *(undefined8 *)(lVar7 + 0x1d8) = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  *(undefined8 *)(lVar7 + 0x1d8) = local_28;
  FUN_01f08718(*(undefined8 *)(*(long *)(param_1 + 0x3b0) + 0x1d8));
  FUN_019bde48(&local_28,*(undefined8 *)(param_1 + 8));
  lVar7 = *(long *)(param_1 + 0x3b0);
  plVar5 = *(long **)(lVar7 + 0x1e0);
  *(undefined8 *)(lVar7 + 0x1e0) = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  *(undefined8 *)(lVar7 + 0x1e0) = local_28;
  FUN_018c8d10(*(undefined8 *)(*(long *)(param_1 + 0x3b0) + 0x1e0));
  FUN_019bdec0(&local_28,*(undefined8 *)(param_1 + 8));
  lVar7 = *(long *)(param_1 + 0x3b0);
  plVar5 = *(long **)(lVar7 + 0x2a8);
  *(undefined8 *)(lVar7 + 0x2a8) = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  *(undefined8 *)(lVar7 + 0x2a8) = local_28;
                    /* WARNING: Could not recover jumptable at 0x019bd194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x3b0) + 0x2a8) + 0x40))();
  return;
}


