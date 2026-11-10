/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00785674; name: FUN_00785674
 */


undefined8 FUN_00785674(long param_1)

{
  MutexType *pMVar1;
  undefined8 local_28;
  
  pMVar1 = (MutexType *)(param_1 + 0xa0);
  local_28 = 0;
  nn::os::LockMutex(pMVar1);
  FUN_007853a8(param_1,&local_28);
  FUN_007852c4(param_1);
  nn::os::LockMutex(pMVar1);
  if (((*(long *)(param_1 + 0x20) == param_1 + 0x18) && (*(char *)(param_1 + 0x110) == '\0')) &&
     (*(long *)(param_1 + 0x10) == param_1 + 8)) {
    nn::os::ClearEvent((EventType *)(param_1 + 0x28));
  }
  else {
    nn::os::SignalEvent((EventType *)(param_1 + 0x28));
  }
  nn::os::UnlockMutex(pMVar1);
  nn::os::UnlockMutex(pMVar1);
  return local_28;
}


