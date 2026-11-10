/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019e1e24; name: FUN_019e1e24
 */


void FUN_019e1e24(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  
  puVar9 = PTR_DAT_0437a558;
  puVar8 = PTR_DAT_0437a550;
  lVar13 = *(long *)(param_1 + 0x280);
  if (lVar13 == 0) {
    return;
  }
  if (*(int *)(lVar13 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar13 + 0xc);
  iVar11 = *(int *)(lVar13 + 0xc);
  do {
    plVar14 = *(long **)(lVar13 + 0x10);
    if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
      uVar12 = FUN_00aa0310();
      *(undefined8 *)puVar9 = uVar12;
      __cxa_guard_release(puVar8);
    }
    while( true ) {
      if (plVar14 == (long *)0x0) {
        return;
      }
      if (plVar14 == (long *)puVar9) break;
      plVar14 = (long *)*plVar14;
    }
    iVar10 = *piVar1;
    if (iVar10 == iVar11) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar7 = PTR_DAT_0437a130;
      puVar6 = PTR_DAT_0437a128;
      puVar5 = PTR_DAT_043795e0;
      puVar4 = PTR_DAT_043794d0;
      if (cVar2 == '\0') {
        lVar13 = *(long *)(lVar13 + 0x18);
        if (lVar13 == 0) {
          return;
        }
        lVar15 = *(long *)(lVar13 + 0x1a0);
        if ((lVar15 == 0) || (*(int *)(lVar15 + 0xc) == 0)) goto LAB_019e1ed4;
        piVar1 = (int *)(lVar15 + 0xc);
        iVar11 = *(int *)(lVar15 + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = iVar10;
    if (iVar10 == 0) {
      return;
    }
  } while( true );
LAB_019e1f88:
  plVar14 = *(long **)(lVar15 + 0x10);
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
    if (((*PTR_DAT_043795d8 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar10 != 0)) {
      if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
        uVar12 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar12;
        __cxa_guard_release(puVar4);
      }
      *(undefined **)puVar5 = PTR_DAT_043794d8;
      __cxa_guard_release(PTR_DAT_043795d8);
    }
    *(undefined **)puVar7 = puVar5;
    __cxa_guard_release(puVar6);
  }
  while( true ) {
    if (plVar14 == (long *)0x0) goto LAB_019e1ed4;
    if (plVar14 == (long *)puVar7) break;
    plVar14 = (long *)*plVar14;
  }
  iVar10 = *piVar1;
  if (iVar10 == iVar11) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar11 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      lVar15 = *(long *)(lVar15 + 0x18);
      if (lVar15 != 0) {
        plVar14 = (long *)(lVar15 + -0x50);
        if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar11 != 0)) {
          FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437a0d0);
        }
        FUN_028a0124(plVar14,1,PTR_DAT_0437a0d8);
        lVar15 = *(long *)(lVar15 + 8);
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))(plVar14);
        }
      }
      goto LAB_019e1ed4;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar11 = iVar10;
  if (iVar10 == 0) {
LAB_019e1ed4:
    lVar15 = *(long *)(lVar13 + 8);
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x019e1f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar13 + -0x50) + 0x20))((long *)(lVar13 + -0x50));
      return;
    }
    return;
  }
  goto LAB_019e1f88;
}


