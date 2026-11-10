/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6ab78; name: FUN_02e6ab78
 */


void FUN_02e6ab78(long *param_1)

{
  int iVar1;
  ulong uVar2;
  MutexType *pMVar3;
  long lVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 5));
  *(undefined4 *)(param_1 + 0x15) = 4;
  if (((char)param_1[0xd] == '\0') ||
     (uVar2 = (**(code **)(*param_1 + 0x10))(param_1), (uVar2 & 1) == 0)) {
    *(undefined1 *)((long)param_1 + 0x6c) = 0;
    if (*(char *)((long)param_1 + 0x6a) == '\0') goto LAB_02e6abdc;
    lVar4 = param_1[10];
    pMVar3 = (MutexType *)(lVar4 + 0x1e8);
    *(undefined1 *)((long)param_1 + 0x6a) = 0;
    nn::os::LockMutex(pMVar3);
    *(int *)(lVar4 + 0x210) = *(int *)(lVar4 + 0x210) + -1;
  }
  else {
    if (*(char *)((long)param_1 + 0x6a) != '\0') goto LAB_02e6abdc;
    lVar4 = param_1[10];
    pMVar3 = (MutexType *)(lVar4 + 0x1e8);
    *(undefined1 *)((long)param_1 + 0x6a) = 1;
    nn::os::LockMutex(pMVar3);
    iVar1 = *(int *)(lVar4 + 0x210);
    *(int *)(lVar4 + 0x210) = iVar1 + 1;
    if (iVar1 == 0) {
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar4 + 0x208));
    }
  }
  nn::os::UnlockMutex(pMVar3);
LAB_02e6abdc:
  if (((param_1[1] != 0) && ((int)param_1[0x15] != 2)) && ((int)param_1[0x15] != 0)) {
    lVar4 = param_1[10];
    pMVar3 = (MutexType *)(lVar4 + 0x220);
    nn::os::LockMutex(pMVar3);
    param_1[1] = 0;
    nn::os::BroadcastConditionVariable((ConditionVariableType *)(lVar4 + 0x240));
    nn::os::UnlockMutex(pMVar3);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 5));
  return;
}


