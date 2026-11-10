/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ad3ac4; name: FUN_00ad3ac4
 */


undefined8
FUN_00ad3ac4(long param_1,uint param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5,
            undefined8 param_6)

{
  int *piVar1;
  MutexType *pMVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 local_60;
  long *local_58 [2];
  long *local_48;
  
  puVar5 = PTR_DAT_04379d30;
  if (((*PTR_DAT_04379d30 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379d30);
  }
  puVar7 = PTR_DAT_04379d40;
  puVar6 = PTR_DAT_04379d38;
  uVar9 = *(undefined8 *)PTR_DAT_04379d38;
  *(undefined8 *)PTR_DAT_04379d40 = uVar9;
  FUN_00ad3d48(&local_48,uVar9,param_2 & 1,param_3,param_4,param_5,param_6);
  plVar10 = (long *)(param_1 + 8);
  FUN_00ad4ccc(plVar10,&local_48);
  if (local_48 != (long *)0x0) {
    lVar11 = local_48[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
      lVar11 = *plVar10;
      goto joined_r0x00ad3c1c;
    }
  }
  lVar11 = *plVar10;
joined_r0x00ad3c1c:
  if (lVar11 == 0) {
    return 0;
  }
  FUN_0098731c(local_58,plVar10);
  if ((*(long *)(param_1 + 0x18) != 0) || (plVar10 = local_58[0], *(long *)(param_1 + 0x20) != 0)) {
    FUN_02a76df0(local_58[0],param_1,1);
    plVar10 = local_58[0];
  }
  local_58[0] = plVar10;
  if ((param_2 & 1) == 0) {
    pMVar2 = (MutexType *)(plVar10 + 0x30);
    nn::os::LockMutex(pMVar2);
    if (*(char *)((long)plVar10 + 0x1e1) == '\0') {
      do {
        nn::os::WaitConditionVariable((ConditionVariableType *)(plVar10 + 0x34),pMVar2);
      } while (*(char *)((long)plVar10 + 0x1e1) == '\0');
    }
    nn::os::UnlockMutex(pMVar2);
  }
  else {
    if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379d30);
    }
    uVar9 = *(undefined8 *)puVar6;
    *(undefined8 *)puVar7 = uVar9;
    FUN_00939b4c(&local_60,uVar9,*(undefined8 *)(param_1 + 8));
    plVar10 = *(long **)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (plVar10 != (long *)0x0) {
      lVar11 = plVar10[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))();
      }
    }
    *(undefined8 *)(param_1 + 0x28) = local_60;
  }
  if (local_58[0] != (long *)0x0) {
    lVar11 = local_58[0][0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_58[0] + 0x20))();
    }
  }
  return 1;
}


