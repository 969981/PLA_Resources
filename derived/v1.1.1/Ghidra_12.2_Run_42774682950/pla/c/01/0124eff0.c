/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0124eff0; name: FUN_0124eff0
 */


void FUN_0124eff0(long param_1)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *local_60;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  long *local_38;
  long *local_28;
  
  plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x18);
  if (plVar8 != (long *)0x0) {
    FUN_02a439f4(plVar8[0xb]);
  }
  plVar7 = (long *)plVar8[0xd];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar6 = plVar8[0xb];
  piVar2 = (int *)(lVar6 + 0xc);
  do {
    iVar3 = *piVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = iVar3 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar3 + -1 == 0) {
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_02a4754c(auStack_50,&DAT_041fe668);
  plVar8 = plVar7 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *(int *)plVar8 = (int)*plVar8 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  local_58 = 0x5842fa9b81a420e;
  local_28 = plVar7;
  FUN_011845f4(param_1 + 0x180,auStack_50,&local_28,&local_58,10);
  if (local_28 != (long *)0x0) {
    plVar1 = local_28 + 10;
    do {
      iVar3 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  FUN_02a4754c(auStack_50,&DAT_041fe680);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *(int *)plVar8 = (int)*plVar8 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  local_58 = 0xcbad92915bf0d396;
  local_60 = plVar7;
  FUN_011845f4(param_1 + 0x180,auStack_50,&local_60,&local_58,10);
  if (local_60 != (long *)0x0) {
    plVar1 = local_60 + 10;
    do {
      iVar3 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  do {
    iVar3 = (int)*plVar8 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *(int *)plVar8 = iVar3;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar3 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  return;
}


