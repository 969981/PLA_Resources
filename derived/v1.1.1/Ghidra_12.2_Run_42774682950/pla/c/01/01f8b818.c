/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f8b818; name: FUN_01f8b818
 */


void FUN_01f8b818(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined4 uVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  puVar10 = PTR_DAT_0437af78;
  puVar9 = PTR_DAT_0437af70;
  puVar8 = PTR_DAT_043795e0;
  puVar7 = PTR_DAT_043795d8;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  lVar17 = *(long *)(param_1 + 0x260);
  if (lVar17 == 0) {
    return;
  }
  if (*(int *)(lVar17 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar17 + 0xc);
  iVar12 = *(int *)(lVar17 + 0xc);
  do {
    plVar19 = *(long **)(lVar17 + 0x10);
    if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
      if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
          uVar14 = FUN_0087f8f0();
          *(undefined8 *)puVar6 = uVar14;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)puVar8 = puVar6;
        __cxa_guard_release(puVar7);
      }
      *(undefined **)puVar10 = puVar8;
      __cxa_guard_release(puVar9);
    }
    while( true ) {
      if (plVar19 == (long *)0x0) {
        return;
      }
      if (plVar19 == (long *)puVar10) break;
      plVar19 = (long *)*plVar19;
    }
    iVar11 = *piVar1;
    if (iVar11 == iVar12) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar17 = *(long *)(lVar17 + 0x18);
        if (lVar17 == 0) {
          return;
        }
        plVar19 = (long *)(lVar17 + -0x50);
        FUN_02be8e60(local_78,plVar19,0);
        puVar4 = local_78[0];
        puVar8 = PTR_DAT_0437a590;
        puVar7 = PTR_DAT_0437a580;
        if (local_78[0] == (undefined8 *)0x0) goto LAB_01f8b914;
        if (*(int *)((long)local_78[0] + 0xc) == 0) goto LAB_01f8bb78;
        piVar1 = (int *)((long)local_78[0] + 0xc);
        iVar12 = *(int *)((long)local_78[0] + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar12 = iVar11;
    if (iVar11 == 0) {
      return;
    }
  } while( true );
  do {
    plVar18 = (long *)puVar4[2];
    if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
      if (((*PTR_DAT_0437a598 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a598), iVar11 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
          uVar14 = FUN_0087f8f0();
          *(undefined8 *)puVar6 = uVar14;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)PTR_DAT_0437a588 = puVar6;
        __cxa_guard_release(PTR_DAT_0437a598);
      }
      *(undefined **)puVar8 = PTR_DAT_0437a588;
      __cxa_guard_release(puVar7);
    }
    while( true ) {
      if (plVar18 == (long *)0x0) goto LAB_01f8bb78;
      if (plVar18 == (long *)puVar8) break;
      plVar18 = (long *)*plVar18;
    }
    iVar11 = *piVar1;
    if (iVar11 == iVar12) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar15 = puVar4[3];
        plVar18 = (long *)0x0;
        puVar4 = local_78[0];
        if (lVar15 != 0) {
          plVar18 = (long *)(lVar15 + -0x50);
        }
        goto joined_r0x01f8ba24;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar12 = iVar11;
  } while (iVar11 != 0);
LAB_01f8bb78:
  plVar18 = (long *)0x0;
  puVar4 = local_78[0];
joined_r0x01f8ba24:
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
    do {
      iVar12 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 + -1 == 0) {
      puVar4[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_68 = *puVar4;
      FUN_02a44274(lVar15 + 0xd8,&local_68);
    }
  }
  if (plVar18 == (long *)0x0) goto LAB_01f8b914;
  if ((char)plVar18[0xf] == '\0') {
    uVar13 = FUN_01f8bbc4(param_1);
    if ((uVar13 & 1) != 0) {
      uVar16 = 2;
LAB_01f8ba9c:
      *(undefined4 *)(param_1 + 0x270) = uVar16;
    }
  }
  else {
    uVar13 = FUN_01f8bd2c(param_1);
    if ((uVar13 & 1) != 0) {
      uVar16 = 1;
      goto LAB_01f8ba9c;
    }
  }
  lVar15 = plVar18[0xb];
  piVar1 = (int *)(lVar15 + 0xc);
  do {
    iVar12 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar12 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar12 + -1 == 0) {
    *(undefined8 *)(lVar15 + 0x18) = 0;
    (**(code **)(*plVar18 + 0x20))(plVar18);
  }
LAB_01f8b914:
  lVar17 = *(long *)(lVar17 + 8);
  piVar1 = (int *)(lVar17 + 0xc);
  do {
    iVar12 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar12 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar12 + -1 == 0) {
    *(undefined8 *)(lVar17 + 0x18) = 0;
    (**(code **)(*plVar19 + 0x20))(plVar19);
  }
  return;
}


