/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bb5868; name: FUN_01bb5868
 */


void FUN_01bb5868(undefined8 *param_1,long param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar7 = PTR_DAT_0437a558;
  puVar6 = PTR_DAT_0437a550;
  lVar13 = *(long *)(param_2 + 0x218);
  if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
    piVar1 = (int *)(lVar13 + 0xc);
    iVar10 = *(int *)(lVar13 + 0xc);
    do {
      plVar15 = *(long **)(lVar13 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
        uVar11 = FUN_00aa0310();
        *(undefined8 *)puVar7 = uVar11;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (plVar15 == (long *)0x0) goto LAB_01bb5890;
        if (plVar15 == (long *)puVar7) break;
        plVar15 = (long *)*plVar15;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar13 = *(long *)(lVar13 + 0x18);
          if (lVar13 != 0) {
            plVar15 = (long *)(lVar13 + -0x50);
            FUN_00a9ecd4(&local_78,plVar15);
            puVar5 = local_78;
            puVar8 = PTR_DAT_0437a130;
            puVar7 = PTR_DAT_0437a128;
            puVar6 = PTR_DAT_043795e0;
            if (local_78 == (undefined8 *)0x0) {
              bVar4 = false;
              goto LAB_01bb5944;
            }
            if (*(int *)((long)local_78 + 0xc) == 0) goto LAB_01bb5be4;
            piVar1 = (int *)((long)local_78 + 0xc);
            iVar10 = *(int *)((long)local_78 + 0xc);
            goto LAB_01bb59f8;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar9;
    } while (iVar9 != 0);
  }
  goto LAB_01bb5890;
LAB_01bb59f8:
  do {
    plVar14 = (long *)puVar5[2];
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      if (((*PTR_DAT_043795d8 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar9 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
          uVar11 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar11;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar6 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_043795d8);
      }
      *(undefined **)puVar8 = puVar6;
      __cxa_guard_release(puVar7);
    }
    while( true ) {
      if (plVar14 == (long *)0x0) goto LAB_01bb5be4;
      if (plVar14 == (long *)puVar8) break;
      plVar14 = (long *)*plVar14;
    }
    iVar9 = *piVar1;
    if (iVar9 == iVar10) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar12 = puVar5[3];
        plVar14 = (long *)0x0;
        puVar5 = local_78;
        if (lVar12 != 0) {
          plVar14 = (long *)(lVar12 + -0x50);
        }
        goto joined_r0x01bb5a4c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar10 = iVar9;
  } while (iVar9 != 0);
LAB_01bb5be4:
  plVar14 = (long *)0x0;
  puVar5 = local_78;
joined_r0x01bb5a4c:
  local_78 = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar5 + 1);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      puVar5[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_68 = *puVar5;
      FUN_02a44274(lVar12 + 0xd8,&local_68);
    }
  }
  bVar4 = false;
  if (plVar14 != (long *)0x0) {
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_008802f0(&local_78,plVar14 + 0xb);
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00aa03f0(param_1,&local_78);
    puVar5 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_78 + 1);
      do {
        iVar10 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        local_78[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_68 = *puVar5;
        FUN_02a44274(lVar12 + 0xd8,&local_68);
      }
    }
    lVar12 = plVar14[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 1) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
    bVar4 = true;
  }
LAB_01bb5944:
  lVar13 = *(long *)(lVar13 + 8);
  piVar1 = (int *)(lVar13 + 0xc);
  do {
    iVar10 = *piVar1;
    cVar3 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar2) {
      *piVar1 = iVar10 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 + -1 == 0) {
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  if (bVar4) {
    return;
  }
LAB_01bb5890:
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


