/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bc1a04; name: FUN_02bc1a04
 */


void FUN_02bc1a04(long param_1,ulong param_2)

{
  MutexType *pMVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  long local_a0 [12];
  
  FUN_0120bd20(param_1 + 0x148);
  pMVar1 = (MutexType *)(param_1 + 0x118);
  nn::os::LockMutex(pMVar1);
  if (*(int *)(param_1 + 0x138) != 0) {
    do {
      nn::os::WaitConditionVariable((ConditionVariableType *)(param_1 + 0x110),pMVar1);
    } while (*(int *)(param_1 + 0x138) != 0);
  }
  nn::os::UnlockMutex(pMVar1);
  nn::os::GetSystemTick();
  uVar3 = nn::os::ConvertToTimeSpan();
  *(undefined8 *)(param_1 + 0x148) = uVar3;
  nn::os::LockMutex(pMVar1);
  lVar4 = *(long *)(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0x138) = 1;
  *(undefined1 *)(param_1 + 0x13c) = 0;
  nn::os::LockMutex((MutexType *)(lVar4 + 0x448));
  local_c0 = &LAB_02bc2460;
  local_b8 = FUN_02bc2e70;
  local_b0 = &LAB_02bc2e74;
  puStack_a8 = &LAB_02bc2e80;
  local_a0[0] = param_1;
  FUN_02bc2330(lVar4 + 0x410,&local_c0);
  pcVar2 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    puStack_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar2)(local_a0);
  }
  nn::os::SignalConditionVariable((ConditionVariableType *)(lVar4 + 0x468));
  nn::os::UnlockMutex((MutexType *)(lVar4 + 0x448));
  if (((param_2 & 1) == 0) && (*(char *)(param_1 + 0x13c) == '\0')) {
    do {
      nn::os::WaitConditionVariable((ConditionVariableType *)(param_1 + 0x110),pMVar1);
    } while (*(char *)(param_1 + 0x13c) == '\0');
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


