/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6a67c; name: FUN_02e6a67c
 */


void FUN_02e6a67c(long *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  MutexType *pMVar4;
  long lVar5;
  
  *(int *)(param_1 + 0x15) = param_2;
  if (((char)param_1[0xd] == '\0') ||
     (uVar3 = (**(code **)(*param_1 + 0x10))(param_1), (uVar3 & 1) == 0)) {
    if (param_2 != 2) {
      *(undefined1 *)((long)param_1 + 0x6c) = 0;
      if (*(char *)((long)param_1 + 0x6a) == '\0') {
        return;
      }
      lVar5 = param_1[10];
      *(undefined1 *)((long)param_1 + 0x6a) = 0;
      pMVar4 = (MutexType *)(lVar5 + 0x1e8);
      nn::os::LockMutex(pMVar4);
      *(int *)(lVar5 + 0x210) = *(int *)(lVar5 + 0x210) + -1;
      goto LAB_02e6a710;
    }
    cVar2 = *(char *)((long)param_1 + 0x6a);
    *(undefined1 *)((long)param_1 + 0x6c) = 1;
  }
  else {
    cVar2 = *(char *)((long)param_1 + 0x6a);
  }
  if (cVar2 != '\0') {
    return;
  }
  lVar5 = param_1[10];
  *(undefined1 *)((long)param_1 + 0x6a) = 1;
  pMVar4 = (MutexType *)(lVar5 + 0x1e8);
  nn::os::LockMutex(pMVar4);
  iVar1 = *(int *)(lVar5 + 0x210);
  *(int *)(lVar5 + 0x210) = iVar1 + 1;
  if (iVar1 == 0) {
    nn::os::SignalConditionVariable((ConditionVariableType *)(lVar5 + 0x208));
  }
LAB_02e6a710:
  nn::os::UnlockMutex(pMVar4);
  return;
}


