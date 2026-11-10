/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011a9804; name: FUN_011a9804
 */


void FUN_011a9804(long param_1,uint param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379678), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar9 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar9;
  plVar5 = *(long **)(lVar9 + 0xd0);
  if (plVar5 != (long *)0x0) {
    plVar11 = plVar5 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar11 = (long *)plVar5[0xb];
  if (plVar11 != (long *)0x0) {
    plVar7 = plVar11 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar7 = plVar5 + 10;
  do {
    iVar4 = (int)*plVar7 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *(int *)plVar7 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar5 + 0x10))();
  }
  if (param_2 < *(byte *)(plVar11 + 0x11)) {
    plVar5 = (long *)(**(code **)(*plVar11 + 0x50))(plVar11,param_2);
    if (**(int **)(param_1 + 0x5b0) == 0) {
      uVar6 = FUN_011a9a80(plVar5,param_2,0);
      uVar6 = uVar6 & 0xffffffff;
    }
    else {
      uVar6 = 0;
    }
    lVar9 = *(long *)(param_1 + 0x5c0);
    if (plVar5 != (long *)0x0) {
      plVar7 = plVar5 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *(int *)plVar7 = (int)*plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar7 = plVar5 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *(int *)plVar7 = (int)*plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar10 = lVar9 + (ulong)param_2 * 0x500;
    plVar7 = *(long **)(lVar10 + 0x18);
    *(long **)(lVar10 + 0x18) = plVar5;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 10;
      do {
        iVar4 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    FUN_028565b4(lVar9 + (ulong)param_2 * 0x500);
    if (plVar5 != (long *)0x0) {
      plVar7 = plVar5 + 10;
      do {
        iVar4 = (int)*plVar7 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *(int *)plVar7 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    lVar9 = *(long *)(param_1 + 0x5c0) + (ulong)param_2 * 0x500;
    puVar12 = (undefined8 *)(lVar9 + 8);
    uVar8 = *puVar12;
    if ((uVar6 & 1) != 0) {
      FUN_0283b430(uVar8,lVar9 + 0x438);
      uVar8 = *puVar12;
      lVar9 = lVar9 + 0x418;
      goto LAB_011a998c;
    }
  }
  else {
    lVar9 = *(long *)(param_1 + 0x5c0) + (ulong)param_2 * 0x500;
    puVar12 = (undefined8 *)(lVar9 + 8);
    uVar8 = *puVar12;
  }
  FUN_0283b430(uVar8,lVar9 + 0x418);
  uVar8 = *puVar12;
  lVar9 = lVar9 + 0x438;
LAB_011a998c:
  FUN_0283b1e8(uVar8,lVar9);
  plVar5 = plVar11 + 10;
  do {
    iVar4 = (int)*plVar5 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *(int *)plVar5 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x011a9a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar11 + 0x10))(plVar11);
    return;
  }
  return;
}


