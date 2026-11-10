/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013b385c; name: FUN_013b385c
 */


void FUN_013b385c(long param_1,long *param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  long local_d0;
  code *local_c8;
  long local_c0;
  long lStack_b8;
  undefined1 auStack_b0 [96];
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x108));
  if ((*param_2 != 0) && (*(ulong *)(param_1 + 0xa0) < *(ulong *)(param_1 + 0xa8))) {
    local_c0 = 0;
    lStack_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    if ((code *)param_2[2] != (code *)0x0) {
      (*(code *)param_2[2])(param_2 + 4,auStack_b0);
      local_d0 = *param_2;
      local_c8 = (code *)param_2[1];
      local_c0 = param_2[2];
      lStack_b8 = param_2[3];
    }
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    FUN_013b4a10(&local_50,param_3);
    FUN_013b3f54(param_1 + 0x78,&local_d0);
    puVar5 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_50 + 1);
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
        local_50[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_38 = *puVar5;
        FUN_02a44274(lVar7 + 0xd8,&local_38);
      }
    }
    pcVar4 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = 0;
      lStack_b8 = 0;
      local_d0 = 0;
      local_c8 = (code *)0x0;
      (*pcVar4)(auStack_b0);
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x108));
  return;
}


