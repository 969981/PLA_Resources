/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f2b2b0; name: FUN_01f2b2b0
 */


void FUN_01f2b2b0(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  FUN_0095e898(param_1 + 0x1b0);
  FUN_019a99b8(param_1 + 0x1c0,param_2 + 0x10);
  FUN_01f35bd0(param_1 + 0x1d0,param_2 + 0x20);
  FUN_01934290(param_1 + 0x1e0,param_2 + 0x30);
  local_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  FUN_019a99b8(&local_50,param_2 + 0x10);
  FUN_01f2b6a4(param_1 + 0x138,&local_50);
  puVar6 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_50 + 1);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      local_50[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar5 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar5;
      local_38 = *puVar6;
      FUN_02a44274(lVar5 + 0xd8,&local_38);
    }
  }
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  FUN_01f35bd0(&local_60,param_2 + 0x20);
  puVar6 = *(undefined8 **)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = 0;
  if (puVar6 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar6 + 1);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      puVar6[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar5 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar5;
      local_38 = *puVar6;
      FUN_02a44274(lVar5 + 0xd8,&local_38);
    }
  }
  *(undefined8 *)(param_1 + 0x158) = 0;
  FUN_01f35bd0(param_1 + 0x150,&local_60);
  puVar6 = local_60;
  if (local_60 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_60 + 1);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      local_60[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar5 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar5;
      local_38 = *puVar6;
      FUN_02a44274(lVar5 + 0xd8,&local_38);
    }
  }
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  FUN_01934290(&local_70,param_2 + 0x30);
  puVar6 = *(undefined8 **)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x160) = 0;
  if (puVar6 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar6 + 1);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      puVar6[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar5 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar5;
      local_38 = *puVar6;
      FUN_02a44274(lVar5 + 0xd8,&local_38);
    }
  }
  *(undefined8 *)(param_1 + 0x168) = 0;
  FUN_01934290(param_1 + 0x160,&local_70);
  puVar6 = local_70;
  if (local_70 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_70 + 1);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      local_70[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar5 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar5;
      local_38 = *puVar6;
      FUN_02a44274(lVar5 + 0xd8,&local_38);
    }
  }
  return;
}


