/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011fb2c4; name: FUN_011fb2c4
 */


void FUN_011fb2c4(long param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *param_2;
  if (lVar8 != 0) {
    piVar2 = (int *)(lVar8 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x180);
  *(long *)(param_1 + 0x180) = lVar8;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
      lVar8 = param_2[1];
      goto joined_r0x011fb384;
    }
  }
  lVar8 = param_2[1];
joined_r0x011fb384:
  if (lVar8 != 0) {
    piVar2 = (int *)(lVar8 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x188);
  *(long *)(param_1 + 0x188) = lVar8;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  *(long *)(param_1 + 400) = param_2[2];
  lVar9 = param_2[5];
  lVar8 = param_2[3];
  lVar3 = param_2[4];
  *(short *)(param_1 + 0x1b0) = (short)param_2[6];
  *(long *)(param_1 + 0x1a0) = lVar3;
  *(long *)(param_1 + 0x1a8) = lVar9;
  *(long *)(param_1 + 0x198) = lVar8;
  return;
}


