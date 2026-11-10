/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015918a0; name: FUN_015918a0
 */


void FUN_015918a0(undefined8 param_1,int *param_2,ulong param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 uVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  puVar9 = PTR_DAT_0437af78;
  puVar8 = PTR_DAT_0437af70;
  puVar7 = PTR_DAT_043795e0;
  lVar17 = *(long *)(param_2 + 4);
  if (lVar17 == 0) {
    return;
  }
  if (*(int *)(lVar17 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar17 + 0xc);
  iVar11 = *(int *)(lVar17 + 0xc);
  do {
    plVar15 = *(long **)(lVar17 + 0x10);
    if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
      if (((*PTR_DAT_043795d8 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar10 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
          uVar12 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar12;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar7 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_043795d8);
      }
      *(undefined **)puVar9 = puVar7;
      __cxa_guard_release(puVar8);
    }
    while( true ) {
      if (plVar15 == (long *)0x0) {
        return;
      }
      if (plVar15 == (long *)puVar9) break;
      plVar15 = (long *)*plVar15;
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
        lVar17 = *(long *)(lVar17 + 0x18);
        if (lVar17 == 0) {
          return;
        }
        plVar15 = (long *)(lVar17 + -0x50);
        FUN_02be88ac(local_78,plVar15,0);
        puVar6 = local_78[0];
        puVar7 = PTR_DAT_0437a678;
        if (local_78[0] == (undefined8 *)0x0) goto LAB_01591998;
        if (*(int *)((long)local_78[0] + 0xc) == 0) goto LAB_01591c64;
        piVar1 = (int *)((long)local_78[0] + 0xc);
        iVar11 = *(int *)((long)local_78[0] + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    param_3 = param_3 & 0xffffffff;
    iVar11 = iVar10;
    if (iVar10 == 0) {
      return;
    }
  } while( true );
  do {
    plVar16 = (long *)puVar6[2];
    if (((*PTR_DAT_0437a670 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a670), iVar10 != 0)) {
      if (((*PTR_DAT_0437a598 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a598), iVar10 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
          uVar12 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar12;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)PTR_DAT_0437a588 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_0437a598);
      }
      *(undefined **)puVar7 = PTR_DAT_0437a588;
      __cxa_guard_release(PTR_DAT_0437a670);
    }
    while( true ) {
      if (plVar16 == (long *)0x0) goto LAB_01591c64;
      if (plVar16 == (long *)puVar7) break;
      plVar16 = (long *)*plVar16;
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
        lVar13 = puVar6[3];
        plVar16 = (long *)0x0;
        puVar6 = local_78[0];
        if (lVar13 != 0) {
          plVar16 = (long *)(lVar13 + -0x50);
        }
        goto joined_r0x01591ad8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = iVar10;
  } while (iVar10 != 0);
LAB_01591c64:
  plVar16 = (long *)0x0;
  puVar6 = local_78[0];
joined_r0x01591ad8:
  if (puVar6 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar6 + 1);
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
      puVar6[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_68 = *puVar6;
      FUN_02a44274(lVar13 + 0xd8,&local_68);
    }
  }
  if (plVar16 == (long *)0x0) goto LAB_01591998;
  if (*(char *)((long)plVar16 + 0xf4) != '\0') {
    uVar3 = param_2[1];
    uVar2 = uVar3 | param_4;
    if ((param_3 & 1) == 0) {
      uVar2 = uVar3 & (param_4 ^ 0xffffffff);
    }
    if (uVar2 != uVar3) {
      if (uVar2 == 0) {
        if (*param_2 == 0) {
          uVar14 = 1;
          goto LAB_01591b64;
        }
      }
      else {
        uVar14 = 0;
LAB_01591b64:
        *(undefined1 *)((long)plVar16 + 0x79) = uVar14;
      }
      param_2[1] = uVar2;
    }
  }
  lVar13 = plVar16[0xb];
  piVar1 = (int *)(lVar13 + 0xc);
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
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar16 + 0x20))(plVar16);
  }
LAB_01591998:
  lVar17 = *(long *)(lVar17 + 8);
  piVar1 = (int *)(lVar17 + 0xc);
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
    *(undefined8 *)(lVar17 + 0x18) = 0;
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  return;
}


