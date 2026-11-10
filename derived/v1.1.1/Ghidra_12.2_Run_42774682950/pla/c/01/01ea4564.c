/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ea4564; name: FUN_01ea4564
 */


void FUN_01ea4564(long param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *local_98;
  long *local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  puVar10 = PTR_DAT_043796e8;
  puVar9 = PTR_DAT_043796e0;
  puVar8 = PTR_DAT_043794d8;
  puVar7 = PTR_DAT_043794d0;
  lVar15 = *(long *)(param_1 + 0x220);
  if (lVar15 == 0) {
    return;
  }
  if (*(int *)(lVar15 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar15 + 0xc);
  iVar12 = *(int *)(lVar15 + 0xc);
  do {
    plVar17 = *(long **)(lVar15 + 0x10);
    if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
      if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
        uVar13 = FUN_0087f8f0();
        *(undefined8 *)puVar8 = uVar13;
        __cxa_guard_release(puVar7);
      }
      *(undefined **)puVar10 = puVar8;
      __cxa_guard_release(puVar9);
    }
    while( true ) {
      if (plVar17 == (long *)0x0) {
        return;
      }
      if (plVar17 == (long *)puVar10) break;
      plVar17 = (long *)*plVar17;
    }
    iVar11 = *piVar1;
    if (iVar11 == iVar12) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar15 = *(long *)(lVar15 + 0x18);
        plVar17 = (long *)(lVar15 + -0x50);
        if (lVar15 == 0) {
          return;
        }
        FUN_0199ce28(&local_90,plVar17);
        plVar6 = local_90;
        puVar9 = PTR_DAT_0437a668;
        if (local_90 == (long *)0x0) goto LAB_01ea4650;
        if (*(int *)((long)local_90 + 0xc) == 0) goto LAB_01ea49f0;
        piVar1 = (int *)((long)local_90 + 0xc);
        iVar12 = *(int *)((long)local_90 + 0xc);
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
LAB_01ea46fc:
  plVar16 = (long *)plVar6[2];
  if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
    if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
      uVar13 = FUN_0087f8f0();
      *(undefined8 *)puVar8 = uVar13;
      __cxa_guard_release(puVar7);
    }
    *(undefined **)PTR_DAT_0437a660 = puVar8;
    __cxa_guard_release(puVar9);
  }
  while( true ) {
    if (plVar16 == (long *)0x0) goto LAB_01ea49f0;
    if (plVar16 == (long *)PTR_DAT_0437a660) break;
    plVar16 = (long *)*plVar16;
  }
  iVar11 = *piVar1;
  if (iVar11 == iVar12) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar12 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
      lVar14 = plVar6[3];
      plVar6 = (long *)0x0;
      plVar16 = local_90;
      if (lVar14 != 0) {
        plVar6 = (long *)(lVar14 + -0x50);
      }
      goto joined_r0x01ea4748;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar12 = iVar11;
  if (iVar11 == 0) {
LAB_01ea49f0:
    plVar6 = (long *)0x0;
    plVar16 = local_90;
joined_r0x01ea4748:
    local_90 = plVar16;
    if (plVar16 != (long *)0x0) {
      plVar2 = plVar16 + 1;
      do {
        iVar12 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar12;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 == 0) {
        plVar16[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_78[0] = (undefined8 *)*plVar16;
        FUN_02a44274(lVar14 + 0xd8,local_78);
      }
    }
    if (plVar6 != (long *)0x0) {
      (**(code **)(*(long *)(param_1 + 0x1f0) + 0x20))(local_78,param_1 + 0x1f0);
      local_90 = (long *)0x0;
      uStack_88 = 0;
      FUN_01800100(&local_90,local_78);
      puVar5 = local_78[0];
      if (local_78[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_78[0] + 1);
        do {
          iVar12 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar12 + -1 == 0) {
          local_78[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_68 = *puVar5;
          FUN_02a44274(lVar14 + 0xd8,&local_68);
        }
      }
      local_80 = param_1 + 0x1f0;
      FUN_02be88ac(local_78,*param_2,0);
      FUN_00ab5ae0(&local_98,local_78);
      FUN_01e44b74(plVar6,0,&local_98,&local_90);
      puVar5 = local_78[0];
      if (local_98 != (long *)0x0) {
        lVar14 = local_98[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          iVar12 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar12 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*local_98 + 0x20))();
          puVar5 = local_78[0];
        }
      }
      local_78[0] = puVar5;
      if (puVar5 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar5 + 1);
        do {
          iVar12 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar12 + -1 == 0) {
          puVar5[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_68 = *puVar5;
          FUN_02a44274(lVar14 + 0xd8,&local_68);
        }
      }
      plVar16 = local_90;
      if (local_90 != (long *)0x0) {
        plVar2 = local_90 + 1;
        do {
          iVar12 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar12;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar12 == 0) {
          local_90[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_78[0] = (undefined8 *)*plVar16;
          FUN_02a44274(lVar14 + 0xd8,local_78);
        }
      }
      lVar14 = plVar6[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))(plVar6);
      }
    }
LAB_01ea4650:
    lVar15 = *(long *)(lVar15 + 8);
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
    return;
  }
  goto LAB_01ea46fc;
}


