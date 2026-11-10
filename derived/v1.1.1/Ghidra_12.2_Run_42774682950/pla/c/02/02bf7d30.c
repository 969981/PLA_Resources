/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bf7d30; name: FUN_02bf7d30
 */


void FUN_02bf7d30(undefined8 *param_1,long param_2,int param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  long *plVar8;
  long *plVar7;
  long lVar9;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x128));
  plVar7 = (long *)**(long **)(param_2 + 0x28);
  plVar2 = (long *)(*(long **)(param_2 + 0x28))[1];
  if (plVar7 != plVar2) {
LAB_02bf7d6c:
    plVar8 = plVar7 + 1;
    if (*(int *)(*plVar7 + 0xd8) != param_3) goto code_r0x02bf7d7c;
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    FUN_008802f0(&local_48,*plVar7 + 0x58);
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    FUN_018fea88(&local_58,&local_48);
    puVar5 = local_48;
    if (local_48 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_48 + 1);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        local_48[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_38 = *puVar5;
        FUN_02a44274(lVar9 + 0xd8,&local_38);
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
    FUN_01c6c67c(param_1,&local_58);
    if (local_58 == (undefined8 *)0x0) goto LAB_02bf7f54;
    piVar1 = (int *)(local_58 + 1);
    do {
      iVar6 = *piVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    goto LAB_02bf7f10;
  }
LAB_02bf7d84:
  plVar7 = (long *)**(long **)(param_2 + 0x48);
  do {
    if (plVar7 == (long *)(*(long **)(param_2 + 0x48))[1]) {
      *param_1 = 0;
      param_1[1] = 0;
      goto LAB_02bf7f54;
    }
    lVar9 = *plVar7;
    plVar7 = plVar7 + 1;
  } while (*(int *)(lVar9 + 0x330) != param_3);
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  FUN_008802f0(&local_48,lVar9 + 0x58);
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_02bf9570(&local_58,&local_48);
  puVar5 = local_48;
  if (local_48 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_48 + 1);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      local_48[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_38 = *puVar5;
      FUN_02a44274(lVar9 + 0xd8,&local_38);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_01d31c8c(param_1,&local_58);
  if (local_58 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_58 + 1);
    do {
      iVar6 = *piVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_02bf7f10:
    puVar5 = local_58;
    if (iVar6 == 0) {
      local_58[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_48 = (undefined8 *)*puVar5;
      FUN_02a44274(lVar9 + 0xd8,&local_48);
    }
  }
LAB_02bf7f54:
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x128));
  return;
code_r0x02bf7d7c:
  plVar7 = plVar8;
  if (plVar2 == plVar8) goto LAB_02bf7d84;
  goto LAB_02bf7d6c;
}


