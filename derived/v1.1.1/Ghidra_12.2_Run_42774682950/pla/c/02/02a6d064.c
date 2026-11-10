/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a6d064; name: FUN_02a6d064
 */


undefined8 FUN_02a6d064(long param_1,long param_2)

{
  MutexType *pMVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long local_48;
  
  local_48 = param_2;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar5 == 0) {
    if (param_1 != 0) goto LAB_02a6d0b8;
  }
  else if (*(long *)(lVar5 + 0x88) != param_1) {
LAB_02a6d0b8:
    nn::os::LockMutex((MutexType *)(param_1 + 0x560));
    lVar9 = param_1 + (long)*(int *)(param_2 + 0x378) * 0x70;
    lVar6 = *(long *)(lVar9 + 0x420);
    lVar5 = *(long *)(lVar9 + 0x418);
    uVar2 = 0;
    if (lVar6 - lVar5 != 0) {
      uVar2 = (lVar6 - lVar5) * 0x40 - 1;
    }
    uVar8 = *(long *)(lVar9 + 0x458) + *(long *)(lVar9 + 0x450);
    plVar7 = (long *)(lVar9 + 0x458);
    if (uVar2 == uVar8) {
      FUN_02a6e0a4(param_1 + (long)*(int *)(param_2 + 0x378) * 0x70 + 0x410);
      uVar8 = *(long *)(lVar9 + 0x450) + *plVar7;
      lVar5 = *(long *)(lVar9 + 0x418);
      lVar6 = *(long *)(lVar9 + 0x420);
    }
    if (lVar6 == lVar5) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(lVar5 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8;
    }
    FUN_02a6eebc(lVar9 + 0x460,lVar5,&local_48);
    *plVar7 = *plVar7 + 1;
    nn::os::ClearEvent((EventType *)(*(long *)(param_1 + 0x5c0) + 0x68));
    nn::os::SignalConditionVariable((ConditionVariableType *)(param_1 + 0x5b8));
    goto LAB_02a6d298;
  }
  if (*(long *)(param_1 + 0x5e8) == 0) {
    pMVar1 = (MutexType *)(param_1 + 0x560);
    nn::os::LockMutex(pMVar1);
    lVar5 = (long)*(int *)(param_2 + 0x378);
    if (0 < *(int *)(param_2 + 0x378)) {
      plVar7 = (long *)(param_1 + 0x458);
      do {
        if (*plVar7 != 0) {
          nn::os::UnlockMutex(pMVar1);
          goto LAB_02a6d168;
        }
        lVar5 = lVar5 + -1;
        plVar7 = plVar7 + 0xe;
      } while (lVar5 != 0);
    }
    nn::os::UnlockMutex(pMVar1);
    *(long *)(param_1 + 0x5e8) = param_2;
    return 0;
  }
LAB_02a6d168:
  nn::os::LockMutex((MutexType *)(param_1 + 0x560));
  lVar9 = param_1 + (long)*(int *)(param_2 + 0x378) * 0x70;
  lVar6 = *(long *)(lVar9 + 0x420);
  lVar5 = *(long *)(lVar9 + 0x418);
  uVar2 = 0;
  if (lVar6 - lVar5 != 0) {
    uVar2 = (lVar6 - lVar5) * 0x40 - 1;
  }
  uVar8 = *(long *)(lVar9 + 0x458) + *(long *)(lVar9 + 0x450);
  plVar7 = (long *)(lVar9 + 0x458);
  if (uVar2 == uVar8) {
    FUN_02a6e0a4(param_1 + (long)*(int *)(param_2 + 0x378) * 0x70 + 0x410);
    uVar8 = *(long *)(lVar9 + 0x450) + *plVar7;
    lVar5 = *(long *)(lVar9 + 0x418);
    lVar6 = *(long *)(lVar9 + 0x420);
  }
  if (lVar6 == lVar5) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar5 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8;
  }
  FUN_02a6eebc(lVar9 + 0x460,lVar5,&local_48);
  *plVar7 = *plVar7 + 1;
LAB_02a6d298:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x560));
  return 1;
}


