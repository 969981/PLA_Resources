/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ea5fec; name: FUN_01ea5fec
 */


/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_01ea5fec(long param_1,undefined8 param_2)

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
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 extraout_d0;
  undefined1 auVar18 [16];
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar10 = PTR_DAT_043795e0;
  puVar9 = PTR_DAT_043795d8;
  puVar8 = PTR_DAT_043795d0;
  puVar7 = PTR_DAT_043795c8;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  lVar14 = *(long *)(param_1 + 0x240);
  uVar17 = 0;
  if (lVar14 == 0) {
    return ZEXT816(0);
  }
  if (*(int *)(lVar14 + 0xc) != 0) {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar12 = *(int *)(lVar14 + 0xc);
    do {
      plVar16 = *(long **)(lVar14 + 0x10);
      if (((*puVar7 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(uVar17,puVar7), uVar17 = extraout_d0, iVar11 != 0)) {
        if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
          if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
            uVar17 = FUN_0087f8f0();
            *(undefined8 *)puVar6 = uVar17;
            __cxa_guard_release(puVar5);
          }
          *(undefined **)puVar10 = puVar6;
          __cxa_guard_release(puVar9);
        }
        *(undefined **)puVar8 = puVar10;
        uVar17 = __cxa_guard_release(puVar7);
      }
      while( true ) {
        if (plVar16 == (long *)0x0) goto LAB_01ea60c4;
        if (plVar16 == (long *)puVar8) break;
        plVar16 = (long *)*plVar16;
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
          lVar14 = *(long *)(lVar14 + 0x18);
          if (lVar14 == 0) {
            return ZEXT816(0);
          }
          local_78 = (undefined8 *)0x0;
          uStack_70 = 0;
          FUN_00ac3fa4(0,&local_78,lVar14 + 0x1f8);
          puVar4 = local_78;
          if (local_78 == (undefined8 *)0x0) goto LAB_01ea60f4;
          if (*(int *)((long)local_78 + 0xc) == 0) goto LAB_01ea6294;
          piVar1 = (int *)((long)local_78 + 0xc);
          iVar12 = *(int *)((long)local_78 + 0xc);
          goto LAB_01ea61bc;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar12 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01ea60c4:
  return ZEXT816(0);
LAB_01ea61bc:
  do {
    plVar16 = (long *)puVar4[2];
    if (((*PTR_DAT_04379e88 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379e88), iVar11 != 0)) {
      if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
          uVar17 = FUN_0087f8f0();
          *(undefined8 *)puVar6 = uVar17;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)puVar10 = puVar6;
        __cxa_guard_release(puVar9);
      }
      *(undefined **)PTR_DAT_04379e90 = puVar10;
      __cxa_guard_release(PTR_DAT_04379e88);
    }
    while( true ) {
      if (plVar16 == (long *)0x0) goto LAB_01ea6294;
      if (plVar16 == (long *)PTR_DAT_04379e90) break;
      plVar16 = (long *)*plVar16;
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
        lVar13 = puVar4[3];
        plVar16 = (long *)0x0;
        puVar4 = local_78;
        if (lVar13 != 0) {
          plVar16 = (long *)(lVar13 + -0x50);
        }
        goto joined_r0x01ea621c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar12 = iVar11;
  } while (iVar11 != 0);
LAB_01ea6294:
  plVar16 = (long *)0x0;
  puVar4 = local_78;
joined_r0x01ea621c:
  local_78 = puVar4;
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
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_68 = *puVar4;
      FUN_02a44274(lVar13 + 0xd8,&local_68);
    }
  }
  if (plVar16 == (long *)0x0) {
LAB_01ea60f4:
    auVar18 = ZEXT816(0);
    goto LAB_01ea60fc;
  }
  FUN_01a8b908(&local_78,plVar16);
  puVar4 = local_78;
  puVar6 = PTR_DAT_04379e80;
  puVar5 = PTR_DAT_04379e78;
  if (local_78 == (undefined8 *)0x0) {
LAB_01ea6310:
    auVar18 = ZEXT816(0);
  }
  else {
    if (*(int *)((long)local_78 + 0xc) != 0) {
      piVar1 = (int *)((long)local_78 + 0xc);
      iVar12 = *(int *)((long)local_78 + 0xc);
      do {
        plVar15 = (long *)puVar4[2];
        if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
          uVar17 = FUN_0095a420();
          *(undefined8 *)puVar6 = uVar17;
          __cxa_guard_release(puVar5);
        }
        while( true ) {
          if (plVar15 == (long *)0x0) goto LAB_01ea6414;
          if (plVar15 == (long *)puVar6) break;
          plVar15 = (long *)*plVar15;
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
            lVar13 = puVar4[3];
            plVar15 = (long *)0x0;
            puVar4 = local_78;
            if (lVar13 != 0) {
              plVar15 = (long *)(lVar13 + -0x50);
            }
            goto joined_r0x01ea6438;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar12 = iVar11;
      } while (iVar11 != 0);
    }
LAB_01ea6414:
    plVar15 = (long *)0x0;
    puVar4 = local_78;
joined_r0x01ea6438:
    local_78 = puVar4;
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
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_68 = *puVar4;
        FUN_02a44274(lVar13 + 0xd8,&local_68);
      }
    }
    if (plVar15 == (long *)0x0) goto LAB_01ea6310;
    auVar18 = ZEXT816(0);
    if ((plVar15[0x3e] != 0) && (auVar18 = ZEXT816(0), *(int *)(plVar15[0x3e] + 0xc) != 0)) {
      auVar18 = FUN_01a9a884(plVar16,param_2);
    }
    lVar13 = plVar15[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
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
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
  lVar13 = plVar16[0xb];
  piVar1 = (int *)(lVar13 + 0xc);
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
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar16 + 0x20))(plVar16);
  }
LAB_01ea60fc:
  lVar13 = *(long *)(lVar14 + 8);
  piVar1 = (int *)(lVar13 + 0xc);
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
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*(long *)(lVar14 + -0x50) + 0x20))((long *)(lVar14 + -0x50));
  }
  return auVar18;
}


