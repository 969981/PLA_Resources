/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f0a400; name: FUN_01f0a400
 */


void FUN_01f0a400(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long local_38;
  undefined1 auStack_28 [8];
  
  if (*(char *)(param_1 + 0x68) == '\0') {
    local_38 = DAT_043ef5b0;
    lVar6 = FUN_02b24c5c(auStack_28,*(undefined8 *)(DAT_043ef5b0 + 8),&local_38,DAT_043ef5b0 + 0x58)
    ;
    if (lVar6 != 0) {
      piVar1 = (int *)(lVar6 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar7 = *(long **)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 10;
      do {
        iVar5 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    *(long *)(param_1 + 0x70) = lVar6;
    local_38 = DAT_043ef5b0;
    lVar6 = FUN_02b24c5c(auStack_28,*(undefined8 *)(DAT_043ef5b0 + 8),&local_38,DAT_043ef5b0 + 0x58)
    ;
    if (lVar6 != 0) {
      piVar1 = (int *)(lVar6 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar7 = *(long **)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 10;
      do {
        iVar5 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    *(long *)(param_1 + 0x78) = lVar6;
    local_38 = DAT_043ef5b0;
    lVar6 = FUN_02b24c5c(auStack_28,*(undefined8 *)(DAT_043ef5b0 + 8),&local_38,DAT_043ef5b0 + 0x58)
    ;
    if (lVar6 != 0) {
      piVar1 = (int *)(lVar6 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar7 = *(long **)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = 0;
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 10;
      do {
        iVar5 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    *(long *)(param_1 + 0x80) = lVar6;
    *(undefined1 *)(param_1 + 0x68) = 1;
  }
  return;
}


