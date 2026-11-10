/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018b39c0; name: FUN_018b39c0
 */


void FUN_018b39c0(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *local_58;
  long local_50;
  undefined8 *local_48;
  undefined8 local_38;
  
  if (((*PTR_DAT_0437a780 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  lVar9 = *(long *)PTR_DAT_0437a788;
  *(long *)PTR_DAT_0437a790 = lVar9;
  (**(code **)(**(long **)(lVar9 + 0x78) + 0x10))(&local_58);
  *param_1 = 0;
  param_1[1] = 0;
  puVar4 = PTR_DAT_04379498;
  do {
    lVar9 = local_50;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(&local_50,0x10);
    if (bVar3) {
      local_50 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((*PTR_DAT_04379498 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  puVar6 = PTR_DAT_043794a8;
  puVar5 = PTR_DAT_043794a0;
  uVar8 = *(undefined8 *)PTR_DAT_043794a0;
  *(undefined8 *)PTR_DAT_043794a8 = uVar8;
  FUN_02a44e0c(&local_48,uVar8,lVar9);
  puVar10 = local_58;
  local_58 = (undefined8 *)0x0;
  if (puVar10 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar10 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      puVar10[2] = 0;
      if ((*puVar4 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar7 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar11 = *(long *)puVar5;
      *(long *)puVar6 = lVar11;
      local_38 = *puVar10;
      FUN_02a44274(lVar11 + 0xd8,&local_38);
    }
  }
  puVar10 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (local_48 == (undefined8 *)0x0) {
    lVar9 = 0;
    if (puVar10 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar10 + 1);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 1) {
        puVar10[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)puVar5;
        *(long *)puVar6 = lVar9;
        local_38 = *puVar10;
        FUN_02a44274(lVar9 + 0xd8,&local_38);
      }
      lVar9 = 0;
    }
  }
  else {
    puVar12 = local_48;
    if (puVar10 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar10 + 1);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        puVar10[2] = 0;
        if ((*puVar4 & 1) == 0) {
          iVar7 = __cxa_guard_acquire(PTR_DAT_04379498);
          if (iVar7 != 0) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
        }
        lVar11 = *(long *)puVar5;
        *(long *)puVar6 = lVar11;
        local_38 = *puVar10;
        FUN_02a44274(lVar11 + 0xd8,&local_38);
      }
      puVar12 = local_48;
    }
    local_48 = (undefined8 *)0x0;
    *param_1 = (long)puVar12;
  }
  puVar10 = local_48;
  param_1[1] = lVar9;
  if (local_48 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_48 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      local_48[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)puVar5;
      *(long *)puVar6 = lVar9;
      local_38 = *puVar10;
      FUN_02a44274(lVar9 + 0xd8,&local_38);
    }
  }
  puVar10 = local_58;
  if (local_58 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_58 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      local_58[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)puVar5;
      *(long *)puVar6 = lVar9;
      local_38 = *puVar10;
      FUN_02a44274(lVar9 + 0xd8,&local_38);
    }
  }
  return;
}


