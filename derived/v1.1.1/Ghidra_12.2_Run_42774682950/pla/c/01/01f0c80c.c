/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f0c80c; name: FUN_01f0c80c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01f0c80c(void)

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
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long local_90;
  long *local_88;
  long *local_80;
  long **pplStack_78;
  undefined1 auStack_70 [8];
  long *local_68;
  
  lVar16 = DAT_043d4720;
  puVar9 = PTR_DAT_043796e8;
  puVar8 = PTR_DAT_043796e0;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  if (DAT_043d4720 == 0) {
    return;
  }
  if (*(int *)(DAT_043d4720 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(DAT_043d4720 + 0xc);
  iVar10 = *(int *)(DAT_043d4720 + 0xc);
  do {
    plVar17 = *(long **)(lVar16 + 0x10);
    if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
      if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
        uVar12 = FUN_0087f8f0();
        *(undefined8 *)puVar7 = uVar12;
        __cxa_guard_release(puVar6);
      }
      *(undefined **)puVar9 = puVar7;
      __cxa_guard_release(puVar8);
    }
    while( true ) {
      if (plVar17 == (long *)0x0) {
        return;
      }
      if (plVar17 == (long *)puVar9) break;
      plVar17 = (long *)*plVar17;
    }
    iVar11 = *piVar1;
    if (iVar11 == iVar10) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar16 = *(long *)(lVar16 + 0x18);
        if (lVar16 == 0) {
          return;
        }
        plVar15 = (long *)(lVar16 + -0x50);
        FUN_0199c220(&local_80,plVar15);
        plVar17 = local_80;
        puVar9 = PTR_DAT_0437a0f0;
        puVar8 = PTR_DAT_0437a0e8;
        if (local_80 == (long *)0x0) goto LAB_01f0c8e4;
        if (*(int *)((long)local_80 + 0xc) == 0) goto LAB_01f0cc8c;
        piVar1 = (int *)((long)local_80 + 0xc);
        iVar10 = *(int *)((long)local_80 + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar10 = iVar11;
    if (iVar11 == 0) {
      return;
    }
  } while( true );
  do {
    plVar18 = (long *)plVar17[2];
    if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
      if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
        uVar12 = FUN_0087f8f0();
        *(undefined8 *)puVar7 = uVar12;
        __cxa_guard_release(puVar6);
      }
      *(undefined **)puVar9 = puVar7;
      __cxa_guard_release(puVar8);
    }
    while( true ) {
      if (plVar18 == (long *)0x0) goto LAB_01f0cc8c;
      if (plVar18 == (long *)puVar9) break;
      plVar18 = (long *)*plVar18;
    }
    iVar11 = *piVar1;
    if (iVar11 == iVar10) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar13 = plVar17[3];
        plVar17 = (long *)0x0;
        plVar18 = local_80;
        if (lVar13 != 0) {
          plVar17 = (long *)(lVar13 + -0x50);
        }
        goto joined_r0x01f0c9dc;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar10 = iVar11;
  } while (iVar11 != 0);
LAB_01f0cc8c:
  plVar17 = (long *)0x0;
  plVar18 = local_80;
joined_r0x01f0c9dc:
  local_80 = plVar18;
  if (plVar18 != (long *)0x0) {
    plVar2 = plVar18 + 1;
    do {
      iVar10 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 == 0) {
      plVar18[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_68 = (long *)*plVar18;
      FUN_02a44274(lVar13 + 0xd8,&local_68);
    }
  }
  if (plVar17 == (long *)0x0) goto LAB_01f0c8e4;
  FUN_0199ea14(&local_80,plVar15);
  if (local_80 == (long *)0x0) {
    local_88 = (long *)0x0;
LAB_01f0ca54:
    if (local_88 == (long *)0x0) goto LAB_01f0cc10;
LAB_01f0ca5c:
    iVar10 = FUN_01f0c348(local_88,0);
    bVar5 = 0x12 < iVar10;
    if (local_88 != (long *)0x0) {
      lVar13 = local_88[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar4 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_88 + 0x20))();
      }
    }
  }
  else {
    FUN_01aaeb6c(&local_88);
    plVar18 = local_80;
    if (local_80 == (long *)0x0) goto LAB_01f0ca54;
    plVar2 = local_80 + 1;
    do {
      iVar10 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 != 0) goto LAB_01f0ca54;
    local_80[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar13 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar13;
    local_68 = (long *)*plVar18;
    FUN_02a44274(lVar13 + 0xd8,&local_68);
    if (local_88 != (long *)0x0) goto LAB_01f0ca5c;
LAB_01f0cc10:
    bVar5 = false;
  }
  FUN_01847290(&local_68,plVar17);
  if ((bVar5) && (local_68 != (long *)0x0)) {
    local_90 = -1;
    local_88 = (long *)0x0;
    pplStack_78 = &local_88;
    local_80 = &local_90;
    FUN_01f0cd48(local_68,&local_80);
    if (local_88 != (long *)0x0) {
      FUN_009c69bc(&local_80);
      lVar13 = FUN_009aff90(local_80 + 0x1e,auStack_70);
      if (local_80 != (long *)0x0) {
        lVar14 = local_80[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
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
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*local_80 + 0x20))();
        }
      }
      if (lVar13 != 0) {
        FUN_01836814(lVar13,0);
      }
      if (local_88 != (long *)0x0) {
        lVar13 = local_88[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
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
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*local_88 + 0x20))();
        }
      }
    }
  }
  if (local_68 != (long *)0x0) {
    lVar13 = local_68[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
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
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  lVar13 = plVar17[0xb];
  piVar1 = (int *)(lVar13 + 0xc);
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
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar17 + 0x20))(plVar17);
  }
LAB_01f0c8e4:
  lVar16 = *(long *)(lVar16 + 8);
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
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  return;
}


