/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0294ca04; name: FUN_0294ca04
 */


void FUN_0294ca04(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  lVar8 = 0;
  do {
    lVar2 = param_1 + lVar8 * 8;
    plVar6 = *(long **)(lVar2 + 0x120);
    *(undefined8 *)(lVar2 + 0x120) = 0;
    if (plVar6 != (long *)0x0) {
      plVar7 = plVar6 + 10;
      do {
        iVar5 = (int)*plVar7 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *(int *)plVar7 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x1e);
  lVar8 = 0;
  do {
    lVar2 = param_1 + lVar8 * 8;
    plVar6 = *(long **)(lVar2 + 0x210);
    *(undefined8 *)(lVar2 + 0x210) = 0;
    if (plVar6 != (long *)0x0) {
      plVar7 = plVar6 + 10;
      do {
        iVar5 = (int)*plVar7 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *(int *)plVar7 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x1e);
  plVar6 = (long *)(param_1 + 0x2f8);
  plVar7 = (long *)*plVar6;
  while( true ) {
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
    if (plVar6 == (long *)(param_1 + 0x210)) break;
    plVar6 = plVar6 + -1;
    plVar7 = (long *)*plVar6;
  }
  plVar6 = (long *)(param_1 + 0x208);
  plVar7 = (long *)*plVar6;
  while( true ) {
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
    if (plVar6 == (long *)(param_1 + 0x120)) break;
    plVar6 = plVar6 + -1;
    plVar7 = (long *)*plVar6;
  }
  return;
}


