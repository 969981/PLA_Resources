/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d16fec; name: FUN_00d16fec
 */


void FUN_00d16fec(long param_1,long param_2)

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
  ulong uVar11;
  long lVar12;
  long *plVar13;
  
  puVar6 = PTR_DAT_04379558;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar8 = PTR_DAT_04379568;
  puVar7 = PTR_DAT_04379560;
  lVar12 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar12;
  plVar13 = *(long **)(lVar12 + 0x228);
  if (plVar13 != (long *)0x0) {
    lVar12 = plVar13[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_00d17344;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar11 = FUN_010f6e1c(plVar13);
  if ((uVar11 & 1) == 0) {
    FUN_010f6a0c(plVar13,*(undefined8 *)(param_1 + 0x78));
  }
  if (plVar13 == (long *)0x0) {
LAB_00d170ac:
    bVar3 = *puVar6;
  }
  else {
    lVar12 = plVar13[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 != 0) goto LAB_00d170ac;
    *(undefined8 *)(lVar12 + 0x18) = 0;
    (**(code **)(*plVar13 + 0x20))(plVar13);
    bVar3 = *puVar6;
  }
  if (((bVar3 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar12 = *(long *)puVar7;
  *(long *)puVar8 = lVar12;
  plVar13 = *(long **)(lVar12 + 0x308);
  if (plVar13 != (long *)0x0) {
    lVar12 = plVar13[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
LAB_00d17344:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar11 = FUN_010f1464(plVar13);
  if ((uVar11 & 1) == 0) {
    FUN_010f130c(plVar13,*(undefined8 *)(param_1 + 0x78));
  }
  if (plVar13 != (long *)0x0) {
    lVar12 = plVar13[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
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
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  if (((*PTR_DAT_0437a708 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a708);
  }
  *(undefined8 *)PTR_DAT_0437a718 = *(undefined8 *)PTR_DAT_0437a710;
  FUN_010a53bc();
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379578), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  *(undefined8 *)PTR_DAT_04379588 = *(undefined8 *)PTR_DAT_04379580;
  FUN_0095497c();
  thunk_FUN_00947870();
  plVar13 = *(long **)(param_2 + 0x100);
  if (plVar13 == (long *)0x0) {
    FUN_016b5fa4(0);
    return;
  }
  plVar2 = plVar13 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = (int)*plVar2 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  FUN_016b5fa4(plVar13);
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
                    /* WARNING: Could not recover jumptable at 0x00d17200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar13 + 0x10))(plVar13);
    return;
  }
  return;
}


