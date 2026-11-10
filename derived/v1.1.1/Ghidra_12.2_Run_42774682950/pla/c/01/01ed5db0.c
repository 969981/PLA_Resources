/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ed5db0; name: FUN_01ed5db0
 */


void FUN_01ed5db0(long param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined4 uVar11;
  long *local_48;
  long *local_40;
  long *local_38;
  
  FUN_00d8c950(&local_48,param_2);
  FUN_016b6208(&local_40,local_48);
  FUN_0165dc80(&local_38,local_40);
  if (local_40 != (long *)0x0) {
    plVar7 = local_40 + 10;
    do {
      iVar6 = (int)*plVar7 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  if (local_48 != (long *)0x0) {
    plVar7 = local_48 + 10;
    do {
      iVar6 = (int)*plVar7 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_48 + 0x10))();
      plVar7 = *(long **)(param_2 + 0xd0);
      goto joined_r0x01ed5f90;
    }
  }
  plVar7 = *(long **)(param_2 + 0xd0);
joined_r0x01ed5f90:
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar9 = (long *)plVar7[0xb];
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
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
    cVar4 = (char)plVar9[0x11];
  }
  else {
    cVar4 = (char)plVar9[0x11];
  }
  if (cVar4 != '\0') {
    uVar10 = 0;
    do {
      lVar8 = (**(code **)(*plVar9 + 0x50))(plVar9,uVar10 & 0xffffffff);
      uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x78) + uVar10 * 4 + 0x264);
      uVar11 = uVar3;
      if (*(long *)(*(long *)(lVar8 + 0x98) + 8) != 0) {
        iVar6 = FUN_02c66b3c();
        uVar11 = 0;
        if (iVar6 != 0) {
          uVar11 = uVar3;
        }
      }
      uVar10 = uVar10 + 1;
      FUN_01661140(local_38,uVar10 & 0xffffffff,uVar11);
    } while (uVar10 < *(byte *)(plVar9 + 0x11));
  }
  plVar7 = plVar9 + 10;
  do {
    iVar6 = (int)*plVar7 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar5) {
      *(int *)plVar7 = iVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  if (local_38 != (long *)0x0) {
    lVar8 = local_38[0xb];
    piVar2 = (int *)(lVar8 + 0xc);
    do {
      iVar6 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


