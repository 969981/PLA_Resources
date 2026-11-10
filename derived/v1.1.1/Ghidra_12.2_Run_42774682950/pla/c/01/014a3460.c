/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014a3460; name: FUN_014a3460
 */


void FUN_014a3460(long param_1,undefined8 param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  
  if (*(long *)(param_1 + 0xa8) == 0) {
    lVar6 = FUN_014a3870(param_2);
    if (lVar6 != 0) {
      piVar2 = (int *)(lVar6 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar7 = *(long **)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 10;
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
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    lVar9 = *(long *)(param_1 + 0x80);
    *(long *)(param_1 + 0xa8) = lVar6;
    if (lVar9 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar9 + 0x240);
    }
    FUN_0149de84(lVar6,*(undefined8 *)(lVar9 + 0x250),uVar8);
  }
  else {
    *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x260) = 0;
  }
  FUN_0149de94(*(undefined8 *)(param_1 + 0xa8),*(long *)(param_1 + 0x68) + 8);
  return;
}


