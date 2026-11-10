/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0191691c; name: FUN_0191691c
 */


void FUN_0191691c(long *param_1,uint param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  lVar14 = *param_1;
  if (lVar14 == 0) {
    return;
  }
  if (*(int *)(lVar14 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar14 + 0xc);
  iVar10 = *(int *)(lVar14 + 0xc);
  do {
    plVar15 = *(long **)(lVar14 + 0x10);
    lVar11 = FUN_01913b5c();
    while( true ) {
      if (plVar15 == (long *)0x0) {
        return;
      }
      if (plVar15 == (long *)lVar11) break;
      plVar15 = (long *)*plVar15;
    }
    iVar9 = *piVar1;
    if (iVar9 == iVar10) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar7 = PTR_DAT_043794d0;
      puVar6 = PTR_DAT_043794c8;
      puVar5 = PTR_DAT_043794b8;
      puVar4 = PTR_DAT_043794b0;
      if (cVar2 == '\0') {
        lVar14 = *(long *)(lVar14 + 0x18);
        if (lVar14 == 0) {
          return;
        }
        lVar11 = *(long *)(lVar14 + 0x158);
        if ((lVar11 == 0) || (*(int *)(lVar11 + 0xc) == 0)) goto LAB_019169cc;
        piVar1 = (int *)(lVar11 + 0xc);
        iVar10 = *(int *)(lVar11 + 0xc);
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
LAB_01916a48:
  plVar15 = *(long **)(lVar11 + 0x10);
  if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
    if (((*PTR_DAT_043794c0 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar9 != 0)) {
      if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
        uVar12 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar12;
        __cxa_guard_release(puVar7);
      }
      *(undefined **)puVar6 = PTR_DAT_043794d8;
      __cxa_guard_release(PTR_DAT_043794c0);
    }
    *(undefined **)puVar5 = puVar6;
    __cxa_guard_release(puVar4);
  }
  while( true ) {
    if (plVar15 == (long *)0x0) goto LAB_019169cc;
    if (plVar15 == (long *)puVar5) break;
    plVar15 = (long *)*plVar15;
  }
  iVar9 = *piVar1;
  if (iVar9 == iVar10) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar10 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      lVar11 = *(long *)(lVar11 + 0x18);
      if (lVar11 != 0) {
        plVar15 = (long *)(lVar11 + -0x50);
        (**(code **)(*plVar15 + 0x10))(local_78,plVar15);
        local_88 = (undefined8 *)0x0;
        uStack_80 = 0;
        FUN_0087f944(&local_88,local_78);
        puVar8 = local_78[0];
        if (local_78[0] != (undefined8 *)0x0) {
          piVar1 = (int *)(local_78[0] + 1);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 == 0) {
            local_78[0][2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_68 = *puVar8;
            FUN_02a44274(lVar13 + 0xd8,&local_68);
          }
        }
        FUN_0191632c(&local_88,param_2 & 1,0);
        puVar8 = local_88;
        if (local_88 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_88 + 1);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 == 0) {
            local_88[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_78[0] = (undefined8 *)*puVar8;
            FUN_02a44274(lVar13 + 0xd8,local_78);
          }
        }
        lVar11 = *(long *)(lVar11 + 8);
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar15 + 0x20))(plVar15);
        }
      }
      goto LAB_019169cc;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar10 = iVar9;
  if (iVar9 == 0) {
LAB_019169cc:
    lVar11 = *(long *)(lVar14 + 8);
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*(long *)(lVar14 + -0x50) + 0x20))((long *)(lVar14 + -0x50));
    }
    return;
  }
  goto LAB_01916a48;
}


