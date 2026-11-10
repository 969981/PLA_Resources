/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6bcc0; name: FUN_02e6bcc0
 */


void FUN_02e6bcc0(long *param_1,int param_2)

{
  MutexType *pMVar1;
  long lVar2;
  
  if (param_2 == 2) {
    *(undefined1 *)((long)param_1 + 0xc3) = 1;
    (**(code **)(*param_1 + 0xc0))(param_1);
  }
  FUN_02e6ba60(param_1);
  if (param_1[1] == 0) {
    return;
  }
  lVar2 = param_1[10];
  pMVar1 = (MutexType *)(lVar2 + 0x220);
  nn::os::LockMutex(pMVar1);
  param_1[1] = 0;
  nn::os::BroadcastConditionVariable((ConditionVariableType *)(lVar2 + 0x240));
  nn::os::UnlockMutex(pMVar1);
  return;
}


