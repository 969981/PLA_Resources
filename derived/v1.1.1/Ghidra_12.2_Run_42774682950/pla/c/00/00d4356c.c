/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d4356c; name: FUN_00d4356c
 */


void FUN_00d4356c(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  long lVar19;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_00d45370(&local_88,param_1 + 0x18);
  puVar8 = PTR_DAT_0437b330;
  puVar5 = PTR_DAT_0437b328;
  plVar10 = (long *)PTR_DAT_043794a0;
  plVar11 = (long *)PTR_DAT_043794a8;
  if ((local_88 == (undefined8 *)0x0) || (*(int *)((long)local_88 + 0xc) == 0)) goto LAB_00d43890;
  if ((local_88 != (undefined8 *)0x0) &&
     (puVar17 = (undefined8 *)local_88[3], puVar17 != (undefined8 *)0x0)) {
    plVar10 = (long *)(**(code **)*puVar17)(puVar17);
    if ((*puVar5 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_0437b328);
      puVar6 = PTR_DAT_043794d8;
      if (iVar9 != 0) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
          uVar12 = FUN_0087f8f0();
          *(undefined8 *)puVar6 = uVar12;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar8 = puVar6;
        __cxa_guard_release(PTR_DAT_0437b328);
      }
    }
    for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
      if (plVar10 == (long *)puVar8) {
        puVar17 = puVar17 + -10;
        goto LAB_00d43620;
      }
    }
  }
  puVar17 = (undefined8 *)0x0;
LAB_00d43620:
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  FUN_00d45370(&local_98,param_1 + 8);
  if ((local_98 != (undefined8 *)0x0) &&
     (puVar15 = (undefined8 *)local_98[3], puVar15 != (undefined8 *)0x0)) {
    plVar10 = (long *)(**(code **)*puVar15)(puVar15);
    if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437b328), iVar9 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
        uVar12 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar12;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)puVar8 = PTR_DAT_043794d8;
      __cxa_guard_release(PTR_DAT_0437b328);
    }
    for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
      if (plVar10 == (long *)puVar8) {
        puVar15 = puVar15 + -10;
        goto LAB_00d4367c;
      }
    }
  }
  puVar15 = (undefined8 *)0x0;
LAB_00d4367c:
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  lVar19 = puVar17[0xb0];
  plVar14 = *(long **)(lVar19 + 0x28);
  plVar10 = *(long **)(lVar19 + 0x30);
  if (plVar14 == plVar10) {
    plVar18 = plVar14;
  }
  else {
    do {
      puVar17 = (undefined8 *)0x0;
      if (*plVar14 == 0) {
LAB_00d436e0:
        if (puVar17 == puVar15) goto LAB_00d436e8;
      }
      else {
        puVar17 = *(undefined8 **)(*plVar14 + 0x18);
        if (puVar17 != (undefined8 *)0x0) {
          plVar11 = (long *)(**(code **)*puVar17)(puVar17);
          if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
            if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
              uVar12 = FUN_0087f8f0();
              *(undefined8 *)puVar7 = uVar12;
              __cxa_guard_release(puVar6);
            }
            *(undefined **)puVar8 = puVar7;
            __cxa_guard_release(puVar5);
          }
          for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
            if (plVar11 == (long *)puVar8) {
              puVar17 = puVar17 + -10;
              goto LAB_00d436e0;
            }
          }
        }
        if (puVar15 == (undefined8 *)0x0) goto LAB_00d436e8;
      }
      plVar14 = plVar14 + 2;
    } while (plVar14 != plVar10);
    plVar14 = plVar10;
LAB_00d436e8:
    plVar18 = *(long **)(lVar19 + 0x30);
  }
  plVar11 = (long *)PTR_DAT_043794a8;
  plVar10 = (long *)PTR_DAT_043794a0;
  if (plVar18 != plVar14) {
    plVar16 = plVar14;
    if (plVar14 + 2 == plVar18) {
LAB_00d43718:
      plVar18 = plVar18 + -2;
      puVar17 = (undefined8 *)*plVar18;
      puVar5 = PTR_LAB_04379590;
      puVar8 = PTR_LAB_04379590;
      if (puVar17 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar17 + 1);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar5 = PTR_LAB_04379590;
        puVar8 = PTR_LAB_04379590;
        if (iVar9 + -1 == 0) {
          puVar17[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *plVar10;
          *plVar11 = lVar13;
          local_78 = (undefined8 *)*puVar17;
          FUN_02a44274(lVar13 + 0xd8,&local_78);
          puVar5 = PTR_LAB_04379590;
          puVar8 = PTR_LAB_04379590;
        }
      }
      while( true ) {
        PTR_LAB_04379590 = puVar8;
        puVar8 = PTR_LAB_04379590;
        PTR_LAB_04379590 = puVar5;
        if (plVar18 == plVar14) break;
        plVar18 = plVar18 + -2;
        puVar17 = (undefined8 *)*plVar18;
        if (puVar17 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar17 + 1);
          do {
            iVar9 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          puVar5 = PTR_LAB_04379590;
          if (iVar9 + -1 == 0) {
            puVar17[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
              FUN_00100250(puVar8,plVar10,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *plVar10;
            *plVar11 = lVar13;
            local_78 = (undefined8 *)*puVar17;
            FUN_02a44274(lVar13 + 0xd8,&local_78);
            puVar5 = PTR_LAB_04379590;
          }
        }
      }
    }
    else {
      do {
        plVar14 = plVar16 + 2;
        FUN_00d44df4(plVar16,plVar14);
        plVar2 = plVar16 + 4;
        plVar16 = plVar14;
      } while (plVar2 != plVar18);
      plVar18 = *(long **)(lVar19 + 0x30);
      if (plVar18 != plVar14) goto LAB_00d43718;
    }
    *(long **)(lVar19 + 0x30) = plVar14;
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_00d44df4(puVar15[0xb0] + 0x18,&local_78);
    puVar17 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_78 + 1);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        local_78[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar19 = *plVar10;
        *plVar11 = lVar19;
        local_68 = *puVar17;
        FUN_02a44274(lVar19 + 0xd8,&local_68);
      }
    }
  }
  puVar17 = local_98;
  if (local_98 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_98 + 1);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      local_98[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *plVar10;
      *plVar11 = lVar19;
      local_78 = (undefined8 *)*puVar17;
      FUN_02a44274(lVar19 + 0xd8,&local_78);
    }
  }
LAB_00d43890:
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  FUN_00d44df4(param_1 + 0x18,&local_78);
  puVar17 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_78 + 1);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      local_78[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *plVar10;
      *plVar11 = lVar19;
      local_98 = (undefined8 *)*puVar17;
      FUN_02a44274(lVar19 + 0xd8,&local_98);
    }
  }
  puVar17 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_88 + 1);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      local_88[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *plVar10;
      *plVar11 = lVar19;
      local_78 = (undefined8 *)*puVar17;
      FUN_02a44274(lVar19 + 0xd8,&local_78);
    }
  }
  return;
}


