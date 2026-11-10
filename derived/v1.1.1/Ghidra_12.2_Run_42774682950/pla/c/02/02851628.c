/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02851628; name: FUN_02851628
 */


void FUN_02851628(long param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  lVar9 = *param_2;
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar7 = *(long **)(param_1 + 8);
  *(long *)(param_1 + 8) = lVar9;
  if (plVar7 == (long *)0x0) {
LAB_02851680:
    lVar9 = param_2[1];
  }
  else {
    plVar8 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 != 0) goto LAB_02851680;
    (**(code **)(*plVar7 + 0x10))();
    lVar9 = param_2[1];
  }
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar9;
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
      lVar9 = param_2[2];
      goto joined_r0x028516c4;
    }
  }
  lVar9 = param_2[2];
joined_r0x028516c4:
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar9;
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x20) = param_2[3];
  *(long *)(param_1 + 0x28) = param_2[4];
  *(long *)(param_1 + 0x30) = param_2[5];
  plVar7 = (long *)param_2[6];
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  plVar8 = *(long **)(param_1 + 0x38);
  *(long **)(param_1 + 0x38) = plVar7;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  *(long *)(param_1 + 0x40) = param_2[7];
  *(long *)(param_1 + 0x48) = param_2[8];
  *(long *)(param_1 + 0x50) = param_2[9];
  plVar7 = (long *)param_2[10];
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  plVar8 = *(long **)(param_1 + 0x58);
  *(long **)(param_1 + 0x58) = plVar7;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  *(long *)(param_1 + 0x60) = param_2[0xb];
  lVar9 = param_2[0xc];
  lVar2 = param_2[0xd];
  lVar3 = param_2[0xf];
  *(long *)(param_1 + 0x78) = param_2[0xe];
  *(long *)(param_1 + 0x80) = lVar3;
  *(long *)(param_1 + 0x68) = lVar9;
  *(long *)(param_1 + 0x70) = lVar2;
  FUN_0285180c(param_1);
  FUN_02851db4(param_1);
  return;
}


