/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0290a808; name: FUN_0290a808
 */


void FUN_0290a808(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  long *local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  long *local_48 [2];
  long local_38;
  
  FUN_009c69bc(&local_60);
  (**(code **)(*local_60 + 0x10))(local_48);
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_0087f944(&local_58,local_48);
  plVar6 = local_48[0];
  if (local_48[0] != (long *)0x0) {
    plVar1 = local_48[0] + 1;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      local_48[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_38 = *plVar6;
      FUN_02a44274(lVar7 + 0xd8,&local_38);
    }
  }
  puVar4 = local_58;
  if (local_58 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x430) = 0;
  }
  else {
    piVar8 = (int *)(local_58 + 1);
    *(undefined8 *)(param_1 + 0x430) = *local_58;
    do {
      iVar5 = *piVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      local_58[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_48[0] = (long *)*puVar4;
      FUN_02a44274(lVar7 + 0xd8,local_48);
    }
  }
  if (local_60 != (long *)0x0) {
    lVar7 = local_60[0xb];
    piVar8 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_60 + 0x20))();
      cVar2 = *(char *)(param_1 + 0x32a);
      goto joined_r0x0290a93c;
    }
  }
  cVar2 = *(char *)(param_1 + 0x32a);
joined_r0x0290a93c:
  if (cVar2 == '\0') {
    nn::os::LockMutex((MutexType *)(param_1 + 0x330));
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    lVar7 = *(long *)PTR_DAT_04379c30;
    *(long *)PTR_DAT_04379c38 = lVar7;
    uVar9 = *(undefined8 *)(param_1 + 0x430);
    FUN_009c69bc(local_48,param_1);
    plVar6 = *(long **)(*(long *)(lVar7 + 0x158) + 0x60);
    iVar5 = (**(code **)(*plVar6 + 0x50))(plVar6,uVar9,local_48[0][0x47]);
    *(bool *)(param_1 + 0x32b) = iVar5 == 1;
    if (local_48[0] != (long *)0x0) {
      lVar7 = local_48[0][0xb];
      piVar8 = (int *)(lVar7 + 0xc);
      do {
        iVar5 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_48[0] + 0x20))();
      }
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x330));
  }
  return;
}


