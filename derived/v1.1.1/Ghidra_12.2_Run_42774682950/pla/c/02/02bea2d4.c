/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bea2d4; name: FUN_02bea2d4
 */


void FUN_02bea2d4(long param_1)

{
  int *piVar1;
  long *plVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  
  puVar9 = PTR_DAT_0437a678;
  puVar8 = PTR_DAT_0437a670;
  puVar7 = PTR_DAT_0437a590;
  puVar6 = PTR_DAT_0437a580;
  plVar18 = *(long **)(param_1 + 0x1f0);
  plVar2 = *(long **)(param_1 + 0x1f8);
  if (plVar18 == plVar2) {
    return;
  }
  lVar15 = *plVar18;
  if (lVar15 == 0) goto LAB_02bea340;
LAB_02bea554:
  if (*(int *)(lVar15 + 0xc) == 0) goto LAB_02bea340;
  piVar1 = (int *)(lVar15 + 0xc);
  iVar11 = *(int *)(lVar15 + 0xc);
  do {
    puVar16 = *(undefined8 **)(lVar15 + 0x10);
    if (((*PTR_DAT_0437a598 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a598), iVar10 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
        uVar13 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar13;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)PTR_DAT_0437a588 = PTR_DAT_043794d8;
      __cxa_guard_release(PTR_DAT_0437a598);
    }
    if (puVar16 == (undefined8 *)0x0) goto LAB_02bea340;
    while (puVar16 != (undefined8 *)PTR_DAT_0437a588) {
      puVar16 = (undefined8 *)*puVar16;
      plVar17 = (long *)0x0;
      if (puVar16 == (undefined8 *)0x0) goto LAB_02bea344;
    }
    iVar10 = *piVar1;
    if (iVar10 == iVar11) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        plVar17 = (long *)0x0;
        if (*(long *)(lVar15 + 0x18) != 0) {
          plVar17 = (long *)(*(long *)(lVar15 + 0x18) + -0x50);
        }
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    plVar17 = (long *)0x0;
    iVar11 = iVar10;
  } while (iVar10 != 0);
LAB_02bea344:
  do {
    plVar12 = (long *)(**(code **)plVar17[10])();
    if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
      if (((*PTR_DAT_0437a598 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a598), iVar11 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar11 != 0)) {
          uVar13 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar13;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)PTR_DAT_0437a588 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_0437a598);
      }
      *(undefined **)puVar7 = PTR_DAT_0437a588;
      __cxa_guard_release(puVar6);
    }
    for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
      if (plVar12 == (long *)puVar7) {
        bVar5 = true;
        goto joined_r0x02bea380;
      }
    }
    bVar5 = false;
joined_r0x02bea380:
    if (plVar17 != (long *)0x0) {
      lVar15 = plVar17[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar4 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*plVar17 + 0x20))(plVar17);
      }
    }
    if (((!bVar5) && (lVar15 = *plVar18, lVar15 != 0)) && (*(int *)(lVar15 + 0xc) != 0)) {
      piVar1 = (int *)(lVar15 + 0xc);
      iVar11 = *(int *)(lVar15 + 0xc);
      do {
        plVar17 = *(long **)(lVar15 + 0x10);
        if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
          if (((*PTR_DAT_0437a598 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a598), iVar10 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
              uVar13 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar13;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)PTR_DAT_0437a588 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_0437a598);
          }
          *(undefined **)puVar9 = PTR_DAT_0437a588;
          __cxa_guard_release(puVar8);
        }
        while( true ) {
          if (plVar17 == (long *)0x0) goto LAB_02bea32c;
          if (plVar17 == (long *)puVar9) break;
          plVar17 = (long *)*plVar17;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar11) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar15 = *(long *)(lVar15 + 0x18);
            if (lVar15 != 0) {
              lVar14 = *(long *)(lVar15 + 8);
              piVar1 = (int *)(lVar14 + 0xc);
              do {
                iVar11 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar11 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar11 + -1 == 0) {
                *(undefined8 *)(lVar14 + 0x18) = 0;
                (**(code **)(*(long *)(lVar15 + -0x50) + 0x20))();
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar10;
      } while (iVar10 != 0);
    }
LAB_02bea32c:
    plVar18 = plVar18 + 2;
    if (plVar18 == plVar2) {
      return;
    }
    lVar15 = *plVar18;
    if (lVar15 != 0) goto LAB_02bea554;
LAB_02bea340:
    plVar17 = (long *)0x0;
  } while( true );
}


