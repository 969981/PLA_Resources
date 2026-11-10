/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02aa7d90; name: FUN_02aa7d90
 */


void FUN_02aa7d90(long param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long local_50;
  undefined1 auStack_48 [8];
  
  lVar7 = DAT_043ef5a0;
  lVar10 = *(long *)(param_1 + 8);
  lVar11 = *(long *)(param_1 + 0x168);
  uVar3 = *(undefined8 *)(param_1 + 0x170);
  if (lVar10 == 0) {
    lVar10 = *(long *)(DAT_043ef5a0 + 8);
  }
  local_50 = DAT_043ef5a0;
  lVar10 = FUN_02b3cc30(auStack_48,lVar10,&local_50);
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (lVar11 == 0) {
    lVar11 = *(long *)(lVar7 + 8);
  }
  FUN_02b3a748(lVar10,param_2,1,lVar11,uVar3);
  plVar8 = *(long **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 10;
    do {
      iVar6 = (int)*plVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  plVar8 = *(long **)(param_1 + 0x178);
  *(long *)(param_1 + 0x88) = lVar10;
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
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar9 = *(long **)(lVar10 + 0xe0);
  *(long **)(lVar10 + 0xe0) = plVar8;
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 10;
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 10;
    do {
      iVar6 = (int)*plVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  *(undefined4 *)(param_1 + 0x78) = 1;
  return;
}


