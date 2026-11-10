/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010cd044; name: FUN_010cd044
 */


void FUN_010cd044(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  (**(code **)(*param_2 + 0x10))(&local_60,param_2);
  puVar5 = PTR_DAT_04379498;
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  do {
    uVar12 = local_58;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(&local_58,0x10);
    if (bVar3) {
      local_58 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((*PTR_DAT_04379498 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  uVar9 = *(undefined8 *)PTR_DAT_043794a0;
  *(undefined8 *)PTR_DAT_043794a8 = uVar9;
  FUN_02a44e0c(&local_50,uVar9,uVar12);
  puVar4 = local_60;
  local_60 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      puVar4[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)puVar6;
      *(long *)puVar7 = lVar10;
      local_48 = *puVar4;
      FUN_02a44274(lVar10 + 0xd8,&local_48);
    }
  }
  puVar4 = local_70;
  local_70 = (undefined8 *)0x0;
  if (local_50 == (undefined8 *)0x0) {
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 == 1) {
        puVar4[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)puVar6;
        *(long *)puVar7 = lVar10;
        local_48 = *puVar4;
        FUN_02a44274(lVar10 + 0xd8,&local_48);
      }
    }
    uVar12 = 0;
  }
  else {
    puVar11 = local_50;
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        puVar4[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)puVar6;
        *(long *)puVar7 = lVar10;
        local_48 = *puVar4;
        FUN_02a44274(lVar10 + 0xd8,&local_48);
      }
      puVar11 = local_50;
    }
    local_50 = (undefined8 *)0x0;
    local_70 = puVar11;
  }
  puVar4 = local_50;
  local_68 = uVar12;
  if (local_50 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_50 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      local_50[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)puVar6;
      *(long *)puVar7 = lVar10;
      local_48 = *puVar4;
      FUN_02a44274(lVar10 + 0xd8,&local_48);
    }
  }
  puVar4 = local_60;
  if (local_60 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_60 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      local_60[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)puVar6;
      *(long *)puVar7 = lVar10;
      local_48 = *puVar4;
      FUN_02a44274(lVar10 + 0xd8,&local_48);
    }
  }
  if (*(ulong *)(param_1 + 0xe0) < *(ulong *)(param_1 + 0xe8)) {
    FUN_010d0b54(param_1 + 0xf0,*(ulong *)(param_1 + 0xe0),&local_70);
    *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe0) + 0x10;
    puVar4 = local_70;
  }
  else {
    FUN_010d0a74(param_1 + 0xd8,&local_70);
    puVar4 = local_70;
  }
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      puVar4[2] = 0;
      local_70 = puVar4;
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)puVar6;
      *(long *)puVar7 = lVar10;
      local_60 = (undefined8 *)*puVar4;
      FUN_02a44274(lVar10 + 0xd8,&local_60);
    }
  }
  return;
}


