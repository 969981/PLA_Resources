/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b577c4; name: FUN_01b577c4
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_01b577c4(long *param_1)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  long *local_78;
  undefined8 uStack_70;
  long local_68;
  
  puVar10 = PTR_DAT_043794d0;
  puVar9 = PTR_DAT_043794c8;
  puVar8 = PTR_DAT_043794c0;
  puVar7 = PTR_DAT_043794b8;
  puVar6 = PTR_DAT_043794b0;
  lVar17 = *(long *)(*param_1 + 0xe0);
  if ((lVar17 == 0) || (*(int *)(lVar17 + 0xc) == 0)) {
    return true;
  }
  piVar1 = (int *)(lVar17 + 0xc);
  iVar14 = *(int *)(lVar17 + 0xc);
  do {
    puVar18 = *(undefined8 **)(lVar17 + 0x10);
    if (((*puVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar6), iVar13 != 0)) {
      if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
        if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar10), iVar13 != 0)) {
          uVar15 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar15;
          __cxa_guard_release(puVar10);
        }
        *(undefined **)puVar9 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar8);
      }
      *(undefined **)puVar7 = puVar9;
      __cxa_guard_release(puVar6);
    }
    if (puVar18 == (undefined8 *)0x0) {
      return true;
    }
    while (puVar18 != (undefined8 *)puVar7) {
      puVar18 = (undefined8 *)*puVar18;
      if (puVar18 == (undefined8 *)0x0) {
        return true;
      }
    }
    iVar13 = *piVar1;
    if (iVar13 == iVar14) {
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        lVar17 = *(long *)(lVar17 + 0x18);
        if (lVar17 == 0) {
          return true;
        }
        if ((*(long *)(*param_1 + 0xf0) == 0) ||
           (FUN_00b911c4(&local_78), plVar11 = local_78, local_78 == (long *)0x0)) {
          bVar12 = true;
          goto LAB_01b578b4;
        }
        plVar2 = local_78 + 0xc0;
        local_78 = (long *)0x0;
        uStack_70 = 0;
        FUN_00b63974(&local_78,plVar2);
        plVar2 = local_78;
        puVar8 = PTR_DAT_0437a258;
        puVar7 = PTR_DAT_0437a250;
        puVar6 = PTR_DAT_043795d8;
        if (local_78 == (long *)0x0) goto LAB_01b57940;
        if (*(int *)((long)local_78 + 0xc) == 0) goto LAB_01b57acc;
        piVar1 = (int *)((long)local_78 + 0xc);
        iVar14 = *(int *)((long)local_78 + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar14 = iVar13;
    if (iVar13 == 0) {
      return true;
    }
  } while( true );
LAB_01b57a0c:
  plVar19 = (long *)plVar2[2];
  if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar7), iVar13 != 0)) {
    if (((*puVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar6), iVar13 != 0)) {
      if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar10), iVar13 != 0)) {
        uVar15 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar15;
        __cxa_guard_release(puVar10);
      }
      *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
      __cxa_guard_release(puVar6);
    }
    *(undefined **)puVar8 = PTR_DAT_043795e0;
    __cxa_guard_release(puVar7);
  }
  while( true ) {
    if (plVar19 == (long *)0x0) goto LAB_01b57acc;
    if (plVar19 == (long *)puVar8) break;
    plVar19 = (long *)*plVar19;
  }
  iVar13 = *piVar1;
  if (iVar13 == iVar14) {
    cVar5 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar12) {
      *piVar1 = iVar14 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') {
      lVar16 = plVar2[3];
      plVar2 = (long *)0x0;
      plVar19 = local_78;
      if (lVar16 != 0) {
        plVar2 = (long *)(lVar16 + -0x50);
      }
      goto joined_r0x01b57af0;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar14 = iVar13;
  if (iVar13 == 0) {
LAB_01b57acc:
    plVar2 = (long *)0x0;
    plVar19 = local_78;
joined_r0x01b57af0:
    local_78 = plVar19;
    if (plVar19 != (long *)0x0) {
      plVar3 = plVar19 + 1;
      do {
        iVar14 = (int)*plVar3 + -1;
        cVar5 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar12) {
          *(int *)plVar3 = iVar14;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar14 == 0) {
        plVar19[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar16;
        local_68 = *plVar19;
        FUN_02a44274(lVar16 + 0xd8,&local_68);
      }
    }
    if (plVar2 == (long *)0x0) {
LAB_01b57940:
      bVar12 = true;
    }
    else {
      bVar12 = (char)plVar2[0x40] != '\0';
      lVar16 = plVar2[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar14 = *piVar1;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar14 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*plVar2 + 0x20))(plVar2);
      }
    }
    lVar16 = plVar11[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
LAB_01b578b4:
    lVar16 = *(long *)(lVar17 + 8);
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*(long *)(lVar17 + -0x50) + 0x20))((long *)(lVar17 + -0x50));
    }
    return bVar12;
  }
  goto LAB_01b57a0c;
}


