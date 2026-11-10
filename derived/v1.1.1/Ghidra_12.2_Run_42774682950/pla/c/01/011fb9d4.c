/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011fb9d4; name: FUN_011fb9d4
 */


void FUN_011fb9d4(char *param_1,char *param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  if (*param_1 == '\0') {
    if (*param_2 != '\0') {
      lVar7 = *(long *)(param_2 + 8);
      *(long *)(param_1 + 8) = lVar7;
      if (lVar7 != 0) {
        piVar2 = (int *)(lVar7 + 0x50);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = *piVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      cVar3 = param_2[0x18];
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      param_1[0x18] = cVar3;
      *param_1 = '\x01';
    }
  }
  else if (*param_2 == '\0') {
    plVar6 = *(long **)(param_1 + 8);
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 10;
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
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    *param_1 = '\0';
  }
  else {
    lVar7 = *(long *)(param_2 + 8);
    if (lVar7 != 0) {
      piVar2 = (int *)(lVar7 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar6 = *(long **)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar7;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 10;
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
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    uVar8 = *(undefined8 *)(param_2 + 0x10);
    param_1[0x18] = param_2[0x18];
    *(undefined8 *)(param_1 + 0x10) = uVar8;
  }
  return;
}


