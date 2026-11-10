/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ab024c; name: FUN_01ab024c
 */


void FUN_01ab024c(long param_1)

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
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  long *local_70;
  undefined1 auStack_68 [8];
  
  puVar11 = PTR_DAT_0437a258;
  puVar10 = PTR_DAT_0437a250;
  puVar9 = PTR_DAT_043795e0;
  puVar8 = PTR_DAT_043795d8;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  lVar15 = *(long *)(param_1 + 0x208);
  if (lVar15 == 0) {
    return;
  }
  if (*(int *)(lVar15 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar15 + 0xc);
  iVar16 = *(int *)(lVar15 + 0xc);
  do {
    plVar19 = *(long **)(lVar15 + 0x10);
    if (((*puVar10 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar10), iVar12 != 0)) {
      if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
        if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
          uVar13 = FUN_0087f8f0();
          *(undefined8 *)puVar7 = uVar13;
          __cxa_guard_release(puVar6);
        }
        *(undefined **)puVar9 = puVar7;
        __cxa_guard_release(puVar8);
      }
      *(undefined **)puVar11 = puVar9;
      __cxa_guard_release(puVar10);
    }
    while( true ) {
      if (plVar19 == (long *)0x0) {
        return;
      }
      if (plVar19 == (long *)puVar11) break;
      plVar19 = (long *)*plVar19;
    }
    iVar12 = *piVar1;
    if (iVar12 == iVar16) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar5 = PTR_DAT_043794b8;
      puVar4 = PTR_DAT_043794b0;
      if (cVar2 == '\0') {
        lVar15 = *(long *)(lVar15 + 0x18);
        plVar19 = (long *)(lVar15 + -0x50);
        if (lVar15 == 0) {
          return;
        }
        lVar18 = *(long *)(lVar15 + 0x158);
        if ((lVar18 == 0) || (*(int *)(lVar18 + 0xc) == 0)) break;
        piVar1 = (int *)(lVar18 + 0xc);
        iVar16 = *(int *)(lVar18 + 0xc);
        goto LAB_01ab04a8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar16 = iVar12;
    if (iVar12 == 0) {
      return;
    }
  } while( true );
LAB_01ab033c:
  plVar14 = (long *)0x0;
  goto LAB_01ab0340;
  while( true ) {
    plVar14 = (long *)0x0;
    iVar16 = iVar12;
    if (iVar12 == 0) break;
LAB_01ab04a8:
    puVar17 = *(undefined8 **)(lVar18 + 0x10);
    if (((*puVar4 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar4), iVar12 != 0)) {
      if (((*PTR_DAT_043794c0 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar12 != 0)) {
        if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
          uVar13 = FUN_0087f8f0();
          *(undefined8 *)puVar7 = uVar13;
          __cxa_guard_release(puVar6);
        }
        *(undefined **)PTR_DAT_043794c8 = puVar7;
        __cxa_guard_release(PTR_DAT_043794c0);
      }
      *(undefined **)puVar5 = PTR_DAT_043794c8;
      __cxa_guard_release(puVar4);
    }
    if (puVar17 == (undefined8 *)0x0) goto LAB_01ab033c;
    while (puVar17 != (undefined8 *)puVar5) {
      puVar17 = (undefined8 *)*puVar17;
      plVar14 = (long *)0x0;
      if (puVar17 == (undefined8 *)0x0) goto LAB_01ab0340;
    }
    iVar12 = *piVar1;
    if (iVar12 == iVar16) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        plVar14 = (long *)0x0;
        if (*(long *)(lVar18 + 0x18) != 0) {
          plVar14 = (long *)(*(long *)(lVar18 + 0x18) + -0x50);
        }
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
LAB_01ab0340:
  lVar18 = FUN_00b13c20(plVar14 + 0x1e,auStack_68);
  if (lVar18 != 0) {
    local_70 = (long *)0x0;
    FUN_00d7e99c(lVar18,&local_70,1);
    if (local_70 != (long *)0x0) {
      lVar18 = local_70[0xb];
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        iVar16 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar16 + -1 == 0) {
        *(undefined8 *)(lVar18 + 0x18) = 0;
        (**(code **)(*local_70 + 0x20))();
      }
    }
  }
  FUN_01836814(plVar19,0);
  if (plVar14 != (long *)0x0) {
    lVar18 = plVar14[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar16 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  lVar15 = *(long *)(lVar15 + 8);
  piVar1 = (int *)(lVar15 + 0xc);
  do {
    iVar16 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar16 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar16 + -1 == 0) {
    *(undefined8 *)(lVar15 + 0x18) = 0;
    (**(code **)(*plVar19 + 0x20))(plVar19);
  }
  return;
}


