/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d16b54; name: FUN_00d16b54
 */


void FUN_00d16b54(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  
  FUN_00d1622c(param_1 + 0x80);
  puVar6 = PTR_DAT_04379558;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar8 = PTR_DAT_04379568;
  puVar7 = PTR_DAT_04379560;
  lVar11 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar11;
  plVar12 = *(long **)(lVar11 + 0x228);
  if (plVar12 != (long *)0x0) {
    lVar11 = plVar12[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_00d16fd4;
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (((((((plVar12[0xe] == 0) || (*(char *)(plVar12[0xe] + 0x1e1) == '\0')) || (plVar12[0x14] == 0)
         ) || ((*(char *)(plVar12[0x14] + 0x1e1) == '\0' || (plVar12[0x1a] == 0)))) ||
       (*(char *)(plVar12[0x1a] + 0x1e1) == '\0')) ||
      (((plVar12[0x20] == 0 || (*(char *)(plVar12[0x20] + 0x1e1) == '\0')) ||
       ((plVar12[0x26] == 0 ||
        (((*(char *)(plVar12[0x26] + 0x1e1) == '\0' || (plVar12[0x2c] == 0)) ||
         (*(char *)(plVar12[0x2c] + 0x1e1) == '\0')))))))) ||
     ((plVar12[0x32] == 0 || (*(char *)(plVar12[0x32] + 0x1e1) == '\0')))) {
    FUN_010f63a4(plVar12,*(undefined8 *)(param_1 + 0x78));
  }
  lVar11 = plVar12[0xb];
  piVar1 = (int *)(lVar11 + 0xc);
  do {
    iVar9 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar9 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar9 + -1 == 0) {
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*plVar12 + 0x20))(plVar12);
    bVar3 = *puVar6;
  }
  else {
    bVar3 = *puVar6;
  }
  if (((bVar3 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar11 = *(long *)puVar7;
  *(long *)puVar8 = lVar11;
  plVar12 = *(long **)(lVar11 + 0x308);
  if (plVar12 != (long *)0x0) {
    lVar11 = plVar12[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
LAB_00d16fd4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (((plVar12[0x1a] == 0) || (lVar11 = *(long *)(plVar12[0x1a] + 8), lVar11 == 0)) ||
     (*(char *)(lVar11 + 0x1e1) == '\0')) {
    FUN_010f10d0(plVar12,*(undefined8 *)(param_1 + 0x78));
  }
  lVar11 = plVar12[0xb];
  piVar1 = (int *)(lVar11 + 0xc);
  do {
    iVar9 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar9 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar9 + -1 == 0) {
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  if (((*PTR_DAT_0437a708 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a708);
  }
  *(undefined8 *)PTR_DAT_0437a718 = *(undefined8 *)PTR_DAT_0437a710;
  FUN_010a4134();
  if (((*PTR_DAT_0437a780 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  uVar10 = *(undefined8 *)PTR_DAT_0437a788;
  *(undefined8 *)PTR_DAT_0437a790 = uVar10;
  FUN_01e6603c(uVar10,0);
  plVar12 = *(long **)(param_2 + 0x100);
  if (plVar12 == (long *)0x0) {
    FUN_016b5ab4(0);
  }
  else {
    plVar2 = plVar12 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    FUN_016b5ab4(plVar12);
    do {
      iVar9 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  if (((*PTR_DAT_043796b8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_043796b8), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379c58,PTR_DAT_043796c0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_043796b8);
  }
  lVar11 = *(long *)PTR_DAT_043796c0;
  *(long *)PTR_DAT_043796c8 = lVar11;
  FUN_00da2fdc(lVar11 + 0x3c0,*(undefined8 *)(param_1 + 0x78));
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379578), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  *(undefined8 *)PTR_DAT_04379588 = *(undefined8 *)PTR_DAT_04379580;
  FUN_0095497c();
  thunk_FUN_009477f8();
  return;
}


