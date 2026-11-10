/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00976eb8; name: FUN_00976eb8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00976eb8(long param_1,undefined4 param_2)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *local_28;
  
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379578), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar8 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar8;
  plVar7 = *(long **)(lVar8 + 0xb0);
  if (plVar7 == (long *)0x0) {
    lVar8 = _DAT_000000e0;
  }
  else {
    plVar1 = plVar7 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar8 = plVar7[0x1c];
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
  iVar6 = FUN_00935284(*(undefined8 *)(lVar8 + 0xd0),param_2);
  FUN_00931034(&local_28,*(undefined8 *)(param_1 + 0x58));
  FUN_011dcd74(local_28[0xd1],iVar6);
  if (local_28 != (long *)0x0) {
    lVar8 = local_28[0xb];
    piVar2 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  FUN_00931034(&local_28,*(undefined8 *)(param_1 + 0x58));
  lVar8 = local_28[0xd2];
  FUN_011d680c(lVar8 + 0x5b0,iVar6 == 1,*(undefined1 *)(lVar8 + 0x720));
  FUN_011d680c(lVar8 + 0x5f8,iVar6 == 2,*(undefined1 *)(lVar8 + 0x720));
  FUN_011d680c(lVar8 + 0x640,iVar6 == 3,*(undefined1 *)(lVar8 + 0x720));
  FUN_011d680c(lVar8 + 0x688,iVar6 == 4,*(undefined1 *)(lVar8 + 0x720));
  FUN_011d680c(lVar8 + 0x6d0,iVar6 == 5,*(undefined1 *)(lVar8 + 0x720));
  FUN_011d9e24(lVar8,iVar6);
  FUN_011d974c(lVar8);
  if (local_28 != (long *)0x0) {
    lVar8 = local_28[0xb];
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
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


