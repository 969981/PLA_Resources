/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ae328c; name: FUN_02ae328c
 */


void FUN_02ae328c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *local_30 [2];
  
  plVar6 = (long *)(param_1 + 8);
  FUN_02ae94a0(local_30,plVar6);
  if (local_30[0] != (long *)0x0) {
    FUN_02a77334(local_30[0],param_1);
  }
  plVar5 = (long *)(param_1 + 0x10);
  lVar7 = *plVar5;
  if (lVar7 != 0) {
    do {
      if (*plVar5 != lVar7) {
        ClearExclusiveLocal();
        goto LAB_02ae3320;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = 0;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5 = (long *)*plVar6;
    *plVar6 = 0;
    if (plVar5 != (long *)0x0) {
      lVar7 = plVar5[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
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
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar5 + 0x20))();
      }
    }
  }
LAB_02ae3320:
  plVar6 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  if (local_30[0] != (long *)0x0) {
    lVar7 = local_30[0][0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_30[0] + 0x20))();
    }
  }
  return;
}


