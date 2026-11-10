/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019a175c; name: FUN_019a175c
 */


void FUN_019a175c(undefined8 *param_1,long param_2)

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
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  FUN_008802f0(&local_70,*(long *)(param_2 + 0x2d8) + 0x58);
  puVar4 = PTR_DAT_04379498;
  do {
    uVar12 = local_68;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(&local_68,0x10);
    if (bVar3) {
      local_68 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((*PTR_DAT_04379498 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  puVar6 = PTR_DAT_043794a8;
  puVar5 = PTR_DAT_043794a0;
  uVar10 = *(undefined8 *)PTR_DAT_043794a0;
  *(undefined8 *)PTR_DAT_043794a8 = uVar10;
  FUN_02a44e0c(&local_60,uVar10,uVar12);
  puVar16 = local_70;
  local_70 = (undefined8 *)0x0;
  if (puVar16 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar16 + 1);
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
      puVar16[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)puVar5;
      *(long *)puVar6 = lVar13;
      local_58 = *puVar16;
      FUN_02a44274(lVar13 + 0xd8,&local_58);
    }
  }
  puVar8 = local_60;
  puVar16 = local_70;
  if (local_60 != (undefined8 *)0x0) {
    local_60 = (undefined8 *)0x0;
  }
  if (local_70 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_70 + 1);
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
      local_70[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)puVar5;
      *(long *)puVar6 = lVar13;
      local_58 = *puVar16;
      FUN_02a44274(lVar13 + 0xd8,&local_58);
    }
  }
  if (puVar8 == (undefined8 *)0x0) goto LAB_019a198c;
  puVar16 = (undefined8 *)puVar8[3];
  if (puVar16 == (undefined8 *)0x0) {
LAB_019a1a3c:
    puVar15 = (undefined8 *)0x0;
  }
  else {
    puVar11 = (undefined8 *)(**(code **)*puVar16)(puVar16);
    if (((*PTR_DAT_043822b0 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_043822b0), puVar7 = PTR_DAT_043794d8, iVar9 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
        uVar12 = FUN_0087f8f0();
        *(undefined8 *)puVar7 = uVar12;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)PTR_DAT_043822b8 = puVar7;
      __cxa_guard_release(PTR_DAT_043822b0);
    }
    if (puVar11 == (undefined8 *)0x0) goto LAB_019a1a3c;
    do {
      if (puVar11 == (undefined8 *)PTR_DAT_043822b8) {
        puVar15 = puVar16 + -10;
        break;
      }
      puVar11 = (undefined8 *)*puVar11;
      puVar15 = (undefined8 *)0x0;
    } while (puVar11 != (undefined8 *)0x0);
  }
  piVar1 = (int *)(puVar8 + 1);
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
    puVar8[2] = 0;
    if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar13 = *(long *)puVar5;
    *(long *)puVar6 = lVar13;
    local_70 = (undefined8 *)*puVar8;
    FUN_02a44274(lVar13 + 0xd8,&local_70);
  }
  if (puVar15 != (undefined8 *)0x0) {
    plVar14 = puVar15 + 0xd;
    (**(code **)(*plVar14 + 0x20))(&local_70,plVar14);
    *param_1 = 0;
    param_1[1] = 0;
    FUN_01800100(param_1,&local_70);
    puVar16 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_70 + 1);
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
        local_70[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)puVar5;
        *(long *)puVar6 = lVar13;
        local_58 = *puVar16;
        FUN_02a44274(lVar13 + 0xd8,&local_58);
      }
    }
    param_1[2] = plVar14;
    return;
  }
LAB_019a198c:
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}


