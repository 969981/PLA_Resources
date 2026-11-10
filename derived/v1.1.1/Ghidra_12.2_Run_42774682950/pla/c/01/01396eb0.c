/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01396eb0; name: FUN_01396eb0
 */


byte FUN_01396eb0(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *local_38;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148b80(&local_38);
  iVar5 = FUN_010e2af0(local_38,param_1);
  if ((local_38 != (long *)0x0) && (uVar7 = FUN_02a43a5c(local_38[0xb]), (uVar7 & 1) != 0)) {
    (**(code **)(*local_38 + 0x20))(local_38);
  }
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379678), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar8 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar8;
  plVar9 = *(long **)(lVar8 + 0xd0);
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar10 = (long *)plVar9[0xb];
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  bVar4 = (**(code **)(*plVar10 + 0x60))(plVar10);
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 10;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  plVar10 = plVar9 + 10;
  do {
    iVar6 = (int)*plVar10 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *(int *)plVar10 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  return iVar5 == 0 & bVar4;
}


