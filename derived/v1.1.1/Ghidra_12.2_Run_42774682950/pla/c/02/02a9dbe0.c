/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a9dbe0; name: FUN_02a9dbe0
 */


void FUN_02a9dbe0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  undefined8 *local_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_38;
  
  local_c0 = (undefined8 *)0x0;
  local_b8 = (code *)0x0;
  FUN_008802f0(&local_c0,param_1 + 0x58);
  local_d0 = (undefined8 *)0x0;
  uStack_c8 = 0;
  FUN_00ab3c84(&local_d0,&local_c0);
  puVar4 = local_c0;
  if (local_c0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_c0 + 1);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      local_c0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_38 = *puVar4;
      FUN_02a44274(lVar7 + 0xd8,&local_38);
    }
  }
  if (((*PTR_DAT_0437add8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437add8), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_0437ae10,PTR_DAT_0437ade0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437add8);
  }
  lVar7 = *(long *)PTR_DAT_0437ade0;
  *(long *)PTR_DAT_0437ade8 = lVar7;
  lVar7 = *(long *)(lVar7 + 0x50);
  nn::os::LockMutex((MutexType *)(lVar7 + 0x448));
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = (undefined1 *)0x0;
  puStack_a8 = (undefined1 *)0x0;
  local_c0 = (undefined8 *)0x0;
  local_b8 = (code *)0x0;
  FUN_00b1b5bc(&local_a0,&local_d0);
  local_c0 = (undefined8 *)&LAB_02aa2c70;
  local_b8 = FUN_02aa3ec8;
  local_b0 = &LAB_02aa3f88;
  puStack_a8 = &LAB_02aa3f9c;
  FUN_02aa2b40(lVar7 + 0x410,&local_c0);
  pcVar5 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    puStack_a8 = (undefined1 *)0x0;
    local_c0 = (undefined8 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar5)(&local_a0);
  }
  nn::os::SignalConditionVariable((ConditionVariableType *)(lVar7 + 0x468));
  nn::os::UnlockMutex((MutexType *)(lVar7 + 0x448));
  puVar4 = local_d0;
  if (local_d0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_d0 + 1);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      local_d0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_c0 = (undefined8 *)*puVar4;
      FUN_02a44274(lVar7 + 0xd8,&local_c0);
    }
  }
  return;
}


