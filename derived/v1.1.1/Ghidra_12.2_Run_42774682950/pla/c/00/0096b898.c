/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0096b898; name: FUN_0096b898
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0096b898(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  
  puVar4 = PTR_DAT_04379578;
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379578), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  puVar6 = PTR_DAT_04379588;
  puVar5 = PTR_DAT_04379580;
  lVar9 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar9;
  plVar8 = *(long **)(lVar9 + 0xb0);
  if (plVar8 == (long *)0x0) {
    lVar9 = _DAT_000000e0;
  }
  else {
    plVar1 = plVar8 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar9 = plVar8[0x1c];
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  if (*(char *)(*(long *)(lVar9 + 8) + 0x356) == '\0') {
    if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379578), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379578);
    }
    lVar9 = *(long *)puVar5;
    *(long *)puVar6 = lVar9;
    plVar8 = *(long **)(lVar9 + 0xb0);
    if (plVar8 == (long *)0x0) {
      lVar9 = _DAT_000000e0;
    }
    else {
      plVar1 = plVar8 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar9 = plVar8[0x1c];
      do {
        iVar7 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    if (*(char *)(*(long *)(*(long *)(*(long *)(lVar9 + 0x138) + 0x68) + 8) + 0x354) != '\0') {
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379578), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379578);
      }
      lVar9 = *(long *)puVar5;
      *(long *)puVar6 = lVar9;
      plVar8 = *(long **)(lVar9 + 0xb0);
      if (plVar8 == (long *)0x0) {
        lVar9 = _DAT_000000e0;
      }
      else {
        plVar1 = plVar8 + 10;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lVar9 = plVar8[0x1c];
        do {
          iVar7 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
      return *(long *)(*(long *)(*(long *)(*(long *)(lVar9 + 0x138) + 0x68) + 8) + 0x438) ==
             0xbcaa84f3592b51;
    }
  }
  return false;
}


