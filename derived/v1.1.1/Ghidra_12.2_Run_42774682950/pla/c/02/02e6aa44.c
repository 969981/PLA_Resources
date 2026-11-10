/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6aa44; name: FUN_02e6aa44
 */


void FUN_02e6aa44(long *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  MutexType *pMVar5;
  
  if (param_2 == 2) {
    uVar3 = 4;
LAB_02e6aaa0:
    *(undefined4 *)(param_1 + 0x15) = uVar3;
    if (((char)param_1[0xd] == '\0') ||
       (uVar2 = (**(code **)(*param_1 + 0x10))(param_1), (uVar2 & 1) == 0)) {
      *(undefined1 *)((long)param_1 + 0x6c) = 0;
      if (*(char *)((long)param_1 + 0x6a) != '\0') {
        lVar4 = param_1[10];
        pMVar5 = (MutexType *)(lVar4 + 0x1e8);
        *(undefined1 *)((long)param_1 + 0x6a) = 0;
        nn::os::LockMutex(pMVar5);
        *(int *)(lVar4 + 0x210) = *(int *)(lVar4 + 0x210) + -1;
LAB_02e6aad8:
        nn::os::UnlockMutex(pMVar5);
        lVar4 = param_1[1];
        goto joined_r0x02e6aae4;
      }
    }
    else if (*(char *)((long)param_1 + 0x6a) == '\0') {
      lVar4 = param_1[10];
      pMVar5 = (MutexType *)(lVar4 + 0x1e8);
      *(undefined1 *)((long)param_1 + 0x6a) = 1;
      nn::os::LockMutex(pMVar5);
      iVar1 = *(int *)(lVar4 + 0x210);
      *(int *)(lVar4 + 0x210) = iVar1 + 1;
      if (iVar1 == 0) {
        nn::os::SignalConditionVariable((ConditionVariableType *)(lVar4 + 0x208));
      }
      goto LAB_02e6aad8;
    }
  }
  else if (*(char *)((long)param_1 + 0xac) != '\0') {
    param_1[0xf] = param_1[0xf] + (ulong)*(uint *)(param_1 + 0x12);
    uVar3 = 1;
    goto LAB_02e6aaa0;
  }
  lVar4 = param_1[1];
joined_r0x02e6aae4:
  if (((lVar4 == 0) || ((int)param_1[0x15] == 2)) || ((int)param_1[0x15] == 0)) {
    return;
  }
  lVar4 = param_1[10];
  pMVar5 = (MutexType *)(lVar4 + 0x220);
  nn::os::LockMutex(pMVar5);
  param_1[1] = 0;
  nn::os::BroadcastConditionVariable((ConditionVariableType *)(lVar4 + 0x240));
  nn::os::UnlockMutex(pMVar5);
  return;
}


