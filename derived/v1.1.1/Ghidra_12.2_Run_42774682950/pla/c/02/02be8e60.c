/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02be8e60; name: FUN_02be8e60
 */


void FUN_02be8e60(long *param_1,long param_2,ulong param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *local_80;
  long local_78;
  undefined8 *local_70;
  undefined8 local_68;
  
  lVar14 = *(long *)(param_2 + 0x1f8) - *(long *)(param_2 + 0x1f0);
  if ((lVar14 == 0) || ((ulong)(lVar14 >> 4) <= (param_3 & 0xffffffff))) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  local_80 = (undefined8 *)0x0;
  local_78 = 0;
  FUN_00bd0e30(&local_80,*(long *)(param_2 + 0x1f0) + (param_3 & 0xffffffff) * 0x10);
  puVar11 = local_80;
  puVar8 = PTR_DAT_0437a598;
  puVar7 = PTR_DAT_0437a588;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  plVar15 = (long *)0x0;
  if (local_80 != (undefined8 *)0x0) {
    if (*(int *)((long)local_80 + 0xc) == 0) {
LAB_02be93c0:
      plVar15 = (long *)0x0;
    }
    else {
      piVar1 = (int *)((long)local_80 + 0xc);
      iVar9 = *(int *)((long)local_80 + 0xc);
      do {
        puVar16 = (undefined8 *)puVar11[2];
        if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
          if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)puVar6 = uVar12;
            __cxa_guard_release(puVar5);
          }
          *(undefined **)puVar7 = puVar6;
          __cxa_guard_release(puVar8);
        }
        if (puVar16 == (undefined8 *)0x0) goto LAB_02be93c0;
        while (puVar16 != (undefined8 *)puVar7) {
          puVar16 = (undefined8 *)*puVar16;
          plVar15 = (long *)0x0;
          if (puVar16 == (undefined8 *)0x0) goto LAB_02be8eb8;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar9) {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar14 = puVar11[3];
            plVar15 = (long *)0x0;
            if (lVar14 != 0) {
              plVar15 = (long *)(lVar14 + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar15 = (long *)0x0;
        iVar9 = iVar10;
      } while (iVar10 != 0);
    }
  }
LAB_02be8eb8:
  puVar11 = (undefined8 *)(**(code **)plVar15[10])();
  puVar5 = PTR_DAT_0437a590;
  if (((*PTR_DAT_0437a580 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a580), iVar9 != 0))
  {
    if (((*PTR_DAT_0437a598 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a598), iVar9 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
        uVar12 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar12;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)PTR_DAT_0437a588 = PTR_DAT_043794d8;
      __cxa_guard_release(PTR_DAT_0437a598);
    }
    *(undefined **)puVar5 = PTR_DAT_0437a588;
    __cxa_guard_release(PTR_DAT_0437a580);
  }
  bVar4 = false;
  if (puVar11 != (undefined8 *)0x0) {
    do {
      if (puVar11 == (undefined8 *)puVar5) {
        bVar4 = true;
        goto LAB_02be8f24;
      }
      puVar11 = (undefined8 *)*puVar11;
    } while (puVar11 != (undefined8 *)0x0);
    bVar4 = false;
  }
LAB_02be8f24:
  lVar14 = local_78;
  if (plVar15 != (long *)0x0) {
    lVar13 = plVar15[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
      lVar14 = local_78;
    }
  }
  local_78 = lVar14;
  if (bVar4) {
    *param_1 = 0;
    param_1[1] = 0;
    puVar5 = PTR_DAT_04379498;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    puVar7 = PTR_DAT_043794a8;
    puVar6 = PTR_DAT_043794a0;
    uVar12 = *(undefined8 *)PTR_DAT_043794a0;
    *(undefined8 *)PTR_DAT_043794a8 = uVar12;
    FUN_02a44e0c(&local_70,uVar12,lVar14);
    puVar11 = (undefined8 *)*param_1;
    *param_1 = 0;
    if (local_70 == (undefined8 *)0x0) {
      if (puVar11 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar11 + 1);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 == 1) {
          puVar11[2] = 0;
          if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)puVar6;
          *(long *)puVar7 = lVar14;
          local_68 = *puVar11;
          FUN_02a44274(lVar14 + 0xd8,&local_68);
        }
      }
      lVar14 = 0;
    }
    else {
      puVar16 = local_70;
      if (puVar11 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar11 + 1);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 + -1 == 0) {
          puVar11[2] = 0;
          if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)puVar6;
          *(long *)puVar7 = lVar13;
          local_68 = *puVar11;
          FUN_02a44274(lVar13 + 0xd8,&local_68);
        }
        puVar16 = local_70;
      }
      local_70 = (undefined8 *)0x0;
      *param_1 = (long)puVar16;
    }
    puVar16 = local_70;
    param_1[1] = lVar14;
    puVar11 = local_80;
    if (local_70 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_70 + 1);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        local_70[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)puVar6;
        *(long *)puVar7 = lVar14;
        local_68 = *puVar16;
        FUN_02a44274(lVar14 + 0xd8,&local_68);
        puVar11 = local_80;
      }
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    puVar11 = local_80;
  }
  if (puVar11 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar11 + 1);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      puVar11[2] = 0;
      local_80 = puVar11;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_68 = *puVar11;
      FUN_02a44274(lVar14 + 0xd8,&local_68);
    }
  }
  return;
}


