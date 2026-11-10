/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e5bbf8; name: FUN_01e5bbf8
 */


void FUN_01e5bbf8(long param_1,long *param_2)

{
  int *piVar1;
  undefined *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long *plVar17;
  undefined8 local_68;
  
  puVar8 = PTR_DAT_0437c670;
  puVar7 = PTR_DAT_0437c668;
  puVar6 = PTR_DAT_043794d8;
  puVar2 = PTR_DAT_043794d0;
  lVar14 = *param_2;
  if (lVar14 == 0) {
    return;
  }
  if (*(int *)(lVar14 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar14 + 0xc);
  iVar10 = *(int *)(lVar14 + 0xc);
  do {
    plVar17 = *(long **)(lVar14 + 0x10);
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      if (((*puVar2 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar2), iVar9 != 0)) {
        uVar11 = FUN_0087f8f0();
        *(undefined8 *)puVar6 = uVar11;
        __cxa_guard_release(puVar2);
      }
      *(undefined **)puVar8 = puVar6;
      __cxa_guard_release(puVar7);
    }
    while( true ) {
      if (plVar17 == (long *)0x0) {
        return;
      }
      if (plVar17 == (long *)puVar8) break;
      plVar17 = (long *)*plVar17;
    }
    iVar9 = *piVar1;
    if (iVar9 == iVar10) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar14 = *(long *)(lVar14 + 0x18);
        if (lVar14 == 0) {
          return;
        }
        lVar16 = *(long *)(*(long *)(param_1 + 0xd0) + 0x1c0);
        if ((lVar16 == 0) || (*(int *)(lVar16 + 0xc) == 0)) goto LAB_01e5bcd0;
        piVar1 = (int *)(lVar16 + 0xc);
        iVar10 = *(int *)(lVar16 + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar10 = iVar9;
    if (iVar9 == 0) {
      return;
    }
  } while( true );
LAB_01e5bdb8:
  plVar17 = *(long **)(lVar16 + 0x10);
  if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
    if (((*puVar2 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar2), iVar9 != 0)) {
      uVar11 = FUN_0087f8f0();
      *(undefined8 *)puVar6 = uVar11;
      __cxa_guard_release(puVar2);
    }
    *(undefined **)puVar8 = puVar6;
    __cxa_guard_release(puVar7);
  }
  while( true ) {
    if (plVar17 == (long *)0x0) goto LAB_01e5bcd0;
    if (plVar17 == (long *)puVar8) break;
    plVar17 = (long *)*plVar17;
  }
  iVar9 = *piVar1;
  if (iVar9 == iVar10) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar10 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
      lVar16 = *(long *)(lVar16 + 0x18);
      if (lVar16 != 0) {
        lVar12 = *(long *)(*(long *)(lVar16 + 0x20) + 0x218);
        lVar13 = *(long *)(*(long *)(lVar14 + 0x20) + 0x218);
        plVar17 = (long *)PTR_DAT_04379c88;
        if (lVar12 != 0) {
          plVar17 = (long *)(lVar12 + 0x58);
        }
        plVar3 = (long *)PTR_DAT_04379c88;
        if (lVar13 != 0) {
          plVar3 = (long *)(lVar13 + 0x58);
        }
        if (*plVar17 == *plVar3) {
          lVar12 = *(long *)(param_1 + 0xd0);
          puVar15 = *(undefined8 **)(lVar12 + 0x1c0);
          *(undefined8 *)(lVar12 + 0x1c0) = 0;
          if (puVar15 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar15 + 1);
            do {
              iVar10 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 + -1 == 0) {
              puVar15[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar13 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar13;
              local_68 = *puVar15;
              FUN_02a44274(lVar13 + 0xd8,&local_68);
            }
          }
          *(undefined8 *)(lVar12 + 0x1c8) = 0;
        }
        lVar12 = *(long *)(lVar16 + 8);
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*(long *)(lVar16 + -0x50) + 0x20))((long *)(lVar16 + -0x50));
        }
      }
      goto LAB_01e5bcd0;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar10 = iVar9;
  if (iVar9 == 0) {
LAB_01e5bcd0:
    lVar16 = *(long *)(*(long *)(lVar14 + 0x20) + 0x218);
    puVar2 = PTR_DAT_04379c88;
    if (lVar16 != 0) {
      puVar2 = (undefined *)(lVar16 + 0x58);
    }
    FUN_01e61dec(*(long *)(param_1 + 0xd0) + 0x158,puVar2);
    lVar16 = *(long *)(lVar14 + 8);
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01e5bd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar14 + -0x50) + 0x20))((long *)(lVar14 + -0x50));
      return;
    }
    return;
  }
  goto LAB_01e5bdb8;
}


