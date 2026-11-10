/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6ba60; name: FUN_02e6ba60
 */


void FUN_02e6ba60(long *param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  byte bVar6;
  MutexType *pMVar7;
  long lVar8;
  
  if ((((int)param_1[0x12] == 0) &&
      (uVar5 = (**(code **)(*param_1 + 0xf0))(param_1), *(ulong *)param_1[4] <= uVar5)) &&
     (*(char *)((long)param_1 + 0x69) != '\0')) {
    bVar6 = 0;
    *(undefined1 *)((long)param_1 + 0x67) = 1;
  }
  else {
    *(undefined1 *)((long)param_1 + 0x67) = 0;
    bVar6 = 0;
    if (*(char *)((long)param_1 + 0xc2) != '\0') {
      bVar6 = *(byte *)(param_1 + 0xd) ^ 1;
    }
  }
  *(byte *)((long)param_1 + 0x6c) = bVar6;
  nn::os::LockMutex((MutexType *)(param_1 + 5));
  cVar3 = *(char *)((long)param_1 + 0x6c);
  nn::os::UnlockMutex((MutexType *)(param_1 + 5));
  if (((cVar3 == '\0') ||
      (uVar1 = *(uint *)(param_1 + 0x13), uVar4 = (**(code **)(*param_1 + 0x48))(param_1),
      uVar4 <= uVar1)) &&
     (((char)param_1[0xd] == '\0' ||
      (uVar5 = (**(code **)(*param_1 + 0x10))(param_1), (uVar5 & 1) == 0)))) {
    if (*(char *)((long)param_1 + 0x6a) != '\0') {
      lVar8 = param_1[10];
      *(undefined1 *)((long)param_1 + 0x6a) = 0;
      pMVar7 = (MutexType *)(lVar8 + 0x1e8);
      nn::os::LockMutex(pMVar7);
      *(int *)(lVar8 + 0x214) = *(int *)(lVar8 + 0x214) + -1;
LAB_02e6bb9c:
      nn::os::UnlockMutex(pMVar7);
      return;
    }
  }
  else if (*(char *)((long)param_1 + 0x6a) == '\0') {
    lVar8 = param_1[10];
    *(undefined1 *)((long)param_1 + 0x6a) = 1;
    pMVar7 = (MutexType *)(lVar8 + 0x1e8);
    nn::os::LockMutex(pMVar7);
    iVar2 = *(int *)(lVar8 + 0x214);
    *(int *)(lVar8 + 0x214) = iVar2 + 1;
    if ((iVar2 == 0) && (*(char *)(lVar8 + 0x218) == '\0')) {
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar8 + 0x208));
    }
    goto LAB_02e6bb9c;
  }
  return;
}


